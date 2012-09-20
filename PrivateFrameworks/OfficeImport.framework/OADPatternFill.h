/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADPattern, OADColor;

@interface OADPatternFill : OADFill  {
    OADColor *mFgColor;
    BOOL mIsFgColorOverridden;
    OADColor *mBgColor;
    BOOL mIsBgColorOverridden;
    OADPattern *mPattern;
    BOOL mIsPatternOverridden;
}

+ (id)defaultProperties;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setColor:(id)arg1;
- (void)setPattern:(id)arg1;
- (id)pattern;
- (void)setFgColor:(id)arg1;
- (id)fgColor;
- (void)setBgColor:(id)arg1;
- (id)bgColor;
- (id)namedImageDataWithBlipCollection:(id)arg1;
- (BOOL)isPatternOverridden;
- (BOOL)isBgColorOverridden;
- (BOOL)isFgColorOverridden;
- (void)setStyleColor:(id)arg1;
- (id)initWithDefaults;
- (void)setParent:(id)arg1;

@end