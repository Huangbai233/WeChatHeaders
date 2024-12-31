//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AccessCardLogicController, NSIndexPath, NSMutableArray, NSString, ShareMessageConfirmLogicHelper, UIScrollView, WCActionSheet, WCCardBaseCardDetailContentView, WCNewCardDetailLogicController, WCNewShareCardConsumedView, WCShareCardCodeView, WeToast;
@protocol WCNewCardDetailViewControllerDelegate;

@interface WCNewCardDetailViewController
{
    AccessCardLogicController *_accessCardLogic;
    _Bool _isFromScanQRCode;
    _Bool _isPresent;
    _Bool _hiddenRightBar;
    _Bool _hiddenUserHeaderView;
    _Bool _hiddenDeleteItem;
    _Bool _isFromShareCardList;
    _Bool _isFromGiftCard;
    _Bool _isAddCard;
    _Bool _bIsFromSDKAuth;
    _Bool _bHideAcceptBtn;
    _Bool _bIsGetConsumedReward;
    _Bool _bHasTryShowConsumedView;
    _Bool _bIsStartResumeFromShareCardCodeView;
    _Bool _bIsEndResumeFromShareCardCodeView;
    _Bool _bIsOpenOperationView;
    _Bool _bIsOpenOffinePayView;
    _Bool _bIsSelectTagGroup;
    id <WCNewCardDetailViewControllerDelegate> _delegate;
    NSIndexPath *_lastIndex;
    unsigned long long _appBrandModeType;
    WCNewCardDetailLogicController *_logicController;
    NSString *_shareToUsername;
    ShareMessageConfirmLogicHelper *_shareToFriendHelper;
    WCActionSheet *_actionSheet;
    WCCardBaseCardDetailContentView *_curContentView;
    UIScrollView *_emptyContentView;
    WeToast *_toastVC;
    WCShareCardCodeView *_cardCodeView;
    WCNewShareCardConsumedView *_consumedView;
    NSMutableArray *_arrGroupUser;
    NSMutableArray *_arrBlackUser;
    NSMutableArray *_arrGroupUserLabelID;
    NSMutableArray *_arrBlackUserLabelID;
    long long _currentTipViewIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentTipViewIndex; // @synthesize currentTipViewIndex=_currentTipViewIndex;
@property(retain, nonatomic) NSMutableArray *arrBlackUserLabelID; // @synthesize arrBlackUserLabelID=_arrBlackUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrGroupUserLabelID; // @synthesize arrGroupUserLabelID=_arrGroupUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrBlackUser; // @synthesize arrBlackUser=_arrBlackUser;
@property(retain, nonatomic) NSMutableArray *arrGroupUser; // @synthesize arrGroupUser=_arrGroupUser;
@property(nonatomic) _Bool bIsSelectTagGroup; // @synthesize bIsSelectTagGroup=_bIsSelectTagGroup;
@property(nonatomic) _Bool bIsOpenOffinePayView; // @synthesize bIsOpenOffinePayView=_bIsOpenOffinePayView;
@property(nonatomic) _Bool bIsOpenOperationView; // @synthesize bIsOpenOperationView=_bIsOpenOperationView;
@property(nonatomic) _Bool bIsEndResumeFromShareCardCodeView; // @synthesize bIsEndResumeFromShareCardCodeView=_bIsEndResumeFromShareCardCodeView;
@property(nonatomic) _Bool bIsStartResumeFromShareCardCodeView; // @synthesize bIsStartResumeFromShareCardCodeView=_bIsStartResumeFromShareCardCodeView;
@property(nonatomic) _Bool bHasTryShowConsumedView; // @synthesize bHasTryShowConsumedView=_bHasTryShowConsumedView;
@property(retain, nonatomic) WCNewShareCardConsumedView *consumedView; // @synthesize consumedView=_consumedView;
@property(retain, nonatomic) WCShareCardCodeView *cardCodeView; // @synthesize cardCodeView=_cardCodeView;
@property(retain, nonatomic) WeToast *toastVC; // @synthesize toastVC=_toastVC;
@property(retain, nonatomic) UIScrollView *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
@property(retain, nonatomic) WCCardBaseCardDetailContentView *curContentView; // @synthesize curContentView=_curContentView;
@property(retain, nonatomic) WCActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) ShareMessageConfirmLogicHelper *shareToFriendHelper; // @synthesize shareToFriendHelper=_shareToFriendHelper;
@property(retain, nonatomic) NSString *shareToUsername; // @synthesize shareToUsername=_shareToUsername;
@property(nonatomic) _Bool bIsGetConsumedReward; // @synthesize bIsGetConsumedReward=_bIsGetConsumedReward;
@property(nonatomic) _Bool bHideAcceptBtn; // @synthesize bHideAcceptBtn=_bHideAcceptBtn;
@property(nonatomic) _Bool bIsFromSDKAuth; // @synthesize bIsFromSDKAuth=_bIsFromSDKAuth;
@property(retain, nonatomic) WCNewCardDetailLogicController *logicController; // @synthesize logicController=_logicController;
@property(nonatomic) unsigned long long appBrandModeType; // @synthesize appBrandModeType=_appBrandModeType;
@property(nonatomic) _Bool isAddCard; // @synthesize isAddCard=_isAddCard;
@property(nonatomic) _Bool isFromGiftCard; // @synthesize isFromGiftCard=_isFromGiftCard;
@property(nonatomic) _Bool isFromShareCardList; // @synthesize isFromShareCardList=_isFromShareCardList;
@property(nonatomic) _Bool hiddenDeleteItem; // @synthesize hiddenDeleteItem=_hiddenDeleteItem;
@property(nonatomic) _Bool hiddenUserHeaderView; // @synthesize hiddenUserHeaderView=_hiddenUserHeaderView;
@property(nonatomic) _Bool hiddenRightBar; // @synthesize hiddenRightBar=_hiddenRightBar;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(nonatomic) _Bool isFromScanQRCode; // @synthesize isFromScanQRCode=_isFromScanQRCode;
@property(retain, nonatomic) NSIndexPath *lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) __weak id <WCNewCardDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCloseLargeView;
- (void)onGetOfflineCodeError;
- (id)processCurrentScreenShot;
- (void)deleteCardAlertViewConfirmClick;
- (void)phoneCallAlertViewConfirmClick;
- (void)payOrQrCodeButtonDidClick;
- (void)onShareCardAfterConsumed:(_Bool)arg1;
- (void)onClickNotifyBtn:(_Bool)arg1;
- (void)onCloseCodeView;
- (void)showCodeView;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showFirstUseShareCardTip;
- (void)onShowShareCardTips;
- (void)setHasEnterShareCardListBefore;
- (void)setHasShowShareCardTipsBefore;
- (_Bool)hasShowShareCardTipsBefore;
- (id)getContollerTitle;
- (void)showAdd2CardPkgTip;
- (void)setHasEnterCardDetailBefore;
- (_Bool)hasEnterCardDetailBefore;
- (void)setHasShowMemberCardTip;
- (_Bool)hasShowMemberCardTip;
- (void)reloadContentView;
- (void)reloadViewController;
- (id)getBrandColor;
- (_Bool)hasBrandColor;
- (void)viewDidLayoutSubviews;
- (void)refreshIfOfflineCodeScheme;
- (void)onPayButtonDidClick;
- (void)hidePresentNavigation:(_Bool)arg1;
- (void)refreshCode;
- (void)onReasonButtonClick;
- (unsigned int)getOfflineCodeStatus;
- (id)getOfflineCode;
- (id)getDynamicCodeGenerator;
- (id)getDynamicCode;
- (void)onClickMemberCardAnnounce:(id)arg1;
- (id)getUsedStoreList;
- (void)onClickNearbyPhoneBtn;
- (void)onClickWhoCanSeeBtn;
- (unsigned long long)getShareCardShareUserCount;
- (id)getShareCardShareUserName;
- (void)onShareCardBtnClick;
- (void)onAcceptCardBtnClick:(_Bool)arg1;
- (void)onCardHeaderViewOperateBtnClick;
- (void)onCardHeaderViewApplyBtnClick;
- (void)recommendToFriend;
- (void)giftCardToFriend;
- (void)showTipViewFor3rdDomain;
- (_Bool)jumpToVideoFinderMiniProgramH5:(id)arg1;
- (_Bool)jumpToVideoFinder:(id)arg1;
- (void)onJumpToFinderBtnClick:(id)arg1;
- (void)onShareCardImageClick:(id)arg1;
- (void)openCellList0Item:(id)arg1;
- (void)openGiftCardInfoViewConroller;
- (void)openBrandProfileView;
- (void)openUsedStoresView;
- (void)openNearbyShopInfo;
- (void)openCardDetailView;
- (void)doOperation:(double)arg1;
- (void)doOpenOperationView:(double)arg1;
- (void)openOperationView;
- (void)openSecondaryField:(id)arg1;
- (void)openAppBranWithUserName:(id)arg1 brandPass:(id)arg2;
- (void)openTinyAppWithUserName:(id)arg1 path:(id)arg2;
- (void)openUrl:(id)arg1 returnBlock:(CDUnknownBlockType)arg2;
- (void)openUrl:(id)arg1;
- (_Bool)bIsCardFromOutAppScene;
- (double)getViewControllerContentViewHeight;
- (id)getGiftCardShareFromUserName;
- (_Bool)shouldShowGiftFromUserHeaderView;
- (_Bool)isNeedToDisplayDeeplinkJunmpTips;
- (int)getCardStatus;
- (_Bool)shouldHideAcceptBtn;
- (_Bool)canShowUseBtnInHeader;
- (void)onShareCardDelete:(_Bool)arg1 withShareCard:(id)arg2;
- (void)stepInOfflinePayWithExpireTime:(double)arg1;
- (void)onMarkShareCardWithRet:(_Bool)arg1 isMark:(_Bool)arg2 andMarkUsr:(id)arg3 markCardId:(id)arg4 expireTime:(float)arg5 qrCodeWording:(id)arg6;
- (void)onMarkShareCardError;
- (void)onShareCardConsumedWithShareCardTpInfoList:(id)arg1 shareCardId:(id)arg2 consumedBoxId:(id)arg3 subscribeAppUserName:(id)arg4 subscribeWording:(id)arg5 retMsg:(id)arg6;
- (void)onCurShareCardUpdate:(id)arg1;
- (void)onShareCardReqRetSystemErr:(_Bool)arg1;
- (_Bool)shouldRefreshWithShareCard;
- (void)onShareCardReqRetWithCardInfo:(id)arg1;
- (void)onShareCardSuccessWithCardData:(id)arg1;
- (void)onCardHasBeenUsed:(id)arg1;
- (void)onGiftCardRet:(int)arg1 cardData:(id)arg2;
- (void)onShowTipsAndReloadData;
- (void)onAcceptCardRet:(_Bool)arg1 withLoadingStr:(id)arg2 withAcceptInfoJsonStr:(id)arg3 isShareCard:(_Bool)arg4;
- (void)onGetCardDataFromSvrErr:(int)arg1;
- (void)onViewControllerAllContentNeedReload;
- (void)onViewControllerNeedReload;
- (void)onShareCardDataNotPrepare;
- (void)actionFromSvrActionSheet:(id)arg1;
- (void)jumpToContactInfoViewController:(id)arg1;
- (void)showBrandProfile;
- (void)deleteCard;
- (void)shareCardAction;
- (void)shareToSNS;
- (void)shareToFriend;
- (void)showReportView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionList;
- (void)onReturn;
- (void)showTableView;
- (void)showEmptyView;
- (void)updateRightBarButtonStatus;
- (void)reloadViewControllerBackgroundColor;
- (void)updateCardData:(id)arg1;
- (void)setForBatchViewCard;
- (long long)preferredStatusBarStyle;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)initContentView;
- (void)initEmptyView;
- (void)showErrMsg;
- (void)onUserAuthorizedLocationWithCardID:(id)arg1;
- (void)tryUpdateAccessCard;
- (void)viewDidLoad;
- (id)initWithShareCard:(id)arg1 withShareCardListIfExist:(id)arg2 andScene:(unsigned long long)arg3;
- (id)initWithCardEnterInfo:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (_Bool)shouldUseDynamicColor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

