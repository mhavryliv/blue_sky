/*
  ==============================================================================

    Voice.cpp
    Created: 23 Jan 2020 12:49:29pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#include "Voice.h"

Voice::Voice() {
    stemVols_.resize(MAX_LAYERS);
    prevStemVols_.resize(MAX_LAYERS);
    for(int i = 0; i < MAX_LAYERS; ++i) {
        files_.add(new Audio());
        stemVols_.setUnchecked(i, 0.f);
        prevStemVols_.setUnchecked(i, 0.f);
    }
}

void Voice::loadFileIntoPosition(const String &fname, int position, const String &stemName) {
    // Get a reference to the Audio object
    Audio *audio = files_.getUnchecked(position);
    InputStream *is = Utils::createAssetInputStream(fname.toRawUTF8());
    if(is == nullptr) {
        Logger::writeToLog("[Voice] Error creating InputStream for asset: " + fname);
        return;
    }
    audio->loadFileFromInputStream(is);
    stemNames_.set(position, stemName);
}

void Voice::changePlayState(TransportState newState) {
    playState_ = newState;
    for(Audio *audio : files_) {
        audio->changePlayState(playState_);
    }
}

void Voice::setStemVol(int stem, float vol, bool zeroOthers) {
    if(zeroOthers) {
        for(int i = 0; i < stemVols_.size(); ++i) {
            stemVols_.setUnchecked(i, 0.f);
        }
    }
    stemVols_.setUnchecked(stem, vol);
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

void Voice::getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill, const float amp) {
    if(summingBuffer_.getNumSamples() != bufferToFill.numSamples) {
        summingBuffer_.setSize(2, bufferToFill.numSamples, false, true, true);
    }
    summingBuffer_.clear();
    for(int i = 0; i < files_.size(); ++i) {
        Audio *audio = files_.getUnchecked(i);
        audio->getNextAudioBlock(bufferToFill);
        // Add it to the summing buffer
//        audio->copyFromLocalToDst(summingBuffer_, prevStemVols_[i], stemVols_[i]);
        float prev = prevStemVols_[i];
        float cur = stemVols_[i];
        audio->copyFromLocalToDst(summingBuffer_, prev, cur);
    }

//    for(Audio *audio : files_) {
//        audio->getNextAudioBlock(bufferToFill);
//        // Add it to the summing buffer
//        audio->copyFromLocalToDst(summingBuffer_);
//    }
    
    // Copy the summing buffer to buffer to fill
    const float *readLeft = summingBuffer_.getReadPointer(0);
    const float *readRight = summingBuffer_.getReadPointer(1);
    float *writeLeft = bufferToFill.buffer->getWritePointer(0);
    float *writeRight = bufferToFill.buffer->getWritePointer(1);
    const float ampStep = (amp - prevAmp_) / (float)bufferToFill.numSamples;
    for(int i = 0; i < bufferToFill.numSamples; ++i) {
        *(writeLeft + i) += (*(readLeft + i) * (prevAmp_ + ampStep*i));
        *(writeRight + i) += (*(readRight + i) * (prevAmp_ + ampStep*i));
    }
    
    // Update the previous stem vols
    prevStemVols_.clearQuick();
    prevStemVols_.addArray(stemVols_);
    prevAmp_ = amp;
}
