//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WETNumberFormat : NSObject
{
}

+ (id)mapFormat:(id)arg1 formulaString:(id)arg2 nodeCount:(unsigned long long)arg3;
+ (id)mapNumberFormatWithCurrency:(id)arg1 accounting:(BOOL)arg2 thousandSeparator:(BOOL)arg3 decimalPlaces:(unsigned char)arg4 isPercent:(BOOL)arg5 negativeStyle:(int)arg6;
+ (id)mapCustomNumberFormat:(id)arg1;
+ (id)mapDateTimeFormat:(id)arg1;
+ (id)mapPercentFormat:(id)arg1 formulaString:(id *)arg2 nodeCount:(unsigned long long)arg3;
+ (id)mapNumberFormat:(id)arg1 isPercent:(BOOL)arg2;

@end

