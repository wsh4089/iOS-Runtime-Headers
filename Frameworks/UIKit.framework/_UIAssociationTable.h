/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAssociationTable : NSObject {
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (void)dealloc;
- (id)description;
- (BOOL)hasLeftValuesForRightValue:(id)arg1;
- (BOOL)hasRightValuesForLeftValue:(id)arg1;
- (id)initWithLeftValueOptions:(unsigned int)arg1 rightValueOptions:(unsigned int)arg2;
- (BOOL)isEmpty;
- (id)leftValueEnumerable;
- (id)leftValueEnumerableForRightValue:(id)arg1;
- (id)leftValues;
- (id)leftValuesForRightValue:(id)arg1;
- (void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (id)rightValueEnumerable;
- (id)rightValueEnumerableForLeftValue:(id)arg1;
- (id)rightValues;
- (id)rightValuesForLeftValue:(id)arg1;
- (void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;

@end
