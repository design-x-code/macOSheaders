//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class NSString;

@interface AppDelegateShim : NSObject <NSApplicationDelegate, NSMenuDelegate>
{
    struct ITApplicationMac *_application;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)_menu:(id)arg1 hasEnabledMenuItemForCommand:(unsigned int)arg2;
- (id)applicationDockMenu:(id)arg1;
- (void)accessibilityDisplayOptionsDidChangeNotification:(id)arg1;
- (void)refreshParentalPrefs;
- (void)parentalPrefsDidChange:(id)arg1;
- (void)homeSharingDisabled:(id)arg1;
- (void)homeSharingEnabled:(id)arg1;
- (void)managedProfileDidChange:(id)arg1;
- (void)systemTimeChanged:(id)arg1;
- (void)applicationDidTerminate:(id)arg1;
- (void)applicationDidLaunch:(id)arg1;
- (void)userSessionDeactivated:(id)arg1;
- (void)userSessionActivated:(id)arg1;
- (void)applicationDidChangeOcclusionState:(id)arg1;
- (void)applicationDidChangeScreenParameters:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidUnhide:(id)arg1;
- (void)applicationDidHide:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)setITCocoaApplication:(struct ITApplicationMac *)arg1;
- (void)handleSidebarIconSizeChanged:(id)arg1;
- (void)screenUnlocked:(id)arg1;
- (void)screenLocked:(id)arg1;
- (void)screenSaverDeactivated:(id)arg1;
- (void)screenSaverActivated:(id)arg1;
- (void)activeSpaceChanged:(id)arg1;
- (void)handleASDSubscriptionStatusChangedTV:(id)arg1;
- (void)handleASDSubscriptionStatusChangedMusic:(id)arg1;
- (void)handleControlTintChanged:(id)arg1;
- (void)handleScrollerStyleChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

