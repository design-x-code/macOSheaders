//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSTimer, TLSnapZoneSet, TLTilePreviewWindow, Window;

@interface WindowManager : NSObject
{
    long long _state;
    unsigned long long _mouseUpAction;
    NSTimer *_timer;
    struct TLSnapZone *_currentSnapZone;
    Window *_currentWindow;
    TLTilePreviewWindow *_tilePreview;
    TLSnapZoneSet *_snapZones;
    NSMutableSet *_snappedWindows;
    struct __CFMachPort *_eventTap;
    struct __CFRunLoopSource *_eventRunLoop;
    unsigned long long _eventCount;
    BOOL _animationsEnabled;
    BOOL _snapToEdgesEnabled;
    BOOL _snapBackEnabled;
    unsigned long long _padding;
    long long _snapZonesActivationDelay;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) long long snapZonesActivationDelay; // @synthesize snapZonesActivationDelay=_snapZonesActivationDelay;
@property(nonatomic) BOOL snapBackEnabled; // @synthesize snapBackEnabled=_snapBackEnabled;
@property(nonatomic) BOOL snapToEdgesEnabled; // @synthesize snapToEdgesEnabled=_snapToEdgesEnabled;
@property(nonatomic) unsigned long long padding; // @synthesize padding=_padding;
@property(nonatomic) BOOL animationsEnabled; // @synthesize animationsEnabled=_animationsEnabled;
- (void)showTilePreview:(struct TLSnapZone *)arg1 onScreen:(id)arg2;
- (void)checkSnapZonesAndShowPreviewIfNeeded;
- (void)mouseUp:(struct __CGEvent *)arg1;
- (void)mouseDragged:(struct __CGEvent *)arg1;
- (void)mouseDown:(struct __CGEvent *)arg1;
- (void)handleEvent:(struct __CGEvent *)arg1;
- (BOOL)snapBackWindow:(id)arg1;
- (BOOL)undoWindow:(id)arg1;
- (BOOL)executeActionOnFocusedWindow:(unsigned long long)arg1;
@property(nonatomic) unsigned long long snapZonesThickness;
- (void)setAction:(unsigned long long)arg1 forSnapZonePosition:(unsigned long long)arg2;
- (void)clearSnapZones;
- (id)tilePreview;
- (void)createEventTap;
- (void)dealloc;
- (id)init;

@end

