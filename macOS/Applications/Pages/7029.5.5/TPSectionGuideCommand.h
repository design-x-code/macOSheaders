//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSDrawables/TSDAbstractGuideCommand.h>

#import "GSSPAutoEncodable-Protocol.h"

@class TSUUUIDPath;

@interface TPSectionGuideCommand : TSDAbstractGuideCommand <GSSPAutoEncodable>
{
    TSUUUIDPath *_sectionIdPath;
    int _pageIndex;
}

- (void).cxx_destruct;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (id)p_updateIdOperation;
-     // Error parsing type: v32@0:8^{SectionGuideCommandArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{AbstractGuideCommandArchive}^{UUIDPath}I}16@24, name: saveToArchive:archiver:
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{SectionGuideCommandArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{AbstractGuideCommandArchive}^{UUIDPath}I}16@24, name: loadFromArchive:unarchiver:
- (void)loadFromUnarchiver:(id)arg1;
- (id)storage;
- (void)didInitFromSOS;
- (id)initWithGuideStorageProvider:(id)arg1;
- (void)populateGSSPCmdSectionGuide:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

