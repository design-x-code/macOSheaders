//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class IOBluetoothDevice, NSButton, NSLevelIndicator, NSSecureTextField, NSSlider, NSString, NSTextField, NSToolbarItem, NSView, SFAuthorizationView;

__attribute__((visibility("hidden")))
@interface MGSettingsWindowController : NSWindowController <NSWindowDelegate>
{
    NSToolbarItem *_lastSelectedToolbarItem;
    NSToolbarItem *_toolbarItemGeneral;
    NSToolbarItem *_toolbarItemApp;
    NSView *_settingGeneralView;
    NSTextField *_infoLabel;
    NSButton *_btSelectDevice;
    NSView *_rssiView;
    NSTextField *_rssiThresholdValue;
    NSLevelIndicator *_rssiCurrentValueIndicator;
    NSSlider *_rssiThresholdSetSlider;
    NSSecureTextField *_tfMacPassword;
    SFAuthorizationView *_authorizationView;
    NSButton *_btStop;
    NSButton *_btSaveAndRestart;
    IOBluetoothDevice *_tmpSelectedDevice;
    NSView *_settingAppView;
    NSButton *_checkLoginItem;
    NSButton *_checkAutoStartMonitor;
}

@property __weak NSButton *checkAutoStartMonitor; // @synthesize checkAutoStartMonitor=_checkAutoStartMonitor;
@property __weak NSButton *checkLoginItem; // @synthesize checkLoginItem=_checkLoginItem;
@property(retain) NSView *settingAppView; // @synthesize settingAppView=_settingAppView;
@property(retain, nonatomic) IOBluetoothDevice *tmpSelectedDevice; // @synthesize tmpSelectedDevice=_tmpSelectedDevice;
@property __weak NSButton *btSaveAndRestart; // @synthesize btSaveAndRestart=_btSaveAndRestart;
@property __weak NSButton *btStop; // @synthesize btStop=_btStop;
@property __weak SFAuthorizationView *authorizationView; // @synthesize authorizationView=_authorizationView;
@property __weak NSSecureTextField *tfMacPassword; // @synthesize tfMacPassword=_tfMacPassword;
@property __weak NSSlider *rssiThresholdSetSlider; // @synthesize rssiThresholdSetSlider=_rssiThresholdSetSlider;
@property __weak NSLevelIndicator *rssiCurrentValueIndicator; // @synthesize rssiCurrentValueIndicator=_rssiCurrentValueIndicator;
@property __weak NSTextField *rssiThresholdValue; // @synthesize rssiThresholdValue=_rssiThresholdValue;
@property __weak NSView *rssiView; // @synthesize rssiView=_rssiView;
@property __weak NSButton *btSelectDevice; // @synthesize btSelectDevice=_btSelectDevice;
@property __weak NSTextField *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain) NSView *settingGeneralView; // @synthesize settingGeneralView=_settingGeneralView;
@property __weak NSToolbarItem *toolbarItemApp; // @synthesize toolbarItemApp=_toolbarItemApp;
@property __weak NSToolbarItem *toolbarItemGeneral; // @synthesize toolbarItemGeneral=_toolbarItemGeneral;
@property __weak NSToolbarItem *lastSelectedToolbarItem; // @synthesize lastSelectedToolbarItem=_lastSelectedToolbarItem;
- (void).cxx_destruct;
- (void)authorizationViewDidDeauthorize:(id)arg1;
- (void)authorizationViewDidAuthorize:(id)arg1;
- (void)clickCheckAutoStartMonitor:(id)arg1;
- (BOOL)userLoginItemEnabled;
- (void)clickCheckLoginItem:(id)arg1;
- (void)saveAndRestart:(id)arg1;
- (void)stop:(id)arg1;
- (void)changeSlider:(id)arg1;
- (void)didClickSelectDevice:(id)arg1;
- (void)clickTabSettingApp:(id)arg1;
- (void)clickTabSettingGeneral:(id)arg1;
- (void)switchToTabView:(id)arg1 withAnimation:(BOOL)arg2;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

