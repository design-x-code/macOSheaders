//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUICatalog, CUIMutableCatalog, NSBundle, NSMapTable, NSString, UITraitCollection, _UICache;

@interface _UIAssetManager : NSObject
{
    _UICache *_imageCache;
    CUICatalog *_catalog;
    NSString *_assetManagerName;
    long long _preferredIdiom;
    double _preferredScale;
    unsigned long long _preferredIdiomSubtype;
    long long _preferredGamut;
    long long _preferredLayoutDirectionTrait;
    NSBundle *_bundle;
    NSMapTable *_assetMap;
    CUIMutableCatalog *_runtimeCatalog;
    struct os_unfair_lock_s _runtimeCatalogCreationLock;
    UITraitCollection *_preferredTraitCollection;
    BOOL _isStarkAssetManager;
    BOOL _isStandaloneAssetManager;
    struct os_unfair_lock_s _assetMapLock;
    BOOL _managingUIKitAssets;
    _UIAssetManager *_nextAssetManager;
}

+ (BOOL)_validStackImageData:(id)arg1;
+ (BOOL)validStackImageFile:(id)arg1;
+ (double)_watchScreenScale;
+ (void)_clearAllCachedImagesAndAssets;
+ (void)_dropResourceReferencesForURL:(id)arg1;
+ (void)clearSharedRuntimeAssetMapForUnitTests;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 fromFilesInBundle:(id)arg2;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 inAssetManager:(id)arg2;
+ (id)sharedRuntimeAssetMap;
+ (id)sharedRuntimeCatalog;
+ (long long)_userInterfaceIdiomForDeviceClass:(unsigned long long)arg1;
+ (void)_convertTraitCollection:(id)arg1 toCUIScale:(double *)arg2 CUIIdiom:(long long *)arg3 UIKitIdiom:(long long *)arg4 UIKitUserInterfaceStyle:(long long *)arg5 subtype:(unsigned long long *)arg6 CUIDisplayGamut:(long long *)arg7 UIKitLayoutDirection:(long long *)arg8 CUILayoutDirection:(unsigned long long *)arg9;
+ (id)newAssetNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)assetManagerForBundle:(id)arg1;
+ (void)_saveAssetManager:(id)arg1 forBundle:(id)arg2 lock:(BOOL)arg3;
+ (id)_assetManagerCache;
@property(readonly, nonatomic, getter=_managingUIKitAssets) BOOL managingUIKitAssets; // @synthesize managingUIKitAssets=_managingUIKitAssets;
@property(retain, nonatomic) UITraitCollection *preferredTraitCollection; // @synthesize preferredTraitCollection=_preferredTraitCollection;
@property(nonatomic) double preferredScale; // @synthesize preferredScale=_preferredScale;
@property(retain, nonatomic) _UIAssetManager *nextAssetManager; // @synthesize nextAssetManager=_nextAssetManager;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)stackImageWithData:(id)arg1 forTraitCollection:(id)arg2;
- (id)stackImageWithContentsOfFile:(id)arg1 forTraitCollection:(id)arg2;
- (id)description;
- (void)_disconnectImageAssets;
- (BOOL)_imageBelongsToUIKit:(id)arg1;
- (void)_clearCachedResources;
- (void)_clearCachedResources:(id)arg1;
@property(readonly, nonatomic) CUIMutableCatalog *runtimeCatalog;
- (id)_assetForName:(id)arg1 shouldCreateWhenNotPresent:(BOOL)arg2;
- (id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 lock:(BOOL)arg3;
- (id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2;
- (id)_assetFromMapForName:(id)arg1 lock:(BOOL)arg2;
- (id)_assetFromMapForName:(id)arg1;
- (void)_performBlockWithAssetLock:(CDUnknownBlockType)arg1;
- (void)disableCacheFlushing;
@property(readonly, nonatomic) NSString *carFileName;
- (id)_catalog;
- (id)colorNamed:(id)arg1 withTraitCollection:(id)arg2;
- (id)dataNamed:(id)arg1;
- (id)imageNamed:(id)arg1 withTrait:(id)arg2;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 idiom:(long long)arg2;
- (id)imageNamed:(id)arg1 idiom:(long long)arg2 subtype:(unsigned long long)arg3;
- (id)imageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4;
- (id)imageNamed:(id)arg1 scale:(double)arg2 gamut:(long long)arg3 layoutDirection:(long long)arg4 idiom:(long long)arg5 userInterfaceStyle:(long long)arg6 subtype:(unsigned long long)arg7 cachingOptions:(unsigned long long)arg8 sizeClassPair:(CDStruct_d58201db)arg9 attachCatalogImage:(BOOL)arg10;
- (id)_starkAssetManager;
- (void)dealloc;
- (id)initManagerWithoutCatalogWithName:(id)arg1;
- (id)initWithURL:(id)arg1 idiom:(long long)arg2 error:(id *)arg3;
- (id)_initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 lock:(BOOL)arg4 allowMissingCatalog:(BOOL)arg5;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3;

@end

