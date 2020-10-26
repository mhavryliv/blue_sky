/*
  ==============================================================================

    Player.cpp
    Created: 22 Jan 2020 12:27:31pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#include "Player.h"
#include "../UI/VoiceUI.h"

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

    drums_.loadFileIntoPosition("Lower_Harmony_Brass.wav", 0, "Brass");
    drums_.loadFileIntoPosition("Lower_Harmony_Keyboard.wav", 1, "Keyboard");
    drums_.loadFileIntoPosition("Lower_Harmony_Piano.wav", 2, "Piano");
    drums_.loadFileIntoPosition("Lower_Harmony_Strings.wav", 3, "Strings");

    bass_.loadFileIntoPosition("Bass_Brass.wav", 0, "Brass");
    bass_.loadFileIntoPosition("Bass Keyboard.wav", 1, "Keyboard");
    bass_.loadFileIntoPosition("Bass_Piano.wav", 2, "Piano");
    bass_.loadFileIntoPosition("Bass_Strings.wav", 3, "Strings");

    harmony_.loadFileIntoPosition("Upper_Harmony_Brass.wav", 0, "Brass");
    harmony_.loadFileIntoPosition("Upper_Harmony_Keyboard.wav", 1, "Keyboard");
    harmony_.loadFileIntoPosition("Upper_Harmony_Piano.wav", 2, "Piano");
    harmony_.loadFileIntoPosition("Upper_Harmony_Strings.wav", 3, "Strings");

    melody_.loadFileIntoPosition("Melody_Brass.wav", 0, "Brass");
    melody_.loadFileIntoPosition("Melody_Keyboard.wav", 1, "Keyboard");
    melody_.loadFileIntoPosition("Melody_Piano.wav", 2, "Piano");
    melody_.loadFileIntoPosition("Melody_Strings.wav", 3, "Strings");
    
    // Do this last, because it forces a call to prepareToPlay
    setAudioChannels(0, 2);
    
    AudioDeviceManager::AudioDeviceSetup audioSetup;
    deviceManager.getAudioDeviceSetup (audioSetup);
//    audioSetup.sampleRate = 44100.0;
    audioSetup.bufferSize = 1024;
    
    this->deviceManager.setAudioDeviceSetup (audioSetup, true);
    
    state_ = TransportState::Stopped;
    isPlaying_ = false;
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
    Logger::writeToLog("Sample rate: " + String(srate) + ", block size: " + String(sampsPerBlock));
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
    const Array<float> weights = VoiceUI::defaultQuadWeights(curPos_, 1.f, 1.f, 0.5, 2);
//    Logger::writeToLog(String(weights[0]));
    for(int i = 0; i < 4; ++i) {
        Voice *voice = voices_[i];
        voice->getNextAudioBlock(bufferToFill, weights[i]);
    }
//    for(Voice *voice : voices_) {
//        voice->getNextAudioBlock(bufferToFill);
//    }
}
