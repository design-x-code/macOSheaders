//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FrankenBuddyManager, MBSleep, NSDictionary, NSMutableDictionary, NSString, NSViewController, SetupStateManager;
@protocol ViewNavigating;

@interface MacBuddyController : NSObject
{
    NSMutableDictionary *viewControllersByID;
    MBSleep *mbSleep;
    BOOL _isResumedSetupBuddy;
    BOOL _skippedTimeZonePane;
    BOOL _didRunFLO;
    SetupStateManager *_setupStateManager;
    FrankenBuddyManager *_macBuddyManager;
    unsigned long long _primaryBuddyType;
    unsigned long long _secondaryBuddyType;
    NSDictionary *_firstLoginParameters;
    NSString *_softwareUpdateIdentifier;
    NSString *_firstLoginContext;
    NSViewController<ViewNavigating> *_firstPaneViewController;
}

- (void).cxx_destruct;
@property BOOL didRunFLO; // @synthesize didRunFLO=_didRunFLO;
@property(retain) NSViewController<ViewNavigating> *firstPaneViewController; // @synthesize firstPaneViewController=_firstPaneViewController;
@property BOOL skippedTimeZonePane; // @synthesize skippedTimeZonePane=_skippedTimeZonePane;
@property(readonly) BOOL isResumedSetupBuddy; // @synthesize isResumedSetupBuddy=_isResumedSetupBuddy;
@property(retain) NSString *firstLoginContext; // @synthesize firstLoginContext=_firstLoginContext;
@property(readonly) NSString *softwareUpdateIdentifier; // @synthesize softwareUpdateIdentifier=_softwareUpdateIdentifier;
@property(retain) NSDictionary *firstLoginParameters; // @synthesize firstLoginParameters=_firstLoginParameters;
@property unsigned long long secondaryBuddyType; // @synthesize secondaryBuddyType=_secondaryBuddyType;
@property unsigned long long primaryBuddyType; // @synthesize primaryBuddyType=_primaryBuddyType;
@property(retain) FrankenBuddyManager *macBuddyManager; // @synthesize macBuddyManager=_macBuddyManager;
@property(retain) SetupStateManager *setupStateManager; // @synthesize setupStateManager=_setupStateManager;
- (BOOL)_hasFeature:(id)arg1;
- (void)postBuddyTasks;
- (id)_approprateFirstEOSRestorePane;
@property(readonly, copy) NSString *_appropriateiCloudStorageServicesPane;
@property(readonly, copy) NSString *_appropriatePostUserCreationNonCDPPane;
- (id)appropriatePostExpressSetupIdentifierAfterIdentifier:(id)arg1;
- (id)_approprateFirstNonFLOMiniBuddyPane;
@property(readonly, copy) NSString *_approprateFirstMiniBuddyPane;
@property(readonly, copy) NSString *_appropriateUserCreationPaneReverse;
@property(readonly, copy) NSString *_appropriateUserCreationPane;
@property(readonly, copy) NSString *_appropriatePostAccessibilityPane;
@property(readonly, copy) NSString *_appropriatePostKeyboardPane;
@property(readonly, copy) NSString *_choosePostiCloudPane;
@property(readonly, copy) NSString *_appropriatePostCountryPickerPane;
- (void)phase1Complete;
- (BOOL)shouldInitiallyEnableBackButtonForViewController:(id)arg1;
- (void)thirdAlternateViewControllerFrom:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)secondAlternateViewControllerFrom:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)alternateViewControllerFrom:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)previousViewControllerFrom:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)nextViewControllerFrom:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *firstStandardPaneIdentifier;
- (void)firstViewController:(CDUnknownBlockType)arg1;
- (void)processUserInputForViewControllerThirdAlternate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)processUserInputForViewControllerSecondAlternate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)processUserInputForViewControllerAlternate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)processUserInputForViewControllerBack:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)processUserInputForViewControllerNext:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)viewControllerForPaneIdentifier:(id)arg1;
- (id)initWithPrimaryBuddyType:(unsigned long long)arg1 secondaryBuddyType:(unsigned long long)arg2 firstLoginContext:(id)arg3 miniBuddyTargetUID:(unsigned int)arg4;
- (id)init;

@end

