/*
  ==============================================================================

    VoiceUI.cpp
    Created: 22 Jul 2020 9:17:42pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#include <JuceHeader.h>
#include "VoiceUI.h"

//==============================================================================
VoiceUI::VoiceUI()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    setInterceptsMouseClicks(true, false);

}

VoiceUI::~VoiceUI()
{
}

void VoiceUI::mouseDown (const MouseEvent& event) {
    quadWeightsForNormalisedPos(event.getMouseDownPosition().toFloat());
//    Logger::writeToLog("Mouse down");
//    setAlpha(0.f);
//    setInterceptsMouseClicks(false, false);
}

Array<Rectangle<float>> VoiceUI::getQuads() {
    const float height = getHeight();
    const float width = getWidth();
    const Point<float> midPoint (width/2.f, height / 2.f);
    
    // Build the quads
    Array<Rectangle<float>> quads;
    for(int i = 0; i < 4; ++i) {
        float x = (i % 2 == 0) ? 0.f : midPoint.x;
        float y = (i < 2) ? 0.f : midPoint.y;
        quads.add(Rectangle<float> (x, y, midPoint.x, midPoint.y) );
    }
    
    return quads;
}

Array<float> VoiceUI::quadWeightsForNormalisedPos(const Point<float> pos) {
    Array<Rectangle<float>> quads = getQuads();
    
    Array<float> distances;
    float maxDist = 0;
//    Logger::writeToLog("Distances:");
    for(int i = 0; i < 4; ++i) {
        Point<float> p;
        if(i == 0) {
            p = quads[i].getTopLeft();
        }
        else if(i == 1) {
            p = quads[i].getTopRight();
        }
        else if(i == 2) {
            p = quads[i].getBottomLeft();
        }
        else if(i == 3) {
            p = quads[i].getBottomRight();
        }
        float dist = p.getDistanceFrom(pos);
        distances.add(dist);
        maxDist = jmax(dist, maxDist);
//        Logger::writeToLog(String(i) + ": " + String(distances[i], 2));
    }

    // Normalise
//    Logger::writeToLog("Normalised distances:");
    int indexOverThresh = -1;
    const float thresh = 0.75f;
    float summedVol = 0.f;
    for(int i = 0; i < 4; ++i) {
        // invert it and normalise
        float val = 1.f - (distances[i] / maxDist);
        distances.setUnchecked(i, val);
        if(val > thresh) {
            indexOverThresh = i;
        }
        summedVol += val;
//        Logger::writeToLog(String(i) + ": " + String(val, 2));
    }
    // If any quad is over the threshold, make it max vol and cut the others
    Logger::writeToLog("Quad volume:");
    if(indexOverThresh != -1) {
        for(int i = 0; i < 4; ++i) {
            if(i == indexOverThresh) {
                distances.setUnchecked(i, 1.f);
            }
            else {
                distances.setUnchecked(i, 0.f);
            }
            Logger::writeToLog(String(i) + ": " + String(distances[i], 2));
        }
    }
    // Otherwise, max sure they're normalised
    else {
        for(int i = 0; i < 4; ++i) {
            float val = distances[i] / 0.75f;
            val = jmin(1.f, val);
            distances.setUnchecked(i, val);
            Logger::writeToLog(String(i) + ": " + String(val, 2));
        }
    }
    
    return distances;
    
}

void VoiceUI::paint (juce::Graphics& g) {
    // Break into four quadrants
    const float height = getHeight();
    const float width = getWidth();
    
    const Point<float> midPoint (width/2.f, height / 2.f);
    
    Colour lineColour = Colours::white;
    Colour baseColour = Colours::skyblue;
    
    // Draw background
    g.fillAll(Colours::black);
    
    Array<Rectangle<float>> quads = getQuads();
    
    g.setColour(baseColour);
    g.fillRect(quads[0]);
    g.setColour(Colours::white);
    g.fillRect(quads[1]);

    g.setColour(Colours::yellowgreen);
    g.fillRect(quads[2]);

    g.setColour(Colours::palevioletred);
    g.fillRect(quads[3]);

    
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

//    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background
//
//    g.setColour (juce::Colours::grey);
//    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component
//
//    g.setColour (juce::Colours::white);
//    g.setFont (14.0f);
//    g.drawText ("VoiceUI", getLocalBounds(),
//                juce::Justification::centred, true);   // draw some placeholder text
}

void VoiceUI::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
