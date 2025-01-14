//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, SOExtensionFinder;

@interface SOExtensionManager : NSObject
{
    NSArray *_loadedExtensions;
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)arg1;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)arg1;
+ (id)internalExtensionsBundleIdentifiers;
+ (id)internalExtensionBundleIdentifier;
+ (BOOL)_isMatchedExtension:(id)arg1 forBundleIdentifier:(id)arg2;
+ (void)_sendNotificationsLoadedExtensions:(id)arg1 new:(id)arg2 removed:(id)arg3;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSArray *loadedExtensions; // @synthesize loadedExtensions=_loadedExtensions;
- (void).cxx_destruct;
- (void)_doEndMatchingExtensions;
- (void)_doBeginMatchingExtensions;
- (BOOL)isLoadedExtensionWithBundleIdentifer:(id)arg1;
- (id)loadedInternalExtension;
- (id)loadedExtensionWithBundleIdentifer:(id)arg1;
- (void)unloadExtensions;
- (id)_doLoadExtensions;
- (void)loadExtensions;
- (void)endMatchingExtensions;
- (void)beginMatchingExtensions;
- (id)loadInternalExtension;
- (id)loadExtensionWithBundleIdentifier:(id)arg1;
- (void)loadExtensionWithBundleIdentifer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

