//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FI_TICloudDriveSpaceObserver : NSObject
{
    long long _freeSpace;
    struct TNSRef<NSOperationQueue, void> _operationQueue;
    struct TNSRef<NSTimer, void> _pollingTimer;
}

+ (void)fetchFreeSpaceNow;
+ (id)singleton;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long freeSpace; // @synthesize freeSpace=_freeSpace;
- (void)stopObserving;
- (void)startObserving;
- (void)fetchFreeSpace;
- (void)dealloc;
- (id)_init;

@end

