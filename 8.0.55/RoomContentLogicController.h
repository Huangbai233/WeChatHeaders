//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, ChatRoomInfoSettingMgr, ChatRoomToolViewController, ChatRoomUpgradeOpenIMLogic, ChatUnavailableTipsView, MMInputToolView, NSString, RoomDelMemController, RoomHistoryContext, RoomReportController, WCTopicSearchViewController;

@interface RoomContentLogicController
{
    _Bool m_bStartShowRoomContactSelector;
    ChatRoomInfoSettingMgr *m_ChatRoomInfoSettingMgr;
    _Bool m_bTipsShow;
    _Bool m_bPresentRoomContactSelector;
    _Bool m_forbidGetGroupMemberDetail;
    ChatRoomUpgradeOpenIMLogic *m_chatRoomUpgradeOpenIMLogic;
    ChatRoomToolViewController *m_chatRoomToolViewController;
    RoomDelMemController *m_chatRoomDelMemController;
    RoomHistoryContext *m_historyContext;
    RoomReportController *m_reportController;
    _Bool m_waitingChatRoomInfo;
    _Bool m_hadAttachmentRedDot;
    CBaseContact *m_lastAtContact;
    NSString *m_lastAtNickName;
    NSString *m_lastAtHeadUrl;
    WCTopicSearchViewController *_topicSearchVC;
    ChatUnavailableTipsView *_chatroomUnavailableTipsView;
    MMInputToolView *_inputToolView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMInputToolView *inputToolView; // @synthesize inputToolView=_inputToolView;
@property(retain, nonatomic) ChatUnavailableTipsView *chatroomUnavailableTipsView; // @synthesize chatroomUnavailableTipsView=_chatroomUnavailableTipsView;
@property(nonatomic) __weak WCTopicSearchViewController *topicSearchVC; // @synthesize topicSearchVC=_topicSearchVC;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (unsigned int)getBaseMsgContentViewScene;
- (_Bool)supportWXKeyBoard;
- (id)baseContactToForwardSearchResult;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(id)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onTopicSearchCancel:(id)arg1;
- (void)onTopicSearchQuerySelected:(id)arg1 context:(id)arg2;
- (void)onTopicSearchResultSended:(id)arg1;
- (void)showTagHalfScreenQueryViewController:(id)arg1;
- (void)onClickTopicSearchEntry;
- (_Bool)isEnableTopicSearchShare;
- (_Bool)isEnableTopicSearchInteraction;
- (void)OnRoomHistoryDownloadOK:(id)arg1;
- (void)OnRoomHistoryDownloadFail:(id)arg1 DataId:(id)arg2;
- (void)OnRoomHistoryDownloadExipired:(id)arg1 DataId:(id)arg2;
- (void)onChatroomFinderClubInfoUpdated:(id)arg1;
- (void)internalPushToHistoryRecord:(id)arg1;
- (void)showHistoryRevokeTips:(id)arg1;
- (void)showHistoryRecordDownloadFailTips:(id)arg1;
- (void)showHistoryRecordExpiredTips:(id)arg1;
- (void)showFinderClubReddotIfNeeded:(id)arg1;
- (void)revokeGroupUndoneItem:(id)arg1;
- (void)setMessageAsTodoEvent:(id)arg1;
- (void)showRevokeGroupUndoneActionSheetWithObj:(id)arg1;
- (void)showSettingRoomTodoActionSheetWithMessage:(id)arg1 showEdu:(_Bool)arg2;
- (void)doClickRoomTodoCustomLinkWithUrl:(id)arg1 chatname:(id)arg2;
- (void)doClickGroupUndoneItem:(id)arg1 scene:(unsigned int)arg2 doCheck:(_Bool)arg3;
- (void)doClickGroupUndoneItem:(id)arg1 scene:(unsigned int)arg2;
- (void)onWCGroupDeleteAll:(id)arg1;
- (void)onWCGroupSetMessageUndone:(id)arg1 result:(_Bool)arg2;
- (void)onWCGroupRevokeUndoneItem:(id)arg1 result:(_Bool)arg2;
- (void)onWCGroupCompleteUndoneItem:(id)arg1 result:(_Bool)arg2;
- (void)onWCGroupDisposeUndoneItem:(id)arg1;
- (void)onWCGroupUpdateUndoneItem:(id)arg1;
- (unsigned int)currPageAppmsgReportScene;
- (unsigned int)currPageAppmsgEnterType;
- (_Bool)shouldPreDownloadPageData;
- (_Bool)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (_Bool)mainSwitch_shouldHandleAppmsg;
- (_Bool)isNeedCached;
- (void)OnUpdateApproveMessage:(id)arg1 MessageWrap:(id)arg2;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnChangeMemberVerifyStatus:(id)arg1;
- (void)OnChangeMemberShowDisplayName:(id)arg1;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)updateChatroomContact:(id)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onRevokeChatroomQRCode:(id)arg1 success:(_Bool)arg2 errTip:(id)arg3;
- (void)onCancelSelectContact;
- (id)getAtUserContactDisplayName:(id)arg1;
- (void)didMultiSelectContact:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2 markedRange:(struct _NSRange)arg3;
- (_Bool)isLastCharacterAlphaNumeric:(id)arg1;
- (void)showRoomContactSelectorViewController;
- (_Bool)chatRoomNeedGetContact;
- (void)ViewWillInit;
- (_Bool)existEmptyMemberContact;
- (_Bool)CanRemoteRecord;
- (void)onModifyContact:(id)arg1;
- (void)newMessageFromChatRoomInfo:(id)arg1;
- (void)realDoDelete;
- (void)onClickDelete;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isFromChatBoxList;
- (void)checkAndBrowseRoomHistory:(id)arg1;
- (void)revokeChatRoomQRCode:(id)arg1;
- (void)removeChatRoomMember:(id)arg1 scene:(unsigned long long)arg2;
- (void)delChatRoomMemberFromQRcodeScene:(id)arg1;
- (void)delChatRoomMemberFromInvitionScene:(id)arg1;
- (void)processNewXMLInInviteScene:(id)arg1;
- (void)OnInviteChatRoomMember:(id)arg1 Ret:(int)arg2 Error:(id)arg3 withUserData:(id)arg4;
- (void)sendInviteFromApproveToInviterScene:(id)arg1;
- (void)onApproveInvitationSuccess:(id)arg1;
- (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
- (void)chatRoomAdminFromAdminExplainScene:(id)arg1;
- (void)approveMembersFromApproveScene:(id)arg1;
- (void)jumpToSession:(id)arg1;
- (void)jumpToProfile:(id)arg1 fromPatMessage:(_Bool)arg2;
- (id)getTargetProfileFromURL:(id)arg1;
- (void)onClickPatMessageLinkWithUrl:(id)arg1;
- (void)onClickJumpToSession:(id)arg1;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)onChatroomMemberRemoveViewCancel;
- (_Bool)shouldHideToolViewWhenKeyboardHide;
- (void)clearChatRoomSpecialAttentionFlag;
- (void)clearGroupUndoneSessionFlag;
- (void)clearUpdatableMsgNotify;
- (void)clearTransferCount;
- (void)clearAACount;
- (void)clearNewInvApprove;
- (void)clearNewInvCount;
- (void)clearAtMeCount;
- (void)onInputTextDeleteAll;
- (void)AddAtUser:(id)arg1;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (void)checkSecurityBannerShow;
- (void)checkAddFriend;
- (void)resetAttachmentButtonRedDotFlag;
- (void)onEnterRoom;
- (void)ViewWillAppear;
- (void)onPerformAction:(id)arg1;
- (void)onPopFromNavigationController;
- (void)ViewDidInit;
- (void)DidAddMsg:(id)arg1;
- (void)onWillDisplayMsg:(id)arg1;
- (void)onClickUnreadTip:(unsigned long long)arg1;
- (void)setHasShowUnreadTip:(unsigned long long)arg1;
- (void)ViewDidAppear;
- (void)updateFinderClubInfoIfNeeded;
- (void)tryGetChatRoomMemberDetail:(id)arg1;
- (void)checkGetChatRoomInfo:(id)arg1;
- (id)getSubTitle;
- (void)viewWillRotateToOrientation:(long long)arg1;
- (void)onCancelTopMsgMenuItemExposed:(id)arg1;
- (void)onTopMsgMenuItemExposed:(id)arg1;
- (void)onDeleteMsg:(id)arg1;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnGroupNoticeMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 item:(id)arg3;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)getFilteredTopMsgInfoList;
- (void)cancelTopOfMsgSvrId:(long long)arg1;
- (void)OnClickCancelTopMessageTipsBar:(id)arg1;
- (void)OnClickCloseTopMessageTipsBar:(id)arg1;
- (void)OnClickTopMessageTipsBar:(id)arg1;
- (void)updateTopMessageInfo;
- (void)onUnSetRoomTopMsgWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2 bSuccess:(_Bool)arg3 errorMsg:(id)arg4;
- (void)onSetRoomTopMsgWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2 bSuccess:(_Bool)arg3 errorMsg:(id)arg4;
- (void)onCancelTopMsg:(id)arg1;
- (void)onTopMsg:(id)arg1;
- (void)updateTipsNavBarReporter;
- (void)onExitRoom;
- (void)onChatRoomToolButtonClick;
- (void)OnGetChatRoomInfo:(id)arg1 Info:(id)arg2 showBanner:(_Bool)arg3;
- (void)OnViewChatRoomDesc;
- (void)enterChatRoomInfo:(id)arg1 scene:(int)arg2;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)updateChatRoomInvitationBanner;
- (void)onChatRoomInvitationUnReadCountChanged;
- (void)OnCloseChatRoomInvitationTipsBar;
- (void)OnViewChatRoomInvitationList;
- (void)OnClickSecurityTipsBar:(id)arg1;
- (void)OnViewRoomAnnouncement:(int)arg1;
- (void)OnViewRoomAnnouncement;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (double)GetTitleLabelOffset;
- (id)getDefaultTitleTailSubViews;
- (id)getMemeberCountLabel;
- (id)GetChatRoomTitle;
- (id)GetUsrTitle;
- (void)OpenDetailInfo;
- (_Bool)isChatRoomMember;
- (_Bool)isChatRoomBlocked;
- (_Bool)isChatRoomDismissed;
- (void)OpenContactInfo:(id)arg1;
- (_Bool)isGroupMember;
- (id)GetRightBarButtonTitle;
- (id)GetRightBarButtonImageName;
- (id)GetRightBarBtn;
- (void)onShowInputToolWeAppAr:(id)arg1;
- (void)onInputToolWeAppButtonClickedWithItem:(id)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (id)getInputToolWeAppOpEntryAr;
- (void)OnClickAttachmentButtonAction;
- (void)OnClickAttachmentButton:(_Bool)arg1;
- (_Bool)IsShowAttachmentButtonRedDot;
- (long long)chatroomUnavailableType;
- (_Bool)shouldShowChatroomUnavailableTipsView;
- (_Bool)canReplyMsg;
- (void)initChatroomUnavailableTipsView;
- (_Bool)shouldUseNewTipsNavBar;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (id)getMsgSendOpEntry;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)clearAllMsg;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)getDownMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)getMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)getGroupContact;
- (void)reportOpenIMChatRoom:(id)arg1;
- (void)setM_dicExtraInfo:(id)arg1;
- (void)onWillEnterRoom;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(unsigned long long)arg3 searchKeywordList:(id)arg4 fromScene:(unsigned long long)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

