/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImage : NSObject {
    unsigned int  _bytesPerRow;
    NSData * _data;
    unsigned int  _dataHeight;
    unsigned int  _dataOffset;
    unsigned int  _dataWidth;
    int  _format;
    unsigned int  _height;
    BOOL  _isPlaceholder;
    UIImage * _uiImage;
    unsigned int  _width;
}

@property (nonatomic, readonly) unsigned int bytesPerRow;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned int dataHeight;
@property (nonatomic, readonly) unsigned int dataOffset;
@property (nonatomic, readonly) unsigned int dataWidth;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) unsigned int height;
@property (nonatomic, readonly) BOOL isPlaceholder;
@property (nonatomic, readonly) UIImage *uiImage;
@property (nonatomic, readonly) unsigned int width;

+ (id)imageWithData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4 dataWidth:(unsigned int)arg5 dataHeight:(unsigned int)arg6 dataOffset:(unsigned int)arg7 format:(int)arg8 isPlaceholder:(BOOL)arg9;
+ (id)imageWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(BOOL)arg3;

- (void).cxx_destruct;
- (unsigned int)bytesPerRow;
- (id)data;
- (unsigned int)dataHeight;
- (unsigned int)dataOffset;
- (unsigned int)dataWidth;
- (id)description;
- (int)format;
- (unsigned int)height;
- (id)initWithData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4 dataWidth:(unsigned int)arg5 dataHeight:(unsigned int)arg6 dataOffset:(unsigned int)arg7 format:(int)arg8 isPlaceholder:(BOOL)arg9;
- (id)initWithUIImage:(id)arg1 format:(int)arg2 isPlaceholder:(BOOL)arg3;
- (BOOL)isPlaceholder;
- (id)uiImage;
- (unsigned int)width;

@end
