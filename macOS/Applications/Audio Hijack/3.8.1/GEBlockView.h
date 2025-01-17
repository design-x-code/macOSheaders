//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CAAnimationDelegate.h"

@class GEBlock, GEGraphController, GXPopover, GXSettingsView, NSMutableArray, NSString;

@interface GEBlockView : NSView <CAAnimationDelegate>
{
    GEGraphController *_controller;
    GEBlock *_block;
    NSString *_uuid;
    NSMutableArray *_edgeViews;
    GXSettingsView *_settingsView;
    GXPopover *_popover;
    BOOL _mouseDown;
    struct CGPoint _framePosition;
    BOOL _drawnEnabled;
    NSString *_drawnTitle;
    BOOL _drawnErrored;
    int _drawnSelected;
    BOOL _tallTitle;
    BOOL _initialDrag;
}

@property(retain, nonatomic) NSString *drawnTitle; // @synthesize drawnTitle=_drawnTitle;
@property(readonly, nonatomic) GXSettingsView *settingsView; // @synthesize settingsView=_settingsView;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) GEBlock *block; // @synthesize block=_block;
@property(nonatomic) GEGraphController *controller; // @synthesize controller=_controller;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)raAccessibilityHelp;
- (id)raAccessibilityDescription;
- (id)raAccessibilityTitle;
- (id)accessibilityAttributeNames;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)_voiceoverIsRunning;
- (void)_toggleGenericUI:(id)arg1;
- (void)deleteSelf:(id)arg1;
- (void)_toggleEnabled:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateForInitialDrag:(BOOL)arg1;
- (void)handleClick;
- (void)dragEnded;
- (void)dragMoved:(struct CGPoint)arg1;
- (void)dragStarted;
- (void)pinPopoverOpen:(id)arg1;
- (void)destroyPopover;
- (void)reopenPopover:(BOOL)arg1;
- (BOOL)canHavePopover;
- (id)popover;
- (void)animateRiseOrFall:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct CGPoint)_tossVelocity;
- (BOOL)_shouldAnimate;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawSmallSize;
- (void)_drawFullSize;
- (id)_stylesForCurrentState;
- (void)_drawSelectionPath;
- (void)wasRemovedAndAnimate:(BOOL)arg1;
- (void)wasAddedWithBlock:(id)arg1;
- (void)updateTitle;
- (void)raUpdate;
- (id)_edgeFromBlockView:(id)arg1;
- (id)edgeViews;
- (void)setFramePosition:(struct CGPoint)arg1;
- (struct CGPoint)framePosition;
- (void)setFrameCenter:(struct CGPoint)arg1;
- (struct CGPoint)frameCenter;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

