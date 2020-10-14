/*
  ==============================================================================

    Player.h
    Created: 22 Jan 2020 12:27:31pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "Voice.h"


class Player : public ChangeBroadcaster, public AudioAppComponent {
public:
    
    Player();
    ~Player();
    
    // App Audio Overrides
    void prepareToPlay(int sampsPerBlock, double srate) override;
    void releaseResources() override;
    void getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill) override;
    
    // Commands from UI
    void changePlayState(TransportState newState);
    
    bool isPlaying() const {
        return isPlaying_;
    }
    
    Voice *voiceAt(int index) {
        jassert(index < voices_.size());
        return voices_.at(index);
    }
    void setCurPos(const Point<float> &pos) {
        curPos_ = pos;
        Logger::writeToLog(pos.toString());
    }
    
    
    Voice* drums() { return &drums_; }
    Voice* bass() { return &bass_; }
    Voice* harmony() { return &harmony_; }
    Voice* melody() { return &melody_; }
    
private:
    AudioFormatManager formatManager_;
    TransportState state_;
    Voice drums_;
    Voice bass_;
    Voice harmony_;
    Voice melody_;
    
    bool isPlaying_;
    
    Array<float> voiceWeights_;
    
    std::vector<Voice*> voices_;
    
    Point<float> curPos_;
    
    
    
};
