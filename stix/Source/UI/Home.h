/*
  ==============================================================================

    Home.h
    Created: 23 Jul 2020 10:37:16am
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "VoiceUI.h"
#include "../audio/Player.h"

//==============================================================================
/*
*/
class Home  : public juce::Component
{
public:
    Home();
    ~Home() override;

    void paint (juce::Graphics&) override;
    void resized() override;

    void mouseDown (const MouseEvent& event) override;
    
    void setPlayerRef(Player *ref) {
        player_ = ref;
        // Initialise the stems
        player_->drums()->setStemVol(0, 1.f, true);
        player_->bass()->setStemVol(0, 1.f, true);
        player_->harmony()->setStemVol(0, 1.f, true);
        player_->melody()->setStemVol(0, 1.f, true);
    }

    
private:
    Player *player_;
    std::unique_ptr<VoiceUI> voiceUI_;
    
    void showVoiceUI(Voice *voice, Colour colour);
    
    Array<Colour> colours_;

    Array<Rectangle<float>> getQuads();
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Home)
};
