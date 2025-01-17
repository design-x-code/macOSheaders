//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTouchBarDelegate.h"
#import "NSWindowDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class NSButton, NSDictionary, NSImage, NSMenu, NSMenuItem, NSPopover, NSString, NSTimer, NSToolbarItem, NSURLRequest, RWPage, RWPreviewSettingViewController, RWWebServer, WKWebView;

__attribute__((visibility("hidden")))
@interface RWPopoutPreviewWindowController : NSWindowController <WKUIDelegate, WKNavigationDelegate, NSWindowDelegate, NSTouchBarDelegate>
{
    BOOL _resetFrame;
    BOOL _autoRefresh;
    RWPage *_currentPreviewPage;
    NSDictionary *_initialConfiguration;
    WKWebView *_webView;
    RWWebServer *_webServer;
    NSURLRequest *_request;
    NSTimer *_timer;
    NSPopover *_settingsPopover;
    NSPopover *_zoomPopover;
    RWPreviewSettingViewController *_previewSettingViewController;
    unsigned long long _deviceType;
    unsigned long long _deviceOrientation;
    unsigned long long _userAgent;
    double _deviceScale;
    NSMenu *_previewMenu;
    NSMenuItem *_applyWindowLayoutMenu;
    NSButton *_deviceToolbarButton;
    NSToolbarItem *_deviceTypeToolbarItem;
    NSToolbarItem *_orientationToolbarItem;
    NSToolbarItem *_refreshToolbarItem;
    NSToolbarItem *_settingsToolbarItem;
    struct CGSize _deviceResolution;
}

+ (void)load;
+ (id)keyPathsForValuesAffectingRotateIcon;
+ (id)keyPathsForValuesAffectingCanRotateDevice;
+ (id)keyPathsForValuesAffectingDeviceIcon;
+ (id)keyPathsForValuesAffectingDeviceDescription;
@property __weak NSToolbarItem *settingsToolbarItem; // @synthesize settingsToolbarItem=_settingsToolbarItem;
@property __weak NSToolbarItem *refreshToolbarItem; // @synthesize refreshToolbarItem=_refreshToolbarItem;
@property __weak NSToolbarItem *orientationToolbarItem; // @synthesize orientationToolbarItem=_orientationToolbarItem;
@property __weak NSToolbarItem *deviceTypeToolbarItem; // @synthesize deviceTypeToolbarItem=_deviceTypeToolbarItem;
@property __weak NSButton *deviceToolbarButton; // @synthesize deviceToolbarButton=_deviceToolbarButton;
@property __weak NSMenuItem *applyWindowLayoutMenu; // @synthesize applyWindowLayoutMenu=_applyWindowLayoutMenu;
@property __weak NSMenu *previewMenu; // @synthesize previewMenu=_previewMenu;
@property(nonatomic) struct CGSize deviceResolution; // @synthesize deviceResolution=_deviceResolution;
@property(nonatomic) double deviceScale; // @synthesize deviceScale=_deviceScale;
@property(nonatomic) unsigned long long userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) RWPreviewSettingViewController *previewSettingViewController; // @synthesize previewSettingViewController=_previewSettingViewController;
@property(retain, nonatomic) NSPopover *zoomPopover; // @synthesize zoomPopover=_zoomPopover;
@property(retain, nonatomic) NSPopover *settingsPopover; // @synthesize settingsPopover=_settingsPopover;
@property(nonatomic) BOOL autoRefresh; // @synthesize autoRefresh=_autoRefresh;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) RWWebServer *webServer; // @synthesize webServer=_webServer;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) BOOL resetFrame; // @synthesize resetFrame=_resetFrame;
@property(retain, nonatomic) NSDictionary *initialConfiguration; // @synthesize initialConfiguration=_initialConfiguration;
@property(nonatomic) __weak RWPage *currentPreviewPage; // @synthesize currentPreviewPage=_currentPreviewPage;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)_disableDragDropUserScript;
- (void)_updateDeveloperToolsEnabledState;
- (void)_updateDeviceTypeTitle;
- (BOOL)browserIsAvailable:(id)arg1;
- (void)touchBarSetDevice:(id)arg1;
- (void)invalidateTouchBar;
- (id)deviceTouchBar;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (id)configuration;
- (void)openInBrowser:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)showMenu:(id)arg1;
- (void)forceUserAgent:(id)arg1;
- (void)resetZoom:(id)arg1;
- (void)showSettingPopup:(id)arg1;
- (void)rotateDevice:(id)arg1;
- (void)refresh:(id)arg1;
- (void)navigateForwards:(id)arg1;
- (void)navigateBackwards:(id)arg1;
- (void)switchToUserAgent:(unsigned long long)arg1;
- (void)switchToUserAgentForDevice:(unsigned long long)arg1;
- (BOOL)userAgentNeedsToChangeForDevice:(unsigned long long)arg1;
- (void)setWindowSize:(struct CGSize)arg1;
- (void)rotateDevice;
- (void)updateWindowSize;
- (void)updateWindowAspect;
- (void)resizeViewForCurrentDevice;
- (void)windowDidResize:(id)arg1;
@property(readonly, nonatomic) BOOL firefoxIsAvailable;
@property(readonly, nonatomic) BOOL chromeIsAvailable;
@property(readonly, nonatomic) BOOL safariIsAvailable;
@property(readonly, nonatomic) BOOL canScaleDevice;
@property(readonly, nonatomic) BOOL canRotateDevice;
@property(readonly, nonatomic) NSImage *rotateIcon;
@property(readonly, nonatomic) NSImage *deviceIcon;
@property(readonly, nonatomic) NSString *deviceDescription;
- (void)loadPage:(id)arg1;
- (void)loadExternalURL:(id)arg1;
- (void)_recreateWebView;
- (void)refreshWebView;
- (void)requestRefresh;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowWillClose:(id)arg1;
- (void)setupZoomPopover;
- (void)setupSettingsPopover;
- (void)setupToolbarItems;
- (void)windowDidLoad;
- (id)initWithDeviceType:(unsigned long long)arg1 orientation:(unsigned long long)arg2 resetFrame:(BOOL)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

