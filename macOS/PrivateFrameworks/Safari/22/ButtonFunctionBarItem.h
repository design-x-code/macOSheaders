//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCustomTouchBarItem.h"

@class NSButton;

__attribute__((visibility("hidden")))
@interface ButtonFunctionBarItem : NSCustomTouchBarItem
{
    NSButton *_button;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSButton *button; // @synthesize button=_button;
- (id)initWithCoder:(id)arg1;
- (void)setAccessibilityTitleAndCustomizationLabel:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 image:(id)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithIdentifier:(id)arg1 button:(id)arg2;
- (id)init;

@end

