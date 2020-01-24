/*
  ==============================================================================

    Voice.h
    Created: 23 Jan 2020 12:49:29pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "Utils.h"

class Voice : public Component{
public:
    Voice();
    ~Voice() {}
    
    void loadFileIntoPosition(const String &fname, int position);
    void changePlayState(TransportState newState);
    
    // Audio player helpers
    void prepareToPlay(int sampsPerBlock, double srate);
    void releaseResources();
    void getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill);
    
    const int MAX_LAYERS = 1;
    
    
    void setFormatManager(AudioFormatManager *fman) {
        formatManager_ = fman;
        for(Audio *audio : files_) {
            audio->formatManager_ = fman;
        }
    }

private:
    AudioFormatManager *formatManager_;
    TransportState playState_;
    
    struct Audio {
        Audio() {
            playState_ = Stopped;
        }
        void loadFileFromInputStream(InputStream *is) {
            auto* reader = formatManager_->createReaderFor (is);
            if(reader != nullptr) {
                std::unique_ptr<AudioFormatReaderSource> newSource
                (new AudioFormatReaderSource (reader, true));
                transportSource_.setSource (newSource.get(), 0, nullptr, reader->sampleRate);
                readerSource_.reset (newSource.release());
                readerSource_->setLooping(true);
            }
        }
        
        void changePlayState(TransportState newState) {
            if(playState_ != newState) {
                playState_ = newState;
                switch (playState_)
                {
                    case Stopped:
                        transportSource_.setPosition (0.0);
                        break;
                        
                    case Starting:
                        transportSource_.start();
                        break;
                        
                    case Playing:
                        break;
                        
                    case Stopping:
                        transportSource_.stop();
                        break;
                }
            }
        }
        
        void prepareToPlay(int sampsPerBlock, double srate) {
            transportSource_.prepareToPlay(sampsPerBlock, srate);
        }
        
        void releaseResources() {
            transportSource_.releaseResources();
        }
        
        void getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill) {
            transportSource_.getNextAudioBlock(bufferToFill);
        }
        
        std::unique_ptr<AudioFormatReaderSource> readerSource_;
        AudioTransportSource transportSource_;
        String fname_;
        AudioFormatManager *formatManager_;
        TransportState playState_;
    };
    
    juce::OwnedArray<Audio> files_;
    
};
