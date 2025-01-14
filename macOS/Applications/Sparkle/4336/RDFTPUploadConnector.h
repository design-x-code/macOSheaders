//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDUploadConnector.h"

@class NSDateFormatter, NSMutableDictionary, NSOperationQueue, NSString;

@interface RDFTPUploadConnector : RDUploadConnector
{
    BOOL _backup;
    BOOL _smartUploadSupport;
    BOOL _smartUpload;
    BOOL _smartUploaderDone;
    BOOL _sparkleUploadFolderDone;
    BOOL _backupDone;
    BOOL _publishDone;
    BOOL _cleanupDone;
    NSMutableDictionary *_publishDirInfo;
    NSMutableDictionary *_dirInfo;
    NSOperationQueue *_operationQueue;
    long long _connectionErrors;
    NSString *_backupFolder;
    NSDateFormatter *_dateFormatter;
}

+ (id)ftpUploadConnectorWithJSONSettings:(id)arg1;
+ (id)ftpUploadConnectorWithSettings:(id)arg1;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) BOOL cleanupDone; // @synthesize cleanupDone=_cleanupDone;
@property(nonatomic) BOOL publishDone; // @synthesize publishDone=_publishDone;
@property(nonatomic) BOOL backupDone; // @synthesize backupDone=_backupDone;
@property(nonatomic) BOOL sparkleUploadFolderDone; // @synthesize sparkleUploadFolderDone=_sparkleUploadFolderDone;
@property(nonatomic) BOOL smartUploaderDone; // @synthesize smartUploaderDone=_smartUploaderDone;
@property(retain, nonatomic) NSString *backupFolder; // @synthesize backupFolder=_backupFolder;
@property(nonatomic) long long connectionErrors; // @synthesize connectionErrors=_connectionErrors;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableDictionary *dirInfo; // @synthesize dirInfo=_dirInfo;
@property(retain, nonatomic) NSMutableDictionary *publishDirInfo; // @synthesize publishDirInfo=_publishDirInfo;
@property(nonatomic) BOOL smartUpload; // @synthesize smartUpload=_smartUpload;
@property(nonatomic) BOOL smartUploadSupport; // @synthesize smartUploadSupport=_smartUploadSupport;
@property(nonatomic) BOOL backup; // @synthesize backup=_backup;
- (void).cxx_destruct;
- (id)websiteAddress;
- (id)sha1:(id)arg1;
- (BOOL)renameFile:(id)arg1 to:(id)arg2;
- (BOOL)deleteFile:(id)arg1;
- (BOOL)backupFile:(id)arg1;
- (void)backupFile:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)uploadFile:(id)arg1 update:(CDUnknownBlockType)arg2;
- (BOOL)rmDir:(id)arg1;
- (BOOL)mkDir:(id)arg1;
- (BOOL)chDir:(id)arg1;
- (BOOL)isDir:(id)arg1;
- (id)getDirListWithInfo;
- (id)getDirListWithInfo:(id)arg1;
- (void)waitForTerminatedOperation:(BOOL)arg1;
- (BOOL)rmDirRecursive:(id)arg1 withProgressUpdateBlock:(CDUnknownBlockType)arg2;
- (BOOL)doBackup:(CDUnknownBlockType)arg1;
- (void)cleanupFile:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)cleanupOldFiles:(CDUnknownBlockType)arg1;
- (BOOL)publishUploadedFiles:(CDUnknownBlockType)arg1;
- (void)endUploadWithResult:(BOOL)arg1;
- (BOOL)finalizeUpload:(CDUnknownBlockType)arg1;
- (long long)finalizationSteps;
- (BOOL)hasFinalization;
- (long long)initalizationSteps;
- (BOOL)hasInitalization;
- (BOOL)startUpload:(CDUnknownBlockType)arg1;
- (void)setBasicUploadCapabilities;
- (BOOL)checkUploadCapabilities;
- (id)getUploadSettingsSummary;
- (id)initWithManager:(id)arg1 settings:(id)arg2;

@end

