//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface KHHolidayStore : NSObject
{
    NSMutableDictionary *_holidaysCache;
    NSSet *_countryCodes;
    NSDictionary *_holidayCalendarURLStrings;
}

+ (id)_holidayTypesFromFile;
+ (id)_typeListForCountryWithCountryCode:(id)arg1;
@property(copy, nonatomic) NSDictionary *holidayCalendarURLStrings; // @synthesize holidayCalendarURLStrings=_holidayCalendarURLStrings;
@property(copy, nonatomic) NSSet *countryCodes; // @synthesize countryCodes=_countryCodes;
@property(retain, nonatomic) NSMutableDictionary *holidaysCache; // @synthesize holidaysCache=_holidaysCache;
- (void).cxx_destruct;
- (id)_fetchCalendarDataFromURL:(id)arg1;
- (id)_parseCalendarWithReferenceURL:(id)arg1 type:(unsigned long long)arg2 typeListForCountry:(id)arg3;
- (id)_holidaysCalendarURLForCountryWithCountryCode:(id)arg1;
- (id)holidaysForCountryWithCountryCode:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

@end

