//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EITNonUniformResizeMarker : NSObject
{
    struct CGPoint mOriginal;
    struct CGPoint mTransformed;
}

+ (id)nonUniformResizeMarkerWithOriginal:(struct CGPoint)arg1 transformed:(struct CGPoint)arg2;
@property(nonatomic) struct CGPoint transformed; // @synthesize transformed=mTransformed;
@property(nonatomic) struct CGPoint original; // @synthesize original=mOriginal;

@end

