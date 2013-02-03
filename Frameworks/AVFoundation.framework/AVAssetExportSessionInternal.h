/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, AVAsset, NSObject<OS_dispatch_queue>, AVWeakReference, AVAssetTrack, AVAudioMix, NSString, NSURL, AVVideoComposition, NSArray;

@interface AVAssetExportSessionInternal : NSObject {
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    AVAsset *asset;
    AVAudioMix *audioMix;
    NSArray *compatibleFileTypes;
    long compatibleFileTypesDispatchOncePredicate;
    NSError *error;
    AVAssetTrack *firstVideoTrack;
    id handler;
    long long maxFileSize;
    NSArray *metadata;
    BOOL optimizeForNetworkUse;
    BOOL outputFileCreatedByRemaker;
    NSString *outputFileType;
    NSURL *outputURL;
    NSString *preset16x9;
    NSString *preset;
    float progress;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    struct OpaqueFigRemaker { } *remaker;
    NSObject<OS_dispatch_queue> *remakerNotificationSerializationQueue;
    int status;
    } timeRange;
    BOOL useHardwareVideoEncoderIfAvailable;
    AVVideoComposition *videoComposition;
    AVWeakReference *weakReference;
}

@end