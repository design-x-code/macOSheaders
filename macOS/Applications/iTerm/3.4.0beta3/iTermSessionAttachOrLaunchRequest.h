//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, PTYSession, PseudoTerminal;

@interface iTermSessionAttachOrLaunchRequest : NSObject
{
    BOOL _canPrompt;
    BOOL _hasServerConnection;
    BOOL _allowURLSubs;
    BOOL _forceUseOldCWD;
    BOOL _isUTF8;
    PTYSession *_session;
    long long _objectType;
    NSString *_urlString;
    NSDictionary *_environment;
    NSString *_customShell;
    NSString *_oldCWD;
    NSString *_command;
    NSDictionary *_substitutions;
    PseudoTerminal *_windowController;
    CDUnknownBlockType _ready;
    CDUnknownBlockType _completion;
    id <iTermSessionAttachOrLaunchRequestDelegate> _delegate;
    NSDictionary *_profileForComputingCommand;
    NSDictionary *_profile;
    NSString *_computedCommand;
    NSString *_name;
    NSString *_workingDirectory;
    CDStruct_b0cac789 _xx_serverConnection;
}

+ (id)launchRequestWithSession:(id)arg1 canPrompt:(BOOL)arg2 objectType:(long long)arg3 hasServerConnection:(BOOL)arg4 serverConnection:(CDStruct_b0cac789)arg5 urlString:(id)arg6 allowURLSubs:(BOOL)arg7 environment:(id)arg8 customShell:(id)arg9 oldCWD:(id)arg10 forceUseOldCWD:(BOOL)arg11 command:(id)arg12 isUTF8:(id)arg13 substitutions:(id)arg14 windowController:(id)arg15 ready:(CDUnknownBlockType)arg16 completion:(CDUnknownBlockType)arg17;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *computedCommand; // @synthesize computedCommand=_computedCommand;
@property(readonly, nonatomic) NSDictionary *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSDictionary *profileForComputingCommand; // @synthesize profileForComputingCommand=_profileForComputingCommand;
@property(nonatomic) __weak id <iTermSessionAttachOrLaunchRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType ready; // @synthesize ready=_ready;
@property(retain, nonatomic) PseudoTerminal *windowController; // @synthesize windowController=_windowController;
@property(copy, nonatomic) NSDictionary *substitutions; // @synthesize substitutions=_substitutions;
@property(nonatomic) BOOL isUTF8; // @synthesize isUTF8=_isUTF8;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(nonatomic) BOOL forceUseOldCWD; // @synthesize forceUseOldCWD=_forceUseOldCWD;
@property(copy, nonatomic) NSString *oldCWD; // @synthesize oldCWD=_oldCWD;
@property(copy, nonatomic) NSString *customShell; // @synthesize customShell=_customShell;
@property(copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(nonatomic) BOOL allowURLSubs; // @synthesize allowURLSubs=_allowURLSubs;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) CDStruct_b0cac789 xx_serverConnection; // @synthesize xx_serverConnection=_xx_serverConnection;
@property(nonatomic) BOOL hasServerConnection; // @synthesize hasServerConnection=_hasServerConnection;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(nonatomic) BOOL canPrompt; // @synthesize canPrompt=_canPrompt;
@property(retain, nonatomic) PTYSession *session; // @synthesize session=_session;
- (void)setWorkingDirectory:(id)arg1;
- (void)updateVariables;
- (id)substitutionsForURL:(id)arg1;
- (id)substitutionsAfterPrompting;
- (void)didComputeSubstitutions;
- (BOOL)didComputeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)computeSubstitutions;
- (void)computeWorkingDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)computeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)unescapeDoubleDollarsInString:(id)arg1;
- (void)realizeWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;

@end

