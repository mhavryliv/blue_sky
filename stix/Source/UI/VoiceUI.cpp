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
    /*  //ST Disable Sliders
    slider_ = nullptr;
    slider_ = new Slider(Slider::LinearHorizontal, Slider::NoTextBox);
    slider_->addListener(this);
    slider2_ = nullptr;
    slider2_ = new Slider(Slider::LinearHorizontal, Slider::NoTextBox);
    slider2_->addListener(this);
    addAndMakeVisible(slider_);
    addAndMakeVisible(slider2_);
     */
    resized();
    lastMotionPoint_ = Point<float>(getWidth()/2.f, getHeight() / 2.f);
    
}

void VoiceUI::sliderValueChanged(Slider *s) {
    /*  //ST Disable Sliders
    if(s == slider_ && voice_->name().equalsIgnoreCase("melody")) {
        zeroOutPointForMelody = (float)s->getValue();
        repaint();
    }
    if(s == slider_ && voice_->name().equalsIgnoreCase("bass")) {
        maxSumValForBass = (float)s->getValue();
        repaint();
    }
    if(s == slider2_ && voice_->name().equalsIgnoreCase("bass")) {
        bassDropOff = (float)s->getValue();
        repaint();
    }
     */
}

void VoiceUI::addMelodyComponents() {
//    slider_ = new Slider(Slider::LinearHorizontal, Slider::NoTextBox);
    
    /*  //ST Disable Sliders
    slider_->setRange(0.1, 0.9);
    slider_->setValue(zeroOutPointForMelody, dontSendNotification);
    slider_->setVisible(true);
    slider2_->setVisible(false);
     */
    
//    slider_->addListener(this);
//    addAndMakeVisible(slider_);
}

void VoiceUI::addBassComponents() {
//    slider_ = new Slider(Slider::LinearHorizontal, Slider::NoTextBox);
    
    /*  //ST Disable Sliders
    slider_->setRange(0.5, 4);
    slider_->setValue(maxSumValForBass, dontSendNotification);
    slider_->setVisible(true);
    slider2_->setRange(0.1, 1);
    slider2_->setValue(bassDropOff, dontSendNotification);
    slider2_->setVisible(true);
    */
     
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
        /*  //ST Disable Sliders
        slider_->setVisible(false);
        slider2_->setVisible(false);
         */
    }
}

VoiceUI::~VoiceUI() {
    /*  //ST Disable Sliders
    removeChildComponent(slider_);
    removeChildComponent(slider2_);
    delete slider_;
    delete slider2_;
     */
}

void VoiceUI::mouseDown (const MouseEvent& event) {

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

Point<float> VoiceUI::convertPitchRollToNormXY(const float pitch, const float roll) {
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
    x /= range;
    
    float y = jmax(pitch, -halfrange);
    y = jmin(y, halfrange);
    y += halfrange;
    y /= range;
    
    pos.x = x;
    pos.y = y;
    
    return pos;
}

void VoiceUI::updatePitchRoll(float pitch, float roll) {
//    Point<float> pos (roll, pitch);
//    Logger::writeToLog(pos.toString());
    Point<float> pos = convertPitchRollToNormXY(pitch, roll);
    float x = pos.x;
    float y = pos.y;
    /**
    const float halfpi = float_Pi / 2.f;
    const float fullpi = halfpi * 2.f;
    const float range = halfpi;
    const float halfrange = range/2.f;
    float x = jmax(roll, -halfrange);
    x = jmin(x, halfrange);
    x += halfrange;
    x /= range;
    
    float y = jmax(pitch, -halfrange);
    y = jmin(y, halfrange);
    y += halfrange;
    y /= range;
    
    pos.x = x;
    pos.y = y;
     **/
//    Logger::writeToLog(pos.toString());
    
    // Multiply by dimensions minus 1 to make sure the point is within one of the quadrants
    x *= (getWidth() - 1);
    y *= (getHeight() - 1);
    
    pos.x = x;
    pos.y = y;

    // Set the global record of the latest position
    lastMotionPoint_ = pos;
    //Array<float> weights = quadWeightsForNormalisedPos(pos);
    Array<float> weights = quadWeightsNormalisedXY(pos);
    voice_->setAllStems(weights);
    repaint();
}

void VoiceUI::mouseMove(const MouseEvent &event) {
#ifdef THE_PHONE
#else
    lastMotionPoint_ = getMouseXYRelative().toFloat();
    Array<float> weights = quadWeightsForNormalisedPos(getMouseXYRelative().toFloat());
    voice_->setAllStems(weights);
    repaint();
#endif
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

/**
 A good default fade algorithm, based on the bass part fading.
 All parameters should be normalised
 */
Array<float> VoiceUI::defaultQuadWeights(const Point<float> pos,
                                         const float width, const float height,
                                         const float dropOff, const float maxSumVal) {
    const float halfheight = height / 2.f;
    const float halfwidth = width / 2.f;
    Array<Rectangle<float>> quads;
    quads.add(Rectangle<float>(0, 0, halfwidth, halfheight));
    quads.add(Rectangle<float>(halfwidth, 0, halfwidth, halfheight));
    quads.add(Rectangle<float>(0, halfheight, halfwidth, halfheight));
    quads.add(Rectangle<float>(halfwidth, halfheight, halfwidth, halfheight));
    
    Array<float> vols;
    vols.resize(4);
    // The maximum distance is the corner to corner length
    const float maxDist = sqrt(powf(height, 2) + powf(width, 2));
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
//    const float mult = maxSumVal / sum;
//    for(int i = 0; i < 4; ++i) {
//        const float newVal = vols[i] * mult;
//        vols.set(i, jmin(newVal, 1.f));
//    }
    
    // Apply the power curve
    for(int i = 0; i < 4; ++i) {
        const float newVal = powf(vols[i], (1.f/(1.f - dropOff)));;
        vols.set(i, newVal);
    }
    
    return vols;
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
    for(int i = 0; i < 4; ++i) {
        const float newVal = vols[i] * mult;
        vols.set(i, jmin(newVal, 1.f));
    }
    
    // Apply the power curve
    for(int i = 0; i < 4; ++i) {
        const float newVal = powf(vols[i], (1.f/(1.f - bassDropOff)));;
        vols.set(i, newVal);
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
    // Handle "Melody" and "Bass" weights differently
    /*
    if(voice_->name().equalsIgnoreCase("melody")) {
        return quadWeightsForNormalisedPosMelody(pos);
    }
    if(voice_->name().equalsIgnoreCase("bass")) {
        return quadWeightsForNormalisedPosBass(pos);
    }
     */
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

Array<float> VoiceUI::quadWeightsNormalisedXY(const Point<float> pos) {
    // Handle "Melody" and "Bass" weights differently
    /*
     if(voice_->name().equalsIgnoreCase("melody")) {
     return quadWeightsForNormalisedPosMelody(pos);
     }
     if(voice_->name().equalsIgnoreCase("bass")) {
     return quadWeightsForNormalisedPosBass(pos);
     }
     */
    Array<Rectangle<float>> quads = getQuads();
    Array<float> vols;
    vols.resize(4);
    
    // Normalise axis
    float width = getWidth();
    float height = getHeight();
    Point<float> posNorm = pos;
    posNorm.x /= getWidth();
    posNorm.y /= getHeight();
    
    
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
        
        //Normalise p
        Point<float> pNorm = p;
        pNorm.x /= getWidth();
        pNorm.y /= getHeight();
        
        float dist = pNorm.getDistanceFrom(posNorm);
        vols.setUnchecked(i, dist);
    }
    
    // Store some info about them...
    float max = 0.f, min = 1.f;
    int maxIndex = -1, minIndex = -1;
    
    // Invert them
    for(int i = 0; i < 4; ++i) {
        const float val = vols[i];///sqrt(2);   //(vols[i] / maxDist);
        if(val <= min) {
            min = val;
            minIndex = i;
        }
        if(val >= max) {
            max = val;
            maxIndex = i;
        }
        // Invert the value for volume
        float inverted = 1.f - val;
        if (inverted<0) inverted = 0;
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
    //const Array<float> weights = quadWeightsForNormalisedPos(lastMotionPoint_);
    const Array<float> weights = quadWeightsNormalisedXY(lastMotionPoint_);
    
    const Font mainFont = g.getCurrentFont();
    for(int i = 0; i < 4; ++i) {
        g.setColour(colours[i].withAlpha(weights[i] * weights[i]));
        g.fillRect(quads[i]);
        g.setColour(textColour);
        g.setFont(mainFont);
        g.drawText(voice_->stemNames(i), quads[i], Justification::centred);
        g.setFont(10.f);
        g.drawText(String((int)(weights[i] * 100)) + "%",
                   quads[i].translated(0, -20), Justification::centred);
    }
    
    Rectangle<float> titleBox = Rectangle<float> (0, getHeight()/2.f-20.f, getWidth(), 40.f);
    //Rectangle<float> titleBox = Rectangle<float> (0, 350, getWidth(), 40);
    g.setColour(textColour);
    //g.fillRect(titleBox);
    g.setFont(40.f);
    g.drawText(voice_->name(), titleBox, Justification::centred);
    
    // Draw Voice Name
    
    
    /*
     // Specific graphics for Melody / Bass screens
    if(voice_->name().equalsIgnoreCase("melody")) {
        paintMelodyStuff(g);
    }
    if(voice_->name().equalsIgnoreCase("bass")) {
        paintBassStuff(g);
    }
    */
    
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
    c.translate(0, 60);
    g.drawText("Drop off", c, Justification::centred);
}

void VoiceUI::resized() {
    // This method is where you should set the bounds of any child
    // components that your component contains..
    /*  //ST Disable Sliders
    if(slider_ != nullptr) {
        Rectangle<int> r = getBounds();
        r.setHeight(30);
        r.setCentre(getBounds().getCentre());
//        r.setY(getHeight()-30);
        slider_->setBounds(r);
        r.translate(0, 60);
        slider2_->setBounds(r);
    }
     */
}
