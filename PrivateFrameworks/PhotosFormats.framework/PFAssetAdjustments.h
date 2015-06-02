/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFAssetAdjustments : NSObject <NSCopying> {
    NSDictionary *_propertyListDictionary;
}

@property (nonatomic, readonly) int adjustmentBaseVersion;
@property (nonatomic, readonly) NSData *adjustmentData;
@property (nonatomic, readonly, copy) NSString *adjustmentFormatIdentifier;
@property (nonatomic, readonly, copy) NSString *adjustmentFormatVersion;
@property (nonatomic, retain) NSDictionary *propertyListDictionary;

- (void).cxx_destruct;
- (int)adjustmentBaseVersion;
- (id)adjustmentData;
- (id)adjustmentFormatIdentifier;
- (id)adjustmentFormatVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(int)arg4;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)propertyListDictionary;
- (void)setPropertyListDictionary:(id)arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;

@end