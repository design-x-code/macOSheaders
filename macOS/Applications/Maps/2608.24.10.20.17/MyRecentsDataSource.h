//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataSource.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol ShareDelegate;

__attribute__((visibility("hidden")))
@interface MyRecentsDataSource : DataSource <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_recentsContent;
    NSArray *_sections;
    BOOL _includeRecentSearches;
    id <ShareDelegate> _shareDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
- (id)shareContextualActionAtIndexPath:(id)arg1;
- (id)deleteContextualActionForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)shareRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearSectionAtIndex:(long long)arg1;
- (void)removeItemAtIndexPath:(id)arg1;
- (long long)indexOfItem:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (void)_buildContent;
- (void)_loadContent;
- (void)_recentsChanged;
- (id)initWithTableView:(id)arg1 updateLocation:(BOOL)arg2 includeRecentSearches:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

