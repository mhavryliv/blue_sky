/*
  ==============================================================================

    Utils.h
    Created: 23 Jan 2020 1:23:20pm
    Author:  Mark Havryliv

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
using namespace juce;

enum TransportState
{
    Stopped,
    Starting,
    Playing,
    Stopping
};

class Utils {
    
public:
    
    static File getExamplesDirectory() {
        auto currentFile = File::getSpecialLocation (File::SpecialLocationType::currentApplicationFile);
        auto exampleDir = currentFile.getParentDirectory().getChildFile ("examples");
        
        if (exampleDir.exists())
            return exampleDir;
        
        int numTries = 0; // keep track of the number of parent directories so we don't go on endlessly
        
        while (currentFile.getFileName() != "examples" && numTries++ < 15)
            currentFile = currentFile.getParentDirectory();
        
        return currentFile;
    }
    
    static InputStream *createAssetInputStream(const char* resourcePath) {
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
        
        return resourceFile.createInputStream().release();
#endif
    }
    
    
};


