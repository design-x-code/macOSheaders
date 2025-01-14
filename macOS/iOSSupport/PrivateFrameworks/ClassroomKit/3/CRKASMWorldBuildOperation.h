//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CRKASMRosterProviderConfiguration, NSArray, NSDictionary, NSSet;
@protocol CRKClassKitCurrentUser;

@interface CRKASMWorldBuildOperation : CATOperation
{
    CRKASMRosterProviderConfiguration *_configuration;
    id <CRKClassKitCurrentUser> _classKitCurrentUser;
    NSArray *_classKitClasses;
    NSDictionary *_classKitLocationsByLocationID;
    NSSet *_manageableLocationIDs;
    NSDictionary *_trustedClassKitPersonsByClassID;
}

+ (id)makeErrorWithErrorsByObjectID:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *trustedClassKitPersonsByClassID; // @synthesize trustedClassKitPersonsByClassID=_trustedClassKitPersonsByClassID;
@property(copy, nonatomic) NSSet *manageableLocationIDs; // @synthesize manageableLocationIDs=_manageableLocationIDs;
@property(copy, nonatomic) NSDictionary *classKitLocationsByLocationID; // @synthesize classKitLocationsByLocationID=_classKitLocationsByLocationID;
@property(retain, nonatomic) NSArray *classKitClasses; // @synthesize classKitClasses=_classKitClasses;
@property(retain, nonatomic) id <CRKClassKitCurrentUser> classKitCurrentUser; // @synthesize classKitCurrentUser=_classKitCurrentUser;
@property(readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)compileResult;
- (id)makeHousekeeperWithRoster:(id)arg1;
- (void)housekeepKeychainWithRoster:(id)arg1;
- (void)housekeepKeychain;
- (void)finishWithEmptyResultObject;
- (void)finish;
- (void)buildTrustedClassKitPersonsByClassID;
- (void)buildManageableLocationIDs;
- (void)buildClassKitLocationsByLocationID;
- (void)buildClassKitClasses;
- (void)buildCurrentClassKitUser;
- (void)checkAccountEligibility;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithConfiguration:(id)arg1;

@end

