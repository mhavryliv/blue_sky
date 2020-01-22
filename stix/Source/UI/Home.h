/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../../JuceLibraryCode/JuceHeader.h"
#include "../audio/Player.h"
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
              public Button::Listener
{
public:
    //==============================================================================
    Home ();
    ~Home();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setPlayerRef(Player *ref) {
        player_ = ref;
        player_->transport()->addChangeListener(this);
    }

    void changeListenerCallback(ChangeBroadcaster *source) override;
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Player *player_;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<TextButton> drumsButton_;
    std::unique_ptr<TextButton> percButton_;
    std::unique_ptr<TextButton> samplesButton_;
    std::unique_ptr<TextButton> leadButton_;
    std::unique_ptr<TextButton> playPauseButton_;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Home)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

