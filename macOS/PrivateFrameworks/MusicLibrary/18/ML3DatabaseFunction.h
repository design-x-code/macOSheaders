//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ML3DatabaseFunction : NSObject
{
    int _argumentCount;
    NSString *_name;
}

@property(nonatomic) int argumentCount; // @synthesize argumentCount=_argumentCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)registerWithConnection:(id)arg1;
- (id)initWithName:(id)arg1 argumentCount:(int)arg2;

@end

