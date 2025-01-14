//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class DfDocument;

@interface DfLogicModel : NSObject <NSSecureCoding>
{
    BOOL m_documentValid;
    BOOL m_ignoreProgressCallBacks;
    BOOL m_hasPendingRecordDidStartNotification;
    BOOL m_unprimeFakeMechanismActive;
    DfDocument *_document;
    struct LGDOCUMENT *_logicDocument;
}

+ (id)tempDocument;
+ (void)setTempDocument:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) struct LGDOCUMENT *logicDocument; // @synthesize logicDocument=_logicDocument;
@property(nonatomic) DfDocument *document; // @synthesize document=_document;
@property(nonatomic) BOOL unprimeFakeMechanismActive; // @synthesize unprimeFakeMechanismActive=m_unprimeFakeMechanismActive;
@property(nonatomic) BOOL ignoreProgressCallBacks; // @synthesize ignoreProgressCallBacks=m_ignoreProgressCallBacks;
- (void)overloadCallback:(void *)arg1;
- (void)transientsDidLoad:(void *)arg1;
- (void)genInstModelDidCreateUndoStep:(id)arg1;
- (void)cycleJumpCreatedUndoStep:(void *)arg1;
- (void)mediaServerDied:(void *)arg1;
- (void)recSeqWithoutNoteEventsIgnored:(void *)arg1;
- (void)previewPlayerStopped:(void *)arg1;
- (void)audioDeviceIOChanged:(void *)arg1;
- (void)regionCountInPlaybackCallback:(void *)arg1;
- (void)freezeWillStartDidStop:(void *)arg1;
- (void)triggerFakeStopCallBack;
- (void)playStopStateChanged:(void *)arg1;
- (void)recordStateChanged:(void *)arg1;
- (void)abortDeferredPendingRecStartStoppedNotifications;
- (void)_deferredRecordStopped;
- (void)deferredPostRecordStartedIfNeeded;
- (void)_deferredRecordStarted;
- (void)cellRecordStateChanged:(void *)arg1;
- (void)externCommand:(void *)arg1;
- (void)documentStartupText:(void *)arg1;
- (void)feedbackDetected:(void *)arg1;
- (void)inputGainChanged:(void *)arg1;
- (void)hwControllerChanged:(void *)arg1;
- (void)fileRendered:(void *)arg1;
- (void)externTempoChanged:(void *)arg1;
- (void)audioDeviceAdded:(void *)arg1;
- (void)audioDeviceRemoved:(void *)arg1;
- (void)midiDeviceChanged:(void *)arg1;
- (void)clockChange:(void *)arg1;
- (void)cellRecClockChange:(void *)arg1;
- (id)encodeWithData;
- (id)initWithData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)resetDocumentPathsForURL:(id)arg1;
- (void)setRecordPathForDocumentURL:(id)arg1;
- (BOOL)isModelDirty;
- (id)undoManager;
- (BOOL)activateDocument;
- (BOOL)newDocumentCreated;
- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (void)closeAndDisposeLogicDocument;
- (id)init;
- (void)unregisterLogicCallbacks;

@end

