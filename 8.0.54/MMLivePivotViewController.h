//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class FinderCommByPass, MMFinderLivePivotEducationView, MMFinderLivePreviewExitButton, MMFinderLiveRelatedLiveParams, MMLiveDisplayLinkAnimator, MMLivePivotAutoSwipeInfo, MMLivePivotCollectionView, MMLivePivotView, MMLivePreviewRelatedViewModel, MMLiveTaskId, MMLiveView, MMTimer, MMUILabel, MMUIView, NSArray, NSData, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UICollectionView, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewPropertyAnimator, WCFinderFullShareListTemplatePlugin, WCFinderLiveBaseLogReporter, WCFinderLiveHomePageViewController, WCLiveBlurButton;
@protocol MMLiveContainerDisplayViewProtocol, MMLiveMorphDismissTarget;

@interface MMLivePivotViewController
{
    _Bool isPresentingWithCustomTransition;
    _Bool _isScrolling;
    _Bool _fromLiveRedDot;
    _Bool _hasFetchedLivesSinceScrolling;
    _Bool _isTransfroming;
    _Bool _isPreviewDataUpdatingOnAnimation;
    _Bool _isPreviewRelatedLiveState;
    _Bool _hasShownEntryDialog;
    _Bool _disableInteractiveToMinimizeWindow;
    _Bool _presented;
    _Bool _isLiveAppearing;
    _Bool _initialContentOffsetSet;
    _Bool _shouldScrollToNextAfterReplacement;
    _Bool _isRecommendationLoading;
    _Bool _isLiveInMainScene;
    _Bool _isShowEducationView;
    _Bool _recommendationRefreshScheduled;
    _Bool _needShowScrollUpTips;
    _Bool _needShowScrollDownTips;
    _Bool _needFirstScrolledAfterExposedEducationForReporter;
    _Bool _isForceShowRoundCorner;
    _Bool _canNotPrepend;
    _Bool _relayoutFailOnViewDidAppear;
    _Bool _needScrollToNext;
    _Bool _needScrollToLast;
    int _commentScene;
    unsigned int _hasMoreData;
    unsigned int _lastHomePageLeaveTime;
    NSMutableArray *_liveContentVMs;
    long long _tabType;
    id <MMLiveMorphDismissTarget> _morphDismissTarget;
    MMFinderLiveRelatedLiveParams *_relatedLiveParams;
    CDUnknownBlockType _dismissOrMinimizeCallback;
    long long _bottomMostSeenLiveIndex;
    NSString *_srcUrl;
    NSString *_sourceLiteAppId;
    WCFinderFullShareListTemplatePlugin *_jsapiPlugin;
    long long _currentIndex;
    MMLivePivotView *_pivotView;
    MMLivePivotCollectionView *_pivotCollectionView;
    NSMutableArray *_itemControllers;
    NSData *_lastBuffer;
    unsigned long long _initialPivotLiveId;
    unsigned long long _pivotSessionId;
    unsigned long long _initialPivotObjectId;
    MMLivePreviewRelatedViewModel *_specialViewModel;
    FinderCommByPass *_fetchMoreByPass;
    NSArray *_replacementContentVMs;
    NSIndexPath *_replacementSelectedIndexPath;
    NSMutableSet *_scheduledRemoveItemKeys;
    MMFinderLivePivotEducationView *_scrollUpTipsView;
    unsigned long long _watchHistoryLiveCount;
    NSArray *_exportIds;
    NSMutableDictionary *_exportIdDictionary;
    long long _selectedExportIdIndex;
    long long _exportIdFetchStatus;
    MMTimer *_recommendationRefreshTimer;
    long long _recommendationRefreshInvokeTime;
    double _lastContentOffset;
    MMLiveDisplayLinkAnimator *_frameByFrameScrollAnimator;
    MMLivePivotAutoSwipeInfo *_autoSwipeInfoAfterFetchRecommends;
    WCFinderLiveBaseLogReporter *_reporter;
    MMTimer *_detectionValidityTimer;
    NSData *_lastCheckBuffer;
    unsigned long long _lastdetectionValidityTimestamp;
    WCFinderLiveHomePageViewController *_homePageVC;
    MMTimer *_homePageCacheTimer;
    MMTimer *_homePagePrefetchTimer;
    long long _currOrientation;
    unsigned long long _currSupportedInterfaceOrientations;
    unsigned long long _lastVisibleLoadingEndDraggingTimestamp;
    UITapGestureRecognizer *_pivotCollectionTapGesRecognizer;
    UIPanGestureRecognizer *_specialLiveAnimatorGestureRecognizer;
    UIViewPropertyAnimator *_pivotViewZoomOutAnimator;
    UIViewPropertyAnimator *_pivotViewZoomInAnimator;
    UICollectionView *_specialThumbnailCollectionView;
    MMUILabel *_specialTitleLabel;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
    MMFinderLivePreviewExitButton *_previewExitButton;
    WCLiveBlurButton *_specialCloseButton;
    unsigned long long _targetIndex;
    MMUIView *_pivotCollectionViewContainerView;
    long long _startPreviewIndex;
    NSMutableSet *_dataItemsSet;
    struct CGSize _currentPivotViewSize;
    struct CGRect _pivotCollectionViewFrame;
}

+ (_Bool)checkIsReplayStopgapStatus:(id)arg1;
+ (_Bool)checkIsReplayStatus:(id)arg1;
+ (id)createPivotItemViewControllerWithDataItem:(id)arg1;
+ (id)getUniqueKeyForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *dataItemsSet; // @synthesize dataItemsSet=_dataItemsSet;
@property long long startPreviewIndex; // @synthesize startPreviewIndex=_startPreviewIndex;
@property(nonatomic) struct CGRect pivotCollectionViewFrame; // @synthesize pivotCollectionViewFrame=_pivotCollectionViewFrame;
@property(retain) MMUIView *pivotCollectionViewContainerView; // @synthesize pivotCollectionViewContainerView=_pivotCollectionViewContainerView;
@property(nonatomic) unsigned long long targetIndex; // @synthesize targetIndex=_targetIndex;
@property(nonatomic) _Bool needScrollToLast; // @synthesize needScrollToLast=_needScrollToLast;
@property(nonatomic) _Bool needScrollToNext; // @synthesize needScrollToNext=_needScrollToNext;
@property(retain, nonatomic) WCLiveBlurButton *specialCloseButton; // @synthesize specialCloseButton=_specialCloseButton;
@property(retain, nonatomic) MMFinderLivePreviewExitButton *previewExitButton; // @synthesize previewExitButton=_previewExitButton;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) MMUILabel *specialTitleLabel; // @synthesize specialTitleLabel=_specialTitleLabel;
@property(retain, nonatomic) UICollectionView *specialThumbnailCollectionView; // @synthesize specialThumbnailCollectionView=_specialThumbnailCollectionView;
@property(retain, nonatomic) UIViewPropertyAnimator *pivotViewZoomInAnimator; // @synthesize pivotViewZoomInAnimator=_pivotViewZoomInAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *pivotViewZoomOutAnimator; // @synthesize pivotViewZoomOutAnimator=_pivotViewZoomOutAnimator;
@property(retain, nonatomic) UIPanGestureRecognizer *specialLiveAnimatorGestureRecognizer; // @synthesize specialLiveAnimatorGestureRecognizer=_specialLiveAnimatorGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *pivotCollectionTapGesRecognizer; // @synthesize pivotCollectionTapGesRecognizer=_pivotCollectionTapGesRecognizer;
@property(nonatomic) unsigned long long lastVisibleLoadingEndDraggingTimestamp; // @synthesize lastVisibleLoadingEndDraggingTimestamp=_lastVisibleLoadingEndDraggingTimestamp;
@property(nonatomic) _Bool relayoutFailOnViewDidAppear; // @synthesize relayoutFailOnViewDidAppear=_relayoutFailOnViewDidAppear;
@property(nonatomic) unsigned long long currSupportedInterfaceOrientations; // @synthesize currSupportedInterfaceOrientations=_currSupportedInterfaceOrientations;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(nonatomic) _Bool canNotPrepend; // @synthesize canNotPrepend=_canNotPrepend;
@property(retain, nonatomic) MMTimer *homePagePrefetchTimer; // @synthesize homePagePrefetchTimer=_homePagePrefetchTimer;
@property(nonatomic) unsigned int lastHomePageLeaveTime; // @synthesize lastHomePageLeaveTime=_lastHomePageLeaveTime;
@property(retain, nonatomic) MMTimer *homePageCacheTimer; // @synthesize homePageCacheTimer=_homePageCacheTimer;
@property(retain, nonatomic) WCFinderLiveHomePageViewController *homePageVC; // @synthesize homePageVC=_homePageVC;
@property(nonatomic) unsigned long long lastdetectionValidityTimestamp; // @synthesize lastdetectionValidityTimestamp=_lastdetectionValidityTimestamp;
@property(retain, nonatomic) NSData *lastCheckBuffer; // @synthesize lastCheckBuffer=_lastCheckBuffer;
@property(retain, nonatomic) MMTimer *detectionValidityTimer; // @synthesize detectionValidityTimer=_detectionValidityTimer;
@property(retain, nonatomic) WCFinderLiveBaseLogReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMLivePivotAutoSwipeInfo *autoSwipeInfoAfterFetchRecommends; // @synthesize autoSwipeInfoAfterFetchRecommends=_autoSwipeInfoAfterFetchRecommends;
@property(retain, nonatomic) MMLiveDisplayLinkAnimator *frameByFrameScrollAnimator; // @synthesize frameByFrameScrollAnimator=_frameByFrameScrollAnimator;
@property(nonatomic) _Bool isForceShowRoundCorner; // @synthesize isForceShowRoundCorner=_isForceShowRoundCorner;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) _Bool needFirstScrolledAfterExposedEducationForReporter; // @synthesize needFirstScrolledAfterExposedEducationForReporter=_needFirstScrolledAfterExposedEducationForReporter;
@property(nonatomic) _Bool needShowScrollDownTips; // @synthesize needShowScrollDownTips=_needShowScrollDownTips;
@property(nonatomic) _Bool needShowScrollUpTips; // @synthesize needShowScrollUpTips=_needShowScrollUpTips;
@property(nonatomic) _Bool recommendationRefreshScheduled; // @synthesize recommendationRefreshScheduled=_recommendationRefreshScheduled;
@property(nonatomic) long long recommendationRefreshInvokeTime; // @synthesize recommendationRefreshInvokeTime=_recommendationRefreshInvokeTime;
@property(retain, nonatomic) MMTimer *recommendationRefreshTimer; // @synthesize recommendationRefreshTimer=_recommendationRefreshTimer;
@property(nonatomic) _Bool isShowEducationView; // @synthesize isShowEducationView=_isShowEducationView;
@property(nonatomic) _Bool isLiveInMainScene; // @synthesize isLiveInMainScene=_isLiveInMainScene;
@property(nonatomic) _Bool isRecommendationLoading; // @synthesize isRecommendationLoading=_isRecommendationLoading;
@property(nonatomic) long long exportIdFetchStatus; // @synthesize exportIdFetchStatus=_exportIdFetchStatus;
@property(nonatomic) long long selectedExportIdIndex; // @synthesize selectedExportIdIndex=_selectedExportIdIndex;
@property(retain, nonatomic) NSMutableDictionary *exportIdDictionary; // @synthesize exportIdDictionary=_exportIdDictionary;
@property(retain, nonatomic) NSArray *exportIds; // @synthesize exportIds=_exportIds;
@property(nonatomic) unsigned long long watchHistoryLiveCount; // @synthesize watchHistoryLiveCount=_watchHistoryLiveCount;
@property(retain, nonatomic) MMFinderLivePivotEducationView *scrollUpTipsView; // @synthesize scrollUpTipsView=_scrollUpTipsView;
@property(retain, nonatomic) NSMutableSet *scheduledRemoveItemKeys; // @synthesize scheduledRemoveItemKeys=_scheduledRemoveItemKeys;
@property(nonatomic) _Bool shouldScrollToNextAfterReplacement; // @synthesize shouldScrollToNextAfterReplacement=_shouldScrollToNextAfterReplacement;
@property(retain, nonatomic) NSIndexPath *replacementSelectedIndexPath; // @synthesize replacementSelectedIndexPath=_replacementSelectedIndexPath;
@property(retain, nonatomic) NSArray *replacementContentVMs; // @synthesize replacementContentVMs=_replacementContentVMs;
@property(retain, nonatomic) FinderCommByPass *fetchMoreByPass; // @synthesize fetchMoreByPass=_fetchMoreByPass;
@property(nonatomic) unsigned int hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) _Bool initialContentOffsetSet; // @synthesize initialContentOffsetSet=_initialContentOffsetSet;
@property(nonatomic) _Bool isLiveAppearing; // @synthesize isLiveAppearing=_isLiveAppearing;
@property _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) MMLivePreviewRelatedViewModel *specialViewModel; // @synthesize specialViewModel=_specialViewModel;
@property(nonatomic) unsigned long long initialPivotObjectId; // @synthesize initialPivotObjectId=_initialPivotObjectId;
@property(nonatomic) unsigned long long pivotSessionId; // @synthesize pivotSessionId=_pivotSessionId;
@property(nonatomic) _Bool disableInteractiveToMinimizeWindow; // @synthesize disableInteractiveToMinimizeWindow=_disableInteractiveToMinimizeWindow;
@property(nonatomic) unsigned long long initialPivotLiveId; // @synthesize initialPivotLiveId=_initialPivotLiveId;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool hasShownEntryDialog; // @synthesize hasShownEntryDialog=_hasShownEntryDialog;
@property(nonatomic) _Bool isPreviewRelatedLiveState; // @synthesize isPreviewRelatedLiveState=_isPreviewRelatedLiveState;
@property(nonatomic) _Bool isPreviewDataUpdatingOnAnimation; // @synthesize isPreviewDataUpdatingOnAnimation=_isPreviewDataUpdatingOnAnimation;
@property(nonatomic) _Bool isTransfroming; // @synthesize isTransfroming=_isTransfroming;
@property(nonatomic) struct CGSize currentPivotViewSize; // @synthesize currentPivotViewSize=_currentPivotViewSize;
@property(retain) NSMutableArray *itemControllers; // @synthesize itemControllers=_itemControllers;
@property(retain) MMLivePivotCollectionView *pivotCollectionView; // @synthesize pivotCollectionView=_pivotCollectionView;
@property(retain) MMLivePivotView *pivotView; // @synthesize pivotView=_pivotView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WCFinderFullShareListTemplatePlugin *jsapiPlugin; // @synthesize jsapiPlugin=_jsapiPlugin;
@property(retain, nonatomic) NSString *sourceLiteAppId; // @synthesize sourceLiteAppId=_sourceLiteAppId;
@property(retain, nonatomic) NSString *srcUrl; // @synthesize srcUrl=_srcUrl;
@property(nonatomic) long long bottomMostSeenLiveIndex; // @synthesize bottomMostSeenLiveIndex=_bottomMostSeenLiveIndex;
@property(nonatomic) _Bool hasFetchedLivesSinceScrolling; // @synthesize hasFetchedLivesSinceScrolling=_hasFetchedLivesSinceScrolling;
@property(copy, nonatomic) CDUnknownBlockType dismissOrMinimizeCallback; // @synthesize dismissOrMinimizeCallback=_dismissOrMinimizeCallback;
@property(retain, nonatomic) MMFinderLiveRelatedLiveParams *relatedLiveParams; // @synthesize relatedLiveParams=_relatedLiveParams;
@property(nonatomic) _Bool fromLiveRedDot; // @synthesize fromLiveRedDot=_fromLiveRedDot;
@property(nonatomic) __weak id <MMLiveMorphDismissTarget> morphDismissTarget; // @synthesize morphDismissTarget=_morphDismissTarget;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain) NSMutableArray *liveContentVMs; // @synthesize liveContentVMs=_liveContentVMs;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isPresentingWithCustomTransition; // @synthesize isPresentingWithCustomTransition;
- (_Bool)enableVideoStreamWarmup;
- (unsigned long long)liveRoomHomePageVCCacheDuration;
- (void)removeFinderLiveVCCache;
- (void)onFinderLiveHomePageReturn;
- (void)removeForbidScrollReason:(unsigned long long)arg1;
- (void)addForbidScrollReason:(unsigned long long)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (void)detectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)startDetectionFeedsValidity;
- (void)handleEnterBackground:(id)arg1;
- (void)handleEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)registerYReportSdk;
- (void)viewDidTransitionToNewSize;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)currentPivotItemIndex;
- (unsigned long long)dataItemsCount;
- (void)onScrollByDisplayLinkEnd;
- (void)updateInteractiveHomePageReportInfo;
- (id)takeSnapshotView;
- (void)onLiveViewEnterSquareAnimationEnd:(id)arg1 isPop:(_Bool)arg2;
- (void)onLiveViewEnterSquareAnimationBegin:(id)arg1 isPop:(_Bool)arg2;
- (void)onInteractiveTransitionToMinimizationDidBegin;
- (void)onPivotItemStartLiveFinished;
- (void)updateAfterZoomOut;
- (void)updateBeforeZoomIn;
- (void)resetZoomAnimatorStatus;
- (void)udpateScrollEducationTipsFlag;
- (unsigned long long)displayEducationScrollTips;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)prefetchInteractiveHomePageData;
- (void)checkProcessPrefetchInteractiveHomePage;
- (void)resetHomePagePrefetchTimer;
- (void)updateEnterSquareGesutreIfNeeded;
- (void)onJoinLive;
- (void)onFollowConfirmPopup:(_Bool)arg1;
- (void)showScrollUpTips;
- (void)scrollToNextLiveTaskAfterExpandingWithDuration:(double)arg1;
- (void)scrollToNextLiveTaskAnimated:(_Bool)arg1;
- (void)scrollToNextLiveTask;
- (void)scrollToNextLiveTaskAndDismissEducationView;
- (void)scrollToLastLiveTaskAndDismissEducationView;
- (void)showScrollTipsViewWithHeight:(double)arg1 viewModel:(id)arg2;
- (void)performBlockAfterOrientationPortrait:(CDUnknownBlockType)arg1 ignoreTopWindowOrientation:(_Bool)arg2;
- (void)reportLiveViewInvisibleIfNeed;
- (void)onLiveAppearingChanged;
- (unsigned long long)footerDisplayState;
- (void)updateCommentSceneOnSlideEnterRoom;
- (void)notifyTemplateIfNeedOnLiveScrollTo:(id)arg1;
- (void)completeScrollingOfScrollView:(id)arg1;
- (id)toWatchHistoryReporter;
- (void)handleForCurrentUnDispayingPivotItem;
- (_Bool)isCurrentInReplayTab;
- (void)handleUIOrientationChanged:(id)arg1;
- (struct CGRect)getWindowBounds;
- (void)updateCurrOrientation;
- (void)scrollDeferredToItemAtIndex:(id)arg1;
- (id)currentItemController;
- (void)fetchMoreUsrPageReplayFeeds;
- (void)fetchMorePurchasedReplayFeeds;
- (id)liveContentVMsWithDataItems:(id)arg1 sessionExtraKey:(id)arg2;
- (void)fetchLivesForPendingExportIdsWithOnCompleted:(CDUnknownBlockType)arg1;
- (void)purgeUnseenLives;
- (void)fetchRecommendedLivesPurgingUnseen:(_Bool)arg1 isJoinCurrentLive:(_Bool)arg2;
- (void)fetchRecommendedLivesPurgingUnseen:(_Bool)arg1;
- (void)fetchRecommendedLivesPurgingUnseen:(_Bool)arg1 isFromJoinLiveRecommend:(_Bool)arg2 isJoinCurrentLive:(_Bool)arg3 joinliveGetliverelatedlistPullType:(unsigned int)arg4;
- (void)refreshRecommendedLives;
- (_Bool)isPreloadRecommendLiveCloseSwitch;
- (void)updateRecommendedLives:(_Bool)arg1 finderUserName:(id)arg2 joinliveGetliverelatedlistPullType:(unsigned int)arg3;
- (void)fetchRecommendedLives;
- (void)onFetchRecommendedLives:(_Bool)arg1;
- (void)fetchHistoryLives;
- (void)extendAndReplaceFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 scrollToNextAfterReplacement:(_Bool)arg4;
- (void)prependFinderLiveHistoryDataItems;
- (void)reportPivotStayEnter;
- (void)bindPivotStayEnter;
- (void)initializeStateWithFinderLiveContentVM:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3;
- (void)initializeStateWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2;
- (void)didMoveToNewScene:(id)arg1;
- (void)filterLiveContentVMs:(id)arg1;
- (void)changeCurrOrientation:(long long)arg1;
- (void)updateCurrSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldShowCloseButtonWhenMinimized;
- (_Bool)shouldSupportSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (_Bool)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (_Bool)isPIPHandlerCreated;
- (_Bool)shouldInvokeInteractiveTransition;
- (_Bool)shouldSupportInteractiveTransition;
- (id)currentLiveTask;
- (id)currentFinderLivePreviewOperationView;
- (id)currentPlayDataItem;
- (id)currentPlayVM;
- (id)currentReplayViewController;
- (id)currentLiveViewController;
- (void)hideView;
- (void)showView;
@property(nonatomic) _Bool isForcePortraitForExtend;
- (struct CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
@property(readonly, nonatomic) UIView *minimizeSrcView;
@property(readonly, nonatomic) UIView<MMLiveContainerDisplayViewProtocol> *displayContentView;
@property(readonly, nonatomic) MMLiveView *liveView;
@property(readonly, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly, nonatomic) UIImageView *blurView;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (_Bool)canShowHeaderView;
- (long long)itemCount;
- (id)itemViewControllerWithIndex:(long long)arg1;
- (_Bool)isPreviewRelatedState;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)currentDisplayItemControllers;
- (void)checkAndApplyLiveViewScrollingFxWithScrollView:(id)arg1 isForce:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)relatedCgiReportReadStats;
- (long long)relatedLiveShowPosition;
- (long long)relatedCgiReportCurObjectIndex;
- (long long)currentLiveScrollIndex;
- (void)checkAutoSwipeAfterFetchRecommendsIfNeeded;
- (void)needAutoSwipe:(id)arg1;
- (unsigned long long)getSupportedInterfaceOrientations;
- (void)appendOrMoveNewLiveVMToNextAndAutoScrollToNext:(id)arg1;
- (void)updatePivotCollectionViewBouncesIfNeeded;
@property(nonatomic) _Bool forbidScroll;
- (void)replaceLiveWithFinderDataItem:(id)arg1 selectedIndex:(id)arg2 commentScene:(int)arg3;
- (void)replaceCurrentLiveWithFinderLiveContentVM:(id)arg1 commentScene:(int)arg2;
- (void)replaceCurrentLiveWithFinderLiveContentVM:(id)arg1;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 commentScene:(int)arg4;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 commentScene:(int)arg3;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3;
- (void)switchLiveWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2;
- (void)rejoinCurrentLiveWithLoadingText:(id)arg1;
- (void)rejoinCurrentLive;
- (_Bool)switchLiveAliasRoleType:(long long)arg1 liveTask:(id)arg2;
- (id)replacementContentVMsForExtendAndScrolling:(id)arg1 selectedIndex:(long long *)arg2;
- (_Bool)shouldUseExtendAndScrollConflictResolvingForCommentScene:(int)arg1;
- (_Bool)handleConflictForEnableHomePageTransitionContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6;
- (_Bool)handleConflictWithNewFinderLiveContentVMs:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 navigationController:(id)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(id)arg7;
- (_Bool)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (_Bool)resolveExternalConflicts;
- (void)scheduleRemoveFinderLiveContentVm:(id)arg1;
- (void)removeLiveContentVMsWithTidList:(id)arg1;
- (void)removeFinderLiveContentVMAtIndex:(unsigned long long)arg1;
- (_Bool)appendFinderLiveContentVMs:(id)arg1 fromIndex:(unsigned long long)arg2;
- (_Bool)appendFinderLiveContentVMs:(id)arg1;
- (void)prependFinderLiveContentVMs:(id)arg1 isWatchHistoryLive:(_Bool)arg2;
- (void)prependFinderLiveContentVMs:(id)arg1;
- (void)replaceFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2;
- (void)joinCurrentLive;
- (void)preJoinCurrentLive;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (void)removeJsapiPlugin;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (unsigned long long)currentOrientationMask;
- (_Bool)shouldHonorInterfaceOrientationPreferenceForViewController:(id)arg1;
- (unsigned long long)inner_supportedInterfaceOrientations;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)removeDatas;
- (void)removeViews;
- (void)resetView;
- (void)onCloseButtonClicked;
- (void)layoutSpecialCloseButton;
- (void)layoutSpecialTitleLabel;
@property(readonly, nonatomic) _Bool isSpecialViewModelStarted;
- (void)updateSpecialCollectionViewMaskViewHidden;
- (void)layoutSpecialPreviewExitButton;
- (void)layoutSpecialCollectionViewMaskView;
- (void)layoutSpecialThumbnailCollectionView;
- (void)handlePivotCollectionTapGesture:(id)arg1;
- (void)addPivotCollectionTapGesture;
- (void)layoutPivotCollectionView;
- (void)layoutUI;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initNotifications;
- (void)initData;
- (id)initWithFinderLiveContentVM:(id)arg1 exportIds:(id)arg2 selectedIndex:(id)arg3 inMainScene:(_Bool)arg4;
- (id)initWithFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 inMainScene:(_Bool)arg3;
- (id)init;
- (id)PRContentVMs;
- (id)displayPRContentVMs;
- (id)PRItemControllers;
- (unsigned long long)currentPRIndex;
- (id)currentPRItemController;
- (id)currentPRLiveTask;
- (id)currentPRPlayDataItem;
- (id)currentPRPlayVM;
- (id)currentPRLiveViewController;
- (void)completeScrollingOfRelatedLive:(id)arg1;
- (void)relatedLiveDidScroll:(id)arg1;
- (void)updateRelatedVMWith:(id)arg1;
- (void)onRelatedLivePivotItemStartLiveFinished;
- (void)exitRelatedStatueImmediately;
- (void)initGesture;
- (void)updatePreviewExitButtonAlphaOnScrolling:(id)arg1;
- (void)fetchNextPageSpecial;
- (void)onBannerInfoUpdate;
- (void)onSpecialCollectionViewScroll;
- (void)onSelectItemAtIndexPath:(unsigned long long)arg1;
- (long long)relatedItemCount;
- (id)relatedItemVCWithIndex:(long long)arg1;
- (_Bool)canAppendNextPageRelatedLiveWith:(long long)arg1;
- (_Bool)canHandleRelatedLiveTransform;
- (void)logSpecialViewModelStatus;
- (_Bool)isSpecialViewModelUpdating;
- (void)resetContentVMsToRelatedAfterScroll;
- (void)scrollToLastRoom;
- (void)preloadLastViewController;
- (void)scrollToNextRoom;
- (void)preloadNextViewController;
- (void)scrollToItemWithIndex:(unsigned long long)arg1;
- (void)appendRelatedLives:(id)arg1;
- (void)prependRelatedLiveContentVMs:(id)arg1 withEndBlock:(CDUnknownBlockType)arg2;
- (void)removePreviousLivesWithEndBlock:(CDUnknownBlockType)arg1;
- (void)translateStateToContentVMs:(id)arg1 selectedIndex:(id)arg2 withEndBlock:(CDUnknownBlockType)arg3;
- (void)resetContentsAfterExpendWithReversed:(_Bool)arg1;
- (void)prepareItemVCsForNormalState;
- (void)resetContentsAfterMinifyWithReversed:(_Bool)arg1;
- (void)prepareItemVCsForPRState;
- (id)genNewPivotViewZoomOutAnimator;
- (id)genNewPivotViewZoomInAnimator;
- (void)setBackwardZoomOutAnimatorStateOnPanGesture:(id)arg1;
- (void)setZoomOutAnimatorStateProgress:(double)arg1 fast:(_Bool)arg2 onPanGesture:(id)arg3;
- (void)setBackwardZoomInAnimatorStateOnPanGesture:(id)arg1;
- (void)setZoomInAnimatorStateProgress:(double)arg1 fast:(_Bool)arg2 onPanGesture:(id)arg3;
- (void)handlePanGesture:(id)arg1;
- (void)handleViewChangedEvent:(id)arg1 source:(unsigned long long)arg2;
- (void)fetchNextPageSpecialWithLastBuffer:(id)arg1;
- (void)fetchDataWithLastBuffer:(id)arg1;
- (void)enterRelatedLiveStatusWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

