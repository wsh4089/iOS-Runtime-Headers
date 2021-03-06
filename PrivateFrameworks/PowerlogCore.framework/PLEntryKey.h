/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLEntryKey : NSObject {
    PLEntryKey *_baseEntryKey;
    NSString *_entryKey;
    NSString *_entryName;
    NSString *_entryType;
    BOOL _isDynamic;
    NSString *_operatorName;
    struct _PLTimeIntervalRange { 
        double location; 
        double length; 
    } _timeIntervalRange;
    NSString *_wildCardName;
}

@property PLEntryKey *baseEntryKey;
@property (readonly, retain) NSString *entryKey;
@property (readonly, retain) NSString *entryName;
@property (readonly, retain) NSString *entryType;
@property (nonatomic) BOOL isDynamic;
@property (readonly, retain) NSString *operatorName;
@property (nonatomic) struct _PLTimeIntervalRange { double x1; double x2; } timeIntervalRange;
@property (nonatomic, copy) NSString *wildCardName;

+ (id)PLEntryAggregateKeysForOperator:(id)arg1;
+ (id)PLEntryAggregateKeysForOperatorClass:(Class)arg1;
+ (id)PLEntryAggregateKeysForOperatorName:(id)arg1;
+ (id)PLEntryKeyForEntryKey:(id)arg1;
+ (id)PLEntryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3;
+ (id)PLEntryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4 isDynamic:(BOOL)arg5;
+ (id)PLEntryKeysForEntryType:(id)arg1;
+ (void)addPLEntryKey:(id)arg1;
+ (id)baseEntryKeyForEntryKey:(id)arg1;
+ (id)dynamicEntryKeyForEntryKey:(id)arg1;
+ (id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3;
+ (id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 isDynamic:(BOOL)arg4;
+ (id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4;
+ (id)entryKeyForOperatorName:(id)arg1 withType:(id)arg2 withName:(id)arg3 withWildCardName:(id)arg4 isDynamic:(BOOL)arg5;
+ (id)entryKeysForOperator:(id)arg1;
+ (id)entryKeysForOperatorClass:(Class)arg1;
+ (id)entryKeysForOperatorName:(id)arg1;
+ (Class)operatorClassForEntryKey:(id)arg1;
+ (void)setupEntryObjectsForOperator:(id)arg1;
+ (void)setupEntryObjectsForOperatorClass:(Class)arg1;
+ (void)setupEntryObjectsForOperatorName:(id)arg1;
+ (struct _PLTimeIntervalRange { double x1; double x2; })timeIntervalRangeForEntryKey:(id)arg1;
+ (id)timeintervalRangeEntryKeyForEntryKey:(id)arg1 withTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2;
+ (id)wildCardForEntryKey:(id)arg1;

- (void).cxx_destruct;
- (id)baseEntryKey;
- (id)copyWithIsDynamic:(BOOL)arg1;
- (id)copyWithTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (id)copyWithWildCardName:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)entryKey;
- (id)entryName;
- (id)entryType;
- (id)initWithOperatorName:(id)arg1 withEntryType:(id)arg2 withEntryName:(id)arg3;
- (BOOL)isDynamic;
- (id)operatorName;
- (void)setBaseEntryKey:(id)arg1;
- (void)setIsDynamic:(BOOL)arg1;
- (void)setTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (void)setWildCardName:(id)arg1;
- (struct _PLTimeIntervalRange { double x1; double x2; })timeIntervalRange;
- (id)wildCardName;

@end
