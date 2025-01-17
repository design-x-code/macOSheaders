//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WFDatabase;

@interface VCRealmDataStore : NSObject
{
    WFDatabase *_database;
}

@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (BOOL)isPhraseUsable:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (void)getSpeakableStringsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getShareSheetWorkflowsForTypeIdentifiers:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validatePhrases:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDatabase:(id)arg1;

@end

