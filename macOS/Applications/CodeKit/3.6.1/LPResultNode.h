//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPResultNode : NSObject
{
    BOOL _isExpanded;
    NSMutableArray *_children;
    LPResultNode *_parent;
}

@property(nonatomic, getter=isExpanded, setter=setIsExpanded:) BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
- (void).cxx_destruct;
- (BOOL)isLastChild;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)addChild:(id)arg1;
- (unsigned long long)childrenCount;
- (void)setChildren:(id)arg1;
- (id)children;
- (BOOL)isLeaf;
- (void)dealloc;
- (id)init;

@end

