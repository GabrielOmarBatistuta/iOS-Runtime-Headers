/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSURL, RCMutableWaveform, RCWaveform, RCWaveformGenerator;

@interface RCAudioFileWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver, RCWaveformDataSource> {
    double _cachedDuration;
    NSURL *_savedRecordingURL;
    BOOL _savesGeneratedWaveform;
    BOOL _wasSaved;
    RCMutableWaveform *_waveform;
    RCWaveformGenerator *_waveformGenerator;
}

@property BOOL savesGeneratedWaveform;
@property(readonly) RCWaveform * waveform;

- (void).cxx_destruct;
- (void)_handleFinishedLoadingWithClientBlock:(id)arg1 finished:(BOOL)arg2 error:(id)arg3;
- (void)_saveWaveformIfNecessary;
- (id)_waveformURL;
- (void)beginLoading;
- (void)beginLoadingForRecordingOutputURL:(id)arg1;
- (id)dataSourceByReloading;
- (void)dealloc;
- (double)duration;
- (void)finishLoadingBeforeDate:(id)arg1 loadingFinishedBlock:(id)arg2;
- (id)initWithFileURL:(id)arg1;
- (void)reload;
- (id)savedAudioURL;
- (BOOL)savesGeneratedWaveform;
- (BOOL)setPaused:(BOOL)arg1;
- (void)setSavesGeneratedWaveform:(BOOL)arg1;
- (void)terminateLoadingImmediately;
- (id)waveform;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (id)waveformGenerator;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;

@end