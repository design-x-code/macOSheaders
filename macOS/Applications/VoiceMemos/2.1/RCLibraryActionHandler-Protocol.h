//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, RCRecordingDisplayModel, UIViewController;

@protocol RCLibraryActionHandler
- (double)currentTime;
- (void)mostRecentRecordingIsSelectable;
- (BOOL)isEditingInFlightForUUID:(NSString *)arg1;
- (void)changedEditingState:(BOOL)arg1 shouldStopPlayback:(BOOL)arg2;
- (void)hideBackButtonTitle:(BOOL)arg1;
- (void)libraryChangedToEmptyState:(BOOL)arg1;
- (BOOL)isPlayingForUUID:(NSString *)arg1;
- (BOOL)recordingTitleHasBeenEditedForUUID:(NSString *)arg1;
- (void)updateNavBarTitleAndDeleteButtonForRecordingsCount:(unsigned long long)arg1 isEditMode:(BOOL)arg2;
- (void)updateBottomLayoutForEditMode:(BOOL)arg1;
- (void)performClearAllRecentlyDeleted;
- (void)refreshDisplayWithDisplayModel:(RCRecordingDisplayModel *)arg1;
- (void)performRenameWithNewTitle:(NSString *)arg1 forUUID:(NSString *)arg2;
- (void)performAction:(long long)arg1 atPosition:(double)arg2 forUUID:(NSString *)arg3 sourceController:(UIViewController *)arg4 source:(id)arg5;
- (void)setUUIDToSelectAfterDismiss:(NSString *)arg1;
- (void)wasDeselectedForUUID:(NSString *)arg1;
- (void)didSelectForUUID:(NSString *)arg1 resetPosition:(BOOL)arg2 force:(BOOL)arg3;
@end

