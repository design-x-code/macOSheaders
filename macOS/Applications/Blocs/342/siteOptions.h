//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class NSButton, NSColorWell, NSImageView, NSMenu, NSMenuItem, NSPopUpButton, NSSegmentedControl, NSString, NSTabView, NSTableView, NSTextField, NSTouchBar, NSView, WKWebView, webFontMenu;

@interface siteOptions : NSWindowController <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler>
{
    NSTabView *mainTabView;
    NSTextField *siteWebAddressField;
    NSTextField *siteWidthField;
    NSTextField *disqusShortnameField;
    NSPopUpButton *siteWidthValButton;
    NSImageView *faviconImageFrame;
    NSTextField *faviconNameLabel;
    NSTextField *faviconSizeLabel;
    NSButton *clearFaviconBtn;
    NSImageView *logoImageFrame;
    NSView *logoThumbSVGView;
    WKWebView *logoThumbWebView;
    NSTextField *logoNameLabel;
    NSTextField *logoSizeLabel;
    NSButton *clearLogoBtn;
    NSTextField *googleTracking;
    NSTextField *activeLinkClassField;
    NSPopUpButton *pageSelectionBtn;
    NSMenu *pageSelectionMenu;
    NSButton *sitemapCheck;
    NSButton *firstMenuButton;
    NSButton *textSettingsTab;
    NSButton *buttonSettingTab;
    NSButton *spinnerSettingTab;
    NSButton *analyticsSettingTab;
    NSButton *attachSettingTab;
    NSButton *exportSettingTab;
    NSButton *miscSettingTab;
    NSPopUpButton *cmsPopUpButton;
    NSColorWell *bgColorWell;
    NSTableView *projAttachmentsTable;
    NSSegmentedControl *textBreakPointControl;
    NSPopUpButton *fontTargetObjectButton;
    NSMenuItem *allTextMenuItem;
    NSButton *typefaceMenuButton;
    NSColorWell *textColorWell;
    NSButton *clearTextColour;
    NSTextField *fontSizeField;
    NSPopUpButton *fontSizeValueButton;
    NSTextField *fontHeightField;
    NSPopUpButton *fontHeightValueButton;
    NSSegmentedControl *textDirectionControl;
    NSButton *enableGoogleFontsCheck;
    NSPopUpButton *buttonCornerButton;
    NSPopUpButton *buttonSizeButton;
    NSPopUpButton *buttonStyleButton;
    NSButton *preLoaderCheckbox;
    NSPopUpButton *preloaderButton;
    NSMenu *preloaderMenu;
    NSImageView *preloaderPreview;
    NSButton *minifyHTMLCheck;
    NSButton *minifyStyleSheetCheck;
    NSButton *minifyBootstrapCheck;
    NSButton *minifyJqueryCheck;
    NSButton *minifyBlocsJSCheck;
    NSButton *minifyAnimateCheck;
    NSButton *cacheBustCheck;
    NSButton *lazyLoadCheck;
    NSButton *cleanURLCheck;
    NSButton *embedAssetsCheck;
    NSButton *layoutHelperCheckbox;
    NSButton *doneButton;
    NSPopUpButton *pageLangButton;
    NSMenu *langMenu;
    NSPopUpButton *pageExtBtn;
    NSMenu *pageExtMenu;
    NSTouchBar *touchBar;
    NSButton *wordpressOptBtn;
    NSButton *wpIncludeAdminBarCheck;
    NSButton *wpPageFeatureImageCheck;
    NSButton *wpPageGeneratoreCheck;
    NSImageView *themeThumbPreview;
    NSButton *clearThemeThumbBtn;
    NSTextField *themeThumbNameLabel;
    NSTextField *themeThumbSizeLabel;
    webFontMenu *webFontMenuController;
    NSButton *selectedMenuButton;
    BOOL _htmlVal;
    BOOL _stylesheetVal;
    BOOL _bootstrapVal;
    BOOL _jqueryVal;
    BOOL _blocsJSVal;
    BOOL _animateVal;
    BOOL _cacheBustVal;
    BOOL _lazyLoadVal;
    BOOL _cleanURLVal;
    BOOL _embedAssets;
    long long selectedTab;
}

@property BOOL embedAssets; // @synthesize embedAssets=_embedAssets;
@property BOOL cleanURLVal; // @synthesize cleanURLVal=_cleanURLVal;
@property BOOL lazyLoadVal; // @synthesize lazyLoadVal=_lazyLoadVal;
@property BOOL cacheBustVal; // @synthesize cacheBustVal=_cacheBustVal;
@property BOOL animateVal; // @synthesize animateVal=_animateVal;
@property BOOL blocsJSVal; // @synthesize blocsJSVal=_blocsJSVal;
@property BOOL jqueryVal; // @synthesize jqueryVal=_jqueryVal;
@property BOOL bootstrapVal; // @synthesize bootstrapVal=_bootstrapVal;
@property BOOL stylesheetVal; // @synthesize stylesheetVal=_stylesheetVal;
@property BOOL htmlVal; // @synthesize htmlVal=_htmlVal;
@property long long selectedTab; // @synthesize selectedTab;
- (void).cxx_destruct;
- (void)doneButton:(id)arg1;
- (void)populateLangMenu;
- (void)setWPCheckValue:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)removeAttachment:(id)arg1;
- (void)addAttachment:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)executeJS:(id)arg1 withWebView:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)setUpLogoSVGWebView;
- (void)setEmbedProjAssets:(id)arg1;
- (void)setProjectCMS:(id)arg1;
- (void)setSiteMap:(id)arg1;
- (void)addCustomPreloaderMenuItem;
- (void)processPreloaderChange:(id)arg1;
- (void)updatePreloaderViaFileDrop:(id)arg1;
- (void)selectPreloaderImage;
- (void)setPreloaderAnimation:(id)arg1;
- (void)enablePreLoaderOptions;
- (void)setUsePreLoader:(id)arg1;
- (void)populatePreloaderSettings;
- (void)updateExportSettings:(id)arg1;
- (void)populateExportSettings;
- (void)setUseLayoutHelperClasses:(id)arg1;
- (void)setEnableGoogleFonts:(id)arg1;
- (void)setTextWeightViaWebFont:(id)arg1;
- (void)setTypeFace:(id)arg1;
- (void)showFontMenu:(id)arg1;
- (void)clearClassRuleAlert:(id)arg1 type:(id)arg2;
- (void)clearTextColour;
- (void)setTextDirection:(id)arg1;
- (void)clearClassRule:(id)arg1;
- (void)setTextColour:(id)arg1;
- (void)setBGColour:(id)arg1;
- (void)setNewPageExt:(id)arg1;
- (void)changeLanguage:(id)arg1;
- (void)resetLogoToDefault:(id)arg1;
- (id)getImageSizeDetails:(id)arg1;
- (void)setLogoThumbNail:(id)arg1;
- (void)processLogoChange:(id)arg1;
- (void)updateLogoViaFileDrop:(id)arg1;
- (void)addImageToProjAssets:(id)arg1;
- (void)clearThemeThumb:(id)arg1;
- (void)processThemeThumbChange:(id)arg1;
- (void)updateThemeThumbViaFileDrop:(id)arg1;
- (void)updateThemeImage;
- (void)resetFaviconToDefault:(id)arg1;
- (void)processFavChange:(id)arg1;
- (void)updateFavViaFileDrop:(id)arg1;
- (void)updateFavAndLogo;
- (void)updateButtonCorner:(id)arg1;
- (void)updateButtonStyle:(id)arg1;
- (void)updateButtonSize:(id)arg1;
- (void)setSiteHomePage:(id)arg1;
- (void)measureSelectionChanged:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)updateSelectedItemData;
- (void)loadTextOptions;
- (void)textObjectSelectedChange:(id)arg1;
- (void)setActiveBreakPoint:(id)arg1;
- (void)setOptionTabTouchBar:(id)arg1;
- (void)setOptionTab:(id)arg1;
- (void)populateProjectOptions;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

