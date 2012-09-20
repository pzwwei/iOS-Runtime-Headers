/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class CPLRUDictionaryNode;

@interface CPLRUDictionaryNode : NSObject  {
    id _key;
    id _object;
    CPLRUDictionaryNode *next;
    CPLRUDictionaryNode *prev;
}

@property(readonly) id key;
@property(retain) id object;


- (void)dealloc;
- (void)setObject:(id)arg1;
- (id)key;
- (id)object;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end