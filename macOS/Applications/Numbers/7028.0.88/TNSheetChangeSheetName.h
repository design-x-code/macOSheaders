//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNSheetChangeBase.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString;

@interface TNSheetChangeSheetName : TNSheetChangeBase <GSSPAutoEncodable>
{
    NSString *_sheetName;
}

- (void)dealloc;
-     // Error parsing type: v24@0:8^{SheetChangeSheetNameArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{SheetChangeBaseArchive}}16, name: encodeToArchive:
-     // Error parsing type: @24@0:8r^{SheetChangeSheetNameArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{SheetChangeBaseArchive}}16, name: initFromArchive:
- (id)getSheetName;
- (void)populateGSSPSheetChangeSheetName:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

