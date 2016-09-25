/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGNLEventSuggestionsMetrics : NSObject {
    SGMDDLinkClicked * _dataDetectorsEngagement;
    SGMDDLinkShown * _dataDetectorsPresentation;
}

@property (nonatomic, retain) SGMDDLinkClicked *dataDetectorsEngagement;
@property (nonatomic, retain) SGMDDLinkShown *dataDetectorsPresentation;

+ (struct SGMEventDurationAdj_ { unsigned int x1; })diffEventDurationChangedFrom:(double)arg1 to:(double)arg2;
+ (struct SGMEventDateAdj_ { unsigned int x1; })diffEventStartDateChangedFrom:(id)arg1 oldTimeZone:(id)arg2 to:(id)arg3 newTimeZone:(id)arg4;
+ (struct SGMEventStringAdj_ { unsigned int x1; })diffEventTitleChangedFrom:(id)arg1 to:(id)arg2;
+ (id)instance;
+ (void)recordUserInteraction:(unsigned int)arg1 withLinkInApplication:(int)arg2 eventPrefillMode:(unsigned int)arg3 eventTypeClassification:(id)arg4 proposedEvent:(id)arg5 confirmedEvent:(id)arg6;
+ (void)shownViaDataDetectorsLinkInApp:(int)arg1;

- (void).cxx_destruct;
- (id)dataDetectorsEngagement;
- (id)dataDetectorsPresentation;
- (id)init;
- (void)setDataDetectorsEngagement:(id)arg1;
- (void)setDataDetectorsPresentation:(id)arg1;

@end