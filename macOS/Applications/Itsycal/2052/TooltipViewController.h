//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AgendaViewController.h"

#import "MoCalTooltipProvider.h"

@class NSString;

@interface TooltipViewController : AgendaViewController <MoCalTooltipProvider>
{
    id <TooltipViewControllerDelegate> _tooltipDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TooltipViewControllerDelegate> tooltipDelegate; // @synthesize tooltipDelegate=_tooltipDelegate;
- (BOOL)toolTipForDate:(CDStruct_48ebedb0)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

