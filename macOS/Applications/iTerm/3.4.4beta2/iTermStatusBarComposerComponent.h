//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermStatusBarBaseComponent.h"

#import "iTermsStatusBarComposerViewControllerDelegate.h"

@class NSString, iTermsStatusBarComposerViewController;

@interface iTermStatusBarComposerComponent : iTermStatusBarBaseComponent <iTermsStatusBarComposerViewControllerDelegate>
{
    iTermsStatusBarComposerViewController *_viewController;
    id <iTermStatusBarComposerComponentDelegate> _composerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <iTermStatusBarComposerComponentDelegate> composerDelegate; // @synthesize composerDelegate=_composerDelegate;
- (void)commandHistoryDidChange:(id)arg1;
- (void)statusBarComposerRevealComposer:(id)arg1;
- (void)statusBarComposerDidEndEditing:(id)arg1;
- (BOOL)statusBarComposerShouldForceDarkAppearance:(id)arg1;
- (id)statusBarComposerFont:(id)arg1;
- (id)statusBarComposerSuggestions:(id)arg1;
- (void)statusBarComposer:(id)arg1 sendCommand:(id)arg2;
- (void)statusBarDefaultTextColorDidChange;
- (id)statusBarTextColor;
- (void)updateForTerminalBackgroundColor;
- (void)statusBarTerminalBackgroundColorDidChange;
- (id)statusBarComponentView;
- (id)statusBarComponentIcon;
@property(copy, nonatomic) NSString *stringValue;
- (id)statusBarComponentVariableDependencies;
- (id)session;
- (id)viewController;
- (id)statusBarComponentExemplarWithBackgroundColor:(id)arg1 textColor:(id)arg2;
- (id)statusBarComponentDetailedDescription;
- (id)statusBarComponentShortDescription;
- (double)statusBarComponentMinimumWidth;
- (void)statusBarComponentSizeView:(id)arg1 toFitWidth:(double)arg2;
- (double)statusBarComponentPreferredWidth;
- (id)statusBarComponentKnobs;
- (void)makeFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

