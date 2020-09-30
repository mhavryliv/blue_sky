/*
  ==============================================================================

    VoiceUI.h
    Created: 22 Jul 2020 9:17:42pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class Voice;

//==============================================================================
/*
*/
class VoiceUI  : public juce::Component
{
public:
    VoiceUI();
    ~VoiceUI() override;

    void paint (juce::Graphics&) override;
    void resized() override;
    void mouseDown (const MouseEvent& event) override;
    void mouseMove (const MouseEvent& event) override;
    void mouseDrag (const MouseEvent& event) override;
    
    void setVoicePointer(Voice *v) {
        voice_ = v;
    }
    
    Colour baseColour;
    const float zeroOutPointForMelody = 0.25;
    
private:
    Array<float> quadWeightsForNormalisedPos(const Point<float> pos);
    Array<float> quadWeightsForNormalisedPosMelody(const Point<float> pos);
    Array<Rectangle<float>> getQuads();
    Array<Rectangle<float>> getQuadVolZones();
    Voice *voice_;
    
    void paintMelodyStuff(Graphics &g);
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VoiceUI)
};
