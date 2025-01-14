//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, Notification, ServerCommunicationRequest;

@protocol EarforceRestReceiver <NSObject>

@optional
- (void)onNotificationDataReceived:(Notification *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinaryReleaseNote:(NSString *)arg1 andProductId:(int)arg2 withRequest:(ServerCommunicationRequest *)arg3;
- (void)onVoicePromptListReceived:(NSArray *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onPresetListReceived:(NSArray *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinaryPresetDataReceived:(NSData *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinaryVoicePromptDataReceived:(NSData *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinaryImageDataReceived:(NSData *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinaryVoicePromptInfoReceived:(NSDictionary *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onServerFirmwareVersionReceivedWithMajorVersion:(int)arg1 andMinorVersion:(int)arg2 andReleaseVersion:(int)arg3 withRequest:(ServerCommunicationRequest *)arg4;
- (void)onBinaryBluetoothEEPromDataReceived:(NSData *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinaryEEPromDataReceived:(NSData *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinarySecondFlashReceived:(NSData *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinaryExternalFlashReceived:(NSData *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
- (void)onBinaryFirmwareDataReceived:(NSData *)arg1 withRequest:(ServerCommunicationRequest *)arg2;
@end

