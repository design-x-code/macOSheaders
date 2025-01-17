//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface iTermInitialDirectory : NSObject
{
    NSString *_evaluated;
    unsigned long long _mode;
    NSString *_customDirectoryFormat;
}

+ (id)initialDirectoryFromProfile:(id)arg1 objectType:(long long)arg2;
+ (unsigned long long)modeForString:(id)arg1 objectType:(long long)arg2 profile:(id)arg3 customDirectory:(id *)arg4;
@property(copy, nonatomic) NSString *customDirectoryFormat; // @synthesize customDirectoryFormat=_customDirectoryFormat;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)evaluateWithOldPWD:(id)arg1 scope:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tmuxCommandByAddingCustomDirectoryWithArgs:(id)arg1 recyclingSupported:(BOOL)arg2 scope:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tmuxCustomDirectoryParameterRecyclingSupported:(BOOL)arg1 scope:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tmuxSplitWindowCommand:(int)arg1 vertically:(BOOL)arg2 recyclingSupported:(BOOL)arg3 scope:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)tmuxNewWindowCommandRecyclingSupported:(BOOL)arg1 scope:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tmuxNewWindowCommandInSessionNumber:(id)arg1 recyclingSupported:(BOOL)arg2 scope:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

