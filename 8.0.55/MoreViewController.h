//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMHeadImageView, MMTimer, MMUIButton, MMUIView, MyFavoritesViewController, NSString, TextStateFriendTopicButton, TextStatePrivacyMgr, TextStateProfileCardContentView, TextStateProfileDragAnimateHelper, TextStatePublishEntryButton, TextStateSquareButton, TextStateTopicModel, UITableView, UIView, UpdateWechatRedDotConfig, WCBizLoadingView, WCFinderCreateCoordinator, WCTableViewManager;

@interface MoreViewController
{
    UpdateWechatRedDotConfig *m_oUpdateWechatRedDotConfig;
    MyFavoritesViewController *m_favViewController;
    MMTimer *m_favCacheTimer;
    UIView *m_footerView;
    WCTableViewManager *m_tableViewMgr;
    MMUIButton *m_textStateErrorBtn;
    _Bool _bIsEnterShareCardListFromOuterJump;
    _Bool _hasReportedPayReddotOnMe;
    _Bool _hasReportedPayReddotOnWCPay;
    unsigned int _patternLockLogicTag;
    WCBizLoadingView *_loadingView;
    UIView *_frontView;
    MMHeadImageView *_headImage;
    MMCPLabel *_nickNameLabel;
    MMUIView *_frontTableViewBackGroundView;
    UITableView *_frontTableView;
    WCFinderCreateCoordinator *_createCoordinator;
    TextStateSquareButton *_textStateSquareButton;
    TextStatePublishEntryButton *_textStatePublishButton;
    TextStateFriendTopicButton *_textStateFriendTopicButton;
    TextStateTopicModel *_currentMaxFriendTopic;
    TextStateProfileCardContentView *_textStateDetailView;
    double _textStateDetailHeight;
    double _textStateDetailFittingHeight;
    TextStateProfileDragAnimateHelper *_textStateAnimationUtil;
    TextStatePrivacyMgr *_shareScopeMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStatePrivacyMgr *shareScopeMgr; // @synthesize shareScopeMgr=_shareScopeMgr;
@property(retain, nonatomic) TextStateProfileDragAnimateHelper *textStateAnimationUtil; // @synthesize textStateAnimationUtil=_textStateAnimationUtil;
@property(nonatomic) double textStateDetailFittingHeight; // @synthesize textStateDetailFittingHeight=_textStateDetailFittingHeight;
@property(nonatomic) double textStateDetailHeight; // @synthesize textStateDetailHeight=_textStateDetailHeight;
@property(retain, nonatomic) TextStateProfileCardContentView *textStateDetailView; // @synthesize textStateDetailView=_textStateDetailView;
@property(retain, nonatomic) TextStateTopicModel *currentMaxFriendTopic; // @synthesize currentMaxFriendTopic=_currentMaxFriendTopic;
@property(retain, nonatomic) TextStateFriendTopicButton *textStateFriendTopicButton; // @synthesize textStateFriendTopicButton=_textStateFriendTopicButton;
@property(retain, nonatomic) TextStatePublishEntryButton *textStatePublishButton; // @synthesize textStatePublishButton=_textStatePublishButton;
@property(retain, nonatomic) TextStateSquareButton *textStateSquareButton; // @synthesize textStateSquareButton=_textStateSquareButton;
@property(nonatomic) _Bool hasReportedPayReddotOnWCPay; // @synthesize hasReportedPayReddotOnWCPay=_hasReportedPayReddotOnWCPay;
@property(nonatomic) _Bool hasReportedPayReddotOnMe; // @synthesize hasReportedPayReddotOnMe=_hasReportedPayReddotOnMe;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) UITableView *frontTableView; // @synthesize frontTableView=_frontTableView;
@property(retain, nonatomic) MMUIView *frontTableViewBackGroundView; // @synthesize frontTableViewBackGroundView=_frontTableViewBackGroundView;
@property(nonatomic) __weak MMCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) __weak MMHeadImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(nonatomic) _Bool bIsEnterShareCardListFromOuterJump; // @synthesize bIsEnterShareCardListFromOuterJump=_bIsEnterShareCardListFromOuterJump;
@property(retain, nonatomic) WCBizLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (void)registerYReportSdk;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)onTextStateNotifyRead;
- (void)onReceiveInteractionCount:(unsigned int)arg1 withTextStateId:(id)arg2;
- (void)reportTextStateMixButtonAction:(unsigned int)arg1;
- (void)exposeTextStateCard;
- (_Bool)shouldShowTextStateStyle;
- (void)jumpToTextStateTopic:(id)arg1 reporter:(id)arg2 hasRedDot:(_Bool)arg3;
- (void)onTapCommentListButtonForCardView:(id)arg1;
- (void)onTapLikeListButtonForTextState:(id)arg1;
- (void)onTapAtTextStateHeadButton;
- (void)onTapAtTextStateDetailButtonWithHandler:(id)arg1;
- (void)onTapAtIconButton;
- (id)associateViewController;
- (void)doSourceAction:(id)arg1;
- (void)onTapResendButton:(id)arg1;
- (void)onTapCommentButton:(id)arg1;
- (void)onTapSelfFavoriteButton:(id)arg1;
- (void)onTapIconButton:(id)arg1;
- (void)hideMultiRedDot:(id)arg1;
- (void)onTapMoreButton:(id)arg1;
- (void)onTapBackground:(id)arg1;
- (void)onTapExpandButton:(id)arg1;
- (void)updateTextState;
- (void)onTextStateNearbyExperimentChange;
- (void)onTextStateDataUpdated;
- (void)onTextStateDataLoaded;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateErrorBtnClick;
- (id)genPublishUseCase;
- (void)onTapTextStateFriendTopicButton;
- (void)onTapTextStatePublishButton;
- (void)onTapTextStateSquareButton;
- (void)preloadWeAppIfNeeded;
- (void)onFinderCardsEntryStyleChange;
- (void)onFinderCardsEntryShouldShowChange;
- (void)onTogetherBadgesChanged;
- (void)onPayMenuRedDotHelperSync;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onWechatEntranceRedPointChange;
- (void)onWCSettingRedPointChange;
- (void)setupDeepLinkConfig;
- (void)cardDeeplink;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)handlePersionalEmoticonDeepLink:(id)arg1 animation:(_Bool)arg2;
- (void)parseDeepLink:(id)arg1 animation:(_Bool)arg2;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)onWCCardTips;
- (void)onWCCardLayoutRedDotChanged;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)OnWCMallShowStatusInMoreViewChanged;
- (void)OnWCMallActivityChanged;
- (void)OnEmoticonRecommendNewStateChanged:(_Bool)arg1;
- (void)OnGetLQTReddotData;
- (void)OnGetBankCardReddotData;
- (void)ReloadWallet;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)onSettingExtChanged:(long long)arg1;
- (void)onWCCardMessageEntryTipChanged:(id)arg1;
- (void)onProfileChange;
- (void)onHeadImageChange:(id)arg1;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (void)onLimitedModeChanged;
- (void)pluginsChanged:(id)arg1;
- (void)onGetUpdateInfoOk;
- (void)setupTextStateDragAniamteHelper;
- (void)setupFrontView;
- (void)didReceiveMemoryWarning;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)updateTabBarBadge;
- (unsigned int)getTotalCount;
- (void)onCloseFavTimeOut;
- (void)onFavoritesClose;
- (void)checkReload;
- (_Bool)isNeedShowWCPayInTabNew;
- (_Bool)isNeedShowWCPay;
- (void)showPrivateSettingWithContactVerify:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showWcRecentPrivacySetting:(long long)arg1;
- (void)showPrivateSetting;
- (void)showGeneralSetting;
- (void)showSettingView;
- (void)internalShowEmoticonStoreView;
- (void)showEmoticonStoreView;
- (void)showShareCardView;
- (void)showOldShareCardViewInternal;
- (void)showShareCardViewInternal;
- (void)onCardsEntryClicked;
- (void)reportLocationAndWifi;
- (void)showWCCardView;
- (void)showOverseaNativePayView;
- (void)openWCPayView;
- (void)showHtml5PayView;
- (void)showWCPayView;
- (void)reportNativeWCPayClick;
- (void)showFavoriteViewWithSelectType:(id)arg1;
- (void)showFavoriteView;
- (void)showFinderProfile:(id)arg1;
- (void)showMyWCView;
- (void)showMyPatSuffixInProfileView;
- (void)showMyQRCodeInProfileView;
- (void)onShowMyQrCode;
- (void)showProfileView;
- (void)updateUnReadMsg;
- (void)setSmallRedDotForTextStateProfileCardMoreButton:(_Bool)arg1;
- (id)makeFriendTopicButton;
- (void)makeHeaderView;
- (void)stopLoading;
- (void)startLoading;
- (void)initLoadingView;
- (void)addSettingSection;
- (id)createFinderEntranceCellConfig:(struct CGSize)arg1;
- (void)exposeFinderVideoCell;
- (void)addEmoticonsIfNeededToSection:(id)arg1;
- (void)addCardsIfNeededToSection:(id)arg1;
- (void)addFunctionSection;
- (void)jumpToWalletView;
- (void)addWCMallSection;
- (id)rightValueForWCMallSection;
- (_Bool)reddotForWCMallSection;
- (id)unReadForWCMallSection;
- (void)addProfileSection;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)initTextStateErrorBtn;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)updateTextStateExpandHeight;
- (void)viewDidTransitionToNewSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)triggerFinderSerialEntryRedDotExpose;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateTextStateLocalPublish;
- (id)findMainTableView;
- (void)reloadMoreView;
- (void)addFooterView;
- (void)willAppear;
- (void)initView;
@property(readonly, nonatomic) struct CGSize rowIconSize;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)getUpdateWechatRedDotConfig;
- (void)setUpdateWechatRedDotConfig:(id)arg1;
- (void)clearUpdateWechatRedDotConfig;
- (void)initUpdateWechatRedDotConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

