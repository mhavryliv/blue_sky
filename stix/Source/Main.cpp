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


#include "../JuceLibraryCode/JuceHeader.h"
#ifdef THE_PHONE
#include "motion/MotionMonitor.h"
#else
#include "motion/MotionMonitor_OSX.h"
#endif

using namespace juce;
#include "UI/MainComponent.h"

std::unique_ptr<AudioDeviceManager> sharedAudioDeviceManager;

//==============================================================================
class MainApplication  : public JUCEApplication
{
public:
    //==============================================================================
    MainApplication() {}

    ~MainApplication() override
    {
        sharedAudioDeviceManager.reset();
    }

    const String getApplicationName() override       { return ProjectInfo::projectName; }
    const String getApplicationVersion() override    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed() override       { return false; }

    //==============================================================================
    void initialise (const String& commandLine) override
    {
        Logger::writeToLog("Starting");
        motionMonitor = new MotionMonitor(40.0f);

        mainWindow.reset (new MainAppWindow (getApplicationName(), motionMonitor.get()));
        
    }

    bool backButtonPressed() override    {
        Logger::writeToLog("[Main] Return false to backButtonPressed()");
        return true;
        
    }
    void shutdown() override             { mainWindow = nullptr; }

    //==============================================================================
    void systemRequestedQuit() override                                 { quit(); }
    void anotherInstanceStarted (const String&) override                {}

private:
    ScopedPointer<MotionMonitor> motionMonitor;
    class MainAppWindow    : public DocumentWindow
    {
    public:
        MainAppWindow (const String& name, MotionMonitor *mm)
            : DocumentWindow (name, Desktop::getInstance().getDefaultLookAndFeel()
                                                          .findColour (ResizableWindow::backgroundColourId),
                              DocumentWindow::allButtons)
        {
            setUsingNativeTitleBar (true);
            setResizable (true, false);
            setResizeLimits (400, 400, 10000, 10000);

           #if JUCE_IOS || JUCE_ANDROID
            setFullScreen (true);
            Desktop::getInstance().setOrientationsEnabled (Desktop::allOrientations);
           #else
            setBounds ((int) (0.1f * getParentWidth()),
                       (int) (0.1f * getParentHeight()),
                       400, 600);
//                       jmax (400, (int) (0.5f * getParentWidth())),
//                       jmax (600, (int) (0.7f * getParentHeight())));
           #endif

            setContentOwned (new MainComponent(mm), false);
            setVisible (true);

        }

        void closeButtonPressed() override    { JUCEApplication::getInstance()->systemRequestedQuit(); }

        //==============================================================================
        MainComponent& getMainComponent()    { return *dynamic_cast<MainComponent*> (getContentComponent()); }

    private:

        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainAppWindow)
    };

    std::unique_ptr<MainAppWindow> mainWindow;
};

//==============================================================================
// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION (MainApplication)
