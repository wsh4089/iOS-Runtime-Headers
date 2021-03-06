/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSFeedback : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSString *_input;
    int _timestamp;
}

@property (nonatomic, readonly) NSString *input;
@property (nonatomic) int timestamp;
@property (nonatomic, readonly) NSString *type;

+ (id)JSONDictionaryForFeedbackArray:(id)arg1 enableFeedbackDebugLogging:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2;
- (id)input;
- (id)plist;
- (void)setTimestamp:(int)arg1;
- (int)timestamp;
- (id)type;
- (void)validate;

@end
