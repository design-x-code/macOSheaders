//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MALastClickedParameterViewController.h>

#import "NSMenuDelegate-Protocol.h"

@class MABackgroundView, MAKitMenu, MAKitTabView, MAPopUpButton, MASegmentedControl, MASlider, MATextField, NSBox, NSString, NSTextField, NSView;

@interface CLgMidiEditorInspectorViewController : MALastClickedParameterViewController <NSMenuDelegate>
{
    MASegmentedControl *switchLevelSegmentedControl;
    MASegmentedControl *_pitchQuantizeSegmentedControl;
    MASegmentedControl *timeQuantizeSegmentedControl;
    MASegmentedControl *timeQuantizeNotesSegmentedControl;
    MASlider *quantizeStrengthSlider;
    MAKitTabView *editorLevelTabView;
    MASlider *velocitySlider;
    MASlider *transposeSlider;
    NSTextField *timeQuantizeLabel;
    NSTextField *transposeSliderReadout;
    NSTextField *strengthSliderReadout;
    NSTextField *velocitySliderReadout;
    MATextField *regionNameTextField;
    MASlider *quantizeSwingSlider;
    NSBox *pitchQuantizeBox;
    NSBox *transposeBox;
    NSBox *timeQuantizeBox;
    NSBox *timeQuantizeNotesBox;
    NSBox *velocitySliderBox;
    NSBox *articulationBox;
    MAPopUpButton *articulationPopup;
    MABackgroundView *pitchQuantizeBackgroundView;
    int quantizationMode;
    int scaleType;
    MAKitMenu *majorMenu;
    NSView *mainView;
    long long prevSwingVal;
    long long prevVelocityVal;
    long long prevTransposeVal;
    BOOL fVelocitySliderIsRelative;
    long long prevVelocitySliderVal;
    BOOL fDontResetSliders;
    BOOL fAllowLevelSwitch;
    BOOL fContentNeedsUpdate;
    long long quantizePercent;
    long long velocityVal;
    long long transposeVal;
    long long swingVal;
}

@property(nonatomic) MASegmentedControl *pitchQuantizeSegmentedControl; // @synthesize pitchQuantizeSegmentedControl=_pitchQuantizeSegmentedControl;
@property long long transposeVal; // @synthesize transposeVal;
@property long long swingVal; // @synthesize swingVal;
@property long long velocityVal; // @synthesize velocityVal;
@property long long quantizePercent; // @synthesize quantizePercent;
- (void)updateUI;
- (void)setRootNoteMenu:(id)arg1;
- (id)rootNoteMenu;
- (id)scaleTypeMenu;
- (void)setQuantizationPopUpStrings;
- (void)updateArticulationMenu;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (int)indexOfSelectedItemInMenu:(id)arg1;
- (int)tagOfSelectedItemInMenu:(id)arg1;
- (id)selectedItemInMenu:(id)arg1;
- (void)pitchQuantizeSelectedEvents:(id)arg1;
- (void)change_mode:(id)arg1;
- (void)change_key:(id)arg1;
- (void)updateGrooveBrushNoteTemplate;
- (void)quantizeSelectedEvents:(id)arg1;
- (void)changeArticulationForSelectedEvents:(id)arg1;
- (void)checkDisableGrooveSlave;
- (BOOL)hasSelectedRegions;
- (int)quantizationModeFromEditorTab;
- (void)setSelectedQuantizeMenuEntry:(int)arg1;
- (id)currentTimeQuantizeSegmentedControl;
- (id)currentTimeQuantizeBox;
- (void)setSelectedRootNoteWithTag:(int)arg1;
- (void)setSelectedRootNoteWithIndex:(int)arg1;
- (void)setSelectedRootNoteFromMenuItem:(id)arg1;
- (void)setSelectedScaleTypeWithTag:(int)arg1;
- (void)handleSelectionChange;
- (int)thruArticulationIndex;
- (void)setThruArticulationIndex:(int)arg1;
- (int)gindexOfFirstDisplayedRegion;
- (void)setAllElementsEnabled:(BOOL)arg1;
- (void)setControl:(int)arg1 value:(int)arg2;
- (void)velocitySliderMoved:(id)arg1;
- (void)transposeSliderMoved:(id)arg1;
- (void)switchEditorLevel:(id)arg1;
- (void)registerMessObservers;
- (void)handleUM_NEWEV:(id)arg1;
- (void)handleUM_CHARTICULATION:(id)arg1;
- (void)handleUM_CHSEL:(id)arg1;
- (void)handleUM_CHSELMUT:(id)arg1;
- (void)handleUM_GEDIT:(id)arg1;
- (void)handleUM_CHEV:(id)arg1;
- (void)handleUM_PATRACK:(id)arg1;
- (void)handleUM_MSEQPAR:(id)arg1;
- (void)handleUM_NEWGROOVETEMPLATE:(id)arg1;
- (void)handleUM_CHMNAME:(id)arg1;
- (void)setAdvancedParamtersEnabled:(BOOL)arg1;
- (void)setAdvancedQuantizeEnabled:(BOOL)arg1;
- (void)qStrengthSliderMoved:(id)arg1;
- (void)viewVisibilityChange:(BOOL)arg1;
- (void)hideOrShowInlineInspector;
- (void)dealloc;
- (void)RemoveAllMessObservers;
- (void)sliderWillBeginDragging:(id)arg1;
- (void)sliderDidEndDragging:(id)arg1;
- (void)frameDidChange:(id)arg1;
- (BOOL)viewObjIsScoreInsertButton:(id)arg1;
- (void)handleFrameChange;
- (double)maxHeight;
- (void)initScaleTypePopup;
- (void)checkContentNeedsUpdateNotification:(id)arg1;
- (void)switchInspectorBasedOnSelection;
- (id)LocalizedScaleNameForScaleAtIndex:(int)arg1;
- (BOOL)isGarageBand;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)regionNameWasEdited:(id)arg1;
- (void)awakeFromNib;
- (void)layoutElements;
@property(readonly) struct FENSTER *fenster;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

