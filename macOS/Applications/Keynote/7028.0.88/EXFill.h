//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EXFill : NSObject
{
}

+ (void)write:(id)arg1 state:(id)arg2;
+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;
+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)initialize;
+ (id)edStopFromXmlGradientElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2;
+ (id)edGradientFillFromXmlElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)edPatternTypeFromXmlPatternTypeString:(id)arg1;
+ (id)edPatternFillFromXmlElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;

@end

