/*
  ==============================================================================

    MotionMonitor_OSX.h
    Created: 2 Oct 2020 10:49:52am
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class MotionMonitor {
public:
    MotionMonitor(float rate) {
        juce::Logger::writeToLog("Using OSX motion managaer");
    }
    ~MotionMonitor() {}
    
    struct MotionData
    {
        juce::Vector3D<double> acceleration;
        juce::Vector3D<double> gravity;
        juce::Vector3D<double> rotation;
        juce::Vector3D<double> attitude;
        double angle;
    };
    
    bool getMotionData(MotionData& motionData) {
        
    }
};
