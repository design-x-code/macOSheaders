//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSView, TMAInspectorPaneController;
@protocol TMATableInspectorDraggablePane;

@protocol TMATableInspectorPaneDragging <NSObject>
@property(readonly, nonatomic, getter=isDragging) BOOL dragging;
@property(readonly, nonatomic) TMAInspectorPaneController *draggedPane;
- (void)dragCanceled;
- (void)dragEndedRelativeToPaneView:(NSView<TMATableInspectorDraggablePane> *)arg1 before:(BOOL)arg2;
- (void)dragBeganWithPaneView:(NSView<TMATableInspectorDraggablePane> *)arg1;
@end

