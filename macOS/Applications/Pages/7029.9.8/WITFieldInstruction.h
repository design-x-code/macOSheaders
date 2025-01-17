//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WITTextStateHandler-Protocol.h"

@class NSArray, NSMutableArray, NSMutableString, NSString, WDCharacterProperties, WDCharacterRun;

@interface WITFieldInstruction : NSObject <WITTextStateHandler>
{
    NSMutableString *mInstructionString;
    NSString *mCodeString;
    struct _NSRange mRemainingRange;
    struct WITFieldDescription mDescription;
    WDCharacterProperties *mCharacterProperties;
    WDCharacterRun *mCharacterRun;
    struct __CFDictionary *mSwitchMap;
    NSMutableArray *mArguments;
    BOOL mHasSeparator;
    int mFieldNesting;
}

+ (void)mapFieldContent:(id)arg1 skipContent:(BOOL)arg2 textState:(id)arg3;
+ (void)mapInstruction:(id)arg1 textState:(id)arg2;
+ (void)mapRef:(id)arg1 textState:(id)arg2;
+ (Class)mapperClassForCode:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasSeparator; // @synthesize hasSeparator=mHasSeparator;
@property(readonly, nonatomic) NSArray *arguments; // @synthesize arguments=mArguments;
@property(readonly, nonatomic) WDCharacterRun *characterRun; // @synthesize characterRun=mCharacterRun;
@property(readonly, nonatomic) WDCharacterProperties *characterProperties; // @synthesize characterProperties=mCharacterProperties;
@property(readonly, nonatomic) NSString *codeString; // @synthesize codeString=mCodeString;
@property(readonly, nonatomic) struct _NSRange remainingRange; // @synthesize remainingRange=mRemainingRange;
@property(readonly, nonatomic) NSString *instructionString; // @synthesize instructionString=mInstructionString;
- (BOOL)mapRun:(id)arg1 textState:(id)arg2;
- (void)initSwitchesAndArgumentsInRange:(struct _NSRange)arg1;
- (struct _NSRange)initDescription;
- (void)constructIntruction:(id)arg1 textState:(id)arg2;
- (BOOL)mapBlock:(id)arg1 textState:(id)arg2;
- (id)valuesOfSwitch:(BOOL)arg1;
- (id)valueOfSwitch:(BOOL)arg1;
- (BOOL)hasValuesForSwitch:(BOOL)arg1;
- (BOOL)hasValueForSwitch:(BOOL)arg1;
- (BOOL)doesSwitchOccur:(BOOL)arg1;
@property(readonly, nonatomic) int code;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setUpWithInstructionString:(id)arg1;
- (BOOL)hasOptionalArgument:(BOOL)arg1;
- (int)typeOfSwitch:(unsigned short)arg1;
- (void)processInstructionStringWithState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

