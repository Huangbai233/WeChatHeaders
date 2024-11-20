//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class AddMemLogic, CContact, ChangeOwnerLogic, DelMemLogic, DelaySwitchSettingLogic, MMTableViewInfo, MMUIView, MsgSearchHelper, NSArray, NSIndexPath, NSString, RichTextView, UIButton, UIView, ViewMemLogic;
@protocol chatRoomInfoDelegate><chatRoomSettingDelegate;

@interface ChatRoomInfoViewController
{
    CContact *m_chatRoomContact;
    NSArray *m_arrMemberList;
    id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate;
    UIButton *m_muteButton;
    UIView *m_titleView;
    _Bool m_bDeleteStatus;
    _Bool m_isChatStatusNotifyOpen;
    MMTableViewInfo *m_tableViewInfo;
    AddMemLogic *m_addMemLogic;
    ViewMemLogic *m_viewMemLogic;
    DelMemLogic *m_delMemLogic;
    ChangeOwnerLogic *m_changeOwnerLogic;
    _Bool m_isShowDislayName;
    _Bool m_bIsShowNotificationSectionIndexAtFirst;
    NSIndexPath *m_notificationSectionIndex;
    _Bool m_bIsShowNickNameSectionIndexAtFirst;
    NSIndexPath *m_showNicknameSectionIndex;
    _Bool m_bIsShowAnnouncementSectionIndexAtFirst;
    NSIndexPath *m_showAnnouncementSectionIndex;
    _Bool m_bEnterDescView;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    _Bool m_bIsShowViewMoreBtn;
    UIButton *m_viewMoreBtn;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    RichTextView *m_openIMCommentRichTextView;
    _Bool m_HadShowNotification;
    MsgSearchHelper *m_oMsgSearchHelper;
    _Bool m_reportSpecialAttentionMemberEntranceExposure;
    _Bool m_reportChatBoxEntranceExposure;
    _Bool m_isInChatBox;
    _Bool m_isSessionTop;
    _Bool m_isMyContact;
    MMUIView *m_tableViewHeader;
    _Bool m_hadLoadView;
    RichTextView *m_tableViewHeaderRichTextView;
    NSString *m_richTextJoinChatRoomWord;
    NSString *m_inviterUsername;
    struct CGPoint m_tableViewStartDraggingContentOffset;
    struct CGPoint m_tableViewLastContentOffset;
    _Bool m_isDraggingDown;
    _Bool m_hadShowTableViewHeaderView;
    _Bool m_isFromChatBoxList;
    _Bool _isShowChatRooJoinInfoSwitch;
    unsigned long long _m_searchScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowChatRooJoinInfoSwitch; // @synthesize isShowChatRooJoinInfoSwitch=_isShowChatRooJoinInfoSwitch;
@property(nonatomic) unsigned long long m_searchScene; // @synthesize m_searchScene=_m_searchScene;
@property(nonatomic) _Bool m_bIsShowAnnouncementSectionIndexAtFirst; // @synthesize m_bIsShowAnnouncementSectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowNickNameSectionIndexAtFirst; // @synthesize m_bIsShowNickNameSectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowNotificationSectionIndexAtFirst; // @synthesize m_bIsShowNotificationSectionIndexAtFirst;
@property(nonatomic) _Bool m_isFromChatBoxList; // @synthesize m_isFromChatBoxList;
@property(retain, nonatomic) UIButton *m_muteButton; // @synthesize m_muteButton;
@property(nonatomic) __weak id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void)reportChatroomInfoGroupJoinInfo:(id)arg1 viewId:(id)arg2;
- (void)reportDismissedChatroomInfoIfNeededWithAction:(unsigned long long)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getShowTopViewController;
- (void)updateFinderClubReddotIfNeeded:(id)arg1;
- (void)onChatroomFinderClubInfoUpdated:(id)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (id)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchDidPresent;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarCancel;
- (id)navigationBarBackgroundColor;
- (void)changeSetting;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)confirmOnArriveFund:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAlertViewAction:(_Bool)arg1;
- (void)quitChatRoomWithDeleteAllMsg:(_Bool)arg1;
- (void)quitChatRoomConfirm;
- (_Bool)canShowUpgradeStatus;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)showSetSpecialAttentionMember;
- (void)setShowDisplayName:(id)arg1;
- (void)showSetRoomDisplayName;
- (id)getDisplayName;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showMoreMember;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(id)arg1;
- (void)onAddMemLogicStop:(_Bool)arg1;
- (void)addMember;
- (void)onViewMemLogicStop:(_Bool)arg1;
- (void)showMoreMemberEx;
- (void)onDelMemLogicStop:(_Bool)arg1;
- (void)showDelMemView;
- (id)getViewController;
- (void)openContactInfo:(id)arg1;
- (void)onEnterChat;
- (_Bool)shouldRestrictContentViewSize;
- (id)init;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)reloadMemberListAndView;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)showNotifiactionAnimate;
- (void)initView;
- (void)doReset;
- (void)updateMemberView;
- (void)initFooterView;
- (void)setTopSession:(id)arg1;
- (void)initMsgSearchHelper:(int)arg1;
- (void)onEditAndSearch;
- (void)showFinderGroup;
- (void)realDoDelete;
- (void)onClickDelete;
- (void)onQuit;
- (void)onQRCodeView;
- (_Bool)showNavigationBarSepLine;
- (void)showAdminViewName;
- (_Bool)isGroupMember;
- (void)showGroupManage;
- (void)showRemarkEdit;
- (void)showAdminViewDesc;
- (void)requestFinderClubInfo;
- (void)initData;
- (void)initOpenIMCommentRichTextView;
- (void)reloadTableData;
- (void)reloadProfileTableData;
- (void)makeDescCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeDescView;
- (void)addMemListWithSection:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeViewMoreBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)willDisplayChatBoxEntryCell:(id)arg1 indexPath:(id)arg2;
- (void)willDisplaySpecialAttentionMemberCell:(id)arg1 indexPath:(id)arg2;
- (void)updateToNormalStatusEx;
- (void)genTableViewHeader;
- (void)loadMemberList;
- (void)resortMemList;
- (void)initTitleView;
- (void)updateTitleView;
- (_Bool)isTopSessionCountExceed;
- (void)onTopSession:(_Bool)arg1;
- (void)OnQuitGroupUIRespone:(id)arg1 withResult:(_Bool)arg2 errorMsg:(id)arg3 deleteAllMsg:(_Bool)arg4;
- (void)OnSetChatRoomTopic:(id)arg1 ErrorInfo:(id)arg2 Success:(_Bool)arg3;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)checkNeedReload:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)onExpose;
- (void)switchSaveToChatBox:(id)arg1;
- (void)switchSaveToAddressBook:(id)arg1;
- (void)onClear:(id)arg1 Index:(id)arg2;
- (void)showChatBackgroundConfig;
- (void)setMuteStatus:(id)arg1;
- (void)setChatBoxStatus:(_Bool)arg1;
- (_Bool)setUpdateNotifyMuted:(_Bool)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
