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

    drums_.setName("Upper Harmony");
    bass_.setName("Melody");
    harmony_.setName("Bass");
    melody_.setName("Lower Harmony");
    
    
    // Load it all into drums and see if I can get the voices all playing
    voices_.push_back(&drums_);
    voices_.push_back(&bass_);
    voices_.push_back(&harmony_);
    voices_.push_back(&melody_);
    
    for(int i = 0; i < voices_.size(); ++i) {
        Voice *voice = voices_.at(i);
        voice->setFormatManager(&formatManager_);
    }
    
    drums_.loadFileIntoPosition("Upper Harmony_Piano.wav"   , 0, "Piano");
    drums_.loadFileIntoPosition("Upper Harmony_Keyboard.wav", 1, "Keyboard");
    drums_.loadFileIntoPosition("Upper Harmony_Strings.wav" , 2, "Strings");
    drums_.loadFileIntoPosition("Upper Harmony_Brass.wav"   , 3, "Brass");
    
    bass_.loadFileIntoPosition("Melody_Piano.wav"   , 0, "Piano");
    bass_.loadFileIntoPosition("Melody_Keyboard.wav", 1, "Keyboard");
    bass_.loadFileIntoPosition("Melody_Strings.wav" , 2, "Strings");
    bass_.loadFileIntoPosition("Melody_Brass.wav"   , 3, "Brass");
    
    harmony_.loadFileIntoPosition("Bass_Piano.wav"      , 0, "Piano");
    harmony_.loadFileIntoPosition("Bass_Keyboard.wav"   , 1, "Keyboard");
    harmony_.loadFileIntoPosition("Bass_Strings.wav"    , 2, "Strings");
    harmony_.loadFileIntoPosition("Bass_Brass.wav"      , 3, "Brass");
    
    melody_.loadFileIntoPosition("Lower Harmony_Piano.wav"   , 0, "Piano");
    melody_.loadFileIntoPosition("Lower Harmony_Keyboard.wav", 1, "Keyboard");
    melody_.loadFileIntoPosition("Lower Harmony_Strings.wav" , 2, "Strings");
    melody_.loadFileIntoPosition("Lower Harmony_Brass.wav"   , 3, "Brass");
    
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


Point<float> Player::getCurPos(){
    return curPos_;
}

Point<float> Player::getScreenPos(){
    Point<float> screenPos;
    screenPos.x = curPos_.x * (getWidth() - 1);
    screenPos.y = curPos_.x * (getHeight() - 1);
    return screenPos;
}

void Player::setCurPos(const Point<float> &pos) {
    curPos_ = pos;
    Logger::writeToLog(pos.toString());
}

bool Player::isPlaying(){
    return isPlaying_;
}

Voice* Player::voiceAt(uint index) {
    jassert(index < voices_.size());
    return voices_.at(index);
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
        Voice *voice = voices_[(uint)i];
        voice->getNextAudioBlock(bufferToFill, weights[i]);
    }
//    for(Voice *voice : voices_) {
//        voice->getNextAudioBlock(bufferToFill);
//    }
}
