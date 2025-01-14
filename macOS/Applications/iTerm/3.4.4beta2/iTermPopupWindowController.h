//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSMutableString, NSString, NSTableView, NSTextField, NSTimer, NSView, PopupModel;

@interface iTermPopupWindowController : NSWindowController
{
    NSTableView *tableView_;
    PopupModel *model_;
    PopupModel *unfilteredModel_;
    NSTimer *timer_;
    BOOL clearFilterOnNextKeyDown_;
    NSMutableString *substring_;
    BOOL onTop_;
    BOOL haveChangedSelection_;
    NSMutableString *selectionMainValue_;
    BOOL reloading_;
    NSString *footerString_;
    NSTextField *footerView_;
    NSView *_footerBackground;
    id <PopupDelegate> _delegate;
}

@property(nonatomic) id <PopupDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)footerString;
- (void)refresh;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (BOOL)_word:(id)arg1 matchesFilter:(id)arg2;
- (id)shrunkToFitAttributedString:(id)arg1 inEntry:(id)arg2 baseAttributes:(id)arg3;
- (id)attributedStringForEntry:(id)arg1 isSelected:(BOOL)arg2;
- (id)truncatedMainValueForEntry:(id)arg1;
- (void)rowSelected:(id)arg1;
- (BOOL)passKeyEventToDelegateForSelector:(SEL)arg1 string:(id)arg2;
- (void)insertText:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)closePopupWindow;
- (void)cancel:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)setOnTop:(BOOL)arg1;
- (void)setPosition:(BOOL)arg1;
- (double)desiredHeight;
- (double)footerMargin;
- (void)_setClearFilterOnNextKeyDownFlag:(id)arg1;
- (int)convertIndex:(int)arg1;
- (void)reloadData:(BOOL)arg1;
- (void)onOpen;
- (void)onClose;
- (id)model;
- (id)unfilteredModel;
- (void)selectOutputOfLastCommand:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)copyWithStyles:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (id)allResponders;
- (BOOL)validateMenuItem:(id)arg1;
- (void)popWithDelegate:(id)arg1 inWindow:(id)arg2;
- (id)popupWindow;
- (BOOL)disableFocusFollowsMouse;
- (void)setTableView:(id)arg1;
- (void)shutdown;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1 tablePtr:(id *)arg2 model:(id)arg3;

@end

