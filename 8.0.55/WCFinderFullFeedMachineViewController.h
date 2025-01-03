//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomCreateLogic, MMFinderHandOffItem, MMScrollViewProxy, MMTipsViewController, MMUILabel, NSIndexPath, NSMutableDictionary, NSString, PAGView, UIImage, UIImageView, UILabel, UITableView, UITapGestureRecognizer, UIView, UIViewController, WCFinderCustomPaging, WCFinderFeedDragUpDislikeController, WCFinderFeedFriendsLikeListViewController, WCFinderFeedListBannderView, WCFinderFeedMachineVM, WCFinderLandscapeReportInfo, WCFinderMsgBubbleMgrPanelView, WCFinderOpenTimelineParams, WCFinderPlayRateOperationView, WCFinderPlayRateOperationViewV3, WCFinderPullDownRefreshHeaderView, WCFinderRedDotCtrlInfo, WCFinderRefreshTableFooterView, WCFinderScrollActionSheet, WCFinderTLUnreadModel, WCStoryTouchToDismissView, _TtC6WeChat25WCFinderFeedFastSlipLogic;
@protocol WCFinderCommentBaseViewProtocol, WCFinderFullFeedMachineViewControllerDelegate;

@interface WCFinderFullFeedMachineViewController
{
    _Bool _postFeedInsertMachineTab;
    _Bool _hasReportCreateEvent;
    _Bool _isDisableVideoAutoPlay;
    _Bool _footerNoMoreData;
    _Bool _needsResumeTimelineVideo;
    _Bool _isEnableMarkRead;
    _Bool _isViewWillAppeaer;
    _Bool _hasFetchData;
    _Bool _alreadyShownScrollUpGuideAnimationView;
    id <WCFinderFullFeedMachineViewControllerDelegate> _delegate;
    long long _tabLastAnchorSecond;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTimelineParams;
    UITableView *_tableView;
    WCFinderFeedMachineVM *_feedVM;
    NSString *_latestAutoplayVideoTid;
    WCFinderRefreshTableFooterView *_footerView;
    NSIndexPath *_currentForceIndexPath;
    NSString *_lastStayFeedTidBeforeTopRefresh;
    WCFinderPullDownRefreshHeaderView *_refreshHeaderView;
    NSMutableDictionary *_exposureDict;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    NSString *_currentVideoTid;
    NSString *_currentForceTid;
    MMScrollViewProxy *_scrollProxy;
    UIView *_maskView;
    double _refreshHeaderViewLastAlpha;
    unsigned long long _enterTime;
    WCFinderScrollActionSheet *_currentActionSheet;
    UIImage *_minimizeCoverImage;
    UIView *_minimizeSnapshotView;
    CDUnknownBlockType _forwardActionDelayBlock;
    WCStoryTouchToDismissView *_scrollUpGuideAnimationMaskView;
    PAGView *_scrollUpGuideAnimationView;
    MMUILabel *_scrollUpGuideLabel;
    WCFinderMsgBubbleMgrPanelView *_msgBubblePanelView;
    WCFinderTLUnreadModel *_unreadModel;
    WCFinderRedDotCtrlInfo *_findEntryRedDotCtrl;
    MMTipsViewController *_shareToSnsTips;
    WCFinderPlayRateOperationView *_operationView;
    WCFinderPlayRateOperationViewV3 *_operationViewV3;
    WCFinderFeedFriendsLikeListViewController *_tmpLikeListVC;
    WCFinderFeedDragUpDislikeController *_notInterestedLogic;
    WCFinderCustomPaging *_customPagingHelper;
    _TtC6WeChat25WCFinderFeedFastSlipLogic *_fastSlipLogic;
    WCFinderFeedListBannderView *_bannerView;
    EmoticonCustomCreateLogic *_emoticonCustomCreateLogic;
    MMFinderHandOffItem *_finderHandoffItem;
    WCFinderLandscapeReportInfo *_landscapeReportInfo;
    CDUnknownBlockType _pendingInsertionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType pendingInsertionBlock; // @synthesize pendingInsertionBlock=_pendingInsertionBlock;
@property(retain, nonatomic) WCFinderLandscapeReportInfo *landscapeReportInfo; // @synthesize landscapeReportInfo=_landscapeReportInfo;
@property(retain, nonatomic) MMFinderHandOffItem *finderHandoffItem; // @synthesize finderHandoffItem=_finderHandoffItem;
@property(retain, nonatomic) EmoticonCustomCreateLogic *emoticonCustomCreateLogic; // @synthesize emoticonCustomCreateLogic=_emoticonCustomCreateLogic;
@property(nonatomic) __weak WCFinderFeedListBannderView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) _TtC6WeChat25WCFinderFeedFastSlipLogic *fastSlipLogic; // @synthesize fastSlipLogic=_fastSlipLogic;
@property(retain, nonatomic) WCFinderCustomPaging *customPagingHelper; // @synthesize customPagingHelper=_customPagingHelper;
@property(retain, nonatomic) WCFinderFeedDragUpDislikeController *notInterestedLogic; // @synthesize notInterestedLogic=_notInterestedLogic;
@property(nonatomic) __weak WCFinderFeedFriendsLikeListViewController *tmpLikeListVC; // @synthesize tmpLikeListVC=_tmpLikeListVC;
@property(retain, nonatomic) WCFinderPlayRateOperationViewV3 *operationViewV3; // @synthesize operationViewV3=_operationViewV3;
@property(retain, nonatomic) WCFinderPlayRateOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) MMTipsViewController *shareToSnsTips; // @synthesize shareToSnsTips=_shareToSnsTips;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *findEntryRedDotCtrl; // @synthesize findEntryRedDotCtrl=_findEntryRedDotCtrl;
@property(retain, nonatomic) WCFinderTLUnreadModel *unreadModel; // @synthesize unreadModel=_unreadModel;
@property(retain, nonatomic) WCFinderMsgBubbleMgrPanelView *msgBubblePanelView; // @synthesize msgBubblePanelView=_msgBubblePanelView;
@property(nonatomic) _Bool alreadyShownScrollUpGuideAnimationView; // @synthesize alreadyShownScrollUpGuideAnimationView=_alreadyShownScrollUpGuideAnimationView;
@property(retain, nonatomic) MMUILabel *scrollUpGuideLabel; // @synthesize scrollUpGuideLabel=_scrollUpGuideLabel;
@property(retain, nonatomic) PAGView *scrollUpGuideAnimationView; // @synthesize scrollUpGuideAnimationView=_scrollUpGuideAnimationView;
@property(retain, nonatomic) WCStoryTouchToDismissView *scrollUpGuideAnimationMaskView; // @synthesize scrollUpGuideAnimationMaskView=_scrollUpGuideAnimationMaskView;
@property(copy, nonatomic) CDUnknownBlockType forwardActionDelayBlock; // @synthesize forwardActionDelayBlock=_forwardActionDelayBlock;
@property(retain, nonatomic) UIView *minimizeSnapshotView; // @synthesize minimizeSnapshotView=_minimizeSnapshotView;
@property(retain, nonatomic) UIImage *minimizeCoverImage; // @synthesize minimizeCoverImage=_minimizeCoverImage;
@property(retain, nonatomic) WCFinderScrollActionSheet *currentActionSheet; // @synthesize currentActionSheet=_currentActionSheet;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) double refreshHeaderViewLastAlpha; // @synthesize refreshHeaderViewLastAlpha=_refreshHeaderViewLastAlpha;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMScrollViewProxy *scrollProxy; // @synthesize scrollProxy=_scrollProxy;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(copy, nonatomic) NSString *currentForceTid; // @synthesize currentForceTid=_currentForceTid;
@property(nonatomic) _Bool isViewWillAppeaer; // @synthesize isViewWillAppeaer=_isViewWillAppeaer;
@property(nonatomic) _Bool isEnableMarkRead; // @synthesize isEnableMarkRead=_isEnableMarkRead;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(nonatomic) _Bool footerNoMoreData; // @synthesize footerNoMoreData=_footerNoMoreData;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(nonatomic) _Bool isDisableVideoAutoPlay; // @synthesize isDisableVideoAutoPlay=_isDisableVideoAutoPlay;
@property(retain, nonatomic) WCFinderPullDownRefreshHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(copy, nonatomic) NSString *lastStayFeedTidBeforeTopRefresh; // @synthesize lastStayFeedTidBeforeTopRefresh=_lastStayFeedTidBeforeTopRefresh;
@property(retain, nonatomic) NSIndexPath *currentForceIndexPath; // @synthesize currentForceIndexPath=_currentForceIndexPath;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(retain, nonatomic) WCFinderFeedMachineVM *feedVM; // @synthesize feedVM=_feedVM;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool hasReportCreateEvent; // @synthesize hasReportCreateEvent=_hasReportCreateEvent;
@property(nonatomic) _Bool postFeedInsertMachineTab; // @synthesize postFeedInsertMachineTab=_postFeedInsertMachineTab;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTimelineParams; // @synthesize openTimelineParams=_openTimelineParams;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(nonatomic) long long tabLastAnchorSecond; // @synthesize tabLastAnchorSecond=_tabLastAnchorSecond;
@property(nonatomic) __weak id <WCFinderFullFeedMachineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getNextMinimizeListPlayContentVMWithCurrentTid:(id)arg1;
- (id)extInfoForSnapshotPrinter;
- (void)wechatPersonalizedChangeType:(long long)arg1 value:(_Bool)arg2;
- (void)multiMediaCell:(id)arg1 didChangePinchVideoState:(_Bool)arg2;
- (void)addToTingListenLater:(id)arg1;
- (void)onFeedMachineVMUploadSucWithDataItem:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showShareToSnsTipsWith:(id)arg1;
- (void)liveCastViewControllerDidDismiss:(id)arg1;
- (void)onFeedVMDataChangedByPublish:(id)arg1 dataItem:(id)arg2;
- (void)tabViewControllerRemoveAllUnReadLiveFeed;
- (void)registerYReportSdk;
- (unsigned long long)listenHalfScreenOption;
- (id)getListenHalfAnimView;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (void)updateTabViewByHalfScreenIsShow:(_Bool)arg1;
- (void)listenHalfScreenIsShow:(_Bool)arg1 eventType:(unsigned long long)arg2;
- (void)onBulletCommentViewControllerShowInputViewWithDisable;
- (void)onBulletCommentViewControllerClosed;
- (id)getCurrentMediaViewCell;
- (void)onBulletCommentViewControllerChangeBulletCommentOpenState:(_Bool)arg1;
- (void)onBulletCommentViewControllerDidComment:(id)arg1;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)doBusinessWithCompletion:(CDUnknownBlockType)arg1;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (_Bool)canShowMore;
- (void)showDataItemErrorTipsWithErrCode:(long long)arg1;
- (void)showDataItemWasDeletedTips;
- (void)showDetailDataItemVC:(id)arg1;
- (void)showCommentFailVCWith:(id)arg1;
- (void)onClickFinderPrivateMsgNotify;
- (void)onClickNotificationMsgBtn;
- (void)bubblePanelViewHeightChanged;
- (void)onClickMsgBubbleViewWithLevel:(unsigned long long)arg1 bubbleInfo:(id)arg2;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (void)finderDescTableViewCell:(id)arg1 clickActionType:(unsigned long long)arg2;
- (_Bool)finderDescTableViewCellCanShowCountDownTips:(id)arg1;
- (void)finderDescTableViewCell:(id)arg1 endCountDownTimmerWithTid:(id)arg2;
- (void)finderClickFinishedFeedNPSCell:(id)arg1;
- (void)onAnimationTimeout:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (_Bool)shouldLiveKeepAudioEnabledAfterMorphDismissForCustomKey:(id)arg1;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (void)finderPreloadStrategyUpdate;
- (_Bool)isCustomPagingSplitView:(id)arg1;
- (void)leadToOtherTabCell:(id)arg1 clickJumpWithPlaceHolderInfo:(id)arg2;
- (void)finderMediaVideoPreloadSuccessful:(id)arg1 mediaWrap:(id)arg2 isFirstFrameDowloadState:(_Bool)arg3;
- (void)onRingToneSheetSetRingtoneSuccess:(long long)arg1 friendUsername:(id)arg2;
- (void)onRingToneSheetDisappear;
- (id)timelineTabViewController;
- (void)adjustTimelineBubbleTipView;
- (void)timelineTipsBubbleDidDisappear;
- (void)timelineTipsBubbleDidAppear;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (id)firstPlayableDataItem;
- (id)currentFocusContentVM;
- (_Bool)isShowingScrollUpGuide;
- (void)onClickRealNameAction;
- (void)reportItemsExposed:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)getCurMaskView;
- (id)getCurrentContentVM;
- (id)getCurrentDataItemWithSessionBuffer;
- (id)getCurViewModelLastBuff;
- (void)currentForceIndexPathWillChanged;
- (unsigned long long)tabViewControllerGetCurTableViewVisibleTopIndex;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (_Bool)tabViewControllerGetSelectState;
- (_Bool)enableShowTLRefreshState;
- (void)triggerStaticRefreshAction;
- (void)refreshHeadOnScrolltoTop:(long long)arg1;
- (void)refreshHeadOnScrolltoTop;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)tabViewControllerReturnCurFeedNum;
- (void)tabViewControllerStopCurrentPlayVideo;
- (void)handleDataReportLogicViewHidden;
- (void)updateCurVideoCellPausePanel;
- (void)triggerDeselectLogic;
- (void)triggerSelectLogic;
- (_Bool)tabViewControllerIsInPinchState;
- (void)tabViewControllerNeedRefreshDataByPassInfo:(id)arg1;
- (void)tabViewRemoveTargetFeedId:(id)arg1;
- (_Bool)tabContainerHasTargetFeedId:(id)arg1;
- (void)realInsertFeedId:(id)arg1;
- (void)performInsertFeedId:(id)arg1;
- (void)tabViewControllerSilenceInsertPopupFeedById:(id)arg1;
- (void)tabViewControllerScrollInsertPopupFeedById:(id)arg1 animated:(_Bool)arg2;
- (void)tabViewControllerScrollInsertPopupFeedById:(id)arg1;
- (void)prepareToInsertFeedByTL;
- (void)tabViewControllerSelectionDidChange:(_Bool)arg1;
- (id)pushSwipeGestureDestination;
- (_Bool)pushSwipeGestureShouldBeginWithLocation:(struct CGPoint)arg1;
- (_Bool)enablePushProfileSwipeGesture;
- (_Bool)canReceiveEdgeSwipGes:(struct CGPoint)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onFeedShowStatusRefreshTipsWithTid:(id)arg1;
- (void)onStreamTipsShowInfoUpdate:(id)arg1 delayBubble:(id)arg2 originCtrlInfo:(id)arg3;
- (void)feedMachineScrollToTargetIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)feedMachineVCCurrentForceTid;
- (_Bool)WCFinderFeedMachineVMIsSelected;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onFeedContent:(id)arg1 postCommentSuccessful:(id)arg2;
- (void)onFeedContent:(id)arg1 commentLikeStatusChangedWithCommentID:(unsigned long long)arg2 likeStatus:(_Bool)arg3;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1 isCertificateType:(_Bool)arg2;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onChangeFollowStatusWithTid:(id)arg1 targetFollowState:(unsigned long long)arg2;
- (id)currentFeedMediaCell;
- (id)viewForKeepHoldAnimation;
- (id)snapshotImageForMedia;
- (id)currentFeedContentVM;
- (id)minimizeKey;
- (_Bool)isTopRrefreshing;
- (_Bool)isCurrentMediaBeginPlayed;
- (void)tabViewControllerRecordEnterInfo;
- (void)tabViewControllerWillDisappear:(unsigned long long)arg1;
- (void)markNeedReloadTeenagerModeChange;
- (_Bool)triggerRefreshLogic:(long long)arg1 toTab:(long long)arg2;
- (void)resetRefreshState;
- (void)handleDataReportLogicViewShow;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)pourStateIntoPool:(id)arg1;
- (void)exposeMarkRead:(id)arg1;
- (void)handleMoreFeedCellResetLogic;
- (void)handleFeedExposeLogic;
- (void)updateCommentDetailVCPushState:(id)arg1;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(id)arg5;
- (void)onCommentDetailViewControllerDidDisappear;
- (void)onFinderVideoPlayerStartPlay;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)bulletCommentOpenStateChanged:(_Bool)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (void)bulletCommentOpenStateChanged:(_Bool)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)updateMinimizePlayInfo;
- (id)getPullingStreamCGIFindEntranceRedDot;
- (void)onMinimizeRestorePlayContentView:(id)arg1 cleanPauseStatus:(_Bool)arg2;
- (_Bool)currentSelectedMediaIsPlay;
- (id)contentScrollView;
- (id)minimizeUserAvatarView;
- (double)pauseCurrentPlayingFeedReturnPalybackTime;
- (void)updateFloatContentMinimizePlayInfo:(id)arg1;
- (id)minimizePlayInfo:(_Bool)arg1;
- (_Bool)checkNeedInterruptMinimize;
- (_Bool)checkIsDisableMinimize;
- (id)minimizeCaptureSnapView;
- (void)updateCurrentThumbForMinimize;
- (id)otherTabUnreadCacheFeeds;
- (id)unreadCacheDataArray;
- (void)inPicture;
- (void)_showV1OperationView;
- (void)showLockSpeedPlayPanel;
- (void)showPlayRatePanelTriggerByDragging:(_Bool)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (void)snapshotForMinimize;
- (void)makeFinderHandoffItem:(id)arg1;
- (void)didClickFinderHandOff:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4 sucBlock:(CDUnknownBlockType)arg5;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4 sucBlock:(CDUnknownBlockType)arg5;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)onCanvasHalfScreenViewControllerWillBeClosed;
- (void)onCanvasHalfScreenViewControllerWillResume;
- (void)onCanvasHalfScreenViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFeedShowPostEntranceByContentVM:(id)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)onFeedCellClickMiaoJianMusic:(id)arg1 musicId:(id)arg2 tingListenId:(id)arg3;
- (void)onFeedCellShouldCheckPopupViewFromContentVM:(id)arg1 enablePopUpShow:(_Bool)arg2;
- (void)onFeedCellClickGuideMakeEmotion:(id)arg1;
- (void)onFeedCellClickPostComment:(id)arg1 scene:(int)arg2 contentVM:(id)arg3;
- (void)onCommentOpenStateChanged:(_Bool)arg1;
- (void)onBulletCommentOpenStateChanged:(id)arg1;
- (void)modBlackListWithOpType:(int)arg1 bulletItem:(id)arg2 contentVM:(id)arg3 successText:(id)arg4 failText:(id)arg5;
- (void)onBlockBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onUnBlockBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onMoreBulletComment:(id)arg1 isInBlackList:(_Bool)arg2 contentVM:(id)arg3;
- (void)onDeleteBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onCopyBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onReportBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onFeedCellClickBulletCommentButton;
- (void)onFeedCellClickHotComment:(id)arg1 contentVM:(id)arg2;
- (void)onFeedCellClickSetRingToneGuideView:(id)arg1;
- (void)onAdFinderDialogFailedToJumpToAppDirectlyWithAppParams:(id)arg1 jumpParams:(id)arg2;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2;
- (void)onFeedContentUserFollowStateChangedWithContentVM:(id)arg1;
- (void)onMultiMediaCell:(id)arg1 lastestLiveInfoClickAction:(id)arg2;
- (void)onFeedCellClickHotWord:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)onClickMoreRelatedTipsButton:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1 commentVC:(id)arg2;
- (void)_pushContentUsernameVCAction:(id)arg1 fromVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)handleFavoriteActionWithContentVM:(id)arg1 sourceType:(int)arg2;
- (void)didFeedDoubleThumbLikeAction:(id)arg1;
- (void)forbidTableViewScrollingWithDuration:(double)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)onWillClickToolbarCollectionAction:(id)arg1;
- (void)onClickToolbarCancelUploading:(id)arg1;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 showTitle:(_Bool)arg5 enterType:(unsigned long long)arg6 appendCommentModel:(id)arg7;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)onCellTriggerAntiAddictCheckLogic;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)onWillClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)multiMediaCellClickTemplateCommentSuspendViewConfirmViewWithDataItem:(id)arg1 commentId:(unsigned long long)arg2;
- (void)multiMediaCell:(id)arg1 handlePortoailLongPressGesture:(id)arg2 stateModel:(id)arg3;
- (void)multiMediaCellPlayRateView:(id)arg1 playSpeedViewAnimatedChangeComplete:(long long)arg2;
- (void)multiMediaCellPlayRateView:(id)arg1 playSpeedViewWillStartAnimatedChange:(long long)arg2;
- (_Bool)multiMediaCell:(id)arg1 isTouchPlayRateOperationV3View:(id)arg2;
- (_Bool)multiMediaCell:(id)arg1 shouldShowDislikeButton:(id)arg2;
- (void)multiMediaCell:(id)arg1 shouldPauseVideoIfSupport:(_Bool)arg2;
- (void)multiMediaCellShowPlayRate:(id)arg1;
- (void)multiMediaCellForceToProtrait:(id)arg1;
- (void)multiMediaCellInPicture:(id)arg1;
- (void)onFeedCellPreparedMediaContent:(id)arg1;
- (void)onCurrentBGMDidEndPlay:(id)arg1;
- (id)getFirstTableViewCell;
- (void)tabBubbleBottomChange:(double)arg1;
- (void)tabViewControllerResetFullCellHalfScreen;
- (_Bool)showRelatedRecommendGuideByProgress:(double)arg1;
- (void)enhanceRelatedListByPlayProgressWithContentVM:(id)arg1 progress:(double)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayDecoderError:(id)arg1;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(id)arg4;
- (_Bool)onMultiMediaCellIsInHotSpots:(id)arg1;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(id)arg1;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (id)getFinderSurveyContextInfoForCell:(id)arg1;
- (void)onLongPressMediaInCell:(id)arg1;
- (void)onMultiMediaCell:(id)arg1 beDisliked:(id)arg2;
- (void)onMultiMediaCell:(id)arg1 videoTemplateClickAction:(id)arg2;
- (id)createActionSheetWithContentVM:(id)arg1;
- (_Bool)haveDislikeEntryWithContentVM:(id)arg1;
- (id)actionSheetItemConfigArrayWithContentVM:(id)arg1;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (void)didEndMediaPlay;
- (void)scrollToNextContentVM:(id)arg1 animated:(_Bool)arg2 limitMediaType:(unsigned long long)arg3;
- (void)scrollToNextContentVM:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isClickAutoPlaySwitchOn;
- (void)tryAutoPlayNextFeedAfterContentVM:(id)arg1;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)showSpamTipsWithString:(id)arg1;
- (void)updateMetaModelWhenPositiveLogicBeTriggered:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)doubleClickLikeFeedContentVMAction:(id)arg1;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)onFeedCellDidClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (void)onLiveFeedStatusChanged:(id)arg1;
- (void)onLiveFeedDidTap:(id)arg1 routeModel:(id)arg2;
- (id)getCurrentTopBubbleView:(id)arg1;
- (void)onCurMultiMediaCellNPSFlutterShowing:(_Bool)arg1 cell:(id)arg2;
- (void)scrollToNextFeedWithContentVM:(id)arg1;
- (void)finderFriendLikeTableViewCellClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(_Bool)arg3;
- (void)scrollByContentArray:(id)arg1 targetContent:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickFriendGroupListDetail:(id)arg1;
- (void)onClickFriendWeChatProfile:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onFriendsLikeListViewControllerDisappear;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)reportFinderGlobalPushScrollUpGuideAnimationView:(long long)arg1;
- (void)showScrollUpGuideAnimation:(double)arg1 videoDuration:(double)arg2;
- (void)showScrollUpGuideAnimationViewAfterDelay;
- (void)showScrollUpGuideAnimationView;
- (_Bool)canShowScrollUpGuideAnimationView;
- (struct CGPoint)nearestTargetOffsetForOffset:(struct CGPoint)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)reloadDataWrap;
- (id)getListView;
- (id)specialParamsForFeedId:(id)arg1;
- (id)feedIdByIndex:(id)arg1;
- (_Bool)isInSubScene;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setFeedCellDecorationViewsAlpha:(double)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_preplayLiveIfNeededWithIndex:(unsigned long long)arg1;
- (void)checkPreplayLive;
- (void)animatedDisplayBannerView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)notifyTopRefreshFinish:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (void)stopRefreshHeaderLoadingCompletion:(CDUnknownBlockType)arg1 delay:(double)arg2 refreshState:(unsigned long long)arg3;
- (void)triggerActiveRefreshAction;
- (void)triggerAutoRefreshActionByClickStatusBar:(_Bool)arg1;
- (void)reportTopRefreshWithMode:(unsigned long long)arg1;
- (void)FeedMachineRefresh:(unsigned long long)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (id)finderNotInterestedActionLogicGetContentVMAtPanStart;
- (void)finderNotInterestedActionLogicSetDislikeWithContentVM:(id)arg1;
- (_Bool)finderNotInterestedActionLogicCanShowPanel;
- (void)finderNotInterestedActionLogicWillShowPanel;
- (void)adjustTipsBubblePanelViewFrame;
- (void)updateBubbleHidden:(_Bool)arg1;
- (void)onHiddenStatusChanged;
- (void)onTopBlankHeightChanged;
- (void)updateMsgBubblePanelView;
- (void)onFeedPrivateMsgTipsUpdate;
- (void)onFeedVMGetNewMsg;
- (void)onFeedVMDataFetchByShareTypeSuccessWithTid:(id)arg1;
- (void)onFeedVMInsertContentVM:(id)arg1 section:(long long)arg2;
- (void)onFeedAllDataItemsNeedClean;
- (void)processLastVideoHunger;
- (void)resetFooterViewNormal;
- (void)onDataEmptyState:(_Bool)arg1;
- (void)showMoreContentView;
- (void)onRefreshTableViewResetContentInset;
- (void)onFeedVMCommentFailNeedReload;
- (void)onFeedVMFetchSucBySpecialRequestScene:(int)arg1;
- (void)onFeedVMFetchSplitBubbleLayoutData;
- (void)onFeedVMFetchLocalRedDotDataItem;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)onFeedLastestVideoMuteNeedChange;
- (unsigned long long)getNextNotSplitSectionWithCurrentSection:(unsigned long long)arg1;
- (void)onFeedVMDataWillRemoved:(id)arg1;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2 animated:(_Bool)arg3;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2;
- (void)onFeedVMDataFootRefreshError;
- (void)onFeedVMDataFootRefreshNoMore;
- (void)onFeedVMDataPullRefreshError:(unsigned long long)arg1;
- (void)onFeedVMDataPullRefreshNoMore;
- (void)onFeedServerFetchHistorySuccess:(_Bool)arg1;
- (void)onFeedServerFetchSuccess;
- (void)onFeedVMDataFetchSuccess;
- (void)removeAllUnReadLiveFeed;
- (void)replaceEnhanceList:(id)arg1 location:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)updateWatchListDebugViewWith:(id)arg1;
- (void)updatePartialExposeSection;
- (void)insertEnhanceList:(id)arg1 location:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)onFeedVMDataInsertEnhanceList:(id)arg1 targetTid:(id)arg2;
- (void)onFeedVMDataReplaceEnhanceList:(id)arg1 targetTid:(id)arg2;
- (void)onFeedVMDataAppend:(id)arg1;
- (void)scrollToNextVisibleCellAfterLoading:(struct CGRect)arg1;
- (void)onFeedRevertPlayerState;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(id)arg1;
- (void)onFeedVMDataChanged;
- (void)onFeedVMWillChangeOriginDataIndex:(_Bool)arg1;
- (void)onFeedVMDataLocalEmpty;
- (void)finderFooterViewDidStopLoading:(id)arg1;
- (void)finderFooterViewWillStartLoading:(id)arg1;
- (_Bool)finderFooterStatrLoadingWithoutDragging;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)fetchNextPage;
- (void)checkPreCreateVideoItems;
- (id)getNeedPreloadItemsWithCurrentIndexPath:(id)arg1;
- (void)preloadVideoItems;
- (_Bool)updateStatsExceptTidImmediately:(id)arg1;
- (void)updateCurrentStats;
- (void)reportFullStatsExceptTidImmediately:(id)arg1;
- (void)reportFullStatsImmediately;
- (void)checkCurrentForceIndexPathWithTableViewTargetOffset:(struct CGPoint)arg1;
- (void)autoplayVideoProcessWithTableViewTargetOffset:(struct CGPoint)arg1;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)checkShouldScrollToNextFeedWithDelay:(id)arg1;
- (void)scrollEndProcessWithTableViewTargetOffset:(struct CGPoint)arg1;
- (void)throttleScrollProcess;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)supportRotate;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)onUserDidTakeScreenshot;
- (void)triggerCellEnterBackgroundAction;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)triggerCellEnterForegroundAction;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeScreenshotNotification;
- (void)addScreenshotNotification;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)reloadRowAtIndexPath:(id)arg1 contentVM:(id)arg2 animation:(long long)arg3;
- (void)scrollTimelineToTopWithAnimation:(_Bool)arg1;
- (void)scrollTimelineToTop;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)needsUpdateCurrentVideo:(_Bool)arg1;
- (void)stopPreloadVisibleVideo;
- (void)stopVisibleVideo;
- (void)stopCurrentMedia;
- (void)stopCurrentMediaAndSnapCapture;
- (void)addOrUpdateUsedTaskData;
- (void)setUsedTaskData:(id)arg1;
- (void)resumeCurrentMedia;
- (void)pauseCurrentMediaWithShowPauseBtn:(_Bool)arg1;
- (void)resetRetryState;
- (void)stateRetryGestureAction:(id)arg1;
- (void)setTableViewScrollEnable;
- (void)resumeFromHalfScreen;
- (void)willPresentHalfScreen;
- (void)updateAdReportMeta:(id)arg1;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onFinderTabDisappear:(long long)arg1;
- (void)onFinderTabAppear:(long long)arg1;
- (void)willDisappear;
- (long long)currentVCTabType;
- (struct CGRect)getCurSearchBarFrame;
- (void)exposeCurrentDisplayFeed;
- (void)setUpScrollUpGuideAnimationView;
- (void)setUpFooterView;
- (void)setUpRefreshHeaderView;
- (void)setUpTableView;
- (void)setupNotInterestedActionLogicIfNeeded;
- (_Bool)useTransparentNavibar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupCustomPaging;
- (void)initSubview;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithUnreadModel:(id)arg1 findEntryRedDotCtrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

