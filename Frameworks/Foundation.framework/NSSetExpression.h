/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression;

@interface NSSetExpression : NSExpression  {
    NSExpression *_left;
    NSExpression *_right;
}


- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)predicateFormat;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)leftExpression;
- (id)rightExpression;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)minimalFormInContext:(id)arg1;

@end