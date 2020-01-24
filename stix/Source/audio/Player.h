/*
  ==============================================================================

    Player.h
    Created: 22 Jan 2020 12:27:31pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "Voice.h"

class Player : public ChangeListener, public AudioAppComponent {
public:
    
    Player();
    ~Player();
    
    // App Audio Overrides
    void prepareToPlay(int sampsPerBlock, double srate) override;
    void releaseResources() override;
    void getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill) override;
    
    // Commands from UI
    void changePlayState(TransportState newState);
    
    void changeListenerCallback(ChangeBroadcaster *source) override;
    bool isTransportSource(ChangeBroadcaster *source) {
        return source == &transportSource_;
    }
    AudioTransportSource *transport() {
        return &transportSource_;
    }
    
    InputStream *createAssetInputStream(const char* resourcePath);
    File getExamplesDirectory();
    
    
private:
    AudioFormatManager formatManager_;
    std::unique_ptr<AudioFormatReaderSource> readerSource_;
    AudioTransportSource transportSource_;
    TransportState state_;
    Voice drums_;
    
//    void loadFile(const String &fname);
    void loadFileFromInputStream(InputStream *is);
    
};
