//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMUILabel, MMUIView, NSDictionary, NSObject, NSString, RichTextView, UIAttachmentBehavior, UIButton, UIDynamicAnimator, WCPayBindCardInfo, WCPayOfflineBlockTipsView, WCPayOfflineDisableBlockTipsView, WCPayOfflineEnablePageTipsView, WCPayOfflinePayAddNewCardTipsView, WCPayOfflinePayBottomButton, WCPayOfflinePayCodeView, WCPayOfflinePayCreateOfflinePayTipsView, WCPayOfflinePayGuideBarView, WCPayOfflinePayInvalidCheckTipsView, WCPayOfflinePayNoCodeTipsView, WCPayOfflinePayPageJumpInfo, WCPayOfflinePaySelectPayCardView, WCPayOfflinePaymentTipsBarView, WCPayPickerView, WCPayWebImageView, WCUIAlertView;
@protocol OS_dispatch_queue, WCPayOfflinePayViewControllerDelegate;

@interface WCPayOfflinePayViewController
{
    id <WCPayOfflinePayViewControllerDelegate> m_delegate;
    _Bool m_bFreezeAlertShowed;
    _Bool m_bReadAgreement;
    UIButton *footerButton;
    RichTextView *m_cardInfoLabel;
    WCPayOfflinePayCodeView *m_PayOfflinePayCodeView;
    int m_enCurrentOfflinePayCodeDisplayScene;
    double _oldBrightness;
    WCPayPickerView *m_pickerView;
    WCPayWebImageView *_bankIcon;
    WCPayOfflinePayBottomButton *_changeCardBtn;
    NSString *_cacheCode;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    _Bool _isRefreshing;
    _Bool _triggeredGetToken;
    UIAttachmentBehavior *_attachment;
    MMUIView *_cardInfoView;
    NSDictionary *m_dicBanners;
    double bannerHeight;
    _Bool _isViewDidAppear;
    _Bool _bNeedUpdateCodeView;
    _Bool _bRefreshFromCreateOfflinePay;
    _Bool _isPatternLockShowing;
    _Bool _bHasCheckFirstTips;
    _Bool _bIsAllCardNotSupportOfflinePay;
    _Bool _bIsShowingAddNewCardTipsView;
    _Bool _bNeedShowNoCodeTipsView;
    _Bool _bIsNavigateToReceiveLogic;
    _Bool _bNeedShowReCreateOfflinePayTipsView;
    _Bool _bIsFirstRefresh;
    _Bool _needRefreshCardList;
    _Bool _needShowPayCardListAfterRefresh;
    _Bool _bHasReportGuideBarShow;
    _Bool _needRefreshData;
    _Bool _bHasManualChangeCard;
    _Bool _openProtocolClickFlag;
    _Bool _bIsManualCloseTipsView;
    _Bool _bIsCaptureWhenViewDisappear;
    _Bool _bIsUpdateCodeAfterSetPayment;
    unsigned int _patternLockLogicTag;
    long long _entryScene;
    UIDynamicAnimator *_animator;
    WCUIAlertView *_snapshotAlertView;
    WCPayOfflinePayInvalidCheckTipsView *_invalidTipsView;
    WCPayOfflinePaySelectPayCardView *_selectCardView;
    WCPayOfflinePayAddNewCardTipsView *_addNewCardTipsView;
    WCPayOfflinePayCreateOfflinePayTipsView *_createOfflinePayTipsView;
    WCPayOfflinePayNoCodeTipsView *_noCodeTipsView;
    MMUIView *_actionBarView;
    MMUILabel *_bankNameLabel;
    MMUILabel *_bankDescLabel;
    MMUILabel *_bankForbidWordLabel;
    MMUIView *_headerContentView;
    WCPayBindCardInfo *_selectedCardNotSave;
    WCPayOfflinePayGuideBarView *_guideBarView;
    WCPayOfflinePaymentTipsBarView *_tipsBarView;
    WCPayOfflineBlockTipsView *_blockTipsView;
    NSDictionary *_refreshExtraInfo;
    WCPayOfflineDisableBlockTipsView *_disableBlockTipsView;
    WCPayOfflinePayPageJumpInfo *_pageJumpInfo;
    WCPayOfflinePayBottomButton *_pageJumpEntryView;
    WCPayOfflineEnablePageTipsView *_enableTipsView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsUpdateCodeAfterSetPayment; // @synthesize bIsUpdateCodeAfterSetPayment=_bIsUpdateCodeAfterSetPayment;
@property(retain, nonatomic) WCPayOfflineEnablePageTipsView *enableTipsView; // @synthesize enableTipsView=_enableTipsView;
@property(nonatomic) _Bool bIsCaptureWhenViewDisappear; // @synthesize bIsCaptureWhenViewDisappear=_bIsCaptureWhenViewDisappear;
@property(nonatomic) _Bool bIsManualCloseTipsView; // @synthesize bIsManualCloseTipsView=_bIsManualCloseTipsView;
@property(retain, nonatomic) WCPayOfflinePayBottomButton *pageJumpEntryView; // @synthesize pageJumpEntryView=_pageJumpEntryView;
@property(retain, nonatomic) WCPayOfflinePayPageJumpInfo *pageJumpInfo; // @synthesize pageJumpInfo=_pageJumpInfo;
@property(nonatomic) _Bool openProtocolClickFlag; // @synthesize openProtocolClickFlag=_openProtocolClickFlag;
@property(nonatomic) _Bool bHasManualChangeCard; // @synthesize bHasManualChangeCard=_bHasManualChangeCard;
@property(retain, nonatomic) WCPayOfflineDisableBlockTipsView *disableBlockTipsView; // @synthesize disableBlockTipsView=_disableBlockTipsView;
@property(retain, nonatomic) NSDictionary *refreshExtraInfo; // @synthesize refreshExtraInfo=_refreshExtraInfo;
@property(nonatomic) _Bool needRefreshData; // @synthesize needRefreshData=_needRefreshData;
@property(retain, nonatomic) WCPayOfflineBlockTipsView *blockTipsView; // @synthesize blockTipsView=_blockTipsView;
@property(nonatomic) _Bool bHasReportGuideBarShow; // @synthesize bHasReportGuideBarShow=_bHasReportGuideBarShow;
@property(retain, nonatomic) WCPayOfflinePaymentTipsBarView *tipsBarView; // @synthesize tipsBarView=_tipsBarView;
@property(retain, nonatomic) WCPayOfflinePayGuideBarView *guideBarView; // @synthesize guideBarView=_guideBarView;
@property(retain, nonatomic) WCPayBindCardInfo *selectedCardNotSave; // @synthesize selectedCardNotSave=_selectedCardNotSave;
@property(nonatomic) _Bool needShowPayCardListAfterRefresh; // @synthesize needShowPayCardListAfterRefresh=_needShowPayCardListAfterRefresh;
@property(nonatomic) _Bool needRefreshCardList; // @synthesize needRefreshCardList=_needRefreshCardList;
@property(retain, nonatomic) MMUIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(retain, nonatomic) MMUILabel *bankForbidWordLabel; // @synthesize bankForbidWordLabel=_bankForbidWordLabel;
@property(retain, nonatomic) MMUILabel *bankDescLabel; // @synthesize bankDescLabel=_bankDescLabel;
@property(retain, nonatomic) MMUILabel *bankNameLabel; // @synthesize bankNameLabel=_bankNameLabel;
@property(nonatomic) _Bool bIsFirstRefresh; // @synthesize bIsFirstRefresh=_bIsFirstRefresh;
@property(retain, nonatomic) MMUIView *actionBarView; // @synthesize actionBarView=_actionBarView;
@property(nonatomic) _Bool bNeedShowReCreateOfflinePayTipsView; // @synthesize bNeedShowReCreateOfflinePayTipsView=_bNeedShowReCreateOfflinePayTipsView;
@property(nonatomic) _Bool bIsNavigateToReceiveLogic; // @synthesize bIsNavigateToReceiveLogic=_bIsNavigateToReceiveLogic;
@property(nonatomic) _Bool bNeedShowNoCodeTipsView; // @synthesize bNeedShowNoCodeTipsView=_bNeedShowNoCodeTipsView;
@property(retain, nonatomic) WCPayOfflinePayNoCodeTipsView *noCodeTipsView; // @synthesize noCodeTipsView=_noCodeTipsView;
@property(retain, nonatomic) WCPayOfflinePayCreateOfflinePayTipsView *createOfflinePayTipsView; // @synthesize createOfflinePayTipsView=_createOfflinePayTipsView;
@property(nonatomic) _Bool bIsShowingAddNewCardTipsView; // @synthesize bIsShowingAddNewCardTipsView=_bIsShowingAddNewCardTipsView;
@property(retain, nonatomic) WCPayOfflinePayAddNewCardTipsView *addNewCardTipsView; // @synthesize addNewCardTipsView=_addNewCardTipsView;
@property(nonatomic) _Bool bIsAllCardNotSupportOfflinePay; // @synthesize bIsAllCardNotSupportOfflinePay=_bIsAllCardNotSupportOfflinePay;
@property(retain, nonatomic) WCPayOfflinePaySelectPayCardView *selectCardView; // @synthesize selectCardView=_selectCardView;
@property(retain, nonatomic) WCPayOfflinePayInvalidCheckTipsView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(nonatomic) _Bool bHasCheckFirstTips; // @synthesize bHasCheckFirstTips=_bHasCheckFirstTips;
@property(retain, nonatomic) WCUIAlertView *snapshotAlertView; // @synthesize snapshotAlertView=_snapshotAlertView;
@property(nonatomic) _Bool isPatternLockShowing; // @synthesize isPatternLockShowing=_isPatternLockShowing;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool bRefreshFromCreateOfflinePay; // @synthesize bRefreshFromCreateOfflinePay=_bRefreshFromCreateOfflinePay;
@property(nonatomic) _Bool bNeedUpdateCodeView; // @synthesize bNeedUpdateCodeView=_bNeedUpdateCodeView;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(nonatomic) long long entryScene; // @synthesize entryScene=_entryScene;
- (void)registerYReportSdk;
- (void)handleClickOperateTypeGuideBar;
- (void)handleClickCardSwitchTypeGuideBar;
- (void)onGuideBarClick;
- (_Bool)shouldAutoHideGuideBar:(id)arg1;
- (_Bool)shouldShowGuideBar:(id)arg1;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 needRefresh:(_Bool)arg3;
- (void)openH5WithUrlString:(id)arg1 needRefreshData:(_Bool)arg2;
- (void)offlinePayDiableBlockTipsViewClickConfirmBtn;
- (void)hideDisableBlockTipsView;
- (void)showDisableBlockTipsView;
- (void)offlinePayBlockTipsViewClickOpenTinyAppWithExtraInfo:(id)arg1;
- (void)offlinePayBlockTipsViewClickConfirmBtn;
- (void)hideBlockTipsView;
- (void)showBlockTipsView;
- (_Bool)refreshDefaultCardInfoWithBindSerail:(id)arg1;
- (void)refreshDefaultCardInfoAfterV2AuthCodeSetPayment:(id)arg1;
- (void)saveCurrentSelectedCardWithCardInfo:(id)arg1;
- (id)getCurrentSelectedCardInfo;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)viewCotnrollerDidBecomeActive:(id)arg1;
- (void)onOfflinePayEnableTipsViewClickVerifyBtn;
- (void)showEnableOfflinePayTipsView;
- (_Bool)needShowEnableTipsView;
- (void)OnGetT2BCEntryMsg;
- (void)wcPayOfflinePayNoCodeTipsViewClickRefreshBtn;
- (void)hideNoCodeTipsView;
- (void)showNoCodeTipsView:(id)arg1;
- (void)showNoCodeTipsView;
- (void)updateProtocolClickFlag:(_Bool)arg1;
- (_Bool)getProtocolClickFlag;
- (void)wcPayOfflinePayCreateOffinePayViewClickProtocolUrl:(id)arg1;
- (void)wcPayOfflinePayCreateOffinePayViewClickSafeTips;
- (void)wcPayOfflinePayCreateOffinePayViewClickConfirmBtn;
- (void)showReCreateOfflinePayTipsView;
- (void)showCreateOfflinePayTipsView;
- (void)wcPayOfflineAddNewCardTipsViewClickViewPayCardBtn;
- (void)wcPayOfflineAddNewCardTipsViewClickAddCardBtn;
- (id)wcPayOfflineAddNewCardTipsViewGetTipsTitleContent;
- (void)hideAddNewCardTipsView;
- (void)showAddNewCardTipsView;
- (void)onSelectPayCardViewClickForbidTinyAppUsername:(id)arg1 appPath:(id)arg2 isFQF:(_Bool)arg3;
- (void)onSelectPayCardViewClickForbidUrl:(id)arg1 isFQF:(_Bool)arg2;
- (void)onSelectPayCardViewReturnWithNewSelectCardBindSerial:(id)arg1;
- (void)onSelectPayCardViewCancel;
- (void)wcPayOfflinePayInvalidCheckViewClickViewDetailLink;
- (void)wcPayOfflinePayInvalidCheckViewClickConfirmBtn:(_Bool)arg1;
- (void)initInvalidTipsView;
- (void)hideInvalidTipsView;
- (void)showInvalidTipsView;
- (void)paycodeViewAccessibilityShow;
- (void)paycodeviewAccessibilityHide;
- (void)checkAndShowFirstTips;
- (void)handleScreenDuringCapture;
- (void)didChangeScreenCapture:(id)arg1;
- (void)userDidTakeScreenshot:(id)arg1;
- (id)getNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (float)tipsViewContentHeight;
- (float)guideBarHeight;
- (float)cardInfoContentHeight;
- (float)topMarginOfTipView;
- (void)onIdleTimerUtilVoipQuit;
- (void)patternLockDidSetup:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)walletLockDidClose:(id)arg1;
- (_Bool)walletLockVerifyLogicNeedBlock:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)wcPayOfflinePayCodeViewClickViewBarCodeBtn;
- (void)wcPayOfflinePayCodeViewAutoRefreshCountingFinished:(id)arg1;
- (void)wcPayOfflinePayCodeViewBeginToShowFullScreen;
- (void)wcPayOfflinePayCodeViewExitFullScreenAnimationFinished:(id)arg1;
- (void)onKickQuit;
- (void)OnGetReceiveOrPayReddotData;
- (void)OnOfflinePayTokenGetEnablePageData;
- (void)OnOfflinePayTokenInfoUpdated:(_Bool)arg1;
- (void)OnShouldChangePayCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)onOffPayPauseAlertViewBtnClick;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(_Bool)arg2 Error:(id)arg3;
- (void)OnGetBarCodeFromQRCodeResponse:(id)arg1 Error:(id)arg2;
- (void)onUserChooseCardForOfflinePay:(id)arg1;
- (void)onChooseCardIndex:(long long)arg1;
- (void)onCloseOfflinePay;
- (void)clearOfflinePayAndPopWithoutAlert;
- (void)increaseBrightnessIfNeed;
- (id)bankLogoUrlStrFromType:(id)arg1;
- (id)currentCardInfoShouldUse;
- (void)WCPayPickerViewDidChooseRowTitle:(id)arg1 atSessionTitle:(id)arg2;
- (void)WCPayPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)OnShouldChangeCard:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)needShowPreferCardChangeTips;
- (_Bool)needShowBottomBusinessEntry;
- (id)getOfflinePayHelpUrl;
- (_Bool)checkIfAllCardCannotUseForOfflinePay;
- (void)preLoadTokensIfNeed;
- (void)cleanViewControllerBeforeShowPaidSucc;
- (void)showSelectedCardView;
- (void)scrollContentToBottom;
- (void)removeButtonRedDot:(id)arg1;
- (void)transferToBankCardBtnPress:(id)arg1;
- (void)transferToMix:(id)arg1;
- (void)qrcoderewardBtnPress:(id)arg1;
- (void)f2fHongBaoBtnPress:(id)arg1;
- (void)grouppayBtnPress:(id)arg1;
- (void)receiveMoneyBtnPress:(id)arg1;
- (void)updateCodeImageAndStartAutomaticUpdate;
- (void)exitFullScreenIfNeedAnimation:(_Bool)arg1;
- (void)onClickedReadSupportBanks;
- (void)setDelegate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)preViewControllerIsKindOf:(Class)arg1;
- (void)onReadAgreement:(id)arg1;
- (void)onMoreAction:(id)arg1;
- (void)changeCodeScene;
- (void)updateCodeInNewWayWithTips:(_Bool)arg1;
- (_Bool)checkIfNeedSetPaymentBeforeUpdateCode:(id)arg1;
- (void)updateCodeInNewWay;
- (void)updateCodeImage;
- (void)UpdateQRCodeImage;
- (void)UpdateBarCodeImage;
- (void)reloadTableView;
- (void)handleCodeViewRefreshFlag;
- (void)refreshViewWithData:(id)arg1;
- (void)setupChangeCardView;
- (id)createPayCodeView;
- (id)genBottomButtonWithTitle:(id)arg1 actionSelector:(SEL)arg2 logoImg:(id)arg3 buttonSize:(struct CGSize)arg4 bIsFirstBtn:(_Bool)arg5 bIsLastBtn:(_Bool)arg6 bNeedShowRedDot:(_Bool)arg7 reddotshowWording:(id)arg8 bNeedShowSmallReddot:(_Bool)arg9;
- (void)setupBottomButtonView;
- (void)jumpInfoEntryViewClick;
- (void)setupJumpInfoEntry;
- (id)getActionBarView;
- (void)setupHeaderContentView;
- (void)OnOfflinePayCancelPosNotification:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)doBackForTimeout;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)adjustSubviewRects;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (void)onClickLeftBarButton;
- (id)navigationBarBackgroundColor;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
