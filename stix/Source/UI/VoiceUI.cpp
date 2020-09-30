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
//    float r = event.source.getCurrentRotation();
//    Logger::writeToLog(String(r));
    quadWeightsForNormalisedPos(event.getMouseDownPosition().toFloat());
//    Logger::writeToLog("Mouse down");
    if(event.getNumberOfClicks() == 2) {
        setAlpha(0.f);
        setInterceptsMouseClicks(false, false);
    }
}

void VoiceUI::mouseDrag(const MouseEvent &event) {
    mouseMove(event);
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
Array<float> VoiceUI::quadWeightsForNormalisedPosMelody(const Point<float> pos) {
    Array<Rectangle<float>> quads = getQuads();
    Array<float> vols;
    vols.resize(4);
    int whichQuad = -1;
    Point<float> p;
    for(int i = 0; i < 4; ++i) {
        if(quads[i].contains(pos)) {
            whichQuad = i;
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
        }
    }
    
    // figure out how strong it is in this quad
    const float maxDist =
    sqrt(powf(quads[whichQuad].getHeight(), 2) + powf(quads[whichQuad].getWidth(), 2));
    
    float dist = p.getDistanceFrom(pos);
    
    float normVal = dist / maxDist;
    
    // invert it so it's strongest in the corner
    normVal = 1.f - normVal;
//    Logger::writeToLog(String(normVal));
    
    // And rescale it to the silence portion
    float scaled = jmax(normVal - zeroOutPointForMelody, 0.f);
    scaled /= (1.f - zeroOutPointForMelody);
    Logger::writeToLog(String(scaled));
    
    
    return vols;
}

// Melody should only play one at a time, all faded out in the centre
// Bass shouldn't all be playing max vol in the centre
// For drum track, only fade out once out of the the quadrant
Array<float> VoiceUI::quadWeightsForNormalisedPos(const Point<float> pos) {
    if(voice_->name().equalsIgnoreCase("melody")) {
        return quadWeightsForNormalisedPosMelody(pos);
    }
    Logger::writeToLog(pos.toString());
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
    
    // Store some info about them...
    float max = 0.f, min = 1.f;
    int maxIndex, minIndex;
    
    // Invert them
    for(int i = 0; i < 4; ++i) {
        const float val = (vols[i] / maxDist);
        if(val <= min) {
            min = val;
            minIndex = i;
        }
        if(val >= max) {
            max = val;
            maxIndex = i;
        }
        // Invert the value for volume
        const float inverted = 1.f - val;
        vols.setUnchecked(i, inverted);
    }
    
    // Do the calculation based on which voice
    if(voice_->name().equalsIgnoreCase("melody")) {
        // if melody, only allow volume for the strongest part
        // and zero out if it's near the center
        for(int i = 0; i < vols.size(); ++i) {
            if(i != minIndex) {
                vols.set(i, 0.f);
            }
            if(i == minIndex && vols[i] < zeroOutPointForMelody) {
                vols.set(i, 0.f);
            }
        }
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
    
    if(voice_->name().equalsIgnoreCase("melody")) {
        paintMelodyStuff(g);
    }
}

void VoiceUI::paintMelodyStuff(Graphics &g) {
    g.setColour(Colours::white);
    Rectangle<float> c = getBounds().toFloat();
    float reduceBy = c.getWidth() * ((1.f - zeroOutPointForMelody) * 0.5f);
//    Logger::writeToLog(String(reduceBy, 2));
    c.reduce(reduceBy, 0);
    c.setHeight(c.getWidth());
    c.setCentre(g.getClipBounds().toFloat().getCentre());
    g.drawEllipse(c, 2.f);
}

void VoiceUI::resized() {
    // This method is where you should set the bounds of any child
    // components that your component contains..
}
