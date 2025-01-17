//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import "HOBaseControllerDelegate-Protocol.h"
#import "HOSideBarDelegate-Protocol.h"
#import "HOSideBarSelectionChangeDelegate-Protocol.h"
#import "HUVendsDashboardNavigator-Protocol.h"
#import "UISplitViewControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class HOAppNavigator, HOBaseController, HOMainTabBarController, HOSideBarViewController, HUDashboardNavigationBar, HUSideBarWindowToolbarManager, NSMutableDictionary, NSString, UINavigationController;
@protocol HUDashboardNavigator;

@interface HOSplitViewController : UISplitViewController <HOSideBarDelegate, UIViewControllerTransitioningDelegate, HOBaseControllerDelegate, HUVendsDashboardNavigator, UISplitViewControllerDelegate, HOSideBarSelectionChangeDelegate>
{
    BOOL _initialLoadCompleted;
    id <HUDashboardNavigator> dashboardNavigator;
    HOAppNavigator *_appNavigator;
    HOBaseController *_baseController;
    HUSideBarWindowToolbarManager *_sideBarWindowToolbarManager;
    HOSideBarViewController *_sideBarViewController;
    HOMainTabBarController *_tabBarController;
    UINavigationController *_primaryNavigationController;
    HUDashboardNavigationBar *_navBar;
    NSMutableDictionary *_tabClassToNavigationControllerMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tabClassToNavigationControllerMap; // @synthesize tabClassToNavigationControllerMap=_tabClassToNavigationControllerMap;
@property(nonatomic) BOOL initialLoadCompleted; // @synthesize initialLoadCompleted=_initialLoadCompleted;
@property(retain, nonatomic) HUDashboardNavigationBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UINavigationController *primaryNavigationController; // @synthesize primaryNavigationController=_primaryNavigationController;
@property(retain, nonatomic) HOMainTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) HOSideBarViewController *sideBarViewController; // @synthesize sideBarViewController=_sideBarViewController;
@property(retain, nonatomic) HUSideBarWindowToolbarManager *sideBarWindowToolbarManager; // @synthesize sideBarWindowToolbarManager=_sideBarWindowToolbarManager;
@property(retain, nonatomic) HOBaseController *baseController; // @synthesize baseController=_baseController;
@property(retain, nonatomic) HOAppNavigator *appNavigator; // @synthesize appNavigator=_appNavigator;
@property(retain, nonatomic) id <HUDashboardNavigator> dashboardNavigator; // @synthesize dashboardNavigator;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)switchToAutomationFromMenu;
- (void)switchToHomeFromMenu:(id)arg1;
- (void)switchToRoomFromMenu:(id)arg1;
- (void)showHomeForHomeSetting;
- (void)showRoomForRoomSetting:(id)arg1;
- (void)showAnotherRoomAfterRoomDeletion:(id)arg1;
- (void)newlyAddedRoomHasBeenShown:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (long long)splitViewController:(id)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
- (long long)splitViewController:(id)arg1 topColumnForCollapsingToProposedTopColumn:(long long)arg2;
- (id)navigationControllerFromMapWithClass:(Class)arg1;
- (id)_loadNavigationViewControllerForIdentifier:(id)arg1;
- (void)_initialLoad;
- (void)switchToRoom:(id)arg1;
- (void)switchToHomeForTabIdentifier:(id)arg1;
- (id)selectTabWithIdentifier:(id)arg1;
- (void)didLoadHome:(id)arg1;
- (void)setLoadingViewController:(id)arg1;
- (id)currentViewController;
- (void)didLoadLoadingViewController;
- (void)loadSideBarWithDisplayModeChangeAllowed:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

