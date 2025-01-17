//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTSingleton.h"

@class ACAccount;

@interface MTAccountController : MTSingleton
{
    BOOL _hasFetchedInitialAccount;
    ACAccount *_activeAccount;
}

+ (void)openAccountsPanel;
+ (BOOL)iTunesAccountDidChangeForACAccountNotification:(id)arg1;
@property(retain) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
@property BOOL hasFetchedInitialAccount; // @synthesize hasFetchedInitialAccount=_hasFetchedInitialAccount;
- (void).cxx_destruct;
- (void)promptAccountAuthenticationWithReason:(id)arg1;
- (void)_updateActiveAccount;
- (id)_activeAccountBlocking;
- (void)didChangeStoreAccount:(id)arg1;
- (BOOL)activeAccountIsManagedAppleID;
- (BOOL)isUserLoggedIn;
- (id)activeFullName;
- (id)activeEmail;
- (id)activeStorefront;
- (id)activeDsid;
- (id)init;

@end

