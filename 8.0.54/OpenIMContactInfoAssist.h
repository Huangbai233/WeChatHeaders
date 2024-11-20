//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CContact, ContactRelatedGroupLogic, MMTableViewInfo, MMURLHandler, NSString, SendVerifyMsgLogicController, UILabel, UIView, WCFinderContactFinderAssist;
@protocol ContactInfoAssistDelegate;

@interface OpenIMContactInfoAssist
{
    _Bool m_bFirstBecomeFriend;
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_chatContact;
    unsigned int m_uiVerify;
    _Bool m_hasRequestUpdateMoments;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    NSString *m_cpKeyForOpenIMDesc;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSignatureUnsafe;
    _Bool m_isOpenIMDescUnsafe;
    WCFinderContactFinderAssist *_finderAssist;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
    NSString *m_InviteUserName;
    NSString *m_InviterTraceTemplate;
    MMURLHandler *m_urlHandler;
    _Bool m_hasUpdatedFinderEntranceCell;
    UILabel *m_blackListTipsLabel;
    _Bool m_hasDisplayedInviterCell;
    UIView *m_blackOrExposepView;
    _Bool _m_bDisableAllOperation;
    id <ContactInfoAssistDelegate> _delegate;
    UIView *_bottomActionView;
    MMTableViewInfo *_actionTableViewInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *actionTableViewInfo; // @synthesize actionTableViewInfo=_actionTableViewInfo;
@property(retain, nonatomic) UIView *bottomActionView; // @synthesize bottomActionView=_bottomActionView;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool m_bDisableAllOperation; // @synthesize m_bDisableAllOperation=_m_bDisableAllOperation;
- (void)updateActionTableView;
- (void)viewDidLayoutSubviews;
- (double)getTableViewTopInset;
- (_Bool)isInPageSheet;
- (id)navigationBarBackgroundColor;
- (void)onClickAddContactMakeSure:(id)arg1;
- (void)onOpenImGetContactDone:(id)arg1 contact:(id)arg2;
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(id)arg1;
- (void)onOpenImGetContactOpenUrlDone:(id)arg1 openUrl:(id)arg2 errorTip:(id)arg3 scene:(unsigned int)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getChatRoomMemberContact;
- (void)reportFriendAssistActionIfNeeded:(unsigned long long)arg1;
- (int)getProfileUserRole;
- (int)getOperatorUserRole;
- (void)reportOpenimChatroomMember:(id)arg1 viewId:(id)arg2;
- (long long)getSubSource;
- (void)reportContactInfoItemWithScene:(long long)arg1 actionResultCode:(long long)arg2;
- (void)reportContactInfoItemClickedWithScene:(long long)arg1;
- (void)reportContactInfoComeWithReportScene:(int)arg1;
- (void)reportContactInfoItemClickWithCellInfo:(id)arg1;
- (void)reportContactInfoViewEnter;
- (_Bool)isChatRoom;
- (void)onRestoreCPLabel:(id)arg1;
- (void)updateCPState;
- (id)init;
- (id)getDicReportPageParams;
- (void)onClickSendVerifyMsg;
- (void)contactSendReplyOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)handleAddedContact;
- (void)onOpenIMVerifyContactOk;
- (void)onVerifyContactOk;
- (void)onRelpyContact:(id)arg1;
- (void)onAddToContacts;
- (void)showOpenIMAddContactRemind;
- (void)reportAddToContactsForThird;
- (void)onClickAddToContacts;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)doAddContact;
- (id)currentViewController;
- (void)finderAssistDidUpdate;
- (void)onExpiredVerifyRequestTryAddContact;
- (void)onMomentsCellClicked:(id)arg1;
- (void)onOpenIMNormalClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onStartChat:(id)arg1;
- (void)onNewMessage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doDeleteContact;
- (void)onAction;
- (void)opBlackList:(id)arg1;
- (void)onOpenVoiceVoipView;
- (void)onOpenVoipView;
- (void)onExposeByRecommand;
- (void)doAddToBlackList;
- (void)addToBlackList:(id)arg1;
- (void)removeFromBlackList;
- (void)showRightButton;
- (void)initFooterView;
- (void)initBlackListTipsLabel;
- (void)initFooterBtnArea;
- (void)initBlackAndExposeContactBtn;
- (void)initExposeBtn;
- (void)onSayHelloToContact;
- (void)onOpenVoipActionSheet:(id)arg1;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)cancelUpdateMomentsIfNeeded;
- (void)requestUpdateMomentsIfNeeded;
- (void)updateMomentsCellView:(id)arg1;
- (id)createMomentsCellInfo;
- (void)opEditSetPermission;
- (void)reloadTableView;
- (_Bool)checkISNeedShowIMSource;
- (id)makeOpenIMSourceSection;
- (id)makeOpenIMIntroSection;
- (id)finderEntranceCellInfo;
- (id)createOpenIMInfoCellAndFindWecomCorpCell:(id *)arg1;
- (void)insertFinderEntranceCellFollowWecomCorpCell:(id)arg1 toCellArray:(id)arg2;
- (_Bool)shouldShowFinderEntranceCell;
- (id)makeOpenIMInfoSection;
- (_Bool)checkIsHadOpenIMContactVerify;
- (id)getActionSection;
- (void)addMsgActionView;
- (void)addAccountDeletedMsgActionView;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)initData;
- (void)makeDisclosureIndicatorCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2 phoneList:(id)arg3 autoresizingMask:(unsigned long long)arg4;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMPhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 height:(double)arg3 userInfo:(id)arg4;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 userInfo:(id)arg3;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 actionSel:(SEL)arg3;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 actionSel:(SEL)arg3 height:(double)arg4 userInfo:(id)arg5;
- (void)addInviterCellAtSection:(id)arg1;
- (void)addRemarkSection;
- (id)getProfileHeadView;
- (id)getPermissionView;
- (id)getPermissionIconsView;
- (_Bool)canShowVOIPBtn;
- (void)genAccountDeletedViewInProfileIntroView:(id)arg1;
- (id)getHelloMsgPanel;
- (double)getMaxProfileIntroViewTitleWidthWithMaxLabelWidth:(double)arg1;
- (id)getProfileIntroView;
- (id)getTagNameList;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(_Bool)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (void)opEditRemarkName;
- (void)tryHandleLink:(id)arg1;
- (void)tryCall:(id)arg1;
- (void)onSocialInfoHandle;
- (void)updateFooterView;
- (id)getContactInfoViewController;
- (_Bool)isNeedHideUserName;
- (_Bool)IsShowUserName;
- (id)getWechatUserName;
- (_Bool)isFromQRCode;
- (id)getInfoDisplayName;
- (_Bool)isNeedVerify;
- (_Bool)isShowBlackAction;
- (_Bool)isNeedShowRightBtn;
- (void)initTableView;
- (id)GetTableView;
- (_Bool)isFromStrangeScene;
- (void)dealloc;
- (void)resetStrengCotnactOpenIMInfo:(id)arg1;
- (void)loadLocalContactData;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (void)onGetOpenImResourceDone:(id)arg1;
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned int)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

