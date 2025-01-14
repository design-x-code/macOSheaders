//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNKPFReading-Protocol.h"
#import "KNKPFWriting-Protocol.h"

@class KNKPFLayer, NSDictionary, NSMutableArray, NSString;

@interface KNKPFEvent : NSObject <KNKPFReading, KNKPFWriting>
{
    BOOL _automaticPlay;
    NSMutableArray *_effects;
    NSMutableArray *_hyperlinks;
    NSMutableArray *_accessibility;
    KNKPFLayer *_baseLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KNKPFLayer *baseLayer; // @synthesize baseLayer=_baseLayer;
@property(retain, nonatomic) NSMutableArray *accessibility; // @synthesize accessibility=_accessibility;
@property(readonly, nonatomic) NSMutableArray *hyperlinks; // @synthesize hyperlinks=_hyperlinks;
@property(readonly, nonatomic) NSMutableArray *effects; // @synthesize effects=_effects;
@property(nonatomic) BOOL automaticPlay; // @synthesize automaticPlay=_automaticPlay;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) BOOL wantsParentView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

