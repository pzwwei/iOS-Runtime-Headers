/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationRequest : NSObject <NSSecureCoding> {
    NSData *_credential;
    BOOL _didSetNonce;
    NSData *_nonceData;
    NSString *_passUniqueIdentifier;
    PKPaymentRequest *_paymentRequest;
}

@property (nonatomic, retain) NSData *credential;
@property (nonatomic, retain) NSData *nonceData;
@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (nonatomic, retain) PKPaymentRequest *paymentRequest;

+ (BOOL)supportsSecureCoding;

- (id)credential;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nonceData;
- (id)passUniqueIdentifier;
- (id)paymentRequest;
- (void)setCredential:(id)arg1;
- (void)setNonceData:(id)arg1;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (id)transactionRequestWithPaymentApplication:(id)arg1;

@end