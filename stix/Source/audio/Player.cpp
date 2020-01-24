/*
  ==============================================================================

    Player.cpp
    Created: 22 Jan 2020 12:27:31pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#include "Player.h"

Player::Player() : state_(Stopped) {
    formatManager_.registerBasicFormats();

    drums_.setName("Drums");
    percussion_.setName("Percussion");
    leads_.setName("Leads");
    samples_.setName("Samples");

    StringArray fileNames;
    fileNames.add("drums_1.wav");
    fileNames.add("percussion_1.wav");
    fileNames.add("leads_1.wav");
    fileNames.add("samples_1.wav");

    voices_.push_back(&drums_);
    voices_.push_back(&percussion_);
    voices_.push_back(&leads_);
    voices_.push_back(&samples_);

    for(int i = 0; i < voices_.size(); ++i) {
        Voice *voice = voices_.at(i);
        voice->setFormatManager(&formatManager_);
        voice->loadFileIntoPosition(fileNames[i], 0);
    }
    
//    drums_.loadFileIntoPosition("drums_1.wav", 0);
//    percussion_.loadFileIntoPosition("percussion_1.wav", 0);
//    leads_.loadFileIntoPosition("leads_1.wav", 0);
//    samples_.loadFileIntoPosition("samples_1.wav", 0);
    
    // Do this last, because it forces a call to prepareToPlay
    setAudioChannels(0, 2);
}

Player::~Player() {
    shutdownAudio();
}


#pragma mark - Main transport callbacks

void Player::changeListenerCallback(ChangeBroadcaster *source) {
    if(source == &transportSource_) {
        if(transportSource_.isPlaying()) {
            changePlayState(Playing);
        }
        else {
            changePlayState(Stopped);
        }
    }
}


#pragma mark - Transport State Handling

void Player::changePlayState(TransportState newState) {
    if (state_ != newState) {
        state_ = newState;
        for(Voice *voice : voices_) {
            voice->changePlayState(newState);
        }
    }
}


#pragma mark - Audio Callbacks

void Player::prepareToPlay(int sampsPerBlock, double srate) {
    for(Voice *voice : voices_) {
        voice->prepareToPlay(sampsPerBlock, srate);
    }
}

void Player::releaseResources() {
    for(Voice *voice : voices_) {
        voice->releaseResources();
    }
}

void Player::getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill) {
    for(Voice *voice : voices_) {
        voice->getNextAudioBlock(bufferToFill);
    }
}
