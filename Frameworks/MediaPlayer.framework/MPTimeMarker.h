/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL, NSString, NSDictionary;

@interface MPTimeMarker : NSObject  {
    double _duration;
    unsigned int _index;
    double _time;
    NSString *_title;
    NSURL *_url;
    int _markerType;
    NSDictionary *_metadata;
}

@property(readonly) double comparableTime;
@property double duration;
@property unsigned int index;
@property(readonly) BOOL hasArtworkAtPlaybackTime;
@property double time;
@property(readonly) double maxTime;
@property(retain) NSString * title;
@property(retain) NSURL * url;
@property(retain) NSDictionary * metadata;
@property(readonly) int markerType;


- (BOOL)hasArtworkAtPlaybackTime;
- (double)maxTime;
- (double)comparableTime;
- (id)initWithMarkerType:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)urlTitleTrimmingCharacterSet;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (unsigned int)index;
- (double)time;
- (void)setTime:(double)arg1;
- (id)title;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setTitle:(id)arg1;
- (int)markerType;

@end