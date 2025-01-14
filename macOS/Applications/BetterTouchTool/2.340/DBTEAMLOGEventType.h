//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSString;

@interface DBTEAMLOGEventType : NSObject <DBSerializable, NSCopying>
{
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (BOOL)isEqualToEventType:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isOther;
- (BOOL)isTfaReset;
- (BOOL)isTfaRemoveSecurityKey;
- (BOOL)isTfaRemoveBackupPhone;
- (BOOL)isTfaChangeStatus;
- (BOOL)isTfaChangeBackupPhone;
- (BOOL)isTfaAddSecurityKey;
- (BOOL)isTfaAddBackupPhone;
- (BOOL)isTeamProfileRemoveLogo;
- (BOOL)isTeamProfileChangeName;
- (BOOL)isTeamProfileChangeLogo;
- (BOOL)isTeamProfileAddLogo;
- (BOOL)isWebSessionsChangeIdleLengthPolicy;
- (BOOL)isWebSessionsChangeFixedLengthPolicy;
- (BOOL)isTwoAccountChangePolicy;
- (BOOL)isTfaChangePolicy;
- (BOOL)isSsoChangePolicy;
- (BOOL)isSmartSyncOptOut;
- (BOOL)isSmartSyncNotOptOut;
- (BOOL)isSmartSyncChangePolicy;
- (BOOL)isSharingChangeMemberPolicy;
- (BOOL)isSharingChangeLinkPolicy;
- (BOOL)isSharingChangeFolderJoinPolicy;
- (BOOL)isPermanentDeleteChangePolicy;
- (BOOL)isPaperChangePolicy;
- (BOOL)isPaperChangeMemberPolicy;
- (BOOL)isPaperChangeDeploymentPolicy;
- (BOOL)isNetworkControlChangePolicy;
- (BOOL)isMicrosoftOfficeAddinChangePolicy;
- (BOOL)isMemberSuggestionsChangePolicy;
- (BOOL)isMemberSpaceLimitsRemoveException;
- (BOOL)isMemberSpaceLimitsChangePolicy;
- (BOOL)isMemberSpaceLimitsAddException;
- (BOOL)isMemberRequestsChangePolicy;
- (BOOL)isGroupUserManagementChangePolicy;
- (BOOL)isGoogleSsoChangePolicy;
- (BOOL)isFileRequestsEmailsRestrictedToTeamOnly;
- (BOOL)isFileRequestsEmailsEnabled;
- (BOOL)isFileRequestsChangePolicy;
- (BOOL)isFileCommentsChangePolicy;
- (BOOL)isExtendedVersionHistoryChangePolicy;
- (BOOL)isEmmRemoveException;
- (BOOL)isEmmChangePolicy;
- (BOOL)isEmmAddException;
- (BOOL)isDeviceApprovalsChangeUnlinkAction;
- (BOOL)isDeviceApprovalsChangeOverageAction;
- (BOOL)isDeviceApprovalsChangeMobilePolicy;
- (BOOL)isDeviceApprovalsChangeDesktopPolicy;
- (BOOL)isDataPlacementRestrictionSatisfyPolicy;
- (BOOL)isDataPlacementRestrictionChangePolicy;
- (BOOL)isAllowDownloadEnabled;
- (BOOL)isAllowDownloadDisabled;
- (BOOL)isAccountCaptureChangePolicy;
- (BOOL)isTeamFolderRename;
- (BOOL)isTeamFolderPermanentlyDelete;
- (BOOL)isTeamFolderDowngrade;
- (BOOL)isTeamFolderCreate;
- (BOOL)isTeamFolderChangeStatus;
- (BOOL)isSsoChangeSamlIdentityMode;
- (BOOL)isSsoChangeLogoutUrl;
- (BOOL)isSsoChangeLoginUrl;
- (BOOL)isSsoChangeCert;
- (BOOL)isRemoveSsoUrl;
- (BOOL)isRemoveLogoutUrl;
- (BOOL)isShmodelVisibilityTeamOnly;
- (BOOL)isShmodelVisibilityPublic;
- (BOOL)isShmodelVisibilityPassword;
- (BOOL)isShmodelTeamView;
- (BOOL)isShmodelTeamShare;
- (BOOL)isShmodelTeamDownload;
- (BOOL)isShmodelTeamCopy;
- (BOOL)isShmodelSetExpiration;
- (BOOL)isShmodelRemoveExpiration;
- (BOOL)isShmodelGroupShare;
- (BOOL)isShmodelFbShare;
- (BOOL)isShmodelDisable;
- (BOOL)isShmodelCreate;
- (BOOL)isShmodelAppCreate;
- (BOOL)isSharedNoteOpened;
- (BOOL)isSharedFolderUnmount;
- (BOOL)isSharedFolderTransferOwnership;
- (BOOL)isSharedFolderMount;
- (BOOL)isSharedFolderCreate;
- (BOOL)isSharedFolderChangeMemberPolicy;
- (BOOL)isSharedFolderChangeMemberManagementPolicy;
- (BOOL)isSharedFolderChangeLinkPolicy;
- (BOOL)isSharedFolderChangeConfidentiality;
- (BOOL)isSharedContentView;
- (BOOL)isSharedContentUnshare;
- (BOOL)isSharedContentRequestAccess;
- (BOOL)isSharedContentRemoveMember;
- (BOOL)isSharedContentRemoveLinkPassword;
- (BOOL)isSharedContentRemoveLinkExpiry;
- (BOOL)isSharedContentRemoveInvitee;
- (BOOL)isSharedContentRelinquishMembership;
- (BOOL)isSharedContentDownload;
- (BOOL)isSharedContentCopy;
- (BOOL)isSharedContentClaimInvitation;
- (BOOL)isSharedContentChangeViewerInfoPolicy;
- (BOOL)isSharedContentChangeMemberRole;
- (BOOL)isSharedContentChangeLinkPassword;
- (BOOL)isSharedContentChangeLinkExpiry;
- (BOOL)isSharedContentChangeLinkAudience;
- (BOOL)isSharedContentChangeInviteeRole;
- (BOOL)isSharedContentChangeDownloadsPolicy;
- (BOOL)isSharedContentAddMember;
- (BOOL)isSharedContentAddLinkPassword;
- (BOOL)isSharedContentAddLinkExpiry;
- (BOOL)isSharedContentAddInvitees;
- (BOOL)isSfTeamUninvite;
- (BOOL)isSfTeamJoinFromOobLink;
- (BOOL)isSfTeamJoin;
- (BOOL)isSfTeamInviteChangeRole;
- (BOOL)isSfTeamInvite;
- (BOOL)isSfTeamGrantAccess;
- (BOOL)isSfTeamDecline;
- (BOOL)isSfNest;
- (BOOL)isSfInviteGroup;
- (BOOL)isSfAllowNonMembersToViewSharedLinks;
- (BOOL)isSfAddGroup;
- (BOOL)isOpenNoteShared;
- (BOOL)isNoteShareReceive;
- (BOOL)isNoteShared;
- (BOOL)isNoteAclTeamLink;
- (BOOL)isNoteAclLink;
- (BOOL)isNoteAclInviteOnly;
- (BOOL)isFileUnlikeComment;
- (BOOL)isFileLikeComment;
- (BOOL)isFileAddComment;
- (BOOL)isCollectionShare;
- (BOOL)isTeamActivityCreateReport;
- (BOOL)isSmartSyncCreateAdminPrivilegeReport;
- (BOOL)isEmmCreateUsageReport;
- (BOOL)isEmmCreateExceptionsReport;
- (BOOL)isPasswordResetAll;
- (BOOL)isPasswordReset;
- (BOOL)isPasswordChange;
- (BOOL)isPaperFolderTeamInvite;
- (BOOL)isPaperFolderFollowed;
- (BOOL)isPaperFolderDeleted;
- (BOOL)isPaperDocView;
- (BOOL)isPaperDocUnresolveComment;
- (BOOL)isPaperDocTeamInvite;
- (BOOL)isPaperDocSlackShare;
- (BOOL)isPaperDocRevert;
- (BOOL)isPaperDocResolveComment;
- (BOOL)isPaperDocRequestAccess;
- (BOOL)isPaperDocMention;
- (BOOL)isPaperDocFollowed;
- (BOOL)isPaperDocEditComment;
- (BOOL)isPaperDocEdit;
- (BOOL)isPaperDocDownload;
- (BOOL)isPaperDocDeleteComment;
- (BOOL)isPaperDocDeleted;
- (BOOL)isPaperDocChangeSharingPolicy;
- (BOOL)isPaperDocChangeMemberRole;
- (BOOL)isPaperDocAddComment;
- (BOOL)isPaperContentRestore;
- (BOOL)isPaperContentRename;
- (BOOL)isPaperContentRemoveMember;
- (BOOL)isPaperContentRemoveFromFolder;
- (BOOL)isPaperContentPermanentlyDelete;
- (BOOL)isPaperContentCreate;
- (BOOL)isPaperContentChangeSubscription;
- (BOOL)isPaperContentArchive;
- (BOOL)isPaperContentAddToFolder;
- (BOOL)isPaperContentAddMember;
- (BOOL)isMemberSuggest;
- (BOOL)isMemberChangeStatus;
- (BOOL)isMemberChangeName;
- (BOOL)isMemberChangeEmail;
- (BOOL)isMemberChangeAdminRole;
- (BOOL)isMemberAddName;
- (BOOL)isSsoLoginFail;
- (BOOL)isSignInAsSessionStart;
- (BOOL)isSignInAsSessionEnd;
- (BOOL)isResellerSupportSessionStart;
- (BOOL)isResellerSupportSessionEnd;
- (BOOL)isPasswordLoginSuccess;
- (BOOL)isPasswordLoginFail;
- (BOOL)isLogout;
- (BOOL)isEmmLoginSuccess;
- (BOOL)isGroupRename;
- (BOOL)isGroupRemoveMember;
- (BOOL)isGroupRemoveExternalId;
- (BOOL)isGroupMoved;
- (BOOL)isGroupJoinPolicyUpdated;
- (BOOL)isGroupDescriptionUpdated;
- (BOOL)isGroupDelete;
- (BOOL)isGroupCreate;
- (BOOL)isGroupChangeMemberRole;
- (BOOL)isGroupChangeManagementType;
- (BOOL)isGroupChangeExternalId;
- (BOOL)isGroupAddMember;
- (BOOL)isGroupAddExternalId;
- (BOOL)isFileRequestSend;
- (BOOL)isFileRequestRemoveDeadline;
- (BOOL)isFileRequestReceiveFile;
- (BOOL)isFileRequestCreate;
- (BOOL)isFileRequestClose;
- (BOOL)isFileRequestChangeTitle;
- (BOOL)isFileRequestChangeFolder;
- (BOOL)isFileRequestAddDeadline;
- (BOOL)isFileSaveCopyReference;
- (BOOL)isFileRollbackChanges;
- (BOOL)isFileRevert;
- (BOOL)isFileRestore;
- (BOOL)isFileRename;
- (BOOL)isFilePreview;
- (BOOL)isFilePermanentlyDelete;
- (BOOL)isFileMove;
- (BOOL)isFileGetCopyReference;
- (BOOL)isFileEdit;
- (BOOL)isFileDownload;
- (BOOL)isFileDelete;
- (BOOL)isFileCopy;
- (BOOL)isFileAdd;
- (BOOL)isCreateFolder;
- (BOOL)isEnabledDomainInvites;
- (BOOL)isDomainVerificationRemoveDomain;
- (BOOL)isDomainVerificationAddDomainSuccess;
- (BOOL)isDomainVerificationAddDomainFail;
- (BOOL)isDomainInvitesSetInviteNewUserPrefToYes;
- (BOOL)isDomainInvitesSetInviteNewUserPrefToNo;
- (BOOL)isDomainInvitesRequestToJoinTeam;
- (BOOL)isDomainInvitesEmailExistingUsers;
- (BOOL)isDomainInvitesDeclineRequestToJoinTeam;
- (BOOL)isDomainInvitesApproveRequestToJoinTeam;
- (BOOL)isDisabledDomainInvites;
- (BOOL)isAccountCaptureRelinquishAccount;
- (BOOL)isAccountCaptureMigrateAccount;
- (BOOL)isAccountCaptureChangeAvailability;
- (BOOL)isEmmRefreshAuthToken;
- (BOOL)isDeviceUnlink;
- (BOOL)isDeviceManagementEnabled;
- (BOOL)isDeviceManagementDisabled;
- (BOOL)isDeviceLinkSuccess;
- (BOOL)isDeviceLinkFail;
- (BOOL)isDeviceDeleteOnUnlinkSuccess;
- (BOOL)isDeviceDeleteOnUnlinkFail;
- (BOOL)isDeviceChangeIpWeb;
- (BOOL)isDeviceChangeIpMobile;
- (BOOL)isDeviceChangeIpDesktop;
- (BOOL)isAppUnlinkUser;
- (BOOL)isAppUnlinkTeam;
- (BOOL)isAppLinkUser;
- (BOOL)isAppLinkTeam;
- (BOOL)isTeamMergeTo;
- (BOOL)isTeamMergeFrom;
- (BOOL)isSfExternalInviteWarn;
- (BOOL)isPaperExternalViewForbid;
- (BOOL)isPaperExternalViewDefaultTeam;
- (BOOL)isPaperExternalViewAllow;
- (BOOL)isPaperEnabledUsersGroupRemoval;
- (BOOL)isPaperEnabledUsersGroupAddition;
- (BOOL)isMemberTransferAccountContents;
- (BOOL)isMemberSpaceLimitsChangeStatus;
- (BOOL)isMemberPermanentlyDeleteAccountContents;
- (BOOL)isMemberChangeMembershipType;
- (id)initWithOther;
- (id)initWithTfaReset;
- (id)initWithTfaRemoveSecurityKey;
- (id)initWithTfaRemoveBackupPhone;
- (id)initWithTfaChangeStatus;
- (id)initWithTfaChangeBackupPhone;
- (id)initWithTfaAddSecurityKey;
- (id)initWithTfaAddBackupPhone;
- (id)initWithTeamProfileRemoveLogo;
- (id)initWithTeamProfileChangeName;
- (id)initWithTeamProfileChangeLogo;
- (id)initWithTeamProfileAddLogo;
- (id)initWithWebSessionsChangeIdleLengthPolicy;
- (id)initWithWebSessionsChangeFixedLengthPolicy;
- (id)initWithTwoAccountChangePolicy;
- (id)initWithTfaChangePolicy;
- (id)initWithSsoChangePolicy;
- (id)initWithSmartSyncOptOut;
- (id)initWithSmartSyncNotOptOut;
- (id)initWithSmartSyncChangePolicy;
- (id)initWithSharingChangeMemberPolicy;
- (id)initWithSharingChangeLinkPolicy;
- (id)initWithSharingChangeFolderJoinPolicy;
- (id)initWithPermanentDeleteChangePolicy;
- (id)initWithPaperChangePolicy;
- (id)initWithPaperChangeMemberPolicy;
- (id)initWithPaperChangeDeploymentPolicy;
- (id)initWithNetworkControlChangePolicy;
- (id)initWithMicrosoftOfficeAddinChangePolicy;
- (id)initWithMemberSuggestionsChangePolicy;
- (id)initWithMemberSpaceLimitsRemoveException;
- (id)initWithMemberSpaceLimitsChangePolicy;
- (id)initWithMemberSpaceLimitsAddException;
- (id)initWithMemberRequestsChangePolicy;
- (id)initWithGroupUserManagementChangePolicy;
- (id)initWithGoogleSsoChangePolicy;
- (id)initWithFileRequestsEmailsRestrictedToTeamOnly;
- (id)initWithFileRequestsEmailsEnabled;
- (id)initWithFileRequestsChangePolicy;
- (id)initWithFileCommentsChangePolicy;
- (id)initWithExtendedVersionHistoryChangePolicy;
- (id)initWithEmmRemoveException;
- (id)initWithEmmChangePolicy;
- (id)initWithEmmAddException;
- (id)initWithDeviceApprovalsChangeUnlinkAction;
- (id)initWithDeviceApprovalsChangeOverageAction;
- (id)initWithDeviceApprovalsChangeMobilePolicy;
- (id)initWithDeviceApprovalsChangeDesktopPolicy;
- (id)initWithDataPlacementRestrictionSatisfyPolicy;
- (id)initWithDataPlacementRestrictionChangePolicy;
- (id)initWithAllowDownloadEnabled;
- (id)initWithAllowDownloadDisabled;
- (id)initWithAccountCaptureChangePolicy;
- (id)initWithTeamFolderRename;
- (id)initWithTeamFolderPermanentlyDelete;
- (id)initWithTeamFolderDowngrade;
- (id)initWithTeamFolderCreate;
- (id)initWithTeamFolderChangeStatus;
- (id)initWithSsoChangeSamlIdentityMode;
- (id)initWithSsoChangeLogoutUrl;
- (id)initWithSsoChangeLoginUrl;
- (id)initWithSsoChangeCert;
- (id)initWithRemoveSsoUrl;
- (id)initWithRemoveLogoutUrl;
- (id)initWithShmodelVisibilityTeamOnly;
- (id)initWithShmodelVisibilityPublic;
- (id)initWithShmodelVisibilityPassword;
- (id)initWithShmodelTeamView;
- (id)initWithShmodelTeamShare;
- (id)initWithShmodelTeamDownload;
- (id)initWithShmodelTeamCopy;
- (id)initWithShmodelSetExpiration;
- (id)initWithShmodelRemoveExpiration;
- (id)initWithShmodelGroupShare;
- (id)initWithShmodelFbShare;
- (id)initWithShmodelDisable;
- (id)initWithShmodelCreate;
- (id)initWithShmodelAppCreate;
- (id)initWithSharedNoteOpened;
- (id)initWithSharedFolderUnmount;
- (id)initWithSharedFolderTransferOwnership;
- (id)initWithSharedFolderMount;
- (id)initWithSharedFolderCreate;
- (id)initWithSharedFolderChangeMemberPolicy;
- (id)initWithSharedFolderChangeMemberManagementPolicy;
- (id)initWithSharedFolderChangeLinkPolicy;
- (id)initWithSharedFolderChangeConfidentiality;
- (id)initWithSharedContentView;
- (id)initWithSharedContentUnshare;
- (id)initWithSharedContentRequestAccess;
- (id)initWithSharedContentRemoveMember;
- (id)initWithSharedContentRemoveLinkPassword;
- (id)initWithSharedContentRemoveLinkExpiry;
- (id)initWithSharedContentRemoveInvitee;
- (id)initWithSharedContentRelinquishMembership;
- (id)initWithSharedContentDownload;
- (id)initWithSharedContentCopy;
- (id)initWithSharedContentClaimInvitation;
- (id)initWithSharedContentChangeViewerInfoPolicy;
- (id)initWithSharedContentChangeMemberRole;
- (id)initWithSharedContentChangeLinkPassword;
- (id)initWithSharedContentChangeLinkExpiry;
- (id)initWithSharedContentChangeLinkAudience;
- (id)initWithSharedContentChangeInviteeRole;
- (id)initWithSharedContentChangeDownloadsPolicy;
- (id)initWithSharedContentAddMember;
- (id)initWithSharedContentAddLinkPassword;
- (id)initWithSharedContentAddLinkExpiry;
- (id)initWithSharedContentAddInvitees;
- (id)initWithSfTeamUninvite;
- (id)initWithSfTeamJoinFromOobLink;
- (id)initWithSfTeamJoin;
- (id)initWithSfTeamInviteChangeRole;
- (id)initWithSfTeamInvite;
- (id)initWithSfTeamGrantAccess;
- (id)initWithSfTeamDecline;
- (id)initWithSfNest;
- (id)initWithSfInviteGroup;
- (id)initWithSfAllowNonMembersToViewSharedLinks;
- (id)initWithSfAddGroup;
- (id)initWithOpenNoteShared;
- (id)initWithNoteShareReceive;
- (id)initWithNoteShared;
- (id)initWithNoteAclTeamLink;
- (id)initWithNoteAclLink;
- (id)initWithNoteAclInviteOnly;
- (id)initWithFileUnlikeComment;
- (id)initWithFileLikeComment;
- (id)initWithFileAddComment;
- (id)initWithCollectionShare;
- (id)initWithTeamActivityCreateReport;
- (id)initWithSmartSyncCreateAdminPrivilegeReport;
- (id)initWithEmmCreateUsageReport;
- (id)initWithEmmCreateExceptionsReport;
- (id)initWithPasswordResetAll;
- (id)initWithPasswordReset;
- (id)initWithPasswordChange;
- (id)initWithPaperFolderTeamInvite;
- (id)initWithPaperFolderFollowed;
- (id)initWithPaperFolderDeleted;
- (id)initWithPaperDocView;
- (id)initWithPaperDocUnresolveComment;
- (id)initWithPaperDocTeamInvite;
- (id)initWithPaperDocSlackShare;
- (id)initWithPaperDocRevert;
- (id)initWithPaperDocResolveComment;
- (id)initWithPaperDocRequestAccess;
- (id)initWithPaperDocMention;
- (id)initWithPaperDocFollowed;
- (id)initWithPaperDocEditComment;
- (id)initWithPaperDocEdit;
- (id)initWithPaperDocDownload;
- (id)initWithPaperDocDeleteComment;
- (id)initWithPaperDocDeleted;
- (id)initWithPaperDocChangeSharingPolicy;
- (id)initWithPaperDocChangeMemberRole;
- (id)initWithPaperDocAddComment;
- (id)initWithPaperContentRestore;
- (id)initWithPaperContentRename;
- (id)initWithPaperContentRemoveMember;
- (id)initWithPaperContentRemoveFromFolder;
- (id)initWithPaperContentPermanentlyDelete;
- (id)initWithPaperContentCreate;
- (id)initWithPaperContentChangeSubscription;
- (id)initWithPaperContentArchive;
- (id)initWithPaperContentAddToFolder;
- (id)initWithPaperContentAddMember;
- (id)initWithMemberSuggest;
- (id)initWithMemberChangeStatus;
- (id)initWithMemberChangeName;
- (id)initWithMemberChangeEmail;
- (id)initWithMemberChangeAdminRole;
- (id)initWithMemberAddName;
- (id)initWithSsoLoginFail;
- (id)initWithSignInAsSessionStart;
- (id)initWithSignInAsSessionEnd;
- (id)initWithResellerSupportSessionStart;
- (id)initWithResellerSupportSessionEnd;
- (id)initWithPasswordLoginSuccess;
- (id)initWithPasswordLoginFail;
- (id)initWithLogout;
- (id)initWithEmmLoginSuccess;
- (id)initWithGroupRename;
- (id)initWithGroupRemoveMember;
- (id)initWithGroupRemoveExternalId;
- (id)initWithGroupMoved;
- (id)initWithGroupJoinPolicyUpdated;
- (id)initWithGroupDescriptionUpdated;
- (id)initWithGroupDelete;
- (id)initWithGroupCreate;
- (id)initWithGroupChangeMemberRole;
- (id)initWithGroupChangeManagementType;
- (id)initWithGroupChangeExternalId;
- (id)initWithGroupAddMember;
- (id)initWithGroupAddExternalId;
- (id)initWithFileRequestSend;
- (id)initWithFileRequestRemoveDeadline;
- (id)initWithFileRequestReceiveFile;
- (id)initWithFileRequestCreate;
- (id)initWithFileRequestClose;
- (id)initWithFileRequestChangeTitle;
- (id)initWithFileRequestChangeFolder;
- (id)initWithFileRequestAddDeadline;
- (id)initWithFileSaveCopyReference;
- (id)initWithFileRollbackChanges;
- (id)initWithFileRevert;
- (id)initWithFileRestore;
- (id)initWithFileRename;
- (id)initWithFilePreview;
- (id)initWithFilePermanentlyDelete;
- (id)initWithFileMove;
- (id)initWithFileGetCopyReference;
- (id)initWithFileEdit;
- (id)initWithFileDownload;
- (id)initWithFileDelete;
- (id)initWithFileCopy;
- (id)initWithFileAdd;
- (id)initWithCreateFolder;
- (id)initWithEnabledDomainInvites;
- (id)initWithDomainVerificationRemoveDomain;
- (id)initWithDomainVerificationAddDomainSuccess;
- (id)initWithDomainVerificationAddDomainFail;
- (id)initWithDomainInvitesSetInviteNewUserPrefToYes;
- (id)initWithDomainInvitesSetInviteNewUserPrefToNo;
- (id)initWithDomainInvitesRequestToJoinTeam;
- (id)initWithDomainInvitesEmailExistingUsers;
- (id)initWithDomainInvitesDeclineRequestToJoinTeam;
- (id)initWithDomainInvitesApproveRequestToJoinTeam;
- (id)initWithDisabledDomainInvites;
- (id)initWithAccountCaptureRelinquishAccount;
- (id)initWithAccountCaptureMigrateAccount;
- (id)initWithAccountCaptureChangeAvailability;
- (id)initWithEmmRefreshAuthToken;
- (id)initWithDeviceUnlink;
- (id)initWithDeviceManagementEnabled;
- (id)initWithDeviceManagementDisabled;
- (id)initWithDeviceLinkSuccess;
- (id)initWithDeviceLinkFail;
- (id)initWithDeviceDeleteOnUnlinkSuccess;
- (id)initWithDeviceDeleteOnUnlinkFail;
- (id)initWithDeviceChangeIpWeb;
- (id)initWithDeviceChangeIpMobile;
- (id)initWithDeviceChangeIpDesktop;
- (id)initWithAppUnlinkUser;
- (id)initWithAppUnlinkTeam;
- (id)initWithAppLinkUser;
- (id)initWithAppLinkTeam;
- (id)initWithTeamMergeTo;
- (id)initWithTeamMergeFrom;
- (id)initWithSfExternalInviteWarn;
- (id)initWithPaperExternalViewForbid;
- (id)initWithPaperExternalViewDefaultTeam;
- (id)initWithPaperExternalViewAllow;
- (id)initWithPaperEnabledUsersGroupRemoval;
- (id)initWithPaperEnabledUsersGroupAddition;
- (id)initWithMemberTransferAccountContents;
- (id)initWithMemberSpaceLimitsChangeStatus;
- (id)initWithMemberPermanentlyDeleteAccountContents;
- (id)initWithMemberChangeMembershipType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

