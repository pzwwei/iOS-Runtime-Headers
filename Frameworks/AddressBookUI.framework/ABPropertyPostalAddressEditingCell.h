/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyPostalAddressEditingCell : ABPropertyEditingCell {
    ABPostalAddressEditorView *_addressEditor;
}

@property (nonatomic, retain) ABPostalAddressEditorView *addressEditor;
@property (nonatomic, copy) UIColor *editorSeparatorColor;

- (id)addressEditor;
- (id)constantConstraints;
- (void)dealloc;
- (id)editorSeparatorColor;
- (id)firstResponderItem;
- (void)layoutChanged:(id)arg1;
- (float)leftValueMargin;
- (float)rightContentMargin;
- (void)setAddressEditor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setEditorSeparatorColor:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)valueChanged:(id)arg1;
- (id)valueView;

@end