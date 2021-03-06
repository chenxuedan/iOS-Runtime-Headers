/* Generated by RuntimeBrowser.
 */

@protocol VTUIAudioSession

@required

- (float)averagePower;
- (BOOL)isRecording;
- (BOOL)prepareRecord;
- (void)releaseAudioSession;
- (void)resetEndPointer;
- (void)setDelegate:(id <VTUIAudioSessionDelegate>)arg1;
- (void)setEndpointerDelegate:(id <Endpointer>)arg1;
- (BOOL)startRecording;
- (void)stopRecording;
- (void)updateMeters;

@end
