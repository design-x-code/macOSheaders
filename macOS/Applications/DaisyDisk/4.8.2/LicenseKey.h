//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LicenseKey : NSObject
{
    NSString *_customerName;
    NSString *_registrationKey;
}

+ (id)provideLicensePathPortableHidden:(BOOL)arg1;
+ (id)provideLicensePathGlobal:(BOOL)arg1 shouldCreate:(BOOL)arg2;
+ (void)postDidUpdateNotification;
+ (void)postDidSaveNotification;
+ (void)resetSavedToDisk:(BOOL)arg1;
+ (id)licenseKeyFromDraggingInfo:(id)arg1;
+ (id)licenseKeyFromDisk;
+ (id)licenseKeyFromDiskOutIsPortable:(char *)arg1;
+ (id)licenseKeyFromPath:(id)arg1;
+ (id)licenseKeyFromCustomerName:(id)arg1 registrationKey:(id)arg2;
@property(retain, nonatomic) NSString *registrationKey; // @synthesize registrationKey=_registrationKey;
@property(retain, nonatomic) NSString *customerName; // @synthesize customerName=_customerName;
- (void)saveToDisk;
- (void)dealloc;

@end

