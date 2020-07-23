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
    bass_.setName("Bass");
    harmony_.setName("Harmony");
    melody_.setName("Melody");

    
    // Load it all into drums and see if I can get the voices all playing
    voices_.push_back(&drums_);
    voices_.push_back(&bass_);
    voices_.push_back(&harmony_);
    voices_.push_back(&melody_);
    
    for(int i = 0; i < voices_.size(); ++i) {
        Voice *voice = voices_.at(i);
        voice->setFormatManager(&formatManager_);
    }

    drums_.loadFileIntoPosition("Drums 1.mp3", 0, "Clean");
    drums_.loadFileIntoPosition("Drums 2.mp3", 1, "Dirty");
    drums_.loadFileIntoPosition("Drums 3.mp3", 2, "Extra");
    drums_.loadFileIntoPosition("Drums 4.mp3", 3, "Funny");

    bass_.loadFileIntoPosition("Bass 1.mp3", 0, "Simple");
    bass_.loadFileIntoPosition("Bass 2.mp3", 1, "Complex");
    bass_.loadFileIntoPosition("Bass 3.mp3", 2, "Busy");
    bass_.loadFileIntoPosition("Bass 4.mp3", 3, "Harmonic");

    harmony_.loadFileIntoPosition("Harmony 1.mp3", 0, "Elegant");
    harmony_.loadFileIntoPosition("Harmony 2.mp3", 1, "Simple");
    harmony_.loadFileIntoPosition("Harmony 3.mp3", 2, "Funny");
    harmony_.loadFileIntoPosition("Harmony 4.mp3", 3, "Silly");

    melody_.loadFileIntoPosition("Melody 1.mp3", 0, "High");
    melody_.loadFileIntoPosition("Melody 2.mp3", 1, "Low");
    melody_.loadFileIntoPosition("Melody 3.mp3", 2, "Mid");
    melody_.loadFileIntoPosition("Melody 4.mp3", 3, "Full");
    
    // Do this last, because it forces a call to prepareToPlay
    setAudioChannels(0, 2);
    
    state_ = TransportState::Stopped;
}

Player::~Player() {
    shutdownAudio();
}


#pragma mark - Main transport callbacks

//void Player::changeListenerCallback(ChangeBroadcaster *source) {
//    if(source == &transportSource_) {
//        if(transportSource_.isPlaying()) {
//            changePlayState(Playing);
//        }
//        else {
//            changePlayState(Stopped);
//        }
//    }
//}


#pragma mark - Transport State Handling

void Player::changePlayState(TransportState newState) {
    if (state_ != newState) {
        state_ = newState;
        if(state_ == Stopping) {
            isPlaying_ = false;
        }
        else if (state_ == Starting){
            isPlaying_ = true;
        }
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
