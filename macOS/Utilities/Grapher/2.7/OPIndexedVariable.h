//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPOperation.h"

@interface OPIndexedVariable : OPOperation
{
    long long mIndexShift;
    BOOL mAbsoluteIndex;
}

+ (id)evaluationDelegate;
+ (void)setEvaluationDelegate:(id)arg1;
+ (id)indexedVariableWithOperation:(id)arg1 indexShift:(long long)arg2;
- (id)evaluate;
- (void)setAbsoluteIndex:(BOOL)arg1;
- (BOOL)absoluteIndex;
- (void)setIndexShift:(long long)arg1;
- (long long)indexShift;
- (id)initWithOperation:(id)arg1 indexShift:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

