//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRCtcTimeSample : NSObject
{
    struct CRCtcCandidate _blank;
    struct CRCTCPriorityQueue *_sample;
}

@property struct CRCTCPriorityQueue *sample; // @synthesize sample=_sample;
@property struct CRCtcCandidate blank; // @synthesize blank=_blank;
- (void)dealloc;
- (id)init;
- (void)addCandidate:(struct CRCtcCandidate)arg1;
- (struct CRCtcCandidate)topCandidate;
- (void)trimCandidates;
- (const vector_cdb6db61 *)candidates;

@end

