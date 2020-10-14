/*
  ==============================================================================

    VoiceUI.h
    Created: 22 Jul 2020 9:17:42pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
using namespace juce;
class Voice;

//==============================================================================
/*
*/
class VoiceUI  : public juce::Component, public Slider::Listener
{
public:
    VoiceUI();
    ~VoiceUI() override;

    void paint (juce::Graphics&) override;
    void resized() override;
    void mouseDown (const MouseEvent& event) override;
    void mouseMove (const MouseEvent& event) override;
    void mouseDrag (const MouseEvent& event) override;
    
    void updatePitchRoll (float pitch, float roll);
    
    void sliderValueChanged(Slider *s) override;
    
    void addMelodyComponents();
    void addBassComponents();
    
    void setVoicePointer(Voice *v);
    
    Colour baseColour;
    float zeroOutPointForMelody = 0.25;
    float maxSumValForBass = 2.25;
    float bassDropOff = 1;
    
    bool isInFocus = false;

    static Array<float> defaultQuadWeights(const Point<float> pos,
                                           const float width, const float height,
                                           const float dropOff = 0.5f,
                                           const float maxSumVal = 1.f);
    static Point<float> convertPitchRollToNormXY(const float pitch, const float roll);

    
private:
    Array<float> quadWeightsForNormalisedPos(const Point<float> pos);
    Array<float> quadWeightsForNormalisedPosMelody(const Point<float> pos);
    Array<float> quadWeightsForNormalisedPosBass(const Point<float> pos);
    Array<Rectangle<float>> getQuads();
    Array<Rectangle<float>> getQuadVolZones();
    Voice *voice_;
    
    Slider *slider_;
    Slider *slider2_;
    
    void paintMelodyStuff(Graphics &g);
    void paintBassStuff(Graphics &g);
    
    Point<float> lastMotionPoint_;
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VoiceUI)
};
