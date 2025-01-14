//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <SpotlightServices/QLSeamlessOpenerDelegate-Protocol.h>

@class LSApplicationProxy, NSArray, NSDate, NSNumber, NSString, NSURL, PRSRankingItem;
@protocol NSPasteboardWriting;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <QLSeamlessOpenerDelegate>
{
    unsigned long long _matchBits;
    BOOL _lastRestrictionStatus;
    BOOL _autoLaunch;
    BOOL _isFirstTopHit;
    BOOL _isAnyTopHit;
    BOOL _isShowAllInFinder;
    BOOL _isSynthetic;
    BOOL _isFolderQuery;
    BOOL _supportsSubView;
    BOOL _isUsed;
    BOOL _hasUsage;
    float _l2score;
    PRSRankingItem *_rankingItem;
    NSString *_relatedIdentifier;
    NSString *_uniqueIdentifier;
    NSNumber *_documentIdentifier;
    NSString *_displayName;
    NSURL *_fastLaunchURL;
    NSArray *_otherTypes;
    NSArray *_otherNames;
    NSDate *_lastUsedDate;
    NSString *_distinguishPathString;
    NSURL *_altPath;
    long long _dpos;
    NSString *_NLPConfidence;
    NSString *_NLPCategory;
    double _cep;
    NSString *_groupName;
    NSNumber *_groupId;
    long long _feedbackBlockId;
    // Error parsing type: T, name: _rank
}

+ (void)initialize;
@property BOOL hasUsage; // @synthesize hasUsage=_hasUsage;
@property(nonatomic) long long feedbackBlockId; // @synthesize feedbackBlockId=_feedbackBlockId;
@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property BOOL isUsed; // @synthesize isUsed=_isUsed;
@property(nonatomic) double cep; // @synthesize cep=_cep;
@property(retain) NSString *NLPCategory; // @synthesize NLPCategory=_NLPCategory;
@property(retain) NSString *NLPConfidence; // @synthesize NLPConfidence=_NLPConfidence;
@property(nonatomic) long long dpos; // @synthesize dpos=_dpos;
@property(retain) NSURL *altPath; // @synthesize altPath=_altPath;
@property BOOL supportsSubView; // @synthesize supportsSubView=_supportsSubView;
@property(nonatomic) float l2score; // @synthesize l2score=_l2score;
// Error parsing type for property rank:
// Property attributes: TT,N,V_rank

@property(retain) NSString *distinguishPathString; // @synthesize distinguishPathString=_distinguishPathString;
@property BOOL isFolderQuery; // @synthesize isFolderQuery=_isFolderQuery;
@property(readonly) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(readonly) NSArray *otherNames; // @synthesize otherNames=_otherNames;
@property(readonly) NSArray *otherTypes; // @synthesize otherTypes=_otherTypes;
@property(nonatomic) BOOL isSynthetic; // @synthesize isSynthetic=_isSynthetic;
@property(nonatomic) BOOL isShowAllInFinder; // @synthesize isShowAllInFinder=_isShowAllInFinder;
@property(nonatomic) BOOL isAnyTopHit; // @synthesize isAnyTopHit=_isAnyTopHit;
@property(nonatomic) BOOL isFirstTopHit; // @synthesize isFirstTopHit=_isFirstTopHit;
@property(getter=isAutoLaunch) BOOL autoLaunch; // @synthesize autoLaunch=_autoLaunch;
@property(readonly) NSURL *fastLaunchURL; // @synthesize fastLaunchURL=_fastLaunchURL;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSNumber *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property(readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) NSString *relatedIdentifier; // @synthesize relatedIdentifier=_relatedIdentifier;
@property(retain, nonatomic) PRSRankingItem *rankingItem; // @synthesize rankingItem=_rankingItem;
- (void).cxx_destruct;
- (void)prepareIcons;
- (void)setCategory:(id)arg1;
@property(readonly) NSString *category;
- (id)valueForAttribute:(id)arg1;
// Error parsing type for property score:
// Property attributes: TT,N

- (unsigned long long)matchQuality;
- (BOOL)isExactMatch;
- (BOOL)isPrefixMatch;
- (void)updateRenderOrEngagementCountsForKey:(id)arg1 date:(id)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL allowsCPRecording;
- (void)prepare;
- (id)initWithFastLaunchURL:(id)arg1 displayName:(id)arg2 contentType:(id)arg3;
- (id)initWithContentType:(id)arg1 displayName:(id)arg2;
- (id)initWithContentType:(id)arg1 displayName:(id)arg2 groupId:(id)arg3;
- (id)initWithResult:(id)arg1 groupId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <NSPasteboardWriting> pasteboardObject;
@property(readonly, nonatomic) NSURL *URL;
- (id)fastURL;
@property(readonly) NSString *filePath;
@property(readonly) LSApplicationProxy *appProxy;
- (void)cacheImage:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;
- (BOOL)isLocalResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

