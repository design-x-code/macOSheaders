//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GQDRoot.h"

@class GQDSStylesheet, NSMutableDictionary;

@interface GQDSLBaseDocument : GQDRoot
{
    GQDSStylesheet *_stylesheet;
    NSMutableDictionary *_metadataInfo;
    NSMutableDictionary *_documentInfo;
}

+ (struct _xmlNs *)appNamespace;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *documentInfo; // @synthesize documentInfo=_documentInfo;
@property(retain, nonatomic) NSMutableDictionary *metadataInfo; // @synthesize metadataInfo=_metadataInfo;
@property(retain, nonatomic) GQDSStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
- (id)metadataValueForKey:(id)arg1;
- (void)setMetadataValues:(id)arg1 forKey:(id)arg2;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)stringValueForDocumentInfoProperty:(id)arg1;
- (BOOL)hasIntegerValue:(long long *)arg1 forDocumentInfoProperty:(id)arg2;
- (BOOL)hasBoolValue:(char *)arg1 forDocumentInfoProperty:(id)arg2;
- (void)setValue:(id)arg1 forDocumentInfoProperty:(id)arg2;
- (void)setDocumentInfoDictionary:(id)arg1;

@end

