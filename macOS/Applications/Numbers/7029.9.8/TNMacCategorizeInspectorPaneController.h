//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TMAInspectorPaneGroupController.h>

#import "TMATableInspectorPaneDragging-Protocol.h"

@class NSArrayController, NSMutableArray, NSString, TMAInspectorPaneController, TMAScrollerInspectorPaneController, TMATableInspectorDraggablePaneContainerPaneController, TNMacCategorizeAddPaneController, TNMacCategorizeHeaderPaneController, TNMacCategorizeInstructionLabelPaneController, TSTTableEditor, TSTTableInfo;

@interface TNMacCategorizeInspectorPaneController : TMAInspectorPaneGroupController <TMATableInspectorPaneDragging>
{
    TMAInspectorPaneController *_draggedPane;
    NSArrayController *_tableInfosArrayController;
    TNMacCategorizeHeaderPaneController *_headerPaneController;
    TNMacCategorizeAddPaneController *_addPaneController;
    TMAScrollerInspectorPaneController *_scrollerPaneController;
    TNMacCategorizeInstructionLabelPaneController *_instructionLabelPaneController;
    TMATableInspectorDraggablePaneContainerPaneController *_ruleContainerController;
    NSMutableArray *_ruleControllers;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *ruleControllers; // @synthesize ruleControllers=_ruleControllers;
@property(retain) TMATableInspectorDraggablePaneContainerPaneController *ruleContainerController; // @synthesize ruleContainerController=_ruleContainerController;
@property(retain) TNMacCategorizeInstructionLabelPaneController *instructionLabelPaneController; // @synthesize instructionLabelPaneController=_instructionLabelPaneController;
@property(retain) TMAScrollerInspectorPaneController *scrollerPaneController; // @synthesize scrollerPaneController=_scrollerPaneController;
@property(retain) TNMacCategorizeAddPaneController *addPaneController; // @synthesize addPaneController=_addPaneController;
@property(retain) TNMacCategorizeHeaderPaneController *headerPaneController; // @synthesize headerPaneController=_headerPaneController;
@property(retain) NSArrayController *tableInfosArrayController; // @synthesize tableInfosArrayController=_tableInfosArrayController;
@property(retain, nonatomic) TMAInspectorPaneController *draggedPane; // @synthesize draggedPane=_draggedPane;
- (id)canvasEditor;
@property(readonly, nonatomic) TSTTableEditor *tableEditor;
- (void)dragCanceled;
- (void)dragEndedRelativeToPaneView:(id)arg1 before:(BOOL)arg2;
- (void)dragBeganWithPaneView:(id)arg1;
- (id)p_paneForPaneView:(id)arg1;
@property(readonly, nonatomic, getter=isDragging) BOOL dragging;
- (void)showCategoryColumn:(struct TSUChromeColumnIndex)arg1;
- (void)hideCategoryColumn:(struct TSUChromeColumnIndex)arg1;
- (BOOL)canHideCategoryColumn:(struct TSUChromeColumnIndex)arg1;
- (BOOL)canShowCategoryColumn:(struct TSUChromeColumnIndex)arg1;
- (void)changeGroupingTypeAtRuleIndex:(unsigned long long)arg1 groupingType:(int)arg2;
- (void)replaceCategoryAtIndex:(unsigned long long)arg1 oldColumnIndex:(struct TSUChromeColumnIndex)arg2 withColumnIndex:(struct TSUChromeColumnIndex)arg3 groupingType:(int)arg4;
- (void)deleteCategoryAtIndex:(unsigned long long)arg1;
- (void)addCategoryForColumn:(struct TSUChromeColumnIndex)arg1;
- (BOOL)categoriesAreEnabled;
- (BOOL)tableHasCategories;
- (void)toggleOffCategories;
- (void)toggleOnCategories;
- (void)p_categoryOrderChanged:(id)arg1;
- (void)p_rebuildCategoryControllersWithCategoryOrder:(id)arg1;
- (void)p_columnNamesChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)p_endObserving;
- (void)p_beginObserving;
- (id)menuItemsForColumns;
- (id)p_menuItemsForColumns;
@property(readonly, nonatomic) TSTTableInfo *currentTableInfo;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

