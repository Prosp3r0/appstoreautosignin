/* Generated by RuntimeBrowser.
 */

@protocol VideoCaptureProtocol

@required

- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (bool)isPreviewRunning;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;

@optional

- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (int)getCamera:(unsigned int*)arg1;
- (int)getCameraType:(int*)arg1;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (int)setCamera:(unsigned int)arg1;
- (int)setCameraType:(int)arg1;
- (int)setFrameRatePercentage:(double)arg1 newFramerate:(int*)arg2;

@end