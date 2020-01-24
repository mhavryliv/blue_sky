/*
  ==============================================================================

    Voice.cpp
    Created: 23 Jan 2020 12:49:29pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#include "Voice.h"

Voice::Voice() {
    for(int i = 0; i < MAX_LAYERS; ++i) {
        files_.add(new Audio());
    }
}

void Voice::loadFileIntoPosition(const String &fname, int position) {
    // Get a reference to the Audio object
    Audio *audio = files_.getUnchecked(position);
    InputStream *is = Utils::createAssetInputStream(fname.toRawUTF8());
    if(is == nullptr) {
        Logger::writeToLog("[Voice] Error creating InputStream for asset: " + fname);
        return;
    }
    audio->loadFileFromInputStream(is);
    
}

void Voice::changePlayState(TransportState newState) {
    playState_ = newState;
    for(Audio *audio : files_) {
        audio->changePlayState(playState_);
    }
}


#pragma mark - Audio callback handles

void Voice::prepareToPlay(int sampsPerBlock, double srate) {
    for(Audio *audio : files_) {
        audio->prepareToPlay(sampsPerBlock, srate);
    }
    summingBuffer_.setSize(2, sampsPerBlock);
}

void Voice::releaseResources() {
    for(Audio *audio : files_) {
        audio->releaseResources();
    }
}

void Voice::getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill) {
    if(summingBuffer_.getNumSamples() != bufferToFill.numSamples) {
        summingBuffer_.setSize(2, bufferToFill.numSamples, false, true, true);
    }
    summingBuffer_.clear();
    for(Audio *audio : files_) {
        audio->getNextAudioBlock(bufferToFill);
        // Add it to the summing buffer
        audio->copyFromLocalToDst(summingBuffer_);
    }
    
    // Copy the summing buffer to buffer to fill
    for(int i = 0; i < bufferToFill.numSamples; ++i) {
        bufferToFill.buffer->getWritePointer(0)[i] += summingBuffer_.getReadPointer(0)[i];
        bufferToFill.buffer->getWritePointer(1)[i] += summingBuffer_.getReadPointer(1)[i];
    }
}
