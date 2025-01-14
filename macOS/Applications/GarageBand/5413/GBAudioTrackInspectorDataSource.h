//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTrackInspectorDataSource.h"

@class NSNumber, NSString;

@interface GBAudioTrackInspectorDataSource : GBTrackInspectorDataSource
{
}

@property(readonly) BOOL isReverbSendBypassed;
@property(readonly) BOOL isEchoSendBypassed;
- (void)toggleReverbSendBypass;
- (void)toggleEchoSendBypass;
@property NSNumber *reverbSendLevel;
@property NSNumber *echoSendLevel;
@property(readonly) NSString *noiseGateLevelString;
@property NSNumber *noiseGateLevel;
@property(readonly) NSNumber *noiseGateBypassEnabled;
@property(readonly) NSNumber *noiseGateEnabled;
- (void)toggleNoiseGate;
@property(readonly) BOOL isNoiseGateBypassed;
- (void)toggleFeedbackProtection;
- (int)toggleInputMonitoring;
- (void)toggleMonoStereo;
- (void)toggleAutomaticLevelControl;
- (id)inputMenu;
- (void)inputMenuItemAction:(id)arg1;
@property NSNumber *recordLevel;
@property(readonly) NSNumber *recordLevelEnabled;

@end

