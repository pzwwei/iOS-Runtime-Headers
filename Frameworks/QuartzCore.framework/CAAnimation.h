/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CAMediaTimingFunction, CAStateControllerTransition, NSString;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction> {
    void *_attr;
    unsigned int _flags;
}

@property int animationID;
@property(copy) id completionBlock;
@property int _mapkit_ID;
@property(readonly) BOOL _mapkit_isScrollingAnimation;
@property CAStateControllerTransition * CAStateControllerTransition;
@property(getter=isEnabled) BOOL enabled;
@property(copy) NSString * beginTimeMode;
@property double frameInterval;
@property(retain) CAMediaTimingFunction * timingFunction;
@property(retain) id delegate;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property(copy) NSString * fillMode;

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)animation;
+ (int (*)())CA_getterForType:(int)arg1;
+ (int (*)())CA_setterForType:(int)arg1;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForKey:(id)arg1;
- (void)dealloc;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (double)frameInterval;
- (id)valueForKeyPath:(id)arg1;
- (float)speed;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setFillMode:(id)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setBeginTimeMode:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isRemovedOnCompletion;
- (id)timingFunction;
- (BOOL)autoreverses;
- (float)repeatCount;
- (double)timeOffset;
- (double)beginTime;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)fillMode;
- (id)beginTimeMode;
- (void)setDefaultDuration:(double)arg1;
- (BOOL)removedOnCompletion;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 layer:(id)arg2;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (void)setRepeatDuration:(double)arg1;
- (double)repeatDuration;
- (BOOL)_mapkit_isScrollingAnimation;
- (int)_mapkit_ID;
- (void)set_mapkit_ID:(int)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)performCompletionBlock:(BOOL)arg1;
- (int)animationID;
- (void)setAnimationID:(int)arg1;
- (id)completionBlock;

@end