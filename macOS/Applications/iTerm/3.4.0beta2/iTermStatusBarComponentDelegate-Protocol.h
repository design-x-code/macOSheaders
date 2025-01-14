//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSFont, NSSet, NSString, iTermAction;

@protocol iTermStatusBarComponentDelegate <NSObject>
- (void)statusBarComponentResignFirstResponder:(id <iTermStatusBarComponent>)arg1;
- (void)statusBarComponentRevealActionsTool:(id <iTermStatusBarComponent>)arg1;
- (void)statusBarComponentPerformAction:(iTermAction *)arg1;
- (void)statusBarComponentOpenStatusBarPreferences:(id <iTermStatusBarComponent>)arg1;
- (void)statusBarComponent:(id <iTermStatusBarComponent>)arg1 writeString:(NSString *)arg2;
- (BOOL)statusBarComponentTerminalBackgroundColorIsDark:(id <iTermStatusBarComponent>)arg1;
- (NSFont *)statusBarComponentTerminalFont:(id <iTermStatusBarComponent>)arg1;
- (BOOL)statusBarComponentIsVisible:(id <iTermStatusBarComponent>)arg1;
- (NSColor *)statusBarComponentDefaultTextColor;
- (void)statusBarComponentPreferredSizeDidChange:(id <iTermStatusBarComponent>)arg1;
- (BOOL)statusBarComponentIsInSetupUI:(id <iTermStatusBarComponent>)arg1;
- (void)statusBarComponentKnobsDidChange:(id <iTermStatusBarComponent>)arg1 updatedKeys:(NSSet *)arg2;
@end

