/*
  ==============================================================================

    VoiceUI.cpp
    Created: 22 Jul 2020 9:17:42pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#include <JuceHeader.h>
#include "VoiceUI.h"
#include "../audio/Voice.h"

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
    setAlpha(0.f);
    setInterceptsMouseClicks(false, false);
}

void VoiceUI::mouseMove(const MouseEvent &event) {
    Array<float> weights = quadWeightsForNormalisedPos(getMouseXYRelative().toFloat());
    voice_->setAllStems(weights);
    repaint();
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

Array<Rectangle<float>> VoiceUI::getQuadVolZones() {
    float isection = 1.5;
    Array<Rectangle<float>> zones;
    
    const float height = getHeight();
    const float width = getWidth();
    const Point<float> midPoint (width/2.f, height / 2.f);
    
    // Build the quads
    Array<Rectangle<float>> quads;
    for(int i = 0; i < 4; ++i) {
        float x = (i % 2 == 0) ? 0.f : midPoint.x;
        float y = (i < 2) ? 0.f : midPoint.y;
        if(i == 0) {
            quads.add(Rectangle<float> (x, y, width * isection, height * isection));
        }
        else if(i == 1) {
            quads.add(Rectangle<float> (x - width*isection, y, width*isection, height*isection));
        }
        else if(i == 2) {
            quads.add
            (Rectangle<float> (x, y - height*isection, width * isection, height * isection));
        }
        else if(i == 3) {
            quads.add(Rectangle<float>
                      (x - width*isection, y - height*isection,
                       width*isection, height*isection));
        }
    }
    
    return quads;

}

// Melody should only play one at a time, all faded out in the centre
// Bass shouldn't all be playing max vol in the centre
// For drum track, only fade out once out of the the quadrant
Array<float> VoiceUI::quadWeightsForNormalisedPos(const Point<float> pos) {
    Array<Rectangle<float>> quads = getQuads();
    
    Array<float> vols;
    vols.resize(4);
    // The maximum distance is the corner to corner length
    const float maxDist = sqrt(powf(getHeight(), 2) + powf(getWidth(), 2));
    for(int i = 0; i < 4; ++i) {
        Point<float> p;
        if(i == 0) {
            p = quads[i].getTopLeft();
        }
        else if(i == 1) {
            p = quads[i].getTopRight();
        }
        else if(i == 2) {
            p = quads[2].getBottomLeft();
        }
        else if(i == 3) {
            p = quads[3].getBottomRight();
        }
        
        float dist = p.getDistanceFrom(pos);
        vols.setUnchecked(i, dist);
    }
    
    // Invert them
    for(int i = 0; i < 4; ++i) {
        vols.setUnchecked(i, 1.f - (vols[i] / maxDist));
    }

    return vols;
}

void VoiceUI::paint (juce::Graphics& g) {
    // Break into four quadrants
    const float height = getHeight();
    const float width = getWidth();
    
    const Point<float> midPoint (width/2.f, height / 2.f);
    
    Colour lineColour = Colours::white;
    Colour textColour = Colours::black;
    Array<Colour> colours;
    colours.add(baseColour);
    colours.add(baseColour);
    colours.add(baseColour);
    colours.add(baseColour);
    
    // Draw background
    g.fillAll(Colours::whitesmoke);
    
    Array<Rectangle<float>> quads = getQuads();
    const Array<float> weights = quadWeightsForNormalisedPos(getMouseXYRelative().toFloat());
    
    for(int i = 0; i < 4; ++i) {
        g.setColour(colours[i].withAlpha(weights[i] * weights[i]));
        g.fillRect(quads[i]);
        g.setColour(textColour);
        g.drawText(voice_->stemNames(i), quads[i], Justification::centred);
    }
}

void VoiceUI::resized() {
    // This method is where you should set the bounds of any child
    // components that your component contains..
}
