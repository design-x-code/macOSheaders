//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSKit/TSKCommand.h>

#import "GSSPAutoEncodable-Protocol.h"

@class NSUUID;

@interface TNCommandSetPageOrder : TSKCommand <GSSPAutoEncodable>
{
    NSUUID *_sheetId;
    int _pageOrder;
    int _oldPageOrder;
}

@property(nonatomic) int oldPageOrder; // @synthesize oldPageOrder=_oldPageOrder;
- (void).cxx_destruct;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)rollback;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (id)sheet;
-     // Error parsing type: v32@0:8r^{CommandSetPageOrderArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{UUID}^{CommandArchive}II}16@24, name: loadFromArchive:unarchiver:
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)actionString;
- (id)initWithSheet:(id)arg1 pageOrder:(int)arg2 context:(id)arg3;
- (id)initWithSheetID:(id)arg1 pageOrder:(int)arg2 context:(id)arg3;
@property(nonatomic) int pageOrder;
- (void)setSheetId:(id)arg1;
@property(readonly, nonatomic) NSUUID *sheetId;
- (void)populateGSSPCmdSetPageOrder:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

