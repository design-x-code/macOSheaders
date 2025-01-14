//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KNMacEffectAttribute.h"

@class KNMacEffectStepperTextEntryFieldViewController, NSString, NSTextField;

@interface KNMacEffectTwoNumberAttribute : KNMacEffectAttribute
{
    NSTextField *_mainTitleField;
    NSTextField *_rightFieldLabel;
    NSTextField *_leftFieldLabel;
    KNMacEffectStepperTextEntryFieldViewController *_rightStepperController;
    KNMacEffectStepperTextEntryFieldViewController *_leftStepperController;
}

- (void).cxx_destruct;
- (void)discardEditing;
- (void)loadView;
@property(nonatomic) BOOL usesRulerUnitsForStepperIncrement;
@property(nonatomic) double stepperIncrement;
@property(copy, nonatomic) NSString *localizedRightToolTip;
@property(copy, nonatomic) NSString *localizedLeftToolTip;
@property(copy, nonatomic) NSString *localizedLeftFieldLabel;
@property(copy, nonatomic) NSString *localizedRightFieldLabel;
- (id)initWithLeftAttributeKeyPath:(id)arg1 rightAttributeKeyPath:(id)arg2 localizedAttributeTitle:(id)arg3 selectedModelObjectsController:(id)arg4 numberFormatter:(id)arg5;

@end

