//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmallModalDialogController.h"

#import "NSTextFieldDelegate.h"

@class MAButton, MAKitButton, MAKitPopUpButton, MAKitTableView, MATextField, NSDictionary, NSMutableSet, NSString, NSView;

@interface MASendToGobblerWindowController : SmallModalDialogController <NSTextFieldDelegate>
{
    NSView *bounceElementsView;
    NSView *gobblerElementsView;
    MAKitPopUpButton *qualityPopupButton;
    MAKitButton *cycleOnlyCheckbox;
    MATextField *sendToEmailTextField;
    MATextField *fileNameTextField;
    MATextField *messageTextField;
    MATextField *filesLabel;
    MAKitTableView *filesTableView;
    MAButton *makePublicCheckbox;
    MAButton *plusButton;
    MAButton *minusButton;
    MAButton *sendButton;
    MAButton *cancelButton;
    struct CDocumentLogic *doc;
    int mode;
    NSMutableSet *fileSet;
    NSDictionary *_config;
}

+ (int)showModalForDocument:(struct CDocumentLogic *)arg1 withMode:(int)arg2;
+ (id)nibName;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)click_Cancel:(id)arg1;
- (void)click_OK:(id)arg1;
- (void)click_Minus:(id)arg1;
- (void)click_Plus:(id)arg1;
- (void)updateUI;
- (id)orderedFileSet;
- (void)dealloc;
- (void)awakeFromNib;
- (int)showModalForDocument:(struct CDocumentLogic *)arg1 withMode:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

