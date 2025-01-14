//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MAToolKit/MAKitView.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "TrackImportData_Delegate-Protocol.h"
#import "TrackImportView_Access-Protocol.h"
#import "hasTableViewMethod-Protocol.h"

@class LGMediaBrowserViewController, MAKitButton, MAKitSegmentedControl, MANinePartImageSet, MASpinningWheel, NSIndexSet, NSMutableArray, NSString, NSView, TrackImportData, TrackImportTableView;

@interface TrackImportView : MAKitView <NSTableViewDataSource, NSTableViewDelegate, hasTableViewMethod, TrackImportView_Access, TrackImportData_Delegate>
{
    MAKitSegmentedControl *segmentedControl;
    TrackImportTableView *trackImportTableView;
    MAKitButton *addButton;
    MAKitButton *replaceButton;
    MAKitButton *importSettingsButton;
    MASpinningWheel *spinningWheel;
    TrackImportData *_tiData;
    NSIndexSet *_trackImportTableViewSelection;
    NSMutableArray *_tseqidHistory;
    NSView *_currentSubResponder;
    int _defaultColumns;
    BOOL _displayTableViewHeaderToolTips;
    NSMutableArray *_typeGlyphs;
    MANinePartImageSet *backgroundImage;
    LGMediaBrowserViewController *_mediaBrowserViewController;
}

@property LGMediaBrowserViewController *mediaBrowserViewController; // @synthesize mediaBrowserViewController=_mediaBrowserViewController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tiData:(id)arg2 LGMediaBrowserViewController:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstResponder;
- (void)addNotifications;
- (void)handle_UM_TRACKSEL:(id)arg1;
- (void)tableViewDoubleClickAction:(id)arg1;
- (void)tableViewClickAction:(id)arg1;
- (void)addKeyCommand;
- (BOOL)navigateIntoFolderAtRow:(long long)arg1;
- (void)setCheckboxesSelected:(BOOL)arg1 forRowIndexes:(id)arg2;
- (void)showSpinningWheel:(BOOL)arg1;
- (int)navigateUp;
- (BOOL)trackImportArrangeDrop:(id)arg1 destinationTrack:(struct TPosOneBasedTrackNr)arg2 replace:(BOOL)arg3;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)isCheckboxColumn:(id)arg1 row:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateGUI;
- (void)updateGUI_justData;
- (void)updateGUIandScrollRowToVisible:(long long)arg1;
- (void)updateReplaceAndAddButtons;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setupGUI;
- (void)quickLookMenuItemAction:(id)arg1;
- (id)tableView;
- (void)tableViewHeaderMenuResetAction:(id)arg1;
- (void)tableViewHeaderMenu:(id)arg1 setState:(long long)arg2 tag:(long long)arg3;
- (void)tableViewHeaderMenuAction:(id)arg1;
- (void)setTableViewColumnsVisibility;
- (void)setTableViewColumnsRemoveAll;
- (void)setNotesTableViewColumnVisible:(BOOL)arg1;
- (void)setAutomationTableViewColumnVisible:(BOOL)arg1;
- (void)setKeepBusNumbersTableViewColumnVisible:(BOOL)arg1;
- (void)setIOTableViewColumnVisible:(BOOL)arg1;
- (void)setSendsTableViewColumnVisible:(BOOL)arg1;
- (void)setPlugInsTableViewColumnVisible:(BOOL)arg1;
- (void)setContentTableViewColumnVisible:(BOOL)arg1;
- (void)setTypeTableViewColumnVisible:(BOOL)arg1;
- (void)setNameTableViewColumnVisible:(BOOL)arg1;
- (void)setNrTableViewColumnVisible:(BOOL)arg1;
- (void)sortTableViewColumns;
- (void)saveTableViewColumnWidths;
- (void)setColumnWidth:(float)arg1 toUserDefaultsWithIdentifier:(id)arg2;
- (float)columnWidthFromUserDefaultsWithIdentifier:(id)arg1 defaultWidth:(float)arg2;
- (void)deleteAllColumnWidthsFromUserDefaults;
- (void)addTableViewHeaderMenu:(id)arg1 menuItemWithTitle:(id)arg2 action:(SEL)arg3 state:(long long)arg4 tag:(long long)arg5;
- (void)filterSegmentedControlAction:(id)arg1;
- (int)setFilter:(int)arg1 previousFilter:(int)arg2;
- (void)simpleNibPanelWasClosedWithValues:(id)arg1;
- (void)importSettingsButtonAction:(id)arg1;
- (void)replaceButtonAction:(id)arg1;
- (void)addButtonAction:(id)arg1;
- (struct TPosOneBasedTrackNr)selectedTrackInArrange;
- (void)uncheckInvisibleImportOptions;
- (void)uncheckAllImportOptions;
- (id)imageForChannelMode:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

