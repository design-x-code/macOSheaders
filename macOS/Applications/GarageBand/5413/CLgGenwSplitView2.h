//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLgGenwSplitView.h"

@class CLgGenwSplitPartView_inspector, CLgGenwSplitPartView_mainView;

@interface CLgGenwSplitView2 : CLgGenwSplitView
{
    CLgGenwSplitPartView_inspector *splitPartView0;
    CLgGenwSplitPartView_mainView *splitPartView1;
    BOOL firstViewIsCollapsable;
    BOOL firstViewIsCollapsed;
    double firstViewWidth;
    double minFirstWidth;
    double maxFirstWidth;
    double minSecondWidth;
}

- (struct CGSize)windowWillResizeToSize1:(struct CGSize)arg1;
- (BOOL)dividerResizableForIndex:(long long)arg1;
- (struct CGRect)dividerFrameForIndex:(long long)arg1;
- (struct CGRect)splitPartViewFrameForIndex:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)dividerFrame0;
- (struct CGRect)splitPartViewFrame1;
- (struct CGRect)splitPartViewFrame0;
- (void)setCurrentInspectorWidth:(double)arg1;
- (void)setInspectorIsCollapsed:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (BOOL)expandInspector;
- (BOOL)collapseInspector;
- (double)currentInspectorWidth;
- (BOOL)inspectorIsCollapsed;
- (id)unilibInspectorView;
- (id)unilibMainView;
- (void)resetCursorRects;
- (void)resizeSubviews_local;
- (void)dealloc;
- (id)initGenwSplitViewWithFrame:(struct CGRect)arg1 genwLayoutCreator:(id)arg2 unilibDocManager:(id)arg3;

@end

