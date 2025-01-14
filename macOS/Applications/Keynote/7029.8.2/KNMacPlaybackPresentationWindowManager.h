//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNMacPlaybackHelpWindowControllerDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class KNMacDocumentWindowController, KNMacPlaybackHelpWindowController, KNMacPlaybackPresentationController, KNMacPlaybackWindow, NSArray, NSString, NSWindowController;

@interface KNMacPlaybackPresentationWindowManager : NSObject <KNMacPlaybackHelpWindowControllerDelegate, NSWindowDelegate>
{
    KNMacPlaybackHelpWindowController *_helpWindowController;
    BOOL _helpWindowWasClosed;
    BOOL _showingModalPasswordDialog;
    BOOL _showingModalShowcastDialog;
    KNMacDocumentWindowController *_documentWindowController;
    KNMacPlaybackPresentationController *_presentationController;
    KNMacPlaybackWindow *_keyPlaybackWindow;
    NSWindowController *_primaryWindowController;
    NSArray *_secondaryWindowControllers;
    NSArray *_fadeAnimationWindows;
}

+ (BOOL)automaticallyNotifiesObserversOfHelpWindowVisible;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isShowingModalShowcastDialog) BOOL showingModalShowcastDialog; // @synthesize showingModalShowcastDialog=_showingModalShowcastDialog;
@property(readonly, nonatomic, getter=isShowingModalPasswordDialog) BOOL showingModalPasswordDialog; // @synthesize showingModalPasswordDialog=_showingModalPasswordDialog;
@property(readonly, nonatomic) NSArray *fadeAnimationWindows; // @synthesize fadeAnimationWindows=_fadeAnimationWindows;
@property(readonly, nonatomic) NSArray *secondaryWindowControllers; // @synthesize secondaryWindowControllers=_secondaryWindowControllers;
@property(readonly, nonatomic) NSWindowController *primaryWindowController; // @synthesize primaryWindowController=_primaryWindowController;
@property(retain, nonatomic) KNMacPlaybackWindow *keyPlaybackWindow; // @synthesize keyPlaybackWindow=_keyPlaybackWindow;
@property(readonly, nonatomic) __weak KNMacPlaybackPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(readonly, nonatomic) KNMacDocumentWindowController *documentWindowController; // @synthesize documentWindowController=_documentWindowController;
- (BOOL)p_isWindowedPlayback;
- (id)p_helpWindowParent;
- (void)helpWindowControllerHelpWindowWillClose:(id)arg1;
- (id)helpWindowController:(id)arg1 requiredScreenForProposedScreen:(id)arg2;
@property(nonatomic) BOOL helpWindowVisible;
- (void)closeHelpWindow;
- (void)toggleHelpWindowVisible;
- (unsigned long long)p_showcastViewerCount;
- (BOOL)showModalShowcastDialog;
- (BOOL)showModalPasswordDialog;
- (id)p_screenContainingFullScreenDocumentWindow;
@property(readonly, nonatomic) BOOL isCoveringFullScreenDocumentWindow;
- (void)fadeScreensOutAndInWithDuration:(double)arg1 excludeScreenContainingFullScreenDocumentWindow:(BOOL)arg2 waitUntilDone:(BOOL)arg3 performingBlockAfterFadingOut:(CDUnknownBlockType)arg4 afterFadingIn:(CDUnknownBlockType)arg5;
- (void)fadeScreensOutAndInWithDuration:(double)arg1 waitUntilDone:(BOOL)arg2 performingBlockAfterFadingOut:(CDUnknownBlockType)arg3 afterFadingIn:(CDUnknownBlockType)arg4;
- (void)p_invalidateFadeAnimationWindows;
- (id)p_makeFadeAnimationWindows;
- (void)setAllWindowsAlphaValue:(double)arg1;
- (void)orderAllWindowsFront:(id)arg1;
- (void)showAllWindows:(id)arg1;
- (void)enumerateWindowsThatCanBeHiddenDuringSuspendUsingBlock:(CDUnknownBlockType)arg1;
- (id)p_displayIdentfierForWindowController:(id)arg1;
- (id)p_allWindowControllers;
- (id)windowControllerForDisplayIdentifier:(id)arg1;
- (long long)p_keyPlaybackWindowLevel;
- (long long)p_nonKeyPlaybackWindowLevel;
- (unsigned long long)p_windowCollectionBehaviorForScreen:(id)arg1;
- (unsigned long long)p_playbackWindowCollectionBehaviorForScreen:(id)arg1 isWindowedPlayback:(BOOL)arg2;
- (id)p_newPlaybackWindowControllerWithScreen:(id)arg1 isWindowedPlayback:(BOOL)arg2;
- (void)p_removeWindowController:(id)arg1;
- (void)p_addWindowController:(id)arg1;
- (void)tearDownWindowControllers;
- (void)updateWindowControllersForCurrentScreens;
- (id)initWithDocumentWindowController:(id)arg1 presentationController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

