/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSLocale;

@interface NSAutoLocale : NSLocale  {
    NSLocale *loc;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)objectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)_update:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)_prefs;

@end