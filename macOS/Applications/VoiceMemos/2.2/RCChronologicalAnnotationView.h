//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIFont;

@interface RCChronologicalAnnotationView : UIView
{
    double _majorTickMinimumSpacing;
    UIFont *_timeLabelFont;
    BOOL _isPlayback;
    double _contentDuration;
    UIColor *_backgroundDebugColor;
    unsigned long long _debugID;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _markerClippingRange;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long debugID; // @synthesize debugID=_debugID;
@property(retain, nonatomic) UIColor *backgroundDebugColor; // @synthesize backgroundDebugColor=_backgroundDebugColor;
@property(nonatomic) BOOL isPlayback; // @synthesize isPlayback=_isPlayback;
@property(nonatomic) CDStruct_73a5d3ca markerClippingRange; // @synthesize markerClippingRange=_markerClippingRange;
@property(nonatomic) double contentDuration; // @synthesize contentDuration=_contentDuration;
@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
- (id)_timeLabelAttributes;
- (id)_timeLabelAttributesWithFont:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (long long)tickMarksForMajorInterval:(double)arg1;
- (double)timeLabelsMajorInterval;
- (struct CGSize)labelsSize;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end

