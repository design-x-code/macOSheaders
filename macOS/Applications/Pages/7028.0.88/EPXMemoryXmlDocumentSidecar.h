//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPXEntry, NSMutableData;

@interface EPXMemoryXmlDocumentSidecar : NSObject
{
    EPXEntry *_entry;
    NSMutableData *_buffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) EPXEntry *entry; // @synthesize entry=_entry;
- (id)initWithEntry:(id)arg1 buffer:(id)arg2;

@end

