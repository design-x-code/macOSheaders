//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableViewDelegate.h"

@class NSArray, NSIndexSet, NSPasteboard, NSString, NSTableColumn, NSTableView, SKTypeSelectHelper;

@protocol SKTableViewDelegate <NSTableViewDelegate>

@optional
- (void)tableView:(NSTableView *)arg1 typeSelectHelper:(SKTypeSelectHelper *)arg2 updateSearchString:(NSString *)arg3;
- (void)tableView:(NSTableView *)arg1 typeSelectHelper:(SKTypeSelectHelper *)arg2 didFailToFindMatchForSearchString:(NSString *)arg3;
- (NSArray *)tableView:(NSTableView *)arg1 typeSelectHelperSelectionStrings:(SKTypeSelectHelper *)arg2;
- (id <SKImageToolTipContext>)tableView:(NSTableView *)arg1 imageContextForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (BOOL)tableView:(NSTableView *)arg1 commandSelectRow:(long long)arg2;
- (void)tableViewMoveRight:(NSTableView *)arg1;
- (void)tableViewMoveLeft:(NSTableView *)arg1;
- (BOOL)tableView:(NSTableView *)arg1 canPasteFromPasteboard:(NSPasteboard *)arg2;
- (void)tableView:(NSTableView *)arg1 pasteFromPasteboard:(NSPasteboard *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 canCopyRowsWithIndexes:(NSIndexSet *)arg2;
- (void)tableView:(NSTableView *)arg1 copyRowsWithIndexes:(NSIndexSet *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 canDeleteRowsWithIndexes:(NSIndexSet *)arg2;
- (void)tableView:(NSTableView *)arg1 deleteRowsWithIndexes:(NSIndexSet *)arg2;
@end

