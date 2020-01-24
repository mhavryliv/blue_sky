# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=23" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DJUCE_PUSH_NOTIFICATIONS_ACTIVITY=\"com/roli/juce/JuceActivity\"" "-DJUCE_ANDROID_GL_ES_VERSION_3_0=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=0.1" "-DJUCE_APP_VERSION_HEX=0x100")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "/Users/mhavryliv/Development/Projucer/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( ${BINARY_NAME}

    SHARED

    "../../../Source/audio/Player.cpp"
    "../../../Source/audio/Player.h"
    "../../../Source/audio/Utils.h"
    "../../../Source/audio/Voice.cpp"
    "../../../Source/audio/Voice.h"
    "../../../Source/UI/Home.cpp"
    "../../../Source/UI/Home.h"
    "../../../Source/UI/MainComponent.cpp"
    "../../../Source/UI/MainComponent.h"
    "../../../Source/Main.cpp"
    "../../../Source/JUCEAppIcon.png"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/analytics/juce_Analytics.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/analytics/juce_Analytics.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/analytics/juce_ButtonTracker.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/analytics/juce_ButtonTracker.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/destinations/juce_AnalyticsDestination.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/destinations/juce_ThreadedAnalyticsDestination.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/destinations/juce_ThreadedAnalyticsDestination.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/juce_analytics.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/juce_analytics.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_Block.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_Block.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_BlockConfigManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_BlocksVersion.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_BlocksVersion.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_ControlButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_LEDGrid.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_LEDRow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_StatusLight.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_TouchList.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_TouchSurface.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/littlefoot/juce_LittleFootCompiler.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/littlefoot/juce_LittleFootRemoteHeap.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/littlefoot/juce_LittleFootRunner.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/littlefoot/LittleFoot Language README.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_BitPackingUtilities.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_BlockModels.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_BlocksProtocolDefinitions.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_HostPacketBuilder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_HostPacketDecoder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/Protocol Format.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_BandwidthStatsLogger.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_BlockImplementation.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_BlockSerialReader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_ConnectedDeviceGroup.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_DepreciatedVersionReader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_Detector.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_DetectorHolder.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_DeviceInfo.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_MidiDeviceConnection.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_MIDIDeviceDetector.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_BlockGraph.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_BlockGraph.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_PhysicalTopologySource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_PhysicalTopologySource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_RuleBasedTopologySource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_RuleBasedTopologySource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_Topology.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_TopologySource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/visualisers/juce_BitmapLEDProgram.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/visualisers/juce_BitmapLEDProgram.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/visualisers/juce_DrumPadLEDProgram.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/visualisers/juce_DrumPadLEDProgram.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/juce_blocks_basics.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/README.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/juce_blocks_basics.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2ChainShape.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2ChainShape.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2CircleShape.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2CircleShape.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2EdgeShape.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2EdgeShape.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2PolygonShape.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2PolygonShape.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2Shape.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2BroadPhase.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2BroadPhase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2CollideCircle.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2CollideEdge.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2CollidePolygon.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2Collision.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2Collision.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2Distance.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2Distance.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2DynamicTree.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2DynamicTree.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2TimeOfImpact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2TimeOfImpact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2BlockAllocator.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2BlockAllocator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Draw.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Draw.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2GrowableStack.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Math.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Math.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Settings.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Settings.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2StackAllocator.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2StackAllocator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Timer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Timer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ChainAndCircleContact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ChainAndCircleContact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ChainAndPolygonContact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ChainAndPolygonContact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2CircleContact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2CircleContact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2Contact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2Contact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ContactSolver.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ContactSolver.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2EdgeAndCircleContact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2EdgeAndCircleContact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2EdgeAndPolygonContact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2EdgeAndPolygonContact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2PolygonAndCircleContact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2PolygonAndCircleContact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2PolygonContact.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2PolygonContact.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2DistanceJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2DistanceJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2FrictionJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2FrictionJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2GearJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2GearJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2Joint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2Joint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2MouseJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2MouseJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2PrismaticJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2PrismaticJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2PulleyJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2PulleyJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2RevoluteJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2RevoluteJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2RopeJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2RopeJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2WeldJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2WeldJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2WheelJoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2WheelJoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Body.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Body.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2ContactManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2ContactManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Fixture.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Fixture.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Island.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Island.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2TimeStep.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2World.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2World.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2WorldCallbacks.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2WorldCallbacks.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Rope/b2Rope.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Rope/b2Rope.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Box2D.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/README.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/utils/juce_Box2DRenderer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/utils/juce_Box2DRenderer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/juce_box2d.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/juce_box2d.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/java/README.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_AudioBlock.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_AudioBlock_test.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_SIMDRegister.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_SIMDRegister_Impl.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_SIMDRegister_test.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_Convolution.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_Convolution.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_FFT.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_FFT.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_FFT_test.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_Windowing.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_Windowing.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_FastMathApproximations.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_LogRampedValue.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_LogRampedValue_test.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_LookupTable.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_LookupTable.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Matrix.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Matrix.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Matrix_test.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Phase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Polynomial.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_fallback_SIMDNativeOps.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Bias.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_FIRFilter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_FIRFilter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_FIRFilter_test.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Gain.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_IIRFilter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_IIRFilter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_IIRFilter_Impl.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_LadderFilter.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_LadderFilter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Oscillator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Oversampling.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Oversampling.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_ProcessContext.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_ProcessorChain.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_ProcessorDuplicator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_ProcessorWrapper.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Reverb.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_StateVariableFilter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_WaveShaper.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/juce_dsp.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/juce_dsp.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/juce_dsp.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCAddress.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCAddress.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCArgument.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCArgument.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCBundle.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCBundle.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCMessage.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCMessage.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCReceiver.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCReceiver.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCSender.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCSender.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCTimeTag.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCTimeTag.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCTypes.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCTypes.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/juce_osc.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/juce_osc.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/in_app_purchases/juce_InAppPurchases.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/in_app_purchases/juce_InAppPurchases.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_KeyFileGeneration.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_OnlineUnlockForm.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_OnlineUnlockForm.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_OnlineUnlockStatus.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_OnlineUnlockStatus.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_TracktionMarketplaceStatus.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_TracktionMarketplaceStatus.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/native/juce_android_InAppPurchases.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/native/juce_ios_InAppPurchases.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/juce_product_unlocking.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/juce_product_unlocking.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/juce_product_unlocking.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/capture/juce_CameraDevice.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_android_CameraDevice.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_android_Video.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_mac_Video.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_win32_Video.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/playback/juce_VideoComponent.h"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/juce_video.cpp"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/juce_video.mm"
    "../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/juce_video.h"
    "../../../JuceLibraryCode/AppConfig.h"
    "../../../JuceLibraryCode/include_juce_analytics.cpp"
    "../../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../../JuceLibraryCode/include_juce_audio_utils.cpp"
    "../../../JuceLibraryCode/include_juce_blocks_basics.cpp"
    "../../../JuceLibraryCode/include_juce_box2d.cpp"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_cryptography.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_dsp.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../../JuceLibraryCode/include_juce_osc.cpp"
    "../../../JuceLibraryCode/include_juce_product_unlocking.cpp"
    "../../../JuceLibraryCode/include_juce_video.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/audio/Player.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/audio/Utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/audio/Voice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/UI/Home.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/UI/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/JUCEAppIcon.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/analytics/juce_Analytics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/analytics/juce_Analytics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/analytics/juce_ButtonTracker.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/analytics/juce_ButtonTracker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/destinations/juce_AnalyticsDestination.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/destinations/juce_ThreadedAnalyticsDestination.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/destinations/juce_ThreadedAnalyticsDestination.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/juce_analytics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_analytics/juce_analytics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_Block.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_Block.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_BlockConfigManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_BlocksVersion.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_BlocksVersion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_ControlButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_LEDGrid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_LEDRow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_StatusLight.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_TouchList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/blocks/juce_TouchSurface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/littlefoot/juce_LittleFootCompiler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/littlefoot/juce_LittleFootRemoteHeap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/littlefoot/juce_LittleFootRunner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/littlefoot/LittleFoot Language README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_BitPackingUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_BlockModels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_BlocksProtocolDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_HostPacketBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/juce_HostPacketDecoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/protocol/Protocol Format.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_BandwidthStatsLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_BlockImplementation.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_BlockSerialReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_ConnectedDeviceGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_DepreciatedVersionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_Detector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_DetectorHolder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_DeviceInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_MidiDeviceConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/internal/juce_MIDIDeviceDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_BlockGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_BlockGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_PhysicalTopologySource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_PhysicalTopologySource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_RuleBasedTopologySource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_RuleBasedTopologySource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_Topology.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/topology/juce_TopologySource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/visualisers/juce_BitmapLEDProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/visualisers/juce_BitmapLEDProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/visualisers/juce_DrumPadLEDProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/visualisers/juce_DrumPadLEDProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/juce_blocks_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_blocks_basics/juce_blocks_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2ChainShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2ChainShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2CircleShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2CircleShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2EdgeShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2EdgeShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2PolygonShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2PolygonShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/Shapes/b2Shape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2BroadPhase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2BroadPhase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2CollideCircle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2CollideEdge.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2CollidePolygon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2Collision.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2Collision.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2Distance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2Distance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2DynamicTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2DynamicTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2TimeOfImpact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Collision/b2TimeOfImpact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2BlockAllocator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2BlockAllocator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Draw.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Draw.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2GrowableStack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Math.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Math.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Settings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Settings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2StackAllocator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2StackAllocator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Common/b2Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ChainAndCircleContact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ChainAndCircleContact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ChainAndPolygonContact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ChainAndPolygonContact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2CircleContact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2CircleContact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2Contact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2Contact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ContactSolver.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2ContactSolver.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2EdgeAndCircleContact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2EdgeAndCircleContact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2EdgeAndPolygonContact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2EdgeAndPolygonContact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2PolygonAndCircleContact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2PolygonAndCircleContact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2PolygonContact.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Contacts/b2PolygonContact.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2DistanceJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2DistanceJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2FrictionJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2FrictionJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2GearJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2GearJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2Joint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2Joint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2MouseJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2MouseJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2PrismaticJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2PrismaticJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2PulleyJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2PulleyJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2RevoluteJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2RevoluteJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2RopeJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2RopeJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2WeldJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2WeldJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2WheelJoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/Joints/b2WheelJoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Body.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Body.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2ContactManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2ContactManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Fixture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Fixture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Island.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2Island.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2TimeStep.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2World.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2World.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2WorldCallbacks.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Dynamics/b2WorldCallbacks.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Rope/b2Rope.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Rope/b2Rope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/Box2D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/box2d/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/utils/juce_Box2DRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/utils/juce_Box2DRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/juce_box2d.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_box2d/juce_box2d.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/java/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_AudioBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_AudioBlock_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_SIMDRegister.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_SIMDRegister_Impl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/containers/juce_SIMDRegister_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/filter_design/juce_FilterDesign.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_Convolution.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_Convolution.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_FFT.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_FFT.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_FFT_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/frequency/juce_Windowing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_FastMathApproximations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_LogRampedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_LogRampedValue_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_LookupTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_LookupTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Matrix.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Matrix.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Matrix_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Phase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_Polynomial.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/maths/juce_SpecialFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_avx_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_fallback_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_neon_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/native/juce_sse_SIMDNativeOps.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Bias.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_FIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_FIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_FIRFilter_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Gain.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_IIRFilter_Impl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_LadderFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_LadderFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Oscillator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Oversampling.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Oversampling.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_ProcessContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_ProcessorChain.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_ProcessorDuplicator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_ProcessorWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_StateVariableFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/processors/juce_WaveShaper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/juce_dsp.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/juce_dsp.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_dsp/juce_dsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCArgument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCArgument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCBundle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCBundle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCReceiver.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCReceiver.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCSender.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCSender.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCTimeTag.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCTimeTag.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/osc/juce_OSCTypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/juce_osc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_osc/juce_osc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/in_app_purchases/juce_InAppPurchases.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/in_app_purchases/juce_InAppPurchases.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_KeyFileGeneration.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_OnlineUnlockForm.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_OnlineUnlockForm.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_OnlineUnlockStatus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_OnlineUnlockStatus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_TracktionMarketplaceStatus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/marketplace/juce_TracktionMarketplaceStatus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/native/juce_android_InAppPurchases.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/native/juce_ios_InAppPurchases.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/juce_product_unlocking.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/juce_product_unlocking.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_product_unlocking/juce_product_unlocking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/capture/juce_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_android_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_android_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_mac_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/native/juce_win32_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/playback/juce_VideoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../Users/mhavryliv/Development/Projucer/JUCE/modules/juce_video/juce_video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv3 "GLESv3")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv3}
    ${egl}
    "cpufeatures"
)
