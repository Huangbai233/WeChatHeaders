//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FindFriendRedDotEventSender, FindFriendRedDotReporter, FindPageCustomBarView, GameIndexSettingControl, MMHeadImageView, MMMainTableView, MMTimer, MMTitleView, NSIndexPath, NSMutableArray, NSString, UIImageView, UIView, WCDataItem, WCFinderLifeHomeViewController, WCFinderLiveHomePageViewController, WCFinderNearbyTabPageCacheModel, WCFinderTimelineTabViewController, WCTimeLineViewController;

@interface FindFriendEntryViewController
{
    _Bool m_bNeedToDestroySelf;
    _Bool m_bBeingAppear;
    _Bool m_findTabHasShow;
    _Bool m_isOnAppearState;
    NSString *m_gameCenterNoticeID;
    NSString *m_gameCenterAppIDForStat;
    unsigned int _startTime;
    GameIndexSettingControl *m_gameEntrySetting;
    NSString *m_ffBrowseReddotMsgIdDuringSelect;
    long long finderPrefetchTimingSeconds;
    NSString *m_hadRptRedSnsId;
    NSString *m_lastExposeSnsId;
    _Bool m_reportJdExposeAtAppear;
    _Bool m_hasGameLifeReddot;
    _Bool m_hasInitData;
    MMMainTableView *m_tableView;
    struct stEntryRow *m_aryEntryRow;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapSectionType;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAlbum;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSocial;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeMotion;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSearch;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeOpen;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeWCO;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAppBrand;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeFinder;
    NSIndexPath *m_WCTimeLineIndexPath;
    WCDataItem *m_latestSeenDataItem;
    WCDataItem *m_latesetDataItem;
    NSIndexPath *m_lbsIndexPath;
    NSIndexPath *m_shakeIndexPath;
    NSIndexPath *m_gameIndexPath;
    _Bool m_needDoGameSync;
    NSIndexPath *m_WCFinderIndexPath;
    WCTimeLineViewController *m_timelineViewController;
    MMTimer *m_timelineCacheTimer;
    MMHeadImageView *m_timelineHeadView;
    UIImageView *m_timelineRedDotView;
    _Bool m_inTimeline;
    _Bool m_hasWeAppReportedCellExposal;
    long long m_gameNotifyType;
    _Bool _hasFinderEntranceRedDotBefore;
    _Bool _lastLiveEntranceSwitch;
    _Bool _isShowingMomentsRedDot;
    WCFinderTimelineTabViewController *_finderTimelineTabVC;
    WCFinderLifeHomeViewController *_finderLifeHomeVC;
    UIView *_allEntriesClosedHintView;
    WCFinderNearbyTabPageCacheModel *_nearbyCacheModel;
    NSMutableArray *_finderContextIdArray;
    MMTimer *_finderCacheTimer;
    MMTimer *_finderLiveCacheTimer;
    MMTimer *_nearbyLiveCacheTimer;
    WCFinderLiveHomePageViewController *_liveHomePageVC;
    FindFriendRedDotEventSender *_redDotEventSender;
    FindFriendRedDotReporter *_redDotReporter;
}

+ (id)needExposeRedDotPaths;
+ (id)findNaviTitle;
+ (id)buildSystemNaviTitleLabel;
+ (_Bool)shouldCheckErrorCase;
+ (_Bool)shouldCheckFinderRedDotErrorCase;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) FindFriendRedDotReporter *redDotReporter; // @synthesize redDotReporter=_redDotReporter;
@property(retain, nonatomic) FindFriendRedDotEventSender *redDotEventSender; // @synthesize redDotEventSender=_redDotEventSender;
@property(nonatomic) _Bool isShowingMomentsRedDot; // @synthesize isShowingMomentsRedDot=_isShowingMomentsRedDot;
@property(retain, nonatomic) WCFinderLiveHomePageViewController *liveHomePageVC; // @synthesize liveHomePageVC=_liveHomePageVC;
@property(retain, nonatomic) MMTimer *nearbyLiveCacheTimer; // @synthesize nearbyLiveCacheTimer=_nearbyLiveCacheTimer;
@property(retain, nonatomic) MMTimer *finderLiveCacheTimer; // @synthesize finderLiveCacheTimer=_finderLiveCacheTimer;
@property(retain, nonatomic) MMTimer *finderCacheTimer; // @synthesize finderCacheTimer=_finderCacheTimer;
@property(retain, nonatomic) NSMutableArray *finderContextIdArray; // @synthesize finderContextIdArray=_finderContextIdArray;
@property(nonatomic) _Bool lastLiveEntranceSwitch; // @synthesize lastLiveEntranceSwitch=_lastLiveEntranceSwitch;
@property(retain, nonatomic) WCFinderNearbyTabPageCacheModel *nearbyCacheModel; // @synthesize nearbyCacheModel=_nearbyCacheModel;
@property(nonatomic) _Bool hasFinderEntranceRedDotBefore; // @synthesize hasFinderEntranceRedDotBefore=_hasFinderEntranceRedDotBefore;
@property(retain, nonatomic) UIView *allEntriesClosedHintView; // @synthesize allEntriesClosedHintView=_allEntriesClosedHintView;
@property(retain, nonatomic) WCFinderLifeHomeViewController *finderLifeHomeVC; // @synthesize finderLifeHomeVC=_finderLifeHomeVC;
@property(retain, nonatomic) WCFinderTimelineTabViewController *finderTimelineTabVC; // @synthesize finderTimelineTabVC=_finderTimelineTabVC;
@property(retain, nonatomic) NSIndexPath *m_lbsIndexPath; // @synthesize m_lbsIndexPath;
@property(retain, nonatomic) NSIndexPath *m_gameIndexPath; // @synthesize m_gameIndexPath;
@property(retain, nonatomic) NSIndexPath *m_shakeIndexPath; // @synthesize m_shakeIndexPath;
- (void)mainTabBarController:(id)arg1 transitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)bindLiveViewController:(id)arg1 withRedDotInfo:(id)arg2 withShowInfo:(id)arg3;
- (void)bindFinderViewController:(id)arg1 andLeftPath:(id)arg2 andRightPath:(id)arg3;
- (void)reportTingEnter31087:(id)arg1;
- (void)registerYReportSdk;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)preloadFinderResource;
- (void)onExptItemListChange;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)tipsVCClickConfirmButton:(id)arg1;
- (void)finderBrowseLongVideoSwitchChange;
- (void)finderLiveNewEntranceSwitchChange;
- (void)noteTabBarBadge:(_Bool)arg1 andTotalCount:(long long)arg2;
- (void)noteEntrySwitch;
- (void)noteEntryRedDot:(long long)arg1 andHadRedDot:(_Bool)arg2;
- (void)finderNearbyLiveSwitchChange;
- (void)liveLimitModeChanged;
- (void)nearbyLimitModeChanged;
- (void)finderLimitModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)removeFinderLiveVCCache;
- (void)onFinderLiveHomePageReturn;
- (void)removeNearbyLiveVCCache;
- (void)onNearbyLiveTabPageViewControllerReturn;
- (void)removeFinderLifeHomeVCCache;
- (void)removeFinderVCCache;
- (void)onFinderTimeLineTabViewDidBePoped;
- (void)onFinderTimeLineTabViewWillReturn;
- (void)reinitLifeHome;
- (void)reinitFeedTimeline;
- (void)onNewLifeNotifyRedDotAppearnceChanged;
- (void)onFinderNotifyFinderRedDotStatusChange;
- (void)finderRedDotDataHitFrequencyAtPath:(id)arg1 ctrlInfo:(id)arg2;
- (void)finderRedDotDataReceiveWithPathKey:(id)arg1 isAlreadExistRedDot:(_Bool)arg2;
- (void)_handleFinderBusinessRedDotLogicIfNeed:(id)arg1;
- (_Bool)finderTimelineIsInNavigationController;
- (void)_handleFinderDiscoveryRedDotLogic:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (id)webRecommendReddotId;
- (void)tryPreloadWebRecommendPage;
- (void)onProfileChange;
- (void)onDiscoverPageReddotSettingChangedForEntranceType:(unsigned long long)arg1 isShow:(_Bool)arg2;
- (void)clearNearbyPeopleRedDotIfNeed;
- (void)onDiscoverEntranceSettingType:(unsigned long long)arg1 isShow:(_Bool)arg2;
- (void)onEnterSettingView;
- (void)checkAndShowAllEntriesClosedHintView;
- (void)setupAllEntriesClosedHintView;
- (void)onRemoveRecommendReddot;
- (void)onRemoveRecommendNumberReddot:(id)arg1;
- (void)onWebRecommendTabDataChange:(_Bool)arg1;
- (void)onWebSearchRedPointChange:(id)arg1;
- (void)onLabAppSwitchChanged:(id)arg1;
- (void)onSearchConfigDataUpdated;
- (void)onSearchConfigDataFailToUpdate;
- (void)updateSearchInfo;
- (void)initSearchInfo;
- (void)onLoadImageOK:(id)arg1;
- (id)indexPathForGameRow;
- (void)reloadGameRowIndexPath;
- (void)onGameCenterEntryReExposure;
- (void)onGameCenterUpdateGameLifeFindDot;
- (void)onGameCenterDeleteOneMsg:(unsigned int)arg1;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterEntryIconStatusChanged;
- (void)onGameCenterClearAllRedDot;
- (void)onGameCenterMessageReceived;
- (void)onConversationUpdated;
- (void)onCacheMgrCleanCacheWarning;
- (void)setupDeepLinkConfig;
- (id)webViewWithURL:(id)arg1;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onFontSizeChange;
- (void)onMarkTimelineListReadWithTid:(id)arg1 andCreateTime:(unsigned long long)arg2;
- (void)onMMDynamicConfigUpdated;
- (void)onJdBussinessRecvBewXml;
- (void)onJdBussinessReloadTip;
- (void)onJdBussinessEntranceChanged;
- (void)onGameCenterFindEntryChange;
- (void)onNewGameAdChanged;
- (void)onGameNewAppCountChanged;
- (void)onGameGiftInfoChanged;
- (void)onGameMessageUnReadCountChanged;
- (void)onGameEntryChanged;
- (void)onShakeMsgUnreadCountChanged;
- (void)onShakeStatusChanged;
- (void)onSettingExtChanged:(long long)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)onTimeLineViewReturn;
- (void)onMarkWCObjectAsRead:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onLatestWCObjectChanged:(id)arg1;
- (_Bool)validateMomentsCreateTimeForDataItem:(id)arg1;
- (id)descriptionForMomentsDataItem:(id)arg1;
- (void)disposeIndependentFinderRedDotOnTab;
- (void)updateWCTimeLineView:(id)arg1;
- (id)getSnsRedDotShownTid;
- (_Bool)tryCleanLiveEntranceCache;
- (_Bool)isMomentsShowingRedDot;
- (_Bool)shouldShowFFBrowseRedDot;
- (_Bool)shouldShowNearbyLiveEntryRedDot;
- (_Bool)shouldShowNearbyLiveEntry;
- (_Bool)shouldShowFinderLiveEntryRedDot;
- (_Bool)shouldShowShakeEntry;
- (_Bool)shouldShowWCOEntry;
- (_Bool)shouldShowAppBrandEntry;
- (_Bool)shouldShowGameEntry;
- (_Bool)shouldShowJDStoreEntry;
- (_Bool)shouldShowScanQRCodeEntry;
- (_Bool)shouldShowSearchEntry;
- (_Bool)shouldShowBrowseEntry;
- (_Bool)shouldShowTingEntry;
- (id)preOpenWSLocalWebView;
- (void)judgeK1kTabBeforeEnter;
- (void)k1kReddotJumpWith:(id)arg1 showInfo:(id)arg2 isRedDotOpt:(unsigned char)arg3;
- (void)newlifeReddotJumpWith:(id)arg1 jumpParam:(id)arg2;
- (id)prepareNewLifePrefetchParamsWith:(id)arg1;
- (void)openBrowseEntry;
- (void)openSearchEntryWithParams:(id)arg1 isFromClick:(_Bool)arg2;
- (void)openSearchEntryWithParams:(id)arg1;
- (void)clickOpenSearchEntry;
- (void)openWeAppDestopWithAnimate:(_Bool)arg1;
- (_Bool)shouldUseSimulatedNativeDestop;
- (void)openWeAppDestopForScene:(unsigned long long)arg1;
- (void)openCameraScan:(id)arg1 cameraScanType:(int)arg2;
- (void)openCameraScan:(int)arg1;
- (void)openLBS;
- (void)openTingEntry;
- (id)prepareLaunchOptionsBeforeOpenTingEntry;
- (void)onTingNativeReddotEvent:(int)arg1 ctrlInfo:(id)arg2 path:(id)arg3;
- (id)allTingReddotPath;
- (void)reportIPadCompactAction;
- (void)rptEnterTimeLine:(id)arg1;
- (void)rptSnsRedDotDisplay:(id)arg1;
- (void)reportFinderLiveRedDotClick;
- (void)reportNearbyLiveRedDotFailIfNeed:(unsigned long long)arg1;
- (void)reportNearbyRedDotClick;
- (void)reportFinderDiscoveryRedDotAction:(long long)arg1;
- (void)reportFFSearchEntranceExpose;
- (void)reportFFBrowseRedDotAction:(id)arg1 andNumRedDotCount:(unsigned int)arg2 andMsgid:(id)arg3;
- (void)reportFFBrowseRedDotExposed;
- (void)viewDidLayoutSubviews;
- (void)triggerFinderReportAction;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)triggerFinderSerialEntryRedDotExpose;
- (void)_reportFindPageEntryExposeAction;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tryPreloadFFSearchWebview;
- (void)tryPreloadFFBrowseWebview;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkIfAnimationFail;
- (void)statViewOrClickJDCell:(unsigned int)arg1 reportType:(unsigned int)arg2;
- (void)viewDidTransitionToNewSize;
- (void)addObserverForForegroundNotification;
- (void)viewDidLoad;
- (void)initRedDotReporter;
- (void)initView;
- (void)initTitle;
- (void)initTableView;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)willAppear;
- (_Bool)badgeAtTopStoriesCell;
- (_Bool)badgeAtMomentCell;
- (long long)getBusinessFlagShowOnBadge;
- (_Bool)badgeAtTab;
- (void)updateTabBarBadge;
- (_Bool)shouldShowTabBarBadgeForWCUploadFail;
- (long long)numberOfUnreadAtTopStoriesCell;
- (long long)numberOfUnreadAtMomentCell;
- (long long)numberOfFinderCellWithTotalCount:(long long)arg1;
- (long long)numberOfUnreadAtTab;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleAppBrandEntry;
- (void)handleWCOEntry;
- (void)handleJDStoreCell;
- (void)handleSelectedEntryCell:(unsigned long long)arg1;
- (void)resetReddot:(struct stEntryRow *)arg1;
- (void)configNewTipsReddot:(struct stEntryRow *)arg1;
- (void)configIconReddot:(struct stEntryRow *)arg1 Title:(id)arg2 IconUrl:(id)arg3;
- (void)configTitleReddot:(struct stEntryRow *)arg1 Title:(id)arg2;
- (void)configBadgeReddot:(struct stEntryRow *)arg1 Badge:(id)arg2;
- (id)getRightImageViewWithUrl:(id)arg1 forRowType:(unsigned long long)arg2;
- (_Bool)disposeNewTipsWithPathKey:(id)arg1;
- (void)openNewLifeDebug:(id)arg1;
- (void)makeFinderLiveCell:(struct stEntryRow *)arg1 cell:(id)arg2;
- (void)setupNearbyEduRedDotIfNeedWithEntry:(struct stEntryRow *)arg1;
- (_Bool)checkCanNearbyShowRedDot;
- (void)makeFinderNearbyCell:(struct stEntryRow *)arg1 cell:(id)arg2;
- (void)makeBrowseCell:(id)arg1 entry:(struct stEntryRow *)arg2;
- (void)makeWebSearchCell:(id)arg1 entry:(struct stEntryRow *)arg2;
- (void)_updateFinderCellAccessibilityLabel:(id)arg1;
- (struct CGRect)getCellAvailableRect:(id)arg1 rowType:(unsigned long long)arg2;
- (void)makeFinderCell:(struct stEntryRow *)arg1 cell:(id)arg2;
- (void)makeTingCell:(struct stEntryRow *)arg1 cell:(id)arg2;
- (void)prepareExposeTingCell;
- (void)disposeTingRootMentionShowInfo;
- (void)tryFixTingMentionEntranceCount;
- (void)noteFinderFrameworkRedDotExposeActionFromPath:(id)arg1 cell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)bindFinderRedDotByAsPath:(id)arg1 bindView:(id)arg2 contentView:(id)arg3;
- (void)finderSerialEntranceReportRowType:(unsigned long long)arg1 leftView:(id)arg2 rightView:(id)arg3 contentView:(id)arg4;
- (void)makeEntryCell:(id)arg1 rowType:(unsigned long long)arg2;
- (_Bool)configWebSearchRedDotEntry:(id)arg1 entryRow:(struct stEntryRow *)arg2;
- (_Bool)getSearchBadgeViewWithRedPointInfo:(id)arg1 numRedPointInfo:(id)arg2 entryRow:(struct stEntryRow *)arg3;
- (id)getGameCenterHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (void)openGameCenter:(unsigned int)arg1;
- (void)openGameCenter;
- (void)preloadGameCenterWebViewControllerIfNeed;
- (id)getGameLiveSpecialReddotStr;
- (void)reloadGameRow;
- (void)setUpGameRowEntry;
- (void)makeGameCenterCell:(struct stEntryRow *)arg1 cell:(id)arg2;
- (void)reportFindExtryExposure;
- (void)repotGameLifeRedDot;
- (void)setUpGameEntryWithGameLifeInfo;
- (void)handleGameLifeRedpointEntranceInfo:(id)arg1 msg:(id)arg2 gameEntryNotify:(id)arg3;
- (void)showGameLifeRedpointEntranceWithMsg:(id)arg1 gameEntryNotify:(id)arg2;
- (void)generateFndGameEntryRedDotInfo:(id)arg1 msg:(id)arg2 gameLifeInfo:(id)arg3 forceReload:(_Bool)arg4;
- (void)generateFndGameEntryRedDotInfo:(id)arg1 msg:(id)arg2;
- (void)regetCurrentGameEntryRedDotInfo:(_Bool)arg1;
- (void)onGameEntryRedPointCompleteExposured;
- (void)onGameEntryRedPointExposured;
- (void)reportGameHalfExposureOver1Seconds;
- (void)updateGameDotHalfExposureState;
- (void)updateGameEntryRedExposure;
- (_Bool)isCurrentGameDotHalfExposure;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)updateJDStoreEntry;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)getRowsCountInSection:(long long)arg1;
- (long long)getDiscoveryRedDotType;
- (long long)getEntryWithRedDotCount;
- (long long)getTotalEntryCount;
- (void)triggerGlobalRedDotFrequencyClickAction:(long long)arg1 businessType:(unsigned long long)arg2 hasRedDot:(_Bool)arg3 isIgnoreRedDot:(_Bool)arg4;
- (void)doSelectCell:(long long)arg1;
- (void)onCloseAlbumTimeOut;
- (void)closeAlbum;
- (void)openAlbumAndPublishText;
- (void)openAlbumAndPublish;
- (void)openAlbum:(id)arg1;
- (void)openAlbum;
- (void)openAlbumAnimated:(_Bool)arg1 andScrollToTop:(_Bool)arg2;
- (void)openAlbumAnimated:(_Bool)arg1;
- (void)openNearByLifeVC;
- (id)indexPathForEntrySection:(unsigned long long)arg1 rowType:(unsigned long long)arg2;
- (void)doHiglightCellForEntrySection:(unsigned long long)arg1 rowType:(unsigned long long)arg2;
- (void)pushFinderTimelineFromOtherSceneWithPrams:(id)arg1;
- (void)onWCTimeLineViewControllerLeaveForFinderPersonalCenter;
- (void)onWCTimeLineViewControllerLeaveForFinderEntranceWithPostSession:(id)arg1;
- (id)preOpenAlbumView;
- (void)OnShakeVCDealloc;
- (void)openShakeWithAnimate:(_Bool)arg1;
- (void)openShakeFromInnerWithAnimate:(_Bool)arg1;
- (void)goToShakeWithAnimate:(_Bool)arg1;
- (void)buildForTemplatePostEdu;
- (void)buildFinderLocalRedDot;
- (void)_openFinderTimelineWithParams:(id)arg1;
- (unsigned long long)_getOpenFinderTimelineForceJumpTabTypeWith:(unsigned long long)arg1 redDotExtInfo:(id)arg2;
- (id)_enterFinderEntryWithParams:(id)arg1;
- (void)onClickFindPageFinderCell;
- (void)showFinderEnterTips;
- (id)liveReddotChannelExtra:(id)arg1 showInfo:(id)arg2 redDotExtInfo:(id)arg3;
- (void)tryDirectlyOpenFinderLiveWithRedDotExtInfo:(id)arg1 redDotControlInfo:(id)arg2 redDotPath:(id)arg3;
- (void)openFinderLiveEntryFromScene:(unsigned int)arg1;
- (void)openFinderLiveEntry;
- (void)openFinderIfNeeded;
- (int)getFinderEntryTargetTabType;
- (void)prefetchFinderDataIfNeedWithType:(unsigned long long)arg1;
- (void)prefetchFinderRedDotPinToTopObjectIfNeeded;
- (void)checkPrefetchLongVideoChannelFlow;
- (void)getLongVideoListCGIWithTabType:(int)arg1 finderCtrlInfo:(id)arg2;
- (void)prefetchLongVideoDataIfNeeded;
- (void)prefetchFinderDataByRedDotIfNeeded;
- (void)prefetchDiscoveryLiveDataIfNeedWithType:(unsigned long long)arg1;
- (unsigned long long)getNearbySelectedType;
- (int)getNearbyLiveCommentScene:(unsigned long long)arg1;
- (void)updateNearbyContextIdWithSelectType:(unsigned long long)arg1;
- (void)openNearByLiveVC;
- (void)preloadFlutterEngineGroup;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)triggerNewLifePrefetchDataNeedConfCheck:(_Bool)arg1;
- (void)triggerFinderPrefetchDataNeedConfCheck:(_Bool)arg1 needSecondsCheck:(_Bool)arg2 needRedDotCheck:(_Bool)arg3 ignoreIntevalConfCheck:(_Bool)arg4;
- (_Bool)enableTriggerFinderPrefetchLogicAfterRedDotCheck;
- (void)initRedDotEventSender;
- (void)tryInit;
- (_Bool)isSameFlatArray:(id)arg1 withOtherArray:(id)arg2;
- (id)flatAllRowData;
- (void *)getRowMapPointerBySectionType:(long long)arg1;
- (_Bool)checkAndReloadData;
- (void)reloadData;
- (void)pluginsChanged:(id)arg1;
- (void)resetSectionType;
- (void)resetRowType;
- (void)initRow;
- (void)markAbnormalType:(unsigned int)arg1;
- (id)getCurrentNaviController;
- (id)getCurrentNaviBar;
- (id)getCurrentNaviContentView;
- (void)notifyProtectLogicAtViewWillDisappear;
- (void)tryFixFinderNavInvalid;
- (void)tryClearFinderRedDotOnNaviBar;
- (void)notifyProtectLogicAtViewDidAppear;
@property(retain, nonatomic) FindPageCustomBarView *fakeNavBarView; // @dynamic fakeNavBarView;
@property(retain, nonatomic) MMTitleView *fakeTitleView; // @dynamic fakeTitleView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

