//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSObject, NSString;

@protocol PTYWindow <NSObject>
@property(nonatomic) long long it_accessibilityResizing;
@property(nonatomic) BOOL it_becomingKey;
@property(nonatomic) long long it_openingSheet;
@property(readonly, nonatomic) BOOL isCompact;
@property(readonly, nonatomic) BOOL titleChangedRecently;
@property(readonly, nonatomic) id <PTYWindowDelegateProtocol> ptyDelegate;
@property(readonly, nonatomic) NSString *windowIdentifier;
@property(readonly, nonatomic, getter=isTogglingLionFullScreen) BOOL togglingLionFullScreen;
@property(readonly, nonatomic) int screenNumber;
- (void)it_setNeedsInvalidateShadow;
- (double)approximateFractionOccluded;
- (void)setRestoreState:(NSObject *)arg1;
- (void)disableBlur;
- (void)enableBlur:(double)arg1;
- (void)setLayoutDone;
- (void)smartLayout;
- (BOOL)it_terminalWindowUseMinimalStyle;
- (NSColor *)it_terminalWindowDecorationControlColor;
- (id <PSMTabStyle>)it_tabStyle;
- (NSColor *)it_terminalWindowDecorationTextColorForBackgroundColor:(NSColor *)arg1;
- (NSColor *)it_terminalWindowDecorationBackgroundColor;
@end

