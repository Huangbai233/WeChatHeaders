//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CertInfo, MMBrandHeadImageView, MMTableView, NSArray, NSMutableArray, NSString, UIButton, WCADPageWrap, WOAPPrivacyConfirmLogic;
@protocol ContactInfoAssistDelegate;

@interface BrandUserContactInfoAssist
{
    UIButton *_viewMsgBtn;
    UIButton *_followBtn;
    _Bool _isSettingsChanged;
    _Bool _isMuteChanged;
    _Bool _isTopSessionSwitchOn;
    _Bool _isReceiveMessageSwitchOn;
    _Bool _isClickedTopSessionSwitch;
    _Bool _isEnterpriseSessionTopChanged;
    _Bool _needGetWorker;
    _Bool _isEnterpriseMainBrandMuteOn;
    NSArray *_bindWorkerList;
    MMBrandHeadImageView *m_brandHeadView;
    NSMutableArray *m_arrData;
    MMTableView *m_tableView;
    CertInfo *m_certInfo;
    NSArray *_arrBindWeAppInfo;
    WCADPageWrap *_profilePageWrap;
    unsigned int _lastCertificationFlag;
    _Bool _isJustAddedContact;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    unsigned int _searchFromIndex;
    NSString *_searchKeyword;
    NSString *_searchExtraParamsString;
    id <ContactInfoAssistDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *searchExtraParamsString; // @synthesize searchExtraParamsString=_searchExtraParamsString;
@property(nonatomic) unsigned int searchFromIndex; // @synthesize searchFromIndex=_searchFromIndex;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSMutableArray *m_arrData; // @synthesize m_arrData;
- (id)getSearchClickId;
- (void)scrollViewDidScroll:(id)arg1;
- (void)OnUpdateCertInfo;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onEnterpriseBrandSyncToSvrCompleted:(id)arg1 extParams:(id)arg2;
- (void)onUpdateMyEnterpriseContact:(id)arg1 errCode:(int)arg2;
- (void)onUpdateMyContactUserFlag:(id)arg1 bitMask:(unsigned int)arg2 errCode:(int)arg3;
- (_Bool)isTempBrandSession;
- (double)getRightLabelWidth;
- (void)kvReportModifyWithUserName:(id)arg1 Type:(unsigned int)arg2;
- (_Bool)isInCustomAlertMode;
- (_Bool)isContactExpired;
- (double)getRegisterBodyRightWidth;
- (double)getVerifySourceRightWidth;
- (id)getAlertMessageForVerifyLogic:(id)arg1;
- (id)getAlertTitleForVerifyLogic:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)switchEnableEnterpriseSubBrand;
- (void)onEnableEnterpriseSubBrandBtnSwitched:(id)arg1;
- (void)onOpenBindWeAppList;
- (void)onSwitchEnableEnterpriseSubBrand;
- (void)onShowMessage;
- (void)opLogToSvrForTopSession;
- (void)opLogToSvr;
- (void)addLocalSystemMessageWhenSwitchChanged;
- (void)onNotificationSwitchChanged:(id)arg1;
- (void)onEnterpriseStickyOnTopSwitchChanged:(id)arg1;
- (void)onEnterpriseBlockSwitchChanged:(id)arg1;
- (void)onTopSessionSwitchChanged:(id)arg1;
- (void)onBlockSwitchChanged:(id)arg1;
- (void)onShowSwitchChanged:(id)arg1;
- (void)onEnterWebView:(id)arg1;
- (void)onProvideLocationCancel;
- (void)onProvideLocationConfirm;
- (void)onAllowPositionChanged:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearContent;
- (void)onClickNavRightButton;
- (void)updateBindWeAppInfo;
- (id)getBrandInfoItemAndRemoveIt:(id)arg1 fromArray:(id)arg2;
- (id)getTitleKey:(id)arg1;
- (id)getUrlItemUrl:(id)arg1;
- (id)getUrlItemDescription:(id)arg1;
- (id)getMatchTitle:(id)arg1;
- (id)getPrivilegeIcon:(id)arg1;
- (id)getMatchDescription:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)cancelFocus;
- (void)onShowCancelFocusTips:(id)arg1;
- (void)finallyAddToContacts;
- (void)onAddToContacts;
- (void)onBindDevice;
- (long long)getPrivilegeItemHeight:(id)arg1;
- (long long)calPrivilegesCellHeight;
- (long long)calVerifySourceCellHeight;
- (long long)calBusinessScopeCellHeight;
- (long long)calSignatureCellHeight;
- (long long)calRegisterBodyCellHeight;
- (long long)calTrademarkBodyHeight;
- (void)onEnterEnterprise;
- (void)onEnterEnterpriseChat;
- (void)onTemplateMsgRecv;
- (void)onCallServicePhone:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 row:(unsigned long long)arg2 section:(unsigned int)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateTitleView;
- (void)newMessageWithContact:(id)arg1 afterDelay:(double)arg2;
- (void)handleAddedContact;
- (void)checkUpdateCertInfo;
- (void)reloadTableView;
- (void)onContactUpdated;
- (void)reloadView;
- (_Bool)isDeviceBound;
- (_Bool)hasDeviceUserData;
- (void)updateFooterView;
- (id)bindWeAppIconViewWithFrame:(struct CGRect)arg1 url:(id)arg2;
- (void)makeBindWeAppListCell:(id)arg1;
- (void)makeDisableEnterpriseSubBrand:(id)arg1;
- (double)widthForBusinessScopeTitleLabel;
- (void)makeBusinessScopeCell:(id)arg1;
- (void)makeMerchantSecurityCell:(id)arg1;
- (void)makeMerchantRatings:(id)arg1;
- (void)makeServicePhoneCell:(id)arg1 withPhone:(id)arg2;
- (void)makeEnterEnterpriseCell:(id)arg1;
- (void)makeAllowPositionCell:(id)arg1;
- (void)makeHideFromProfileCell:(id)arg1;
- (void)makeTemplateMsgRecvCell:(id)arg1;
- (void)makeNewMessageNotificationCell:(id)arg1;
- (void)makeEnterpriseChatEntryCell:(id)arg1;
- (void)makeEnterpriseBrandStikyOnTopCell:(id)arg1;
- (void)makeEnterpriseBlockMessageCell:(id)arg1;
- (void)makeTopSessionCell:(id)arg1;
- (void)makeBlockMessageNotifyCell:(id)arg1;
- (_Bool)shouldEnterpriseStickyOnTop;
- (_Bool)shouldReceiveEnterpriseMessage;
- (void)makeUrlCell:(id)arg1 withData:(id)arg2;
- (void)makePrivilegesCell:(id)arg1;
- (void)makeTrandemarkBodyCell:(id)arg1;
- (void)makeVerifySourceCell:(id)arg1;
- (id)getVerifySourceAttributedString;
- (void)makeRegisterBodyCell:(id)arg1;
- (void)makeSignatureCell:(id)arg1;
- (void)reloadRowData;
- (unsigned int)transToReportScene;
- (void)updateNickNameLabel;
- (void)onBrandExpose;
- (void)initFooterView;
- (void)initNickNameLabel;
- (void)initHDHeadImage;
- (void)initHeadImage;
- (void)updateNavigationBarRightButton;
- (void)adjustNickNameAndUserNameLabelVerticalCenter;
- (void)initHeaderView;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (id)GetTableView;
- (void)initTableView;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)profileDestory;
- (void)recordProfilePageWrap;
- (_Bool)isFromNotifyMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

