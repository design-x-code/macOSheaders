//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeViewController.h"

#import "RouteDirectionsListController-Protocol.h"

@class DirectionsStepsListDataSource, NSString, NavigationDebugViewsController, Route, UIBarButtonItem, UITableView;
@protocol DirectionsStepsListDelegate, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface DirectionsStepsTableViewController : MapsThemeViewController <RouteDirectionsListController>
{
    UIBarButtonItem *_doneButtonItem;
    BOOL _debugViewControllerEnabled;
    BOOL _showsHeaderView;
    DirectionsStepsListDataSource *_dataSource;
    UITableView *_tableView;
    NavigationDebugViewsController *_debugViewsController;
}

+ (Class)dataSourceClass;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsHeaderView; // @synthesize showsHeaderView=_showsHeaderView;
@property(nonatomic) BOOL debugViewControllerEnabled; // @synthesize debugViewControllerEnabled=_debugViewControllerEnabled;
@property(retain, nonatomic) NavigationDebugViewsController *debugViewsController; // @synthesize debugViewsController=_debugViewsController;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) DirectionsStepsListDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateTheme;
- (BOOL)shouldShowDebugViewController;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;
- (id)routeStepForIndexPath:(id)arg1;
@property(nonatomic) __weak id <DirectionsStepsListDelegate> delegate;
@property(nonatomic) unsigned long long options;
@property(retain, nonatomic) Route *route;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

