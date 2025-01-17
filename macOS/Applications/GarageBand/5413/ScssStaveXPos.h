//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ScssStaveView;

@interface ScssStaveXPos : NSObject
{
    ScssStaveView *m_staveView;
    BOOL m_isMappedStyle;
    BOOL m_isExpertScore1;
}

+ (double)maxXForIdentifier:(id)arg1 isMappedStyle:(BOOL)arg2;
- (id)headerTitlesArray;
- (id)voiceTitlesArray;
- (struct CGRect)rectForIdentifier:(id)arg1 withYHeight:(struct CGRect)arg2;
- (double)staveViewWidth;
- (struct CGRect)rectForASSIGN:(struct CGRect)arg1;
- (struct CGRect)rectForVOICE:(struct CGRect)arg1;
- (struct CGRect)rectForSTAFF:(struct CGRect)arg1;
- (double)minXForDrums;
- (double)maxXForASSIGN;
- (double)minXForVOICE;
- (double)maxXForIdentifier:(id)arg1;
- (double)minXForIdentifier:(id)arg1;
- (BOOL)isExpertScore;
- (BOOL)isMappedStyle;
- (void)dealloc;
- (id)initWithStaveView:(id)arg1 isMappedInstrument:(BOOL)arg2 isExpertScore:(BOOL)arg3;

@end

