//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDRStrokeParent-Protocol.h"

@class NSString, SDCChartStyle;

@interface SDCChartStyleValueDirectionGridLineStroke2D : NSObject <SDRStrokeParent>
{
    SDCChartStyle *m_style;
}

- (id)overrideStrokeNull;
- (id)overrideStroke;
- (BOOL)isStrokeOverridden;
- (id)stroke;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

