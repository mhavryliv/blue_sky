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
    void mouseMove (const MouseEvent& event) override;
    void updatePitchRoll (float pitch, float roll);
    
    void setPlayerRef(Player *ref);
    
    Point<float> getScreenPos();
    
private:
    Player *player_;
    std::unique_ptr<VoiceUI> voiceUI_;
    
    Rectangle<float> playButtonRect_;
    
    void showVoiceUI(Voice *voice, Colour colour);
    void handlePlayButtonPress();
    
    Array<Colour> colours_;

    Array<Rectangle<float>> getQuads();
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Home)
};
