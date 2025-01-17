//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GQDRoot.h"

@class GQDLSSimpleTreeNode, GQDSStylesheet;

@interface GQDLSDocument : GQDRoot
{
    GQDSStylesheet *mStylesheet;
    BOOL mIsOldAssetNameMapInitialized;
    struct __CFDictionary *mOldAssetNameMap;
    struct __CFArray *mSidebarCache;
    struct __CFArray *mWorkspaces;
    GQDLSSimpleTreeNode *mTablePrototypes;
    GQDLSSimpleTreeNode *mStyleBrowserModelRoot;
    struct __CFDictionary *mMetadata;
    struct __CFDictionary *mDocumentUserInfo;
}

+ (struct _xmlNs *)appNamespace;
+ (void)initialize;
- (void)initializeAppBundleResourcesUrl;
- (struct __CFURL *)newUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;
- (void)setSidebarCache:(id)arg1;
- (id)sidebarCache;
- (id)upgradedPathForAppResourcePath:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)dealloc;
- (struct __CFString *)newUpgradedAppBundleResourcePath:(struct __CFString *)arg1;
- (void)initializeOldAssetNameMap;
- (id)documentInfoValueForKey:(struct __CFString *)arg1;
- (void)setDocumentInfoValue:(id)arg1 forKey:(struct __CFString *)arg2;
- (struct __CFString *)metadataValueForKey:(struct __CFString *)arg1;
- (void)setMetadataValue:(struct __CFString *)arg1 forKey:(struct __CFString *)arg2;
- (void)addTablePrototype:(id)arg1;
- (id)prototypeModelRoot;
- (struct __CFArray *)prototypes;
- (id)styleBrowserModel;
- (struct __CFArray *)workspaces;
- (void)setWorkspaces:(struct __CFArray *)arg1;
- (void)addWorkspace:(id)arg1;
- (void)_processProtoTableForRoundtrip:(id)arg1;
- (void)_processProtoStyleForRoundtrip:(id)arg1;
- (void)_processProtoStylesheetForRoundtrip:(id)arg1;
- (id)initFromTSKDocumentRoot:(id)arg1 exporter:(id)arg2;
- (void)addDefaultStickyStyleFromTheme:(id)arg1 exporter:(id)arg2 paragraphStyle:(id)arg3 layoutStyle:(id)arg4;
- (char *)documentElementName;
- (void)encodeDocumentContentWithExporter:(id)arg1;
- (void)encodeNamespacesWithExporter:(id)arg1;

@end

