/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDate : NSDate {
    NSDate *_date;
    NSTimeZone *_tz;
}

@property (nonatomic, readonly) NSDate *nsDate;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (id)dateWithNSDate:(id)arg1;

- (void).cxx_destruct;
- (int)dayOfCommonEra;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithNSDate:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)nsDate;
- (void)setTimeZone:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)timeZone;

@end
