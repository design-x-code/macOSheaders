//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CustomAlertController.h"

#import "MADoubleClickHandler-Protocol.h"

@class NSMatrix;

@interface RadioAlertController : CustomAlertController <MADoubleClickHandler>
{
    NSMatrix *mode;
}

- (void)handleDoubleClick:(id)arg1;
- (void)deselectMode;
- (id)modeCellAtRow:(unsigned long long)arg1;
- (void)click_OK:(id)arg1;
- (void)awakeFromNib;
- (id)rowPrefKey;

@end

