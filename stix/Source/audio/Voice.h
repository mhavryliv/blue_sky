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
using namespace juce;

class Voice : public Component{
public:
    Voice();
    ~Voice() {}
    
    void loadFileIntoPosition(const String &fname, int position, const String &stemName);
    void changePlayState(TransportState newState);
    void setStemVol(int stem, float vol, bool zeroOthers);
    void setAllStems(const Array<float> &vols) {
        jassert(vols.size() == 4);
        stemVols_ = vols;
    }
    
    // Audio player helpers
    void prepareToPlay(int sampsPerBlock, double srate);
    void releaseResources();
    void getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill);
    
    const int MAX_LAYERS = 4;
    
    
    void setFormatManager(AudioFormatManager *fman) {
        formatManager_ = fman;
        for(Audio *audio : files_) {
            audio->formatManager_ = fman;
        }
    }
    void setName(const String &name) {
        name_ = name;
    }
    String name() const {
        return name_;
    }
    String stemNames(int index) const {
        return stemNames_[index];
    }

private:
    AudioFormatManager *formatManager_;
    TransportState playState_;
    
    struct Audio {
        Audio() {
            playState_ = Stopped;
        }
        void loadFileFromInputStream(InputStream *is) {
            auto* reader = formatManager_->createReaderFor (std::unique_ptr<InputStream> (is));
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
                        transportSource_.setPosition (0.0);
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
            
            // And re-init our buffer
            audioBuffer_.setSize(2, sampsPerBlock);
            info_.buffer = &audioBuffer_;
            info_.numSamples = sampsPerBlock;
            info_.startSample = 0;
        }
        
        void releaseResources() {
            transportSource_.releaseResources();
        }
        
        void getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill) {
            // Write to my own buffer
            if(audioBuffer_.getNumSamples() != bufferToFill.numSamples) {
                Logger::writeToLog("[Voice::Audio] Had to resize local buffer");
                audioBuffer_.setSize(2, bufferToFill.numSamples, false, false, true);
            }
            // Clear out audio buffer
            audioBuffer_.clear();
            // Copy settings from the input buffer
            info_.numSamples = bufferToFill.numSamples;
            info_.startSample = bufferToFill.startSample;
            transportSource_.getNextAudioBlock(info_);
//            for(int i = 0; i < audioBuffer_.getNumSamples(); ++i) {
//                float leftVal = audioBuffer_.getReadPointer(0)[i];
//                float rightVal = audioBuffer_.getReadPointer(1)[i];
//            }
        }
        
        void copyFromLocalToDst(AudioBuffer<float> &dst,
                                float startGain = 1.f, float endGain = 1.f) {
            int numToCopy = jmin(audioBuffer_.getNumSamples(), dst.getNumSamples());
            float stepGain = (endGain - startGain) / (float)numToCopy;
            const float *readLeft = audioBuffer_.getReadPointer(0);
            const float *readRight = audioBuffer_.getReadPointer(1);
            float *writeLeft = dst.getWritePointer(0);
            float *writeRight = dst.getWritePointer(1);
            for(int i = 0; i < numToCopy; ++i) {
                float gain = startGain + (stepGain * (float)i);
                *(writeLeft + i)  += (*(readLeft + i)) * gain;
                *(writeRight + i)  += (*(readRight + i)) * gain;
            }
        }
        
        std::unique_ptr<AudioFormatReaderSource> readerSource_;
        AudioTransportSource transportSource_;
        String fname_;
        AudioFormatManager *formatManager_;
        TransportState playState_;
        AudioSourceChannelInfo info_;
        AudioBuffer<float> audioBuffer_;
    };
    
    String name_;
    juce::OwnedArray<Audio> files_;
    StringArray stemNames_;
    AudioBuffer<float> summingBuffer_;
    Array<float> stemVols_;
    Array<float> prevStemVols_;
    
};
