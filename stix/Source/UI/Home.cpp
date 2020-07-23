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

//[Headers] You can add your own extra header files here...
#include "../audio/Utils.h"
//[/Headers]

#include "Home.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Home::Home ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    voiceUI_.reset(new VoiceUI());
    //[/Constructor_pre]

    drumsButton_.reset (new juce::TextButton ("new button"));
    addAndMakeVisible (drumsButton_.get());
    drumsButton_->setButtonText (TRANS("Drums"));
    drumsButton_->addListener (this);

    drumsButton_->setBounds (24, 40, 120, 24);

    bassButton_.reset (new juce::TextButton ("new button"));
    addAndMakeVisible (bassButton_.get());
    bassButton_->setButtonText (TRANS("Bass"));
    bassButton_->addListener (this);

    bassButton_->setBounds (248, 40, 120, 24);

    harmonyButton_.reset (new juce::TextButton ("new button"));
    addAndMakeVisible (harmonyButton_.get());
    harmonyButton_->setButtonText (TRANS("Harmony"));
    harmonyButton_->addListener (this);

    harmonyButton_->setBounds (24, 112, 120, 24);

    melodyButton_.reset (new juce::TextButton ("new button"));
    addAndMakeVisible (melodyButton_.get());
    melodyButton_->setButtonText (TRANS("Melody"));
    melodyButton_->addListener (this);

    melodyButton_->setBounds (248, 111, 120, 24);

    playPauseButton_.reset (new juce::TextButton ("new button"));
    addAndMakeVisible (playPauseButton_.get());
    playPauseButton_->setButtonText (TRANS("Play"));
    playPauseButton_->addListener (this);


    //[UserPreSize]
    voiceUI_->setAlpha(0.f);
    addChildComponent(voiceUI_.get());
    voiceUI_->setVisible(true);
    voiceUI_->setInterceptsMouseClicks(false, false);
    //[/UserPreSize]

    setSize (400, 600);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Home::~Home()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    drumsButton_ = nullptr;
    bassButton_ = nullptr;
    harmonyButton_ = nullptr;
    melodyButton_ = nullptr;
    playPauseButton_ = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Home::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Home::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    playPauseButton_->setBounds ((getWidth() / 2) - (100 / 2), 160, 100, 24);
    //[UserResized] Add your own custom resize handling here..
    voiceUI_->setSize(getWidth(), getHeight());
    //[/UserResized]
}

void Home::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == drumsButton_.get())
    {
        //[UserButtonCode_drumsButton_] -- add your button handler code here..
        showVoiceUI(player_->drums());
        //[/UserButtonCode_drumsButton_]
    }
    else if (buttonThatWasClicked == bassButton_.get())
    {
        //[UserButtonCode_bassButton_] -- add your button handler code here..
        showVoiceUI(player_->bass());
        //[/UserButtonCode_bassButton_]
    }
    else if (buttonThatWasClicked == harmonyButton_.get())
    {
        //[UserButtonCode_harmonyButton_] -- add your button handler code here..
        showVoiceUI(player_->harmony());
        //[/UserButtonCode_harmonyButton_]
    }
    else if (buttonThatWasClicked == melodyButton_.get())
    {
        //[UserButtonCode_melodyButton_] -- add your button handler code here..
        showVoiceUI(player_->melody());
        //[/UserButtonCode_melodyButton_]
    }
    else if (buttonThatWasClicked == playPauseButton_.get())
    {
        //[UserButtonCode_playPauseButton_] -- add your button handler code here..
        if(player_->isPlaying()) {
            player_->changePlayState(Stopping);
        }
        else {
            player_->changePlayState(Starting);
        }

        //[/UserButtonCode_playPauseButton_]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

#pragma mark - My code

void Home::showVoiceUI(Voice *voice) {
    voiceUI_->setVoicePointer(voice);
    ComponentAnimator &anim = Desktop::getInstance().getAnimator();
    anim.fadeIn(voiceUI_.get(), 250);
    voiceUI_->setInterceptsMouseClicks(true, true);
}

void Home::changeListenerCallback(ChangeBroadcaster *source) {
//    if(player_->isTransportSource(source)) {
//        auto transport = dynamic_cast<AudioTransportSource*>(source);
//        if(transport->isPlaying()) {
//            playPauseButton_->setButtonText("Pause");
//        }
//        else {
//            playPauseButton_->setButtonText("Play");
//        }
//    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Home" componentName="" parentClasses="public Component, public ChangeListener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="1" initialWidth="400"
                 initialHeight="600">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TEXTBUTTON name="new button" id="53590cd4afaa418e" memberName="drumsButton_"
              virtualName="" explicitFocusOrder="0" pos="24 40 120 24" buttonText="Drums"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="52cb7739214d30e6" memberName="bassButton_"
              virtualName="" explicitFocusOrder="0" pos="248 40 120 24" buttonText="Bass"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="dfcdb6f6c16a97c4" memberName="harmonyButton_"
              virtualName="" explicitFocusOrder="0" pos="24 112 120 24" buttonText="Harmony"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="617a1b4566fb9441" memberName="melodyButton_"
              virtualName="" explicitFocusOrder="0" pos="248 111 120 24" buttonText="Melody"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="51f8c43abf1df459" memberName="playPauseButton_"
              virtualName="" explicitFocusOrder="0" pos="0Cc 160 100 24" buttonText="Play"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

