//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSPopUpButton, NSString, NSTextField, NSUndoManager, NSView;

@interface menuItemManager : NSWindowController
{
    NSView *mainView;
    NSTextField *titleField;
    NSTextField *urlField;
    NSPopUpButton *itemTypeButton;
    NSPopUpButton *pageSelectionButton;
    NSPopUpButton *menuSelectionButton;
    NSButton *OpenInNewCheckBox;
    NSButton *saveButton;
    NSView *pageOptions;
    NSView *UrlOptions;
    NSView *dropdownOptions;
    NSString *itemType;
    NSString *targetPageIndex;
    NSString *itemURLPath;
    NSString *targetMenuIndex;
    NSUndoManager *itemManagerUndoManager;
}

- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)cancelButton:(id)arg1;
- (void)saveButton:(id)arg1;
- (void)selectCustomMenu:(id)arg1;
- (void)selectPage:(id)arg1;
- (void)setupItemTypeOptions:(_Bool)arg1;
- (void)setItemType:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)getBlocMenuIDs;
- (void)windowDidLoad;

@end

