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
    
private:
    AudioFormatManager formatManager_;
    TransportState state_;
    Voice drums_;
    Voice percussion_;
    Voice leads_;
    Voice samples_;
    
    bool isPlaying_;
    
    std::vector<Voice*> voices_;
    
};
