//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDInspectorSectionViewController.h"

@class NSSegmentedControl;

@interface RDInputSizeInspector : RDInspectorSectionViewController
{
    NSSegmentedControl *_sizeSegmentedControl;
}

@property(nonatomic) __weak NSSegmentedControl *sizeSegmentedControl; // @synthesize sizeSegmentedControl=_sizeSegmentedControl;
- (void).cxx_destruct;
- (double)buttonHeightForSize:(long long)arg1;
- (void)updateLabelWithSize:(long long)arg1;
- (void)sectionSetupWithSettings:(id)arg1;

@end

