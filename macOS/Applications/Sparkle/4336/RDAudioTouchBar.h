//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDTouchBarModule.h"

@class NSCustomTouchBarItem, NSImage;

@interface RDAudioTouchBar : RDTouchBarModule
{
    NSCustomTouchBarItem *_tbThemeSegmented;
    NSImage *_audioControlsDarkImage;
    NSImage *_audioControlsLightImage;
}

@property(retain, nonatomic) NSImage *audioControlsLightImage; // @synthesize audioControlsLightImage=_audioControlsLightImage;
@property(retain, nonatomic) NSImage *audioControlsDarkImage; // @synthesize audioControlsDarkImage=_audioControlsDarkImage;
@property(retain, nonatomic) NSCustomTouchBarItem *tbThemeSegmented; // @synthesize tbThemeSegmented=_tbThemeSegmented;
- (void).cxx_destruct;
- (void)changePlayerTheme:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)didChangeValueForProperty:(id)arg1;
- (id)customizationAllowedItemIdentifiers;
- (id)customizationRequiredItemIdentifiers;
- (id)defaultItemIdentifiers;
- (id)initWithTouchBarManager:(id)arg1;

@end

