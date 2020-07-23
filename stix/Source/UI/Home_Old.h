/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../../JuceLibraryCode/JuceHeader.h"
#include "../audio/Player.h"
#include "VoiceUI.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Home  : public Component,
              public ChangeListener,
              public juce::Button::Listener
{
public:
    //==============================================================================
    Home ();
    ~Home() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setPlayerRef(Player *ref) {
        player_ = ref;
        // Initialise the stems
        player_->drums()->setStemVol(0, 1.f, true);
        player_->bass()->setStemVol(0, 1.f, true);
        player_->harmony()->setStemVol(0, 1.f, true);
        player_->melody()->setStemVol(0, 1.f, true);
    }

    void changeListenerCallback(ChangeBroadcaster *source) override;
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Player *player_;
    std::unique_ptr<VoiceUI> voiceUI_;

    void showVoiceUI(Voice *voice);
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::TextButton> drumsButton_;
    std::unique_ptr<juce::TextButton> bassButton_;
    std::unique_ptr<juce::TextButton> harmonyButton_;
    std::unique_ptr<juce::TextButton> melodyButton_;
    std::unique_ptr<juce::TextButton> playPauseButton_;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Home)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

