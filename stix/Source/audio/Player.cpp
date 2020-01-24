/*
  ==============================================================================

    Player.cpp
    Created: 22 Jan 2020 12:27:31pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#include "Player.h"

Player::Player() : state_(Stopped) {
    setAudioChannels(0, 2);
    formatManager_.registerBasicFormats();
    drums_.setFormatManager(&formatManager_);
    drums_.loadFileIntoPosition("drums_1.wav", 0);
//    transportSource_.addChangeListener(this);
//    InputStream *is = createAssetInputStream("drums_1.wav");
//    if(is == nullptr) {
//        Logger::writeToLog("[Player] Couldn't load file!");
//    }
//    else {
//        loadFileFromInputStream(is);
//    }
    
}

Player::~Player() {
    shutdownAudio();
}

void Player::loadFileFromInputStream(InputStream *is) {
    auto* reader = formatManager_.createReaderFor (is);
    if(reader != nullptr) {
        std::unique_ptr<AudioFormatReaderSource> newSource
        (new AudioFormatReaderSource (reader, true));
        transportSource_.setSource (newSource.get(), 0, nullptr, reader->sampleRate);
        readerSource_.reset (newSource.release());
        readerSource_->setLooping(true);
    }
}

#pragma mark - Main transport callbacks

void Player::changeListenerCallback(ChangeBroadcaster *source) {
    if(source == &transportSource_) {
        if(transportSource_.isPlaying()) {
            changePlayState(Playing);
        }
        else {
            changePlayState(Stopped);
        }
    }
}


#pragma mark - Transport State Handling

void Player::changePlayState(TransportState newState) {
    if (state_ != newState)
    {
        state_ = newState;
        
        drums_.changePlayState(newState);
        
//        switch (state_)
//        {
//            case Stopped:
//                Logger::writeToLog("[Player] Stopped");
//                transportSource_.setPosition (0.0);
//                break;
//
//            case Starting:
//                Logger::writeToLog("[Player] Starting");
//                transportSource_.start();
//                break;
//
//            case Playing:
//                Logger::writeToLog("[Player] Playing");
//                break;
//
//            case Stopping:
//                Logger::writeToLog("[Player] Stopping");
//                transportSource_.stop();
//                break;
//        }
    }
}


#pragma mark - Audio Callbacks

void Player::prepareToPlay(int sampsPerBlock, double srate) {
    drums_.prepareToPlay(sampsPerBlock, srate);
//    transportSource_.prepareToPlay(sampsPerBlock, srate);
}

void Player::releaseResources() {
    drums_.releaseResources();
//    transportSource_.releaseResources();
}

void Player::getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill) {
    drums_.getNextAudioBlock(bufferToFill);
//    transportSource_.getNextAudioBlock(bufferToFill);
}


#pragma mark - Asset Handling

InputStream* Player::createAssetInputStream (const char* resourcePath)
{
#if JUCE_ANDROID
    ZipFile apkZip (File::getSpecialLocation (File::invokedExecutableFile));
    return apkZip.createStreamForEntry (apkZip.getIndexOfFileName ("assets/" + String (resourcePath)));
#else
#if JUCE_IOS
    auto assetsDir = File::getSpecialLocation (File::currentExecutableFile)
    .getParentDirectory().getChildFile ("Assets");
#elif JUCE_MAC
    auto assetsDir = File::getSpecialLocation (File::currentExecutableFile)
    .getParentDirectory().getParentDirectory().getChildFile ("Resources").getChildFile ("Assets");
    
    if (! assetsDir.exists())
        assetsDir = getExamplesDirectory().getChildFile ("Assets");
#else
    auto assetsDir = getExamplesDirectory().getChildFile ("Assets");
#endif
    
    auto resourceFile = assetsDir.getChildFile (resourcePath);
    jassert (resourceFile.existsAsFile());
    
    return resourceFile.createInputStream();
#endif
}

File Player::getExamplesDirectory() {
    auto currentFile = File::getSpecialLocation (File::SpecialLocationType::currentApplicationFile);
    auto exampleDir = currentFile.getParentDirectory().getChildFile ("examples");
    
    if (exampleDir.exists())
        return exampleDir;
    
    int numTries = 0; // keep track of the number of parent directories so we don't go on endlessly
    
    while (currentFile.getFileName() != "examples" && numTries++ < 15)
        currentFile = currentFile.getParentDirectory();
    
    return currentFile;
}
