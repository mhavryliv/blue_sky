/*
  ==============================================================================

   This file is part of the JUCE library.
   Copyright (c) 2017 - ROLI Ltd.

   JUCE is an open source library subject to commercial or open-source
   licensing.

   By using JUCE, you agree to the terms of both the JUCE 5 End-User License
   Agreement and JUCE 5 Privacy Policy (both updated and effective as of the
   27th April 2017).

   End User License Agreement: www.juce.com/juce-5-licence
   Privacy Policy: www.juce.com/juce-5-privacy-policy

   Or: You may also use this code under the terms of the GPL v3 (see
   www.gnu.org/licenses).

   JUCE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY, AND ALL WARRANTIES, WHETHER
   EXPRESSED OR IMPLIED, INCLUDING MERCHANTABILITY AND FITNESS FOR PURPOSE, ARE
   DISCLAIMED.

  ==============================================================================
*/

#include "MainComponent.h"
#include "../motion/MotionMonitor.h"

//==============================================================================


//==============================================================================
MainComponent::MainComponent(MotionMonitor *motionMonitor) {

    motionMonitor_ = motionMonitor;
    player_.reset(new Player());
    
    setOpaque (true);
    
    homeScreen_.reset(new Home());
    homeScreen_->setPlayerRef(player_.get());
    addAndMakeVisible(homeScreen_.get());
    
    setSize (400, 600);
    
    startTimer(20);

}

MainComponent::~MainComponent() {
    player_.reset();
    homeScreen_.reset();
}

void MainComponent::timerCallback() {
#if JUCE_IOS
    MotionMonitor::MotionData mdata;
    motionMonitor_->getMotionData(mdata);
    homeScreen_->updatePitchRoll(mdata.attitude.x, mdata.attitude.y);
#endif
}

void MainComponent::paint(Graphics &g) {
    g.setColour(Colours::black);
    g.fillAll();
    

}


void MainComponent::resized()
{
    auto bounds = getLocalBounds();
    homeScreen_->setBounds(bounds);
}

