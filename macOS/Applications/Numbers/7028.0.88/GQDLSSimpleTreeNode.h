//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDLSSimpleTreeNode : NSObject <ICExportable>
{
    struct __CFString *mName;
    id mObject;
    struct __CFArray *mChildren;
}

@property(readonly, nonatomic) struct __CFArray *children; // @synthesize children=mChildren;
@property(retain, nonatomic) id dataObject; // @synthesize dataObject=mObject;
@property(readonly, nonatomic) struct __CFString *name; // @synthesize name=mName;
- (int)numberOfChildren;
- (void)setChildren:(struct __CFArray *)arg1;
- (void)addNode:(id)arg1;
- (void)addObject:(id)arg1 withName:(struct __CFString *)arg2;
- (void)setName:(struct __CFString *)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1 name:(struct __CFString *)arg2;
- (id)initWithNativeSlideNode:(id)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

