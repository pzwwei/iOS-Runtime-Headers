/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSString;

@interface FTRejectMessage : FTMessage {
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_reason;
    NSData *_selfPushToken;
}

@property(copy) NSString *peerID;
@property(copy) NSData *peerPushToken;
@property(copy) NSNumber *reason;
@property(copy) NSData *selfPushToken;

- (id)bagKey;
- (void)dealloc;
- (id)messageBody;
- (id)peerID;
- (id)peerPushToken;
- (id)reason;
- (id)requiredKeys;
- (id)selfPushToken;
- (void)setPeerID:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSelfPushToken:(id)arg1;

@end