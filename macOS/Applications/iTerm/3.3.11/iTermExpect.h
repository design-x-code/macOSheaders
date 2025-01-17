//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface iTermExpect : NSObject
{
    NSMutableArray *_expectations;
}

@property(readonly, nonatomic) NSArray *expectations; // @synthesize expectations=_expectations;
- (void).cxx_destruct;
- (void)setTimeout:(double)arg1 forExpectation:(id)arg2;
- (void)cancelExpectation:(id)arg1;
- (void)removeExpectation:(id)arg1;
- (void)addExpectation:(id)arg1;
- (id)expectRegularExpression:(id)arg1 after:(id)arg2 willExpect:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)expectRegularExpression:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

