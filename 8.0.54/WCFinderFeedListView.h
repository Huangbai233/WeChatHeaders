//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@class EmoticonCustomCreateLogic, MMFinderHandOffItem, MMTimer, NSIndexPath, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIImage, UIImageView, UILabel, UITableView, UITableViewCell, UIViewController, WCFinderAnimationLoadingView, WCFinderFeedAudioHelper, WCFinderFeedDragUpDislikeController, WCFinderFeedFriendsLikeListViewController, WCFinderLandscapeReportInfo, WCFinderPlayRateOperationViewV3, WCFinderPlaybackSpeedView, WCFinderPostMgr, WCFinderPullDownRefreshHeaderView, WCFinderRefreshTableFooterView, WCFinderScrollActionSheet, WCFinderTopPullStatusView;
@protocol WCFinderCommentBaseViewProtocol, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedListViewReportDelegate;

@interface WCFinderFeedListView : UIView
{
    _Bool _halfScreenIsShowState;
    _Bool _isSilencePlay;
    _Bool _needsResumeTimelineVideo;
    _Bool _disableVideoAutoPlay;
    _Bool _feedListViewIsAppear;
    _Bool _alreadyCheckLimitModeGuide;
    _Bool _isBlockByLimitMode;
    _Bool _cancelSpeedViewAnimateBlock;
    id <WCFinderFeedListViewDataSource> _dataSource;
    id <WCFinderFeedListViewDelegate> _delegate;
    id <WCFinderFeedListViewReportDelegate> _reportDelegate;
    UITableView *_tableView;
    NSString *_retryTipsTitle;
    NSString *_noDataTipsTitle;
    NSString *_footerNoMoreTips;
    NSString *_latestAutoplayVideoTid;
    NSIndexPath *_currentFocusIndexPath;
    NSString *_lastFocusTid;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderScrollActionSheet *_actionSheet;
    long long _preFetchNextPageIndex;
    long long _topPreFetchAdvanceCount;
    long long _topDraggingPreFetchAdvanceCount;
    WCFinderPlaybackSpeedView *_playbackSpeedView;
    UIView *_originTitleView;
    WCFinderPullDownRefreshHeaderView *_refreshHeaderView;
    WCFinderTopPullStatusView *_topPullStatusView;
    WCFinderAnimationLoadingView *_loadingView;
    UIView *_loadingViewContainer;
    UILabel *_stateTipsLabel;
    UIImageView *_retryImageView;
    NSString *_currentFocusTid;
    NSString *_lastAutoplayTid;
    NSMutableDictionary *_exposureDict;
    NSMutableSet *_allExposeFeedIdSet;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    unsigned long long _createTimestamp;
    unsigned long long _enterTime;
    MMTimer *_playTimer;
    UIImage *_minimizeCoverImage;
    UIView *_minimizeSnapshotView;
    CDUnknownBlockType _forwardActionDelayBlock;
    NSIndexPath *_enterBackgroundIndexPath;
    NSString *_currentTidBeforeInsertAction;
    UITableViewCell *_currentCellBeforeInsertAction;
    double _refreshHeaderViewLastAlpha;
    NSNumber *_originalInterfaceOrientation;
    NSString *_startFeedId;
    WCFinderPostMgr *_timelinePostMgr;
    WCFinderFeedAudioHelper *_feedAudioHelper;
    NSMutableDictionary *_feedPostInfoDic;
    WCFinderPlayRateOperationViewV3 *_operationViewV3;
    WCFinderFeedFriendsLikeListViewController *_tmpLikeListVC;
    WCFinderFeedDragUpDislikeController *_notInterestedLogic;
    EmoticonCustomCreateLogic *_emoticonCustomCreateLogic;
    MMFinderHandOffItem *_finderHandoffItem;
    WCFinderLandscapeReportInfo *_landscapeReportInfo;
}

+ (void)configViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool cancelSpeedViewAnimateBlock; // @synthesize cancelSpeedViewAnimateBlock=_cancelSpeedViewAnimateBlock;
@property(retain, nonatomic) WCFinderLandscapeReportInfo *landscapeReportInfo; // @synthesize landscapeReportInfo=_landscapeReportInfo;
@property(retain, nonatomic) MMFinderHandOffItem *finderHandoffItem; // @synthesize finderHandoffItem=_finderHandoffItem;
@property(retain, nonatomic) EmoticonCustomCreateLogic *emoticonCustomCreateLogic; // @synthesize emoticonCustomCreateLogic=_emoticonCustomCreateLogic;
@property(retain, nonatomic) WCFinderFeedDragUpDislikeController *notInterestedLogic; // @synthesize notInterestedLogic=_notInterestedLogic;
@property(nonatomic) __weak WCFinderFeedFriendsLikeListViewController *tmpLikeListVC; // @synthesize tmpLikeListVC=_tmpLikeListVC;
@property(retain, nonatomic) WCFinderPlayRateOperationViewV3 *operationViewV3; // @synthesize operationViewV3=_operationViewV3;
@property(retain, nonatomic) NSMutableDictionary *feedPostInfoDic; // @synthesize feedPostInfoDic=_feedPostInfoDic;
@property(retain, nonatomic) WCFinderFeedAudioHelper *feedAudioHelper; // @synthesize feedAudioHelper=_feedAudioHelper;
@property(retain, nonatomic) WCFinderPostMgr *timelinePostMgr; // @synthesize timelinePostMgr=_timelinePostMgr;
@property(nonatomic) _Bool isBlockByLimitMode; // @synthesize isBlockByLimitMode=_isBlockByLimitMode;
@property(copy, nonatomic) NSString *startFeedId; // @synthesize startFeedId=_startFeedId;
@property(retain, nonatomic) NSNumber *originalInterfaceOrientation; // @synthesize originalInterfaceOrientation=_originalInterfaceOrientation;
@property(nonatomic) double refreshHeaderViewLastAlpha; // @synthesize refreshHeaderViewLastAlpha=_refreshHeaderViewLastAlpha;
@property(retain, nonatomic) UITableViewCell *currentCellBeforeInsertAction; // @synthesize currentCellBeforeInsertAction=_currentCellBeforeInsertAction;
@property(retain, nonatomic) NSString *currentTidBeforeInsertAction; // @synthesize currentTidBeforeInsertAction=_currentTidBeforeInsertAction;
@property(retain, nonatomic) NSIndexPath *enterBackgroundIndexPath; // @synthesize enterBackgroundIndexPath=_enterBackgroundIndexPath;
@property(nonatomic) _Bool alreadyCheckLimitModeGuide; // @synthesize alreadyCheckLimitModeGuide=_alreadyCheckLimitModeGuide;
@property(copy, nonatomic) CDUnknownBlockType forwardActionDelayBlock; // @synthesize forwardActionDelayBlock=_forwardActionDelayBlock;
@property(retain, nonatomic) UIView *minimizeSnapshotView; // @synthesize minimizeSnapshotView=_minimizeSnapshotView;
@property(retain, nonatomic) UIImage *minimizeCoverImage; // @synthesize minimizeCoverImage=_minimizeCoverImage;
@property(retain, nonatomic) MMTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool feedListViewIsAppear; // @synthesize feedListViewIsAppear=_feedListViewIsAppear;
@property(nonatomic) _Bool disableVideoAutoPlay; // @synthesize disableVideoAutoPlay=_disableVideoAutoPlay;
@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(nonatomic) unsigned long long createTimestamp; // @synthesize createTimestamp=_createTimestamp;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) NSMutableSet *allExposeFeedIdSet; // @synthesize allExposeFeedIdSet=_allExposeFeedIdSet;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(copy, nonatomic) NSString *lastAutoplayTid; // @synthesize lastAutoplayTid=_lastAutoplayTid;
@property(retain, nonatomic) NSString *currentFocusTid; // @synthesize currentFocusTid=_currentFocusTid;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) UIView *loadingViewContainer; // @synthesize loadingViewContainer=_loadingViewContainer;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderTopPullStatusView *topPullStatusView; // @synthesize topPullStatusView=_topPullStatusView;
@property(retain, nonatomic) WCFinderPullDownRefreshHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) UIView *originTitleView; // @synthesize originTitleView=_originTitleView;
@property(retain, nonatomic) WCFinderPlaybackSpeedView *playbackSpeedView; // @synthesize playbackSpeedView=_playbackSpeedView;
@property(nonatomic) long long topDraggingPreFetchAdvanceCount; // @synthesize topDraggingPreFetchAdvanceCount=_topDraggingPreFetchAdvanceCount;
@property(nonatomic) long long topPreFetchAdvanceCount; // @synthesize topPreFetchAdvanceCount=_topPreFetchAdvanceCount;
@property(nonatomic) long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool halfScreenIsShowState; // @synthesize halfScreenIsShowState=_halfScreenIsShowState;
@property(retain, nonatomic) WCFinderScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *lastFocusTid; // @synthesize lastFocusTid=_lastFocusTid;
@property(retain, nonatomic) NSIndexPath *currentFocusIndexPath; // @synthesize currentFocusIndexPath=_currentFocusIndexPath;
@property(copy, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(copy, nonatomic) NSString *footerNoMoreTips; // @synthesize footerNoMoreTips=_footerNoMoreTips;
@property(copy, nonatomic) NSString *noDataTipsTitle; // @synthesize noDataTipsTitle=_noDataTipsTitle;
@property(copy, nonatomic) NSString *retryTipsTitle; // @synthesize retryTipsTitle=_retryTipsTitle;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCFinderFeedListViewReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <WCFinderFeedListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderFeedListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)getNextMinimizeListPlayContentVMWithCurrentTid:(id)arg1;
- (id)extInfoForSnapshotPrinter;
- (id)getViewController;
- (void)addToTingListenLater:(id)arg1;
- (void)liveCastViewControllerDidDismiss:(id)arg1;
- (unsigned long long)getHeaderRefreshMode;
- (_Bool)isAutoPlayNextFeedPageConditionOK:(_Bool)arg1;
- (void)restartBulletAnimationAftertransition;
- (void)doShareAnimation;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (void)listenHalfScreenIsShow:(_Bool)arg1 eventType:(unsigned long long)arg2;
- (unsigned long long)listenHalfScreenOption;
- (id)getListenHalfAnimView;
- (void)onBulletCommentViewControllerShowInputViewWithDisable;
- (void)onBulletCommentViewControllerClosed;
- (id)getCurrentMediaViewCell;
- (void)onBulletCommentViewControllerChangeBulletCommentOpenState:(_Bool)arg1;
- (void)onBulletCommentViewControllerDidComment:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)onRingToneSheetSetRingtoneSuccess:(long long)arg1 friendUsername:(id)arg2;
- (void)onRingToneSheetDisappear;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (void)scrollToNextFeedWithContentVM:(id)arg1;
- (void)onCurMultiMediaCellNPSFlutterShowing:(_Bool)arg1 cell:(id)arg2;
- (void)onFeedCellPreparedMediaContent:(id)arg1;
- (void)onCurrentBGMDidEndPlay:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)finderPreloadStrategyUpdate;
- (void)finderMediaVideoPreloadSuccessful:(id)arg1 mediaWrap:(id)arg2 isFirstFrameDowloadState:(_Bool)arg3;
- (void)onFinderAPNsPushBeClicked;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onContactClick:(id)arg1 index:(unsigned long long)arg2;
- (id)getCurrentFocusTableViewCell;
- (void)updateAdReportMeta:(id)arg1;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)clickAuthorCommentAvatarWhenInProfile:(id)arg1;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(id)arg5;
- (void)onCommentDetailViewControllerDidDisappear;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)needsUpdateCurrentVideo:(_Bool)arg1;
- (void)onFinderVideoPlayerStartPlay;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)bulletCommentOpenStateChanged:(_Bool)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)bulletCommentOpenStateChanged:(_Bool)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (void)inPicture;
- (void)_showV1OperationView;
- (void)showLockSpeedPlayPanel;
- (void)showPlayRatePanelTriggerByDragging:(_Bool)arg1;
- (id)viewForKeepHoldAnimation;
- (id)snapshotImageForMedia;
- (id)currentFeedContentVM;
- (id)currentFeedMediaCell;
- (id)minimizeKey;
- (void)snapshotForMinimize;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4 sucBlock:(CDUnknownBlockType)arg5;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4 sucBlock:(CDUnknownBlockType)arg5;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)onContentTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(_Bool)arg2;
- (void)onRefreshContentCellUI:(id)arg1;
- (void)onClickBigButton:(id)arg1;
- (void)onClickAdGuideFollowBtn:(id)arg1;
- (void)onCanvasHalfScreenViewControllerWillBeClosed;
- (void)onCanvasHalfScreenViewControllerWillResume;
- (void)onCanvasHalfScreenViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFeedCellClickCollectionDesc:(id)arg1;
- (void)onFeedCellClickMiaoJianMusic:(id)arg1 musicId:(id)arg2 tingListenId:(id)arg3;
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
- (void)onFeedCellClickMemberShipPaymentGuideViewConfirmButtonWithContentVM:(id)arg1;
- (void)onAdFinderDialogFailedToJumpToAppDirectlyWithAppParams:(id)arg1 jumpParams:(id)arg2;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2;
- (void)onFeedContentUserFollowStateChangedWithContentVM:(id)arg1;
- (void)onMultiMediaCell:(id)arg1 beDisliked:(id)arg2;
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
- (void)finderDescTableViewCell:(id)arg1 clickActionType:(unsigned long long)arg2;
- (void)finderClickFinishedFeedNPSCell:(id)arg1;
- (void)onClickToolbarCancelUploading:(id)arg1;
- (void)onClickToolbarRetryUploading:(id)arg1;
- (void)onClickToolbarFeedAllViewedAction:(id)arg1;
- (void)onClickToolbarFeedAllFavAction:(id)arg1;
- (void)onClickToolbarFeedAllLikeAction:(id)arg1;
- (void)handleFavoriteActionWithContentVM:(id)arg1 sourceType:(int)arg2;
- (void)didFeedDoubleThumbLikeAction:(id)arg1;
- (void)forbidTableViewScrollingWithDuration:(double)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 actionSheet:(id)arg2 sourceType:(int)arg3;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)onWillClickToolbarCollectionAction:(id)arg1;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 showTitle:(_Bool)arg5 enterType:(unsigned long long)arg6 appendCommentModel:(id)arg7;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 forceCell:(id)arg3;
- (void)onCellTriggerAntiAddictCheckLogic;
- (void)onClickRealNameAction;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)onWillClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (_Bool)isLastDataItemAfterContentVM:(id)arg1;
- (_Bool)isNoMoreDataItemAfterContentVM:(id)arg1;
- (void)multiMediaCell:(id)arg1 didChangePinchVideoState:(_Bool)arg2;
- (void)multiMediaCellShowPlayRate:(id)arg1;
- (_Bool)multiMediaCellCanAutoOpenJumpInfo:(id)arg1;
- (void)multiMediaCellClickTemplateCommentSuspendViewConfirmViewWithDataItem:(id)arg1 commentId:(unsigned long long)arg2;
- (void)multiMediaCell:(id)arg1 handlePortoailLongPressGesture:(id)arg2 stateModel:(id)arg3;
- (void)multiMediaCellPlayRateView:(id)arg1 playSpeedViewAnimatedChangeComplete:(long long)arg2;
- (void)multiMediaCellPlayRateView:(id)arg1 playSpeedViewWillStartAnimatedChange:(long long)arg2;
- (_Bool)multiMediaCell:(id)arg1 isTouchPlayRateOperationV3View:(id)arg2;
- (void)multiMediaCellForceToProtrait:(id)arg1;
- (void)multiMediaCellInPicture:(id)arg1;
- (void)onVideoPlayDecoderError:(id)arg1;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(id)arg4;
- (void)onImageMediaTableViewCellPlayPauseWillChange:(_Bool)arg1;
- (void)onMultiMediaCell:(id)arg1 videoTemplateClickAction:(id)arg2;
- (_Bool)onMultiMediaCellIsInHotSpots:(id)arg1;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(id)arg1;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (id)getFinderSurveyContextInfoForCell:(id)arg1;
- (void)onLongPressMediaInCell:(id)arg1;
- (_Bool)haveDislikeEntryWithContentVM:(id)arg1;
- (id)_actionSheetItemConfigArrayWithContentVM:(id)arg1;
- (id)createActionSheetWithContentVM:(id)arg1;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (void)tryAutoPlayNextFeedAfterContentVM:(id)arg1;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)contentMediaDidStopPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)showSpamTipsWithString:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2 touchPoint:(struct CGPoint)arg3;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)doubleClickLikeFeedContentVMAction:(id)arg1;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)onFeedCellDidClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (void)onLiveFeedStatusChanged:(id)arg1;
- (void)onLiveFeedDidTap:(id)arg1 routeModel:(id)arg2;
- (_Bool)multiMediaCell:(id)arg1 shouldShowDislikeButton:(id)arg2;
- (void)multiMediaCell:(id)arg1 shouldPauseVideoIfSupport:(_Bool)arg2;
- (void)multiMediaCellBrowsePhotoLongTime:(id)arg1;
- (void)onShowGuideToFinderMoreRelatedView:(id)arg1;
- (void)onCloseBottomBannerView:(id)arg1 contentVM:(id)arg2;
- (void)onClickBottomBannerView:(id)arg1 contentVM:(id)arg2 triggerByUser:(_Bool)arg3;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)doBusinessWithCompletion:(CDUnknownBlockType)arg1;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (_Bool)canShowMore;
- (_Bool)shouldShowFirstLikeLabel;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onClickFriendWeChatProfile:(id)arg1;
- (void)onFriendsLikeListViewControllerDisappear;
- (void)makeFinderHandoffItem:(id)arg1;
- (void)didClickFinderHandOff:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (id)finderNotInterestedActionLogicGetContentVMAtPanStart;
- (void)finderNotInterestedActionLogicSetDislikeWithContentVM:(id)arg1;
- (_Bool)finderNotInterestedActionLogicCanShowPanel;
- (void)onTopPullViewTriggePull:(id)arg1;
- (_Bool)shouldTopPullViewTrigger:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfContnetVMS;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setFeedCellMoreActionButtonAlpha:(double)arg1;
- (void)setFeedCellDecorationViewsAlpha:(double)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)onLandScapeBtnClick:(id)arg1;
- (void)setTableViewScrollEnable;
- (void)resumeFromHalfScreen;
- (void)willPresentHalfScreen;
- (_Bool)_isAuthorViewer;
- (_Bool)_shouldHandleJumpProfileUsername:(id)arg1 vatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (id)_tableViewParamModelWithContentVM:(id)arg1;
- (void)_preloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (void)_stopPreloadVideoItem:(id)arg1;
- (void)stopPreloadWithIndexPath:(id)arg1;
- (_Bool)isDisableVideoAutoPlay;
- (unsigned long long)refreshTime;
- (unsigned long long)commentAndLikeScene;
- (int)fromViewControllerScene;
- (int)feedViewControllerScene;
- (long long)sectionOfTid:(id)arg1;
- (id)currentVC;
- (id)_contentVMOfTid:(id)arg1;
- (id)_contentVMAtSection:(long long)arg1;
- (_Bool)_isCustomAtSection:(long long)arg1;
- (void)scrollToPreVisibleCellAfterLoadingWithVisiableTid:(id)arg1;
- (void)scrollToNextVisibleCellAfterLoadingWithVisiableTid:(id)arg1;
- (_Bool)shouldScrollToNextVisibleCellAfterLoading:(struct CGRect)arg1;
- (void)reportCurrentTidStats;
- (void)currentFocusIndexPathWillChanged;
- (void)_onCurrentFocusIndexPathChangedTo:(id)arg1 tid:(id)arg2;
- (void)checkCurrentFocusIndexPathWithTargetOffset:(struct CGPoint)arg1;
- (void)playCurrentIndexFeed;
- (void)updateGlobalPlaybackInfo;
- (void)checkShouldScrollToNextFeedWithDelay:(id)arg1;
- (void)playVideoAtIndexPath:(id)arg1;
- (void)autoPlayVideoWithTargetOffset:(struct CGPoint)arg1;
- (void)updateCurCellMetaModelExposeInfo:(id)arg1;
- (void)pourStateIntoPoolWithContentVM:(id)arg1;
- (void)_adjustHotAreaAndAutoPlayWithTargetOffset:(struct CGPoint)arg1;
- (void)_adjustHotAreaAndAutoPlayWithTableViewContentOffset;
- (void)adjustHotAreaAndAutoPlay;
- (void)preloadNextPageDatasWithWillDisplayIndexPath:(id)arg1;
- (void)checkPreCreateVideoItems;
- (id)getNeedPreloadItemsWithCurrentIndexPath:(id)arg1;
- (void)preloadVideoItemsWithCurrentIndexPath:(id)arg1;
- (void)preloadVideoItems;
- (void)pauseCellMediaOfSection:(long long)arg1;
- (void)stopCellMediaOfSection:(long long)arg1;
- (void)resumeCurrentMedia;
- (void)pauseCurrentMediaWithShowPauseBtn:(_Bool)arg1;
- (void)stopCurrentMedia;
- (void)stopCurrentMediaAndSnapCapture;
- (void)addOrUpdateUsedTaskData;
- (void)setUsedTaskData:(id)arg1;
- (void)saveIndexPathBeforeEnterBackground;
- (void)onUserDidTakeScreenshot;
- (void)triggerCellEnterBackgroundAction;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)triggerCellEnterForegroundAction;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)setFeedListViewUserInteractionEnabled:(_Bool)arg1;
- (void)removeScreenshotNotification;
- (void)addScreenshotNotification;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (unsigned long long)supportedInterfaceOrientationsWithVCMask:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGPoint footerViewOrigin;
- (void)finderReloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)tryLoadMoreToNextContentVM;
- (void)scrollToNextContentVM:(id)arg1 animated:(_Bool)arg2 limitMediaType:(unsigned long long)arg3;
- (void)scrollToNextContentVM:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToContentVM:(id)arg1 animated:(_Bool)arg2;
- (void)finderFeedListViewPauseFeedPlayWithTid:(id)arg1;
- (void)finderFeedListViewPauseCurrentFeedPlay;
- (void)finderFeedListViewStopCurrentFeedPlay;
- (void)reloadToolBarUIWithContentVM:(id)arg1 atSection:(long long)arg2;
- (void)deleteContentVMWithContentVM:(id)arg1 section:(long long)arg2;
- (void)performUpdateWithoutKeepLocation:(_Bool)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_tlFollowUdfKV;
- (unsigned int)_tlFollowEnterType;
- (_Bool)_shouldKeepLocationForRemoves:(id)arg1 inserts:(id)arg2 visitableIndexPath:(id)arg3;
- (void)modifyContentVMWithDeletes:(id)arg1 inserts:(id)arg2 updates:(id)arg3;
- (void)modifyContentVMWithDiffResult:(id)arg1;
- (void)appendContentVMFromSectionIndex:(long long)arg1 toSectionIndex:(long long)arg2;
- (void)tryShowLimitModeView;
- (void)finderFeedListDidAppear;
- (_Bool)_didCurrentVCBePopedOrDismissed;
- (void)layoutSubviews;
- (void)finderFeedListWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)finderFeedListDidDisappear;
- (void)finderFeedListWillDisappear;
- (void)checkFeedTeenageMode:(id)arg1;
- (void)finderFeedListWillAppear;
- (void)handleVisibleCellExpose;
- (void)showErrorStatus;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)resetFooterViewNormal;
- (void)processLastVideoHunger;
- (void)resetFooterView:(_Bool)arg1;
- (void)prefetchTopFeed;
- (void)resetTopPullView;
@property(readonly, nonatomic) WCFinderTopPullStatusView *topPullView;
- (_Bool)_allowTopPull;
- (id)setupTopPullView:(_Bool)arg1;
- (void)resetHeaderPullView;
- (void)resetHeaderView;
- (void)showNoMoreData;
- (void)resetPullViewState;
- (void)reloadData;
- (void)resetLoadingStateWithAnimation:(_Bool)arg1;
- (void)startLoadingState;
- (void)stateRetryGestureAction:(id)arg1;
- (void)resetStateTipsLabelWithRetry:(_Bool)arg1;
- (void)setupTipsLabel;
- (void)setupNotInterestedActionLogicIfNeeded;
- (void)setupTopLoading;
- (void)setUpFooterView;
- (void)setUpHeaderView;
- (void)configureTableView;
- (id)initWithFrame:(struct CGRect)arg1 startFeedId:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)finderFetchTransitionInnerScrollView;
- (id)fetchCurrentPlayDataItemThenPause:(double *)arg1;
- (void)onClickMinimizeButton;
- (void)updateMinimizePlayInfo;
- (void)updateMsgButtonReportInfo;
- (void)updateFloatContentMinimizePlayInfo:(id)arg1;
- (id)minimizePlayInfo:(_Bool)arg1;
- (_Bool)shouldAutoMinimizeWhenPopOrDismiss;
- (void)onMinimizeResotreContentView:(id)arg1 cleanPauseStatus:(_Bool)arg2;
- (void)onOpenMinimizedFromFloatingView:(id)arg1;
- (id)minimizeConflictScrollViews;
- (_Bool)dismissMinimizeWhenLimitMode;
- (void)updateNewMinimizeInfo:(id)arg1;
- (id)requestMinimizeInfo:(_Bool)arg1;
- (_Bool)checkNeedInterruptMinimize;
- (_Bool)checkIsDisableMinimize;
- (id)minimizePageBizKey;
- (id)_currentViewController;
- (int)_commentScene;
- (id)_contentVMAtIndexPath:(id)arg1;
- (id)_currentIndexPathContentVM;
- (id)minimizeDelegate;
- (_Bool)isSupportMinimize;
- (_Bool)_isFeedListViewSupportMinimize:(id *)arg1;
- (void)updateNavMinimizeItem;
- (_Bool)enableMinimize;
- (_Bool)_supportMinimize:(id *)arg1;
- (void)_minimizeFinderFeedListWillAppear;
- (_Bool)pushSwipeGestureShouldBeginWithLocation:(struct CGPoint)arg1;
- (id)pushSwipeGestureDestinationForViewController:(id)arg1;
- (_Bool)enablePushSwipeGestureForViewController:(id)arg1;
- (_Bool)shouldTransitionProvider:(id)arg1 requestFailedToOther:(id)arg2;
- (_Bool)shouldDragDownAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (_Bool)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (id)transitionHelperFetchCurrentPlayTid;
- (_Bool)shouldDragDownCloseInvokeForVC:(id)arg1;
- (_Bool)enableDragDownToCloseForVC:(id)arg1;
- (_Bool)shouldUseMinimizeAnimationFromVC:(id)arg1 toVC:(id)arg2 isClosure:(_Bool)arg3;
- (_Bool)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;
- (_Bool)shouldStartEdgeSwipeGestureWithPoint:(struct CGPoint)arg1;
- (_Bool)postMgrEnableOpenAlbum:(id)arg1;
- (void)extractAudioTrackFromFeedByPostMgr:(id)arg1;
- (void)_tiggerPostActionByPostMgr:(id)arg1 fromAudioExtract:(_Bool)arg2;
- (void)triggerPostActionByCheckAudioTrack:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (id)postMgrAttachTextContent:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (id)postMgrGetMusicInfo;
- (id)onPostFollowTopicFeedId:(id)arg1;
- (id)onPostFollowTemplateFeedId;
- (id)onPostMusicIds:(id)arg1;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(id)arg2;
- (id)onPostFollowMuiscFeedId:(id)arg1;
- (id)feedPostMusicInfoBy:(id)arg1;
- (void)updateFeedPostInfoBy:(id)arg1 musicInfo:(id)arg2;
- (_Bool)feedPostIsOnLoadingStateBy:(id)arg1;
- (void)updateFeedPostInfoBy:(id)arg1 onLoadingState:(_Bool)arg2;
- (void)onFeedShowPostEntranceByContentVM:(id)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)triggerSharedLeaveUnreadFinderSync;
- (void)checkRedDotReadAction;
- (void)animatedShowPlayRateResultWithRate:(double)arg1;
- (void)hidePlayRateView;
- (void)changeNaviTitleWithCurrentPlayRate:(double)arg1;
- (void)setupSpeedPlayViewIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

