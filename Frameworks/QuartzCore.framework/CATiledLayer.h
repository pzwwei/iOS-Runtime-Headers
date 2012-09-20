/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATiledLayer : CALayer  {
}

@property struct CGColor { }* fillColor;
@property float maximumTileScale;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;
@property unsigned long levelsOfDetail;
@property unsigned long levelsOfDetailBias;
@property struct CGSize { float x1; float x2; } tileSize;

+ (unsigned int)prefetchedTiles;
+ (BOOL)shouldDrawOnMainThread;
+ (double)fadeDuration;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)displayDisableFadeOptions;
+ (id)displayUncollectableOptions;

- (void)didChangeValueForKey:(id)arg1;
- (void)dealloc;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)fillColor;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)_display;
- (void)_dealloc;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContents:(id)arg1;
- (void)invalidateContents;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setLevelsOfDetailBias:(unsigned long)arg1;
- (void)setLevelsOfDetail:(unsigned long)arg1;
- (void)setMaximumTileScale:(float)arg1;
- (BOOL)queueIsEmpty;
- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (float)maximumTileScale;
- (unsigned long)levelsOfDetailBias;
- (unsigned long)levelsOfDetail;
- (BOOL)isDrawingEnabled;
- (BOOL)_canDisplayConcurrently;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)displayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;

@end