/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDWPLayoutStorage;

@interface GQDTTextCell : GQDTCell  {
    struct __CFString { } *mStringValue;
    GQDWPLayoutStorage *mLayoutStorage;
}


- (void)dealloc;
- (struct __CFString { }*)stringValue;
- (id)layoutStorage;
- (int)readContentForTCell:(struct _xmlTextReader { }*)arg1;
- (int)readContentForTextCell:(struct _xmlTextReader { }*)arg1;

@end