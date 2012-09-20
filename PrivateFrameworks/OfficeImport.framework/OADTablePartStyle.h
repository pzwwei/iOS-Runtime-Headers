/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCellStyle, OADTableTextStyle;

@interface OADTablePartStyle : NSObject  {
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;

- (void)dealloc;
- (void)setCellStyle:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)applyOverridesFrom:(id)arg1;
- (id)shallowCopy;
- (id)textStyle;
- (id)cellStyle;

@end