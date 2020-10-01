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
    setInterceptsMouseClicks(false, false);
    addMouseListener(this, true);
    slider_ = nullptr;
    slider_ = new Slider(Slider::LinearHorizontal, Slider::NoTextBox);
    slider_->addListener(this);
    addAndMakeVisible(slider_);
    resized();
    lastMotionPoint_ = Point<float>(getWidth()/2.f, getHeight() / 2.f);
    
}

void VoiceUI::sliderValueChanged(Slider *s) {
    if(s == slider_ && voice_->name().equalsIgnoreCase("melody")) {
        zeroOutPointForMelody = (float)s->getValue();
        repaint();
    }
    if(s == slider_ && voice_->name().equalsIgnoreCase("bass")) {
        maxSumValForBass = (float)s->getValue();
        repaint();
    }
}

void VoiceUI::addMelodyComponents() {
//    slider_ = new Slider(Slider::LinearHorizontal, Slider::NoTextBox);
    slider_->setRange(0.1, 0.9);
    slider_->setValue(zeroOutPointForMelody, dontSendNotification);
    slider_->setVisible(true);
//    slider_->addListener(this);
//    addAndMakeVisible(slider_);
}

void VoiceUI::addBassComponents() {
//    slider_ = new Slider(Slider::LinearHorizontal, Slider::NoTextBox);
    slider_->setRange(0.5, 4);
    slider_->setValue(maxSumValForBass, dontSendNotification);
    slider_->setVisible(true);
//    slider_->addListener(this);
//    addAndMakeVisible(slider_);
}

void VoiceUI::setVoicePointer(Voice *v) {
    voice_ = v;
    if(voice_->name().equalsIgnoreCase("melody")) {
        addMelodyComponents();
    }
    else if(voice_->name().equalsIgnoreCase("bass")) {
        addBassComponents();
    }
    else {
        slider_->setVisible(false);
    }
}

VoiceUI::~VoiceUI() {
    removeChildComponent(slider_);
    delete slider_;
}

void VoiceUI::mouseDown (const MouseEvent& event) {
//    float r = event.source.getCurrentRotation();
//    Logger::writeToLog(String(r));

    quadWeightsForNormalisedPos(event.getMouseDownPosition().toFloat());
//    Logger::writeToLog("Mouse down");
    if(event.getNumberOfClicks() == 2) {
        setAlpha(0.f);
        setInterceptsMouseClicks(false, false);
        isInFocus = false;
    }
}

void VoiceUI::mouseDrag(const MouseEvent &event) {
    mouseMove(event);
}

void VoiceUI::updatePitchRoll(float pitch, float roll) {
    Point<float> pos (roll, pitch);
//    Logger::writeToLog(pos.toString());
    // normalise it to the screen width and height
    const float halfpi = float_Pi / 2.f;
    const float fullpi = halfpi * 2.f;
    const float range = halfpi;
    const float halfrange = range/2.f;
    float x = jmax(roll, -halfrange);
    x = jmin(x, halfrange);
    x += halfrange;
//    x = jmax(x, 0.f);
//    x = jmin(x, fullpi);
    x /= range;
    
    float y = jmax(pitch, -halfrange);
    y = jmin(y, halfrange);
    y += halfrange;
    y /= range;
    
//    float y = pitch + halfpi;
//    y = jmax(y, 0.f);
//    y = jmin(y, fullpi);
//    y /= fullpi;
    
    pos.x = x;
    pos.y = y;
//    Logger::writeToLog(pos.toString());
    
    x *= (getWidth() - 1);
    y *= (getHeight() - 1);
    
    pos.x = x;
    pos.y = y;
    
    

    lastMotionPoint_ = pos;
    Array<float> weights = quadWeightsForNormalisedPos(pos);
    voice_->setAllStems(weights);
    repaint();
}

void VoiceUI::mouseMove(const MouseEvent &event) {
//    Array<float> weights = quadWeightsForNormalisedPos(getMouseXYRelative().toFloat());
//    voice_->setAllStems(weights);
//    repaint();
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

// Bass should have configurable vol at centre
Array<float> VoiceUI::quadWeightsForNormalisedPosBass(const Point<float> pos) {
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
    int maxIndex = -1, minIndex = -1;
    
    // Invert them
    float sum = 0.f;
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
//        Logger::writeToLog(String(i) + ", " + String(inverted, 2));
        sum += inverted;
    }
    
    // Scale them
    const float mult = maxSumValForBass / sum;
//    Logger::writeToLog("Scaled...");
    for(int i = 0; i < 4; ++i) {
        const float newVal = vols[i] * mult;
        vols.set(i, jmin(newVal, 1.f));
//        Logger::writeToLog(String(i) + ", " + String(newVal, 2));
    }
    
    return vols;
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
    if(whichQuad == -1) {
//        Logger::writeToLog("No quad bitch");
//        for(int i = 0; i < quads.size(); ++i) {
//            Logger::writeToLog(quads[i].toString());
//        }
        return vols;
    }
    
    // figure out how strong it is in this quad
    const float maxDist =
    sqrt(powf(quads[whichQuad].getHeight(), 2) + powf(quads[whichQuad].getWidth(), 2));
    
    float dist = p.getDistanceFrom(pos);
    
    float normVal = dist / maxDist;
    
    // invert it so it's strongest in the corner
    normVal = 1.f - normVal;
    
    // And rescale it to the silence portion
    float scaled = jmax(normVal - zeroOutPointForMelody, 0.f);
    scaled /= (1.f - zeroOutPointForMelody);
    vols.set(whichQuad, scaled);
    
    return vols;
}

// Melody should only play one at a time, all faded out in the centre
// Bass shouldn't all be playing max vol in the centre
// For drum track, only fade out once out of the the quadrant
Array<float> VoiceUI::quadWeightsForNormalisedPos(const Point<float> pos) {
    if(voice_->name().equalsIgnoreCase("melody")) {
        return quadWeightsForNormalisedPosMelody(pos);
    }
    if(voice_->name().equalsIgnoreCase("bass")) {
        return quadWeightsForNormalisedPosBass(pos);
    }
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
    int maxIndex = -1, minIndex = -1;
    
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
//    const Array<float> weights = quadWeightsForNormalisedPos(getMouseXYRelative().toFloat());
    const Array<float> weights = quadWeightsForNormalisedPos(lastMotionPoint_);
    
    
    for(int i = 0; i < 4; ++i) {
        g.setColour(colours[i].withAlpha(weights[i] * weights[i]));
        g.fillRect(quads[i]);
        g.setColour(textColour);
        g.drawText(voice_->stemNames(i), quads[i], Justification::centred);
    }
    
    if(voice_->name().equalsIgnoreCase("melody")) {
        paintMelodyStuff(g);
    }
    if(voice_->name().equalsIgnoreCase("bass")) {
        paintBassStuff(g);
    }
    
    g.setColour(Colours::black.withAlpha(0.5f));
    g.fillEllipse((int)lastMotionPoint_.x, (int)lastMotionPoint_.y, 10, 10);
}

void VoiceUI::paintMelodyStuff(Graphics &g) {
    g.setColour(Colours::seagreen);
    Rectangle<float> c = getBounds().toFloat();
    float width = (float)(getBounds().getWidth() * 1) * zeroOutPointForMelody;
    float height = (float)(getBounds().getHeight() * 1) * zeroOutPointForMelody;
    c.setWidth(width);
    c.setHeight(height);
    c.setCentre(g.getClipBounds().toFloat().getCentre());
    g.drawRoundedRectangle(c, 20.f, 2.f);
    // raise the rect slightly for text
    c.translate(0, -20);
    g.drawText("Mute zone", c, Justification::centred);
//    g.drawEllipse(c, 2);
}

void VoiceUI::paintBassStuff(Graphics &g) {
    Rectangle<float> c = getBounds().toFloat();
    // raise the rect slightly for text
    c.translate(0, -20);
    g.drawText("Intensity", c, Justification::centred);
}

void VoiceUI::resized() {
    // This method is where you should set the bounds of any child
    // components that your component contains..
    
    if(slider_ != nullptr) {
        Rectangle<int> r = getBounds();
        r.setHeight(30);
        r.setCentre(getBounds().getCentre());
//        r.setY(getHeight()-30);
        slider_->setBounds(r);
    }
}
