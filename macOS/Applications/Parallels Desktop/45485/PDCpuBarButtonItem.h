//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PDBarButtonItem.h"

@class PDDeviceStatusView;

@interface PDCpuBarButtonItem : PDBarButtonItem
{
    struct QPointer<QTimer> _updateTimer;
    struct QPointer<QAction> _vmCpuUsageInfo;
    struct QPointer<QAction> _collectingInfo;
    struct QList<QPointer<QAction>> _placeholders;
    _Bool _altHeld;
    struct QList<int> _vmCpuUsage;
    int _updateInterval;
    int _alertValue;
    int _arraySize;
    int _getProcessRetries;
    PDDeviceStatusView *_cpuUsageStatusView;
}

@property(nonatomic) __weak PDDeviceStatusView *cpuUsageStatusView; // @synthesize cpuUsageStatusView=_cpuUsageStatusView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gotHotProcesses;
- (struct QMenu *)popupMenu:(char *)arg1;
- (void)fetchFinished;
- (void)setupCpuUsageStatusView;
- (id)cpuUsageIndicatorWithColor:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithVm:(struct CVmWrap *)arg1;

@end

