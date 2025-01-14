//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray, NSOutlineView, NSTreeController, _TtC11Bartender_431DarkModeEnabledVisualEffectView;

@interface _TtC11Bartender_430MenuItemsPreferencesController : NSViewController
{
    // Error parsing type: , name: outlineView
    // Error parsing type: , name: treeController
    // Error parsing type: , name: darkModeView
    // Error parsing type: , name: bartenderManager
    // Error parsing type: , name: data
}

+ (id)preferencesTitle;
+ (BOOL)disabledWhenTrialEnded;
+ (id)preferencesIdentifier;
+ (id)preferencesIcon;
- (void).cxx_destruct;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (void)removeAppSettingsWithSender:(id)arg1;
- (void)refreshItemsWithSender:(id)arg1;
@property(nonatomic, retain) NSArray *data; // @synthesize data;
- (id)initWithCoder:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
@property(nonatomic) __weak _TtC11Bartender_431DarkModeEnabledVisualEffectView *darkModeView; // @synthesize darkModeView;
@property(nonatomic) __weak NSTreeController *treeController; // @synthesize treeController;
@property(nonatomic) __weak NSOutlineView *outlineView; // @synthesize outlineView;

@end

