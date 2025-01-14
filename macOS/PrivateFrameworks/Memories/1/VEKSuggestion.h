//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Memories/NSSecureCoding-Protocol.h>

@class PHAsset;

@interface VEKSuggestion : NSObject <NSSecureCoding>
{
    PHAsset *_asset;
    long long _usage;
    long long _volume;
    long long _specialTreatment;
    double _reorderTimeOffset;
}

@property(nonatomic) double reorderTimeOffset; // @synthesize reorderTimeOffset=_reorderTimeOffset;
@property(nonatomic) long long specialTreatment; // @synthesize specialTreatment=_specialTreatment;
@property(nonatomic) long long volume; // @synthesize volume=_volume;
@property(nonatomic) long long usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAsset:(id)arg1;

@end

