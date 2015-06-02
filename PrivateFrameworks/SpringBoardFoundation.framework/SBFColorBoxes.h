/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFColorBoxes : NSObject {
    struct { /* ? */ } **_colorBoxes;
    unsigned int _columnCount;
    float _contrast;
    unsigned int _rowCount;
    unsigned int _size;
}

@property (nonatomic, readonly) struct { /* ? */ }**colorBoxes;
@property (nonatomic, readonly) unsigned int columnCount;
@property (nonatomic, readonly) float contrast;
@property (nonatomic, readonly) unsigned int rowCount;
@property (nonatomic, readonly) unsigned int size;

- (void)_freeColorBoxes;
- (struct { /* ? */ }**)colorBoxes;
- (unsigned int)columnCount;
- (float)contrast;
- (void)dealloc;
- (id)description;
- (id)initWithColorBoxes:(struct { /* ? */ }**)arg1 size:(unsigned int)arg2 rowCount:(unsigned int)arg3 columnCount:(unsigned int)arg4 contrast:(float)arg5;
- (unsigned int)rowCount;
- (unsigned int)size;

@end