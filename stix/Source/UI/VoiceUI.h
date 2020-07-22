/*
  ==============================================================================

    VoiceUI.h
    Created: 22 Jul 2020 9:17:42pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

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
//    void mouseMove (const MouseEvent& event) override { repaint(); }

    void setVoiceNames(const StringArray &names) {
        jassert(names.size() == 4);
        voiceNames_ = names;
    }
    
private:
    StringArray voiceNames_;
    Array<float> quadWeightsForNormalisedPos(const Point<float> pos);
    Array<Rectangle<float>> getQuads();
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VoiceUI)
};
