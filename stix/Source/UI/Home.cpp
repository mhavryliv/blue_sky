/*
  ==============================================================================

    Home.cpp
    Created: 23 Jul 2020 10:37:16am
    Author:  Mark Havryliv

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Home.h"

//==============================================================================
Home::Home() {
    voiceUI_.reset(new VoiceUI());
    voiceUI_->setAlpha(0.f);
    addChildComponent(voiceUI_.get());
    voiceUI_->setVisible(true);
    voiceUI_->setInterceptsMouseClicks(false, false);
    
    colours_.add(Colours::skyblue);
    colours_.add(Colours::darkorange);
    colours_.add(Colours::yellowgreen);
    colours_.add(Colours::palevioletred);
}

Home::~Home() {

}

void Home::paint (juce::Graphics& g) {
    // Break into four quadrants
    const float height = getHeight();
    const float width = getWidth();
    
    const Point<float> midPoint (width/2.f, height / 2.f);
    
    Colour textColour = Colours::white;
    
    // Draw background
    g.fillAll(Colours::whitesmoke);

    
    Array<Rectangle<float>> quads = getQuads();
    
    g.setFont(Font(20.f));
    
    for(int i = 0; i < 4; ++i) {
        g.setColour(colours_[i]);
        g.fillRect(quads[i]);
        Voice *v = player_->voiceAt(i);
        g.setColour(textColour);
        g.drawText(v->name(), quads[i], Justification::centred);
    }
    
}

void Home::resized() {
    voiceUI_->setSize(getWidth(), getHeight());
}

Array<Rectangle<float>> Home::getQuads() {
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

void Home::showVoiceUI(Voice *voice, Colour colour) {
    voiceUI_->setVoicePointer(voice);
    voiceUI_->baseColour = colour;
    ComponentAnimator &anim = Desktop::getInstance().getAnimator();
    anim.fadeIn(voiceUI_.get(), 250);
    voiceUI_->setInterceptsMouseClicks(true, true);
}

void Home::mouseDown(const MouseEvent &event) {
    int whichQuad = -1;
    Array<Rectangle<float>> quads = getQuads();
    Point<float> mousepos = event.getMouseDownPosition().toFloat();
    for(int i = 0; i < 4; ++i) {
        if(quads[i].contains(mousepos)) {
            whichQuad = i;
            break;
        }
    }
    if(whichQuad == -1) {
        return;
    }
    showVoiceUI(player_->voiceAt(whichQuad), colours_[whichQuad]);
}
