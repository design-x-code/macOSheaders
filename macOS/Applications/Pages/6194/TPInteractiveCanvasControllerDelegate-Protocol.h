//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSAInteractiveCanvasControllerDelegate-Protocol.h"

@class NSArray, TPDocumentRoot, TPHeaderFooterEditor, TPInteractiveCanvasController, TSDRep, TSKSelectionPath;
@protocol TPAlternativePageInfosSource;

@protocol TPInteractiveCanvasControllerDelegate <TSAInteractiveCanvasControllerDelegate>
@property(nonatomic, getter=rulersVisible) BOOL rulersVisible;
@property(readonly, nonatomic) unsigned long long currentPageTemplateIndex;
@property(readonly, nonatomic) BOOL isEditingPageTemplates;
@property(readonly, nonatomic) double defaultViewScale;
@property(readonly, nonatomic) TPDocumentRoot *documentRoot;
- (BOOL)interactiveCanvasControllerShouldMaintainVisibleSelectionOnSetViewScale:(TPInteractiveCanvasController *)arg1;
- (void)didHideCommentsForInteractiveCanvasController:(TPInteractiveCanvasController *)arg1;
- (void)showPageTemplatePreviewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (BOOL)permitsTwoUpView;

@optional
- (void)headerFooterEditor:(TPHeaderFooterEditor *)arg1 couldNotHandleInsertionOfDrawables:(NSArray *)arg2;
- (void)interactiveCanvasController:(TPInteractiveCanvasController *)arg1 didEnableCenteredSinglePageMode:(BOOL)arg2;
- (id <TPAlternativePageInfosSource>)alternativePageInfosSource;
- (void)didSetSelectionPath:(TSKSelectionPath *)arg1 withInteractiveCanvasController:(TPInteractiveCanvasController *)arg2;
- (void)willScrollWithInteractiveCanvasController:(TPInteractiveCanvasController *)arg1;
- (void)willSetViewScaleWithInteractiveCanvasController:(TPInteractiveCanvasController *)arg1;
- (void)didBeginEditingRep:(TSDRep *)arg1;
- (void)willBeginEditingRep:(TSDRep *)arg1;
- (void)toggleRulerVisibility;
@end

