//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTrackInspectorDataSource.h"

@interface GBRemixFXInspectorDataSource : GBTrackInspectorDataSource
{
}

+ (void)initialize;
- (id)settingsMenu;
- (void)settingsMenuItemAction:(id)arg1;
- (void)localMenuItemAction:(id)arg1;
- (void)toggleIsBypassed;
@property(readonly) BOOL isBypassed;
@property(readonly) BOOL isEnabled;
- (struct AUDIOPLUGIN *)getFX;

@end

