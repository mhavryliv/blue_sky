#pragma once

#include "../JuceLibraryCode/JuceHeader.h"


class MotionMonitor
{
public:
    MotionMonitor(float rate);
    ~MotionMonitor();

    struct GyroData
    {
        juce::Vector3D<double> rotationRate;
    };
    
    struct MotionData
    {
        juce::Vector3D<double> acceleration;
        juce::Vector3D<double> gravity;
        juce::Vector3D<double> rotation;
        juce::Vector3D<double> attitude;
        double angle;
    };
    
    struct LockedGyroData : public juce::CriticalSection
    {
        GyroData gyroData;
        bool updated = false;
    };
    
    struct LockedMotionData : public juce::CriticalSection
    {
        MotionData motionData;
        bool updated = false;
    };
    
    
    void updateMotion(MotionData motionData);
    void updateGyro(GyroData gyroData);
    
    bool getMotionData(MotionData& motionData);
    bool getGyroData(GyroData& gyroData);
    
private:
    class Pimpl;
    
    juce::ScopedPointer<Pimpl> pimpl;

    LockedGyroData lockedGyroData;
    LockedMotionData lockedMotionData;
};
