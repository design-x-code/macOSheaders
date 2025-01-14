//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioDSPManager/NSCopying-Protocol.h>
#import <AudioDSPManager/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SystemStateManager : NSObject <NSSecureCoding, NSCopying>
{
    struct unordered_map<unsigned int, id<dspd_ConfigurationChangeRequest>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<dspd_ConfigurationChangeRequest>>>> _requestStateMap;
    struct unordered_map<unsigned int, id<dspd_ConfigurationChangeRequest>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<dspd_ConfigurationChangeRequest>>>> _negotiationMap;
    unsigned long long _systemState;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long systemState; // @synthesize systemState=_systemState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *adaptedChangeRequests; // @dynamic adaptedChangeRequests;
@property(readonly, nonatomic) NSArray *negotiatedChangeRequests; // @dynamic negotiatedChangeRequests;
@property(readonly, nonatomic) NSArray *allChangeRequests; // @dynamic allChangeRequests;
- (_Bool)finishNegotiateAdaptCycle:(id *)arg1;
- (void)applyAdaptTransaction:(id)arg1;
- (id)createAdaptTransactionWithRequests:(id)arg1 error:(id *)arg2;
- (void)applyNegotiateTransaction:(id)arg1;
- (id)createNegotiateTransactionWithRequests:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

