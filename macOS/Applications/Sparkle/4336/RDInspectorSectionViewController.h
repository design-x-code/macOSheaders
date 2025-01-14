//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "RDInspectorProtocol.h"

@class NSArray, NSMutableArray, NSObject<RDSettingsStoreProtocol>, NSString, RDModularInspectorViewController, RDWebsite;

@interface RDInspectorSectionViewController : NSViewController <RDInspectorProtocol>
{
    BOOL _enabled;
    BOOL _nibLoadedAndCached;
    BOOL _layoutSetup;
    BOOL _headingCheckbox;
    RDWebsite *_website;
    long long _radioCounter;
    RDModularInspectorViewController *_rootInspector;
    NSMutableArray *_refreshUIBlocks;
    NSMutableArray *_dismissUIBlocks;
    NSMutableArray *_helperObjects;
    NSArray *_dependentPropertyNames;
    NSString *_headingName;
    CDUnknownBlockType _headingCheckboxPropGet;
    CDUnknownBlockType _headingCheckboxPropSet;
    id _headingSwitcher;
    CDUnknownBlockType _layoutPropGet;
    CDUnknownBlockType _headingSwitchPropGet;
    CDUnknownBlockType _headingSwitchPropSet;
    CDUnknownBlockType _headingSwitchItemGetter;
}

@property(copy, nonatomic) CDUnknownBlockType headingSwitchItemGetter; // @synthesize headingSwitchItemGetter=_headingSwitchItemGetter;
@property(copy, nonatomic) CDUnknownBlockType headingSwitchPropSet; // @synthesize headingSwitchPropSet=_headingSwitchPropSet;
@property(copy, nonatomic) CDUnknownBlockType headingSwitchPropGet; // @synthesize headingSwitchPropGet=_headingSwitchPropGet;
@property(copy, nonatomic) CDUnknownBlockType layoutPropGet; // @synthesize layoutPropGet=_layoutPropGet;
@property(retain, nonatomic) id headingSwitcher; // @synthesize headingSwitcher=_headingSwitcher;
@property(copy, nonatomic) CDUnknownBlockType headingCheckboxPropSet; // @synthesize headingCheckboxPropSet=_headingCheckboxPropSet;
@property(copy, nonatomic) CDUnknownBlockType headingCheckboxPropGet; // @synthesize headingCheckboxPropGet=_headingCheckboxPropGet;
@property(retain, nonatomic) NSString *headingName; // @synthesize headingName=_headingName;
@property(nonatomic) BOOL headingCheckbox; // @synthesize headingCheckbox=_headingCheckbox;
@property(nonatomic) BOOL layoutSetup; // @synthesize layoutSetup=_layoutSetup;
@property(retain, nonatomic) NSArray *dependentPropertyNames; // @synthesize dependentPropertyNames=_dependentPropertyNames;
@property(retain, nonatomic) NSMutableArray *helperObjects; // @synthesize helperObjects=_helperObjects;
@property(retain, nonatomic) NSMutableArray *dismissUIBlocks; // @synthesize dismissUIBlocks=_dismissUIBlocks;
@property(retain, nonatomic) NSMutableArray *refreshUIBlocks; // @synthesize refreshUIBlocks=_refreshUIBlocks;
@property(nonatomic) __weak RDModularInspectorViewController *rootInspector; // @synthesize rootInspector=_rootInspector;
@property(nonatomic) long long radioCounter; // @synthesize radioCounter=_radioCounter;
@property(nonatomic) BOOL nibLoadedAndCached; // @synthesize nibLoadedAndCached=_nibLoadedAndCached;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak RDWebsite *website; // @synthesize website=_website;
- (void).cxx_destruct;
- (BOOL)isTextFieldInFocus:(id)arg1;
- (void)addDismissBlock:(CDUnknownBlockType)arg1;
- (void)addTextFieldCleanup:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addControlCleanup:(id)arg1;
- (void)addRefreshBlock:(CDUnknownBlockType)arg1;
- (void)addPropertyWithGetter:(CDUnknownBlockType)arg1 conditionallyEnables:(id)arg2;
- (void)addProperty:(id)arg1 conditionallyEnables:(id)arg2;
- (void)addActionButton:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)addSizeWithSliders:(id)arg1 textFields:(id)arg2 steppers:(id)arg3 sizeView:(id)arg4 property:(id)arg5 from:(double)arg6 to:(double)arg7 increment:(double)arg8 constraint:(CDUnknownBlockType)arg9;
- (void)addNumericWithSlider:(id)arg1 textField:(id)arg2 stepper:(id)arg3 propertyGetter:(CDUnknownBlockType)arg4 setter:(CDUnknownBlockType)arg5 from:(double)arg6 to:(double)arg7 increment:(double)arg8 constraint:(CDUnknownBlockType)arg9;
- (void)addNumericWithSlider:(id)arg1 textField:(id)arg2 stepper:(id)arg3 property:(id)arg4 from:(double)arg5 to:(double)arg6 increment:(double)arg7 constraint:(CDUnknownBlockType)arg8;
- (void)addButton:(id)arg1 property:(id)arg2;
- (void)addPopupButton:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)addPopupButton:(id)arg1 property:(id)arg2;
- (void)addRadios:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)addRadios:(id)arg1 property:(id)arg2;
- (void)addRadioGroup:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)addRadioGroup:(id)arg1 property:(id)arg2;
- (void)addCheckbox:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)addCheckbox:(id)arg1 property:(id)arg2;
- (void)addTextField:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)addTextField:(id)arg1 property:(id)arg2;
- (void)addSegmentedControl:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)addSegmentedControl:(id)arg1 property:(id)arg2;
- (void)addShadowOffset:(id)arg1 property:(id)arg2;
- (void)addGradient:(id)arg1 angle:(id)arg2 textField:(id)arg3 stepper:(id)arg4 color1PropertyName:(id)arg5 color2PropertyName:(id)arg6 anglePropertyName:(id)arg7;
- (void)addColor:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)addColor:(id)arg1 property:(id)arg2;
- (void)setValidation:(CDUnknownBlockType)arg1;
- (void)setSectionSwitchWithControl:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3 itemGetter:(CDUnknownBlockType)arg4;
- (void)setSectionSwitchWithControl:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)setSectionSwitchWithControl:(id)arg1 propertyName:(id)arg2;
- (void)setSectionSwitchWithGetter:(CDUnknownBlockType)arg1;
- (void)setLayoutGetter:(CDUnknownBlockType)arg1;
- (void)setLayoutProperty:(id)arg1;
- (void)setToggleSectionHeading:(id)arg1 propertyGetter:(CDUnknownBlockType)arg2 setter:(CDUnknownBlockType)arg3;
- (void)setToggleSectionHeading:(id)arg1 property:(id)arg2;
- (void)sectionSetupLayoutWithSettings:(id)arg1;
- (void)sectionSetupWithSettings:(id)arg1;
- (void)willBeDismissed;
- (BOOL)shouldRefreshOnDrag;
- (void)rebuildAndRefreshUI;
- (void)refreshUI;
- (void)setPropertyDependency:(id)arg1;
@property(readonly, nonatomic) NSObject<RDSettingsStoreProtocol> *settingsStore;
- (void)setupUIWithSettings:(id)arg1;
- (void)setupLayoutWithSettings:(id)arg1;
- (id)currentCollectionItem;
- (void)loadView;
- (id)undoManager;
- (void)setupUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

