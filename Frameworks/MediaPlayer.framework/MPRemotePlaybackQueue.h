/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemotePlaybackQueue : NSObject {
    struct _MRSystemAppPlaybackQueue { } *_mediaRemotePlaybackQueue;
    NSDictionary *_userInfo;
}

@property (getter=isRequestingImmediatePlayback, nonatomic, readonly) BOOL requestingImmediatePlayback;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (BOOL)isRequestingImmediatePlayback;
- (id)userInfo;

@end