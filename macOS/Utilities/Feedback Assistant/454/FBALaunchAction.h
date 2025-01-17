//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSSet, NSString, NSURL, _TtC18Feedback_Assistant17FBACustomBehavior;

@interface FBALaunchAction : NSObject
{
    BOOL _shouldMakeFBAVisible;
    BOOL _shouldUndoMakeFBAVisible;
    NSString *_loginToken;
    NSString *_action;
    NSString *_bundleID;
    NSString *_currentBuild;
    NSNumber *_itemID;
    NSNumber *_ffuID;
    NSSet *_extensions;
    NSMutableDictionary *_attachments;
    NSURL *_url;
    NSString *_configurationToken;
    NSDictionary *_queryItemsFromURL;
    NSString *_shouldMakeVisibleFromURL;
    NSString *_isCaptiveFromURL;
    NSString *_shouldNotifyOnUploadFromURL;
    NSNumber *_bugformIDFromURL;
    NSDictionary *_questionAnswerPairsFromURL;
    _TtC18Feedback_Assistant17FBACustomBehavior *_customBehavior;
}

+ (id)fbaBundleIdentifier;
+ (id)mappingForBundleID:(id)arg1;
+ (id)actionWithURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC18Feedback_Assistant17FBACustomBehavior *customBehavior; // @synthesize customBehavior=_customBehavior;
@property(retain, nonatomic) NSDictionary *questionAnswerPairsFromURL; // @synthesize questionAnswerPairsFromURL=_questionAnswerPairsFromURL;
@property(retain, nonatomic) NSNumber *bugformIDFromURL; // @synthesize bugformIDFromURL=_bugformIDFromURL;
@property(retain, nonatomic) NSString *shouldNotifyOnUploadFromURL; // @synthesize shouldNotifyOnUploadFromURL=_shouldNotifyOnUploadFromURL;
@property(retain, nonatomic) NSString *isCaptiveFromURL; // @synthesize isCaptiveFromURL=_isCaptiveFromURL;
@property(retain, nonatomic) NSString *shouldMakeVisibleFromURL; // @synthesize shouldMakeVisibleFromURL=_shouldMakeVisibleFromURL;
@property(retain, nonatomic) NSDictionary *queryItemsFromURL; // @synthesize queryItemsFromURL=_queryItemsFromURL;
@property(readonly, nonatomic) NSString *configurationToken; // @synthesize configurationToken=_configurationToken;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableDictionary *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSSet *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) NSNumber *ffuID; // @synthesize ffuID=_ffuID;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(retain) NSString *currentBuild; // @synthesize currentBuild=_currentBuild;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) BOOL launchesDraft;
@property(readonly, nonatomic) BOOL shouldUndoMakeFBAVisible; // @synthesize shouldUndoMakeFBAVisible=_shouldUndoMakeFBAVisible;
@property(readonly, nonatomic) NSDictionary *questionAnswerPairs;
@property(readonly, nonatomic) NSNumber *bugFormID;
@property(readonly, nonatomic) BOOL shouldMakeFBAVisible; // @synthesize shouldMakeFBAVisible=_shouldMakeFBAVisible;
@property(readonly, nonatomic) BOOL shouldNotifyOnUpload;
@property(readonly, nonatomic) BOOL isCaptive;
- (id)description;
- (void)addCustomBehavior:(id)arg1;
- (BOOL)handlesLogin;
@property(readonly, nonatomic) NSString *loginToken; // @synthesize loginToken=_loginToken;
- (BOOL)isFFUAction;
- (id)initWithURL:(id)arg1;

@end

