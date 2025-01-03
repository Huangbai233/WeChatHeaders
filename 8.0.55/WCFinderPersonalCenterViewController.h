//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, MJPublisher, MMFinderLivePurchasedFeedViewModel, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UINavigationController, WCActionSheet, WCActionSheetWithHeadAvatar, WCFinderCreateCoordinator, WCFinderCreateLiveViewModel, WCFinderPersonalCenterCollectionViewCell, WCFinderPersonalCenterContactData, WCFinderPersonalCenterTakePhotoCollectionViewCell, WCFinderPersonalCenterViewModel, WCFinderPersonalCenterWeixinContactCollectionViewCell, WCFinderPostActionSheetConfigArray, WCFinderProcessTimeRecorder, WCFinderWebViewOpener;

@interface WCFinderPersonalCenterViewController
{
    _Bool _hasRedDotAtEnter;
    _Bool _hasReportBrandIdentityTipsExpose;
    _Bool _showIncomeEntrance;
    _Bool _clickIncomeEntranceCreateFinder;
    _Bool _hasOpenUserLogoutPage;
    _Bool _openPostActionDirectly;
    _Bool _isCompleCheck;
    _Bool _isClickStartLive;
    _Bool _historyExposed;
    _Bool _settingExposed;
    _Bool _personalCenterShowInteractiveTailText;
    int _prepareRet;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCFinderPersonalCenterWeixinContactCollectionViewCell *_weChatAcctCell;
    WCFinderPersonalCenterCollectionViewCell *_finderAcctCell;
    WCFinderPersonalCenterTakePhotoCollectionViewCell *_takePhotoCell;
    FinderNewUserPrepareResponse *_prepareResponse;
    WCFinderCreateCoordinator *_createCoordinator;
    WCActionSheetWithHeadAvatar *_publishActionSheet;
    WCActionSheet *_liveActionSheet;
    UINavigationController *_imagePickerVC;
    WCFinderPersonalCenterViewModel *_viewModel;
    unsigned long long _enterTime;
    unsigned long long _exportBeginTime;
    double _bePushTime;
    WCFinderProcessTimeRecorder *_processTimeRecarder;
    WCFinderPostActionSheetConfigArray *_postSheetConfigArray;
    WCFinderCreateLiveViewModel *_createLiveVM;
    unsigned long long _pendingOpenVC;
    WCFinderWebViewOpener *_creatorWebVCOpener;
    unsigned long long _fromScene;
    MMFinderLivePurchasedFeedViewModel *_purchasedFeedViewModel;
    NSString *_prepareErrorString;
    NSString *_descriptionPromptWording;
    NSMutableArray *_contactSessions;
    MJPublisher *_mjPublisher;
    WCFinderPersonalCenterContactData *_contactData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPersonalCenterContactData *contactData; // @synthesize contactData=_contactData;
@property(retain, nonatomic) MJPublisher *mjPublisher; // @synthesize mjPublisher=_mjPublisher;
@property(nonatomic) _Bool personalCenterShowInteractiveTailText; // @synthesize personalCenterShowInteractiveTailText=_personalCenterShowInteractiveTailText;
@property(retain, nonatomic) NSMutableArray *contactSessions; // @synthesize contactSessions=_contactSessions;
@property(nonatomic) _Bool settingExposed; // @synthesize settingExposed=_settingExposed;
@property(nonatomic) _Bool historyExposed; // @synthesize historyExposed=_historyExposed;
@property(nonatomic) _Bool isClickStartLive; // @synthesize isClickStartLive=_isClickStartLive;
@property(nonatomic) _Bool isCompleCheck; // @synthesize isCompleCheck=_isCompleCheck;
@property(retain, nonatomic) NSString *descriptionPromptWording; // @synthesize descriptionPromptWording=_descriptionPromptWording;
@property(retain, nonatomic) NSString *prepareErrorString; // @synthesize prepareErrorString=_prepareErrorString;
@property(nonatomic) int prepareRet; // @synthesize prepareRet=_prepareRet;
@property(retain, nonatomic) MMFinderLivePurchasedFeedViewModel *purchasedFeedViewModel; // @synthesize purchasedFeedViewModel=_purchasedFeedViewModel;
@property(nonatomic) _Bool openPostActionDirectly; // @synthesize openPostActionDirectly=_openPostActionDirectly;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) WCFinderWebViewOpener *creatorWebVCOpener; // @synthesize creatorWebVCOpener=_creatorWebVCOpener;
@property(nonatomic) unsigned long long pendingOpenVC; // @synthesize pendingOpenVC=_pendingOpenVC;
@property(nonatomic) _Bool hasOpenUserLogoutPage; // @synthesize hasOpenUserLogoutPage=_hasOpenUserLogoutPage;
@property(nonatomic) _Bool clickIncomeEntranceCreateFinder; // @synthesize clickIncomeEntranceCreateFinder=_clickIncomeEntranceCreateFinder;
@property(nonatomic) _Bool showIncomeEntrance; // @synthesize showIncomeEntrance=_showIncomeEntrance;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM; // @synthesize createLiveVM=_createLiveVM;
@property(retain, nonatomic) WCFinderPostActionSheetConfigArray *postSheetConfigArray; // @synthesize postSheetConfigArray=_postSheetConfigArray;
@property(retain, nonatomic) WCFinderProcessTimeRecorder *processTimeRecarder; // @synthesize processTimeRecarder=_processTimeRecarder;
@property(nonatomic) double bePushTime; // @synthesize bePushTime=_bePushTime;
@property(nonatomic) unsigned long long exportBeginTime; // @synthesize exportBeginTime=_exportBeginTime;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool hasReportBrandIdentityTipsExpose; // @synthesize hasReportBrandIdentityTipsExpose=_hasReportBrandIdentityTipsExpose;
@property(nonatomic) _Bool hasRedDotAtEnter; // @synthesize hasRedDotAtEnter=_hasRedDotAtEnter;
@property(retain, nonatomic) WCFinderPersonalCenterViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UINavigationController *imagePickerVC; // @synthesize imagePickerVC=_imagePickerVC;
@property(retain, nonatomic) WCActionSheet *liveActionSheet; // @synthesize liveActionSheet=_liveActionSheet;
@property(retain, nonatomic) WCActionSheetWithHeadAvatar *publishActionSheet; // @synthesize publishActionSheet=_publishActionSheet;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) FinderNewUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
@property(retain, nonatomic) WCFinderPersonalCenterTakePhotoCollectionViewCell *takePhotoCell; // @synthesize takePhotoCell=_takePhotoCell;
@property(retain, nonatomic) WCFinderPersonalCenterCollectionViewCell *finderAcctCell; // @synthesize finderAcctCell=_finderAcctCell;
@property(retain, nonatomic) WCFinderPersonalCenterWeixinContactCollectionViewCell *weChatAcctCell; // @synthesize weChatAcctCell=_weChatAcctCell;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_triggerReportHistory:(_Bool)arg1;
- (void)_triggerReportSetting:(_Bool)arg1;
- (void)shootComposingViewController:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(_Bool)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickAssetInfos:(id)arg2 picker:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickEditingSightWithInfo:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithActionFlow:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(_Bool)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(_Bool)arg3;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)startMovieComposingWithAssetInfos:(id)arg1 picker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2;
- (void)onFinderMsgSessionUpdated;
- (void)configureSessionPageInOutReport;
- (void)registerYReportSdk;
- (void)personalCenterViewModelFinderPrivateMsgExposeMsgChanged;
- (void)personalCenterViewModelChangeSelectedAccount;
- (void)rebuildContactsSession;
- (void)personalCenterViewModelOtherContactsChanged:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)personalCenterClickAccountSelect:(id)arg1;
- (void)identityHintButtonDidClick;
- (void)buildIncomeReddot;
- (void)getIncomePageInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)viewController:(id)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 publisherPostInfo:(id)arg3;
- (void)processWithSightDraft:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)onCreateLiveNoticeWithInfo:(id)arg1 reporter:(id)arg2;
- (void)showLiveNoticeWithLiveInfo:(id)arg1 reporter:(id)arg2;
- (void)createLiveNoticeWithReporter:(id)arg1;
- (void)showLiveMemberNotice;
- (void)showLiveNoticeWithReporter:(id)arg1;
- (void)showLiveCreate;
- (void)realStartLive;
- (_Bool)showPrepareRequeestResult;
- (void)showMiaoJianFinderComposingPublishView;
- (void)enterMiaoJianFinderMovieComposing;
- (void)showFinderPublishView;
- (id)genPostEntranceExtraDict;
- (void)showMiaojianFinderPublisherWithPickerEditingEnabled:(_Bool)arg1;
- (void)showFinderCameraViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickHeadAvatarDismiss;
- (void)onClickHeadAvatarActionSheet;
- (unsigned long long)getReportPostScene;
- (void)showPostEntrance;
- (void)personalCenterColloectionViewCellClickShowIncomeAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickRedPacketEvent:(id)arg1;
- (void)_afterRealNameVerity;
- (void)_openRealNameVerifyH5Page;
- (void)_openRealNameVerifyTips;
- (void)personalCenterColloectionViewCellClickTakePhotoAction:(id)arg1;
- (void)personalCenterColloectionViewBlockCellClickShowIncomeAction:(id)arg1;
- (void)_showIncomVCWithJumpInfo;
- (void)showIncomVC;
- (void)openNativeCreatorCenter;
- (void)preloadCameraTemplateIfNeeded;
- (id)creatorCenterUrl;
- (void)preloadCreatorCenterH5;
- (void)openH5CreatorCenter;
- (void)personalCenterColloectionViewCellClickCreatorCenter:(id)arg1;
- (void)personalCenterColloectionViewCellClickLiveAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickCameraAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickPrivateMSGAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickMentionAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickMemberMsgAction:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onFinderPostEntryNeedReload;
- (void)onPurchasedFeedViewModelUpdated:(_Bool)arg1 hasMoreData:(_Bool)arg2;
- (void)updateFinderUserPrepare:(id)arg1;
- (void)finderUserPrepareHistoryConfigChanged;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (unsigned long long)paidCollectionCount;
- (unsigned long long)joinedMembershipCount;
- (unsigned long long)paidMicCount;
- (unsigned long long)purchasedCount;
- (_Bool)shouldDisplayPurchasedEntrance;
- (unsigned long long)favCount;
- (unsigned long long)likeCount;
- (void)reportBrandIdentityTipsWithEventType:(long long)arg1;
- (void)reportPersonCenterEvent;
- (_Bool)enableShowLiveEntraceRedDot;
- (void)onFinderLiveRedDotChanged;
- (void)updateContactDataUnreadReddotInfo;
- (void)onFinderNotifyFansCountNeedReload;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReload;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)onFinderCreatorCenterNeedReload;
- (void)reloadFinderPrivateMsgCell;
- (void)onFinderPrivateMsgRedDotNeedReload;
- (void)_onClickSettingButton;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickBlockManager;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickHistory;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickOrderCenter;
- (void)reportWXPrivateMsgActionEventType:(long long)arg1;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickPivateMsgList;
- (void)reportWxNotifyActionEventType:(long long)arg1;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickNotificationList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickPaymentListList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickFavList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickLikeListList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickFollowingList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickInteractive;
- (double)collectionViewSeparatorViewHorizontalPadding:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldShowBGCardForSection:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)shouldShowOrder;
- (_Bool)shouldShowInteractiveGuardText;
- (long long)_historyEntranceStyle;
- (void)resetCreatorCenterData;
- (void)resetPrivateMsgData;
- (void)_updateFinderContactCell;
- (void)updateFinderContactCell;
- (void)initFinderContactCell;
- (void)loadContactData;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)_shouldShowIncomeEntry;
- (void)openCamera;
- (void)reportPostRouteExtStatsForActionType:(int)arg1;
- (void)getFinderContactReviewStatus;
- (void)setupSubviews;
- (void)reportProcessTime;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewWillLayoutSubviews;
- (_Bool)didNotCreateFinder;
- (id)contact;
- (void)checkSafeRedDotValid;
- (void)setupMenuItems;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithInitModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

