//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, FinderRecommendCloseConfig, FinderTeenagerInfo, MMScrollView, MMUIButton, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIButton, UIImageView, UIView, WCFinderAppendTabDatasModel, WCFinderCreateCoordinator, WCFinderFeedAudioHelper, WCFinderLeadToMachineCellState, WCFinderNavTeenagerView, WCFinderOpenTimelineParams, WCFinderPlaybackSpeedView, WCFinderPostMgr, WCFinderRecommendTabsView, WCFinderSearchStatReportShim, WCFinderTLUnreadModel, WCFinderTimelineTabBubbleController;
@protocol WCFinderTabViewControllerProtocol><WCFinderFeedBaseViewControllerProtocol, WCFinderTimelineTabViewControllerDelegate;

@interface WCFinderTimelineTabViewController
{
    _Bool _isNeedCheckFastLeave;
    _Bool _hasReportCreateEvent;
    _Bool _useNearbyLive;
    _Bool _isLimitedModeOn;
    _Bool _cameraLongPressRightButton;
    _Bool _isViewWillAppeaer;
    _Bool _timelineNoMoreCanShowHotSwitch;
    _Bool _isLandScape;
    _Bool _timelineScrollPageFeature;
    _Bool _alreadyCheckLimitModeGuide;
    _Bool _halfScreenIsShowState;
    _Bool _isFromMiniFloat;
    _Bool _postFeedInsertMachineTab;
    _Bool _showPostMenu;
    _Bool _cancelSpeedViewAnimateBlock;
    long long _lastTabType;
    id <WCFinderTimelineTabViewControllerDelegate> _m_delegate;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTimelineParams;
    WCFinderTimelineTabBubbleController *_tabBubbleCtrl;
    unsigned long long _enterScene;
    WCFinderAppendTabDatasModel *_appendTabDatasModel;
    UIView *_midView;
    WCFinderRecommendTabsView *_tabContainer;
    WCFinderPlaybackSpeedView *_playbackSpeedView;
    UIButton *_rightBarButton;
    UIView *_notifyRedPoint;
    UIView *_postCameraRedPoint;
    WCFinderCreateCoordinator *_createCoordinator;
    MMScrollView *_timelineScrollView;
    UIImageView *_collectThumbImageView;
    FinderNewUserPrepareResponse *_prepareResponse;
    UIView *_shadeView;
    long long _enterTLTabByFindPage;
    NSMutableArray<WCFinderTabViewControllerProtocol><WCFinderFeedBaseViewControllerProtocol> *_viewControllersArray;
    MMUIButton *_minimizeButton;
    WCFinderTLUnreadModel *_unreadModel;
    NSNumber *_halfScreenMoveProgress;
    WCFinderSearchStatReportShim *_searchStatCollecter;
    FinderRecommendCloseConfig *_recommentCloseConfig;
    WCFinderNavTeenagerView *_teenagerNavView;
    NSMutableArray *_rightBtnItemList;
    FinderTeenagerInfo *_teenagerInfo;
    WCFinderPostMgr *_timelinePostMgr;
    WCFinderFeedAudioHelper *_feedAudioHelper;
    NSMutableDictionary *_feedPostInfoDic;
    WCFinderLeadToMachineCellState *_leadToMachineCellState;
    long long _lastMachineRefreshTimeStamp;
    long long _machineTabConfigStyle;
}

+ (int)convertToMMFinderTabType:(long long)arg1;
+ (int)commentSceneFromTabType:(long long)arg1;
+ (_Bool)enableShowFollowTabFromSvrConfig:(id)arg1;
+ (_Bool)enableShowRecommendTabFromSvrConfig:(id)arg1;
+ (_Bool)enableShowMachineTabFromSvrConfig:(id)arg1;
+ (_Bool)enableShowMachineTab;
+ (id)viewControllerDict;
+ (long long)getLastTabType;
+ (_Bool)isInitNeedRedDotSwitchTabWithCtrlType:(unsigned long long)arg1;
+ (long long)filterWeChatSwitchByTargetTabType:(long long)arg1;
+ (long long)getTargtTabTypeWith:(id)arg1;
+ (id)genPatMusicInfoByInfo:(id)arg1 dataItem:(id)arg2;
+ (id)genPatMusicInfoByInfo:(id)arg1 contentVM:(id)arg2;
+ (unsigned long long)getPostJumpTargetTabType;
- (void).cxx_destruct;
@property(nonatomic) _Bool cancelSpeedViewAnimateBlock; // @synthesize cancelSpeedViewAnimateBlock=_cancelSpeedViewAnimateBlock;
@property(nonatomic) _Bool showPostMenu; // @synthesize showPostMenu=_showPostMenu;
@property(nonatomic) long long machineTabConfigStyle; // @synthesize machineTabConfigStyle=_machineTabConfigStyle;
@property(nonatomic) long long lastMachineRefreshTimeStamp; // @synthesize lastMachineRefreshTimeStamp=_lastMachineRefreshTimeStamp;
@property(retain, nonatomic) WCFinderLeadToMachineCellState *leadToMachineCellState; // @synthesize leadToMachineCellState=_leadToMachineCellState;
@property(retain, nonatomic) NSMutableDictionary *feedPostInfoDic; // @synthesize feedPostInfoDic=_feedPostInfoDic;
@property(retain, nonatomic) WCFinderFeedAudioHelper *feedAudioHelper; // @synthesize feedAudioHelper=_feedAudioHelper;
@property(retain, nonatomic) WCFinderPostMgr *timelinePostMgr; // @synthesize timelinePostMgr=_timelinePostMgr;
@property(retain, nonatomic) FinderTeenagerInfo *teenagerInfo; // @synthesize teenagerInfo=_teenagerInfo;
@property(retain, nonatomic) NSMutableArray *rightBtnItemList; // @synthesize rightBtnItemList=_rightBtnItemList;
@property(retain, nonatomic) WCFinderNavTeenagerView *teenagerNavView; // @synthesize teenagerNavView=_teenagerNavView;
@property(nonatomic) _Bool postFeedInsertMachineTab; // @synthesize postFeedInsertMachineTab=_postFeedInsertMachineTab;
@property(retain, nonatomic) FinderRecommendCloseConfig *recommentCloseConfig; // @synthesize recommentCloseConfig=_recommentCloseConfig;
@property(nonatomic) _Bool isFromMiniFloat; // @synthesize isFromMiniFloat=_isFromMiniFloat;
@property(retain, nonatomic) WCFinderSearchStatReportShim *searchStatCollecter; // @synthesize searchStatCollecter=_searchStatCollecter;
@property(retain, nonatomic) NSNumber *halfScreenMoveProgress; // @synthesize halfScreenMoveProgress=_halfScreenMoveProgress;
@property(nonatomic) _Bool halfScreenIsShowState; // @synthesize halfScreenIsShowState=_halfScreenIsShowState;
@property(retain, nonatomic) WCFinderTLUnreadModel *unreadModel; // @synthesize unreadModel=_unreadModel;
@property(retain, nonatomic) MMUIButton *minimizeButton; // @synthesize minimizeButton=_minimizeButton;
@property(nonatomic) _Bool alreadyCheckLimitModeGuide; // @synthesize alreadyCheckLimitModeGuide=_alreadyCheckLimitModeGuide;
@property(retain, nonatomic) NSMutableArray<WCFinderTabViewControllerProtocol><WCFinderFeedBaseViewControllerProtocol> *viewControllersArray; // @synthesize viewControllersArray=_viewControllersArray;
@property(nonatomic) long long enterTLTabByFindPage; // @synthesize enterTLTabByFindPage=_enterTLTabByFindPage;
@property(nonatomic) _Bool timelineScrollPageFeature; // @synthesize timelineScrollPageFeature=_timelineScrollPageFeature;
@property(retain, nonatomic) UIView *shadeView; // @synthesize shadeView=_shadeView;
@property(nonatomic) _Bool isLandScape; // @synthesize isLandScape=_isLandScape;
@property(retain, nonatomic) FinderNewUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
@property(retain, nonatomic) UIImageView *collectThumbImageView; // @synthesize collectThumbImageView=_collectThumbImageView;
@property(nonatomic) _Bool timelineNoMoreCanShowHotSwitch; // @synthesize timelineNoMoreCanShowHotSwitch=_timelineNoMoreCanShowHotSwitch;
@property(retain, nonatomic) MMScrollView *timelineScrollView; // @synthesize timelineScrollView=_timelineScrollView;
@property(nonatomic) _Bool isViewWillAppeaer; // @synthesize isViewWillAppeaer=_isViewWillAppeaer;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) _Bool cameraLongPressRightButton; // @synthesize cameraLongPressRightButton=_cameraLongPressRightButton;
@property(nonatomic) __weak UIView *postCameraRedPoint; // @synthesize postCameraRedPoint=_postCameraRedPoint;
@property(nonatomic) __weak UIView *notifyRedPoint; // @synthesize notifyRedPoint=_notifyRedPoint;
@property(nonatomic) __weak UIButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(retain, nonatomic) WCFinderPlaybackSpeedView *playbackSpeedView; // @synthesize playbackSpeedView=_playbackSpeedView;
@property(retain, nonatomic) WCFinderRecommendTabsView *tabContainer; // @synthesize tabContainer=_tabContainer;
@property(retain, nonatomic) UIView *midView; // @synthesize midView=_midView;
@property(retain, nonatomic) WCFinderAppendTabDatasModel *appendTabDatasModel; // @synthesize appendTabDatasModel=_appendTabDatasModel;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) WCFinderTimelineTabBubbleController *tabBubbleCtrl; // @synthesize tabBubbleCtrl=_tabBubbleCtrl;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTimelineParams; // @synthesize openTimelineParams=_openTimelineParams;
@property(nonatomic) _Bool isLimitedModeOn; // @synthesize isLimitedModeOn=_isLimitedModeOn;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(nonatomic) _Bool useNearbyLive; // @synthesize useNearbyLive=_useNearbyLive;
@property(nonatomic) __weak id <WCFinderTimelineTabViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) long long lastTabType; // @synthesize lastTabType=_lastTabType;
@property(nonatomic) _Bool hasReportCreateEvent; // @synthesize hasReportCreateEvent=_hasReportCreateEvent;
@property(nonatomic) _Bool isNeedCheckFastLeave; // @synthesize isNeedCheckFastLeave=_isNeedCheckFastLeave;
- (id)extInfoForSnapshotPrinter;
- (void)wechatPersonalizedChangeType:(long long)arg1 value:(_Bool)arg2;
- (void)finderVideoPipWindowRecover:(id)arg1;
- (void)finderVideoPipWindowStart:(id)arg1;
- (void)onOpenFinderLongVideoViewController:(CDUnknownBlockType)arg1;
- (_Bool)pushSwipeGestureShouldBeginWithLocation:(struct CGPoint)arg1;
- (id)pushSwipeGestureDestinationForViewController:(id)arg1;
- (_Bool)enablePushSwipeGestureForViewController:(id)arg1;
- (void)onPopToTimeLineAndDismissPresentedVC:(CDUnknownBlockType)arg1;
- (_Bool)shouldStartEdgeSwipeGestureWithPoint:(struct CGPoint)arg1;
- (id)transitionHelperFetchCurrentPlayTid;
- (_Bool)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;
- (void)registerYReportSdk;
- (void)portraitPressSeedPlayStateChanged:(_Bool)arg1;
- (void)reportTLBubbleRedDotWithEid:(id)arg1 event:(long long)arg2 showInfo:(id)arg3 scene:(int)arg4;
- (void)reportTLBubbleRedDotWithInfo:(id)arg1 eventType:(long long)arg2;
- (void)reportTLBubbleWithoutHeadTabRedDot:(id)arg1 eventType:(long long)arg2 scene:(int)arg3;
- (void)tryReportClickTLBubbleWithoutHeadRedDot:(long long)arg1 fromTab:(long long)arg2;
- (void)onBubbleBottomChange:(double)arg1;
- (void)onBubbleCtrlDidClick:(id)arg1 category:(long long)arg2 redDotInfo:(id)arg3;
- (void)onBubbleCtrl:(id)arg1 showBubbleWithShowInfo:(id)arg2;
- (void)onBubbleCtrl:(id)arg1 dismisssBubbleWithShowInfo:(id)arg2;
- (void)onBubbleCtrlOnHeightChanged:(id)arg1;
- (_Bool)currentTabContainTargetFeedId:(id)arg1;
- (void)onBubbleNetTipsDisappear;
- (void)onBubbleNetTipsShow;
- (id)getEnterStreamTipsReportParams:(id)arg1;
- (void)onBubbleEnterStreamTipsClick:(id)arg1 bubbleCtrl:(id)arg2;
- (void)onBubbleEnterStreamTipsShow:(id)arg1 bubbleCtrl:(id)arg2;
- (double)getCurBubbleEnterStreamTipsY;
- (void)onBubblePopupPanelViewWillShowForFeedId:(id)arg1;
- (void)onBubblePopupPanelViewClickForFeedId:(id)arg1;
- (_Bool)shouldAutoMinimizeWhenPopOrDismiss;
- (id)minimizeConflictScrollViews;
- (_Bool)shouldMinimizePageWhenSlideRight;
- (_Bool)dismissMinimizeWhenLimitMode;
- (_Bool)checkNeedInterruptMinimize;
- (_Bool)checkIsDisableMinimize;
- (id)requestMinimizeInfo:(_Bool)arg1;
- (void)updateNewMinimizeInfo:(id)arg1;
- (id)minimizePageBizKey;
- (void)onMinimizeResotreContentView:(id)arg1 cleanPauseStatus:(_Bool)arg2;
- (void)onOpenMinimizedFromFloatingView:(id)arg1;
- (void)showTeenagerBlockAlertView;
- (void)triggerTabRefreshByTeenagerModeChange;
- (void)networkFreeFlowStatusChange;
- (void)checkAndShowNetworkTips;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)resetTabRefreshState:(long long)arg1;
- (_Bool)isShowingScrollUpGuide:(long long)arg1;
- (double)timelineBubbleViewBottom;
- (_Bool)timelineBubbleIsShowing;
- (void)onSwitchScene:(id)arg1;
- (void)onFinderAPNsPushBeClicked;
- (void)checkAbnormalLiveIfNeeded;
- (_Bool)onFollowGetHotTabNeedTopRefresh;
- (id)onFollowGetHotTabLastBuff;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)getTimelineTabPrefetchLastBuff:(long long)arg1;
- (void)onNearByViewBePushed;
- (void)onStreamNearbyDisappear;
- (void)reportNearByAndChangeTabContextID;
- (void)onCategoryNearbyBePushed;
- (void)onCurrentFocusContentVMChanged:(id)arg1 contentVM:(id)arg2;
- (void)currentTabViewControllerPopOthers:(int)arg1;
- (void)onMachineResetTLRefreshState;
- (void)currentTabViewControllerPushOthers:(int)arg1;
- (id)onTabUnreadCacheFeedsWithoutTab:(long long)arg1;
- (void)onFollowFeedChanged;
- (void)onRecommendFeedChanged;
- (void)onMachineFeedChanged;
- (void)onMachineFeedVMDataPullRefreshError:(int)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onMachineUpdateTabSesstionID;
- (void)tryShowLimitModeGuideView;
- (void)onTimelineTabVC:(id)arg1 updatestreamTipsShowInfo:(id)arg2 delayBubble:(id)arg3 originCtrlInfo:(id)arg4;
- (void)onCurrentForceIndexPathDidChangedAboveNewFeed:(_Bool)arg1 curFeedIndex:(unsigned long long)arg2;
- (void)onMediaCellPreparedContent;
- (void)showMachineTabTopRefreshTipsView:(_Bool)arg1 byFastSwipe:(_Bool)arg2;
- (void)showMachineTabTopRefreshTipsView:(_Bool)arg1;
- (void)onTimelineTabVCTopRefeshTriggleLoading:(id)arg1 enterRefresh:(_Bool)arg2 byTopRefresh:(_Bool)arg3;
- (void)onTimelineTabVC:(id)arg1 byUser:(_Bool)arg2 byTopRefresh:(_Bool)arg3;
- (id)timelineTabVCGetCurrentPlayableContentVMWithTabType:(int)arg1;
- (void)onTimelineTabVCShowSettingPlayRateAnimatedWithRate:(double)arg1;
- (void)onTimelineTabVCWillStartPlayRateViewAnimation:(double)arg1;
- (void)onTimelineTabVCCurrentFeedPlayRateChange:(double)arg1;
- (id)getLeadToMachineCellState;
- (id)getTimelineTabHalfScreenProgress;
- (void)timelineTabHalfScreenProgressChanged:(id)arg1;
- (void)timelineTabHalfScreenIsShow:(_Bool)arg1;
- (_Bool)getTimelineHalfScreenIsShow;
- (void)onMachineFetchSucBySpecialRequestScene:(int)arg1;
- (void)onMachineMsgBubbleAlphaChanged:(double)arg1;
- (void)onMachineTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (void)onFollowResetAppendTabDatasModel;
- (void)onRecommendResetAppendTabDatasModel;
- (void)onMachineResetAppendTabDatasModel;
- (id)onMachineGetAppendTabDatasModel;
- (_Bool)onMachineFIsByFindPage;
- (id)getTabViewControllerWithType:(long long)arg1;
- (_Bool)onFollowTimelineNoMoreCanShowHotSwitch;
- (void)onFollowTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (void)onFeedFollowClickMoreHotContent;
- (id)onFollowGetAppendTabDatasModel;
- (_Bool)onFollowIsByFindPage;
- (void)resetAllTimelineTabBubbleViews;
- (void)onClickLeadToOtherTabWithPlaceHolderInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onClickLeadToMachineTabWithDataItem:(id)arg1;
- (void)onFeedRecommendClickJumpView;
- (void)onFeedRecommendShowJumpViewWithContentArray:(id)arg1;
- (void)onFeedRecommendClickHotCardItemWithContentArray:(id)arg1 scrollToContentVM:(id)arg2;
- (_Bool)onRecommendTimelineNoMoreCanShowHotSwitch;
- (void)onRecommendTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (_Bool)getHotTabNeedTopRefresh;
- (_Bool)onFeedRecommendGetHotTabNeedTopRefresh;
- (id)onRecommendGetHotTabLastBuff;
- (id)onRecommendGetTimelineTabConfig;
- (id)onFollowGetTimelineTabConfig;
- (id)onRecommendGetAppendTabDatasModel;
- (_Bool)onFeedRecommendIsByFindPage;
- (id)getAppendTabDatasModelWithTab:(long long)arg1;
- (void)stopUnSelectTabVideoPlay:(long long)arg1;
- (void)deselectAllChildViewControllers;
- (void)updateTabSelectState:(long long)arg1 toTab:(long long)arg2 manualyTappedType:(unsigned long long)arg3;
- (void)removeNaviNotifyRedDotPoint;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)supportRotate;
- (_Bool)shouldAutorotate;
- (_Bool)shouldShowRedDotForTab:(long long)arg1;
- (void)setViewController:(id)arg1;
- (unsigned long long)getCurFollowVCStyle;
- (id)createFollowVC;
- (void)initSubViewControllers;
- (_Bool)enableJumpToTargetTabType:(unsigned long long)arg1;
- (void)onTLFeedMediaDidEndPlay:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(id)arg3;
- (void)onTLCheckPopupDisplayAtTabType:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(id)arg3 isFocusFeed:(_Bool)arg4 enablePopUpShow:(_Bool)arg5;
- (_Bool)onFollowEnableShowMachineTab;
- (void)selectedTabWillChanged:(long long)arg1 toTab:(long long)arg2 manualyTappedType:(unsigned long long)arg3;
- (_Bool)needAnimationSwitchTab:(unsigned long long)arg1;
- (void)hiddenCtrlBubbleAfterSwitchTab:(unsigned long long)arg1 toCategory:(long long)arg2;
- (void)afterTabChanged:(long long)arg1 manualyTappedType:(unsigned long long)arg2 doubleClicked:(_Bool)arg3;
- (_Bool)timelineScrollViewIsScrolling;
- (void)changeSelectTabWithAnimated:(_Bool)arg1 index:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectTabIndex:(long long)arg1 manualyTappedType:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onTabsViewDoubleClickTabIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)obBubbleClickRefreshBubble;
- (void)handleTabDoubleClickRefreshActionFromIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)handleTabSingleClickRefreshActionFromIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)onFeedReccommendClickMoreHotContent;
- (void)onTabsViewSingleClickTabIndex:(long long)arg1 refreshStyle:(long long)arg2;
- (void)syncPostActionSheetConfigToLocalWith:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)reportTimelineTabRedDot:(long long)arg1 actionType:(unsigned long long)arg2 isTriggerByUser:(_Bool)arg3;
- (void)reportTimelineTabRedDot:(long long)arg1 actionType:(unsigned long long)arg2;
- (void)recheckTabBubbleWithRevokePath:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)resetMachineRefreshBubbleState;
- (void)reportMachineTabTextChangeReport:(id)arg1 afterText:(id)arg2 byFastSwipe:(_Bool)arg3;
- (void)changeMachineTabConfigStyle:(long long)arg1 byFastSwipe:(_Bool)arg2;
- (void)handleMachineTabRefreshAction:(long long)arg1 tabType:(long long)arg2;
- (_Bool)enableTLTabResponseToRefreshAction;
- (void)fastSwipeCountChanged:(long long)arg1 tabType:(long long)arg2;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onFinderNotifyTimelineShouldShowRedDot;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReload;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)onPersonalCenterButtonClicked;
- (_Bool)enableTimelineScrollPageFeature;
- (void)updateTimelineScrollViewPageEnabledState;
- (void)updateVCLandStatus:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)enterTimelineForCheckAction;
- (void)enterTimelineVCRecordEnterInfo;
- (void)enterTimelineVCDataReportWithRedDotId:(id)arg1;
- (void)scrollViewDidEndScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)getTargetTabTypeByScrollPercent:(double)arg1 fromTabType:(long long)arg2;
- (void)updateMinimizeButtonWithScrollPercent:(double)arg1 fromTabType:(long long)arg2;
- (void)updateShadeViewWithScrollPercent:(double)arg1 fromTabType:(long long)arg2;
- (void)loadSubViewControlerLocalDataWithScrollPercent:(double)arg1 fromTabType:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getMachineTabPullStreamFindFriendRedDot;
- (void)updateLastTabTypeWithAnimTabType:(long long)arg1;
- (_Bool)useTransparentNavibar;
- (void)checkCacheTabLogic;
- (void)dealloc;
- (void)willDisappear;
- (id)conflictGestureScrollViews;
- (void)checkTeenagerInfo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)reportCurSearchExposeState;
- (void)_openJumpInfoPageWithCtrlInfo:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)reportRightBarItemRedDot;
- (void)onSearchClicked;
- (void)onPostClick;
- (void)onClickMinimizeButton;
- (void)onBackButtonClicked:(id)arg1;
- (void)_updateRightNotifyRedPointIgnoreAppearState:(id)arg1;
- (void)checkRemoveNotifyRedPoint;
- (_Bool)shouldHiddenMinimizeButton:(long long)arg1;
- (_Bool)enableMinimize;
- (id)fetchPostBtnItem;
- (_Bool)showNavPostBtn;
- (id)navButtonSDKReportParams;
- (void)reportNavButtonExpose;
- (id)fetchSearchBtnItem:(_Bool)arg1;
- (_Bool)showSearchBtn;
- (id)fetchMinimizeButton;
- (id)buttonItemWithNavCustomView:(id)arg1;
- (void)updateLeftMenuItemBtnAnimated:(_Bool)arg1;
- (long long)getCurrentTabFeedNum;
- (id)getNavRightTargetType:(unsigned long long)arg1;
- (unsigned long long)getCurMsgNavUIModeStyle;
- (void)onLimitedClicked;
- (void)debounceTriggerRightNotifyUpdateByState:(_Bool)arg1;
- (void)updateRightBarButtonItemIgnoreAppearState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateRightBarButtonItemHiddenNotify:(_Bool)arg1;
- (void)updateRightBarButtonItem;
- (id)covertStreamRedDotTypeToKeyPath:(int)arg1 andTabType:(int *)arg2;
- (_Bool)setUpNaviTabItemRedDotAs:(long long)arg1;
- (void)recardBubbleCtrlFrames;
- (void)_updateTabContainerView;
- (void)updateNavTitleViewIgnoreAppearState:(_Bool)arg1;
- (void)updateNavTitleView;
- (void)checkTabContainerView;
- (id)tabConfigs;
- (double)_getTabContainerWid;
- (void)initScrollView;
- (void)fetchUserPrepareForUpdateContact;
- (void)updateFinderAppendDatasWith:(id)arg1;
- (id)getViewControllerBy:(long long)arg1;
- (id)currentContentVM;
- (id)currentContentTid;
- (id)getCurrentSelectedVC;
- (void)updateCurLayoutAccordingToLastTabTypeState;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)triggerCheckNetTips;
- (void)preloadMainSearchPage:(unsigned int)arg1;
- (void)preloadSearchPageOnEnterForegroundIfNeeded;
- (void)applicationWillEnterForeground;
- (void)updateLimitedModeState;
- (void)viewDidLoad;
- (void)updateTimelineScrollViewContentSize;
- (void)viewWillLayoutSubviews;
- (void)adjustTitleViewX;
- (void)reportFluencyInfo;
- (void)_prepare;
- (id)initWithTargetTabType:(long long)arg1;
- (id)initWithRedDotCtrlInfo:(id)arg1;
- (id)getNavItemIconColor;
- (void)navTeenagerClickAction;
- (void)navTipsUpdateButtonsState;
- (_Bool)teenagerNavIsOn;
- (void)hiddenRightButtonsFlag:(long long)arg1;
- (void)hiddenProtectButtons;
- (void)packupTeenagerNavView;
- (void)showTeenagerNavView;
- (_Bool)triggerTeenagerProtectCheck;
- (void)removeTeenageNavView;
- (void)resetTeenagerNavState;
- (void)navTipsResetState;
- (void)navTipsPackUpTipsView;
- (void)navTipsUpdateTipsModeStyle:(unsigned long long)arg1;
- (void)navTipsRemoveTipsView;
- (void)navTipsTriggerCheckShow;
- (void)onTLFeedClickMiaoJianMusic:(id)arg1 musicId:(id)arg2 tingListenId:(id)arg3;
- (_Bool)postMgrEnableOpenAlbum:(id)arg1;
- (void)extractAudioTrackFromFeedByPostMgr:(id)arg1;
- (void)_tiggerPostActionByPostMgr:(id)arg1 fromAudioExtract:(_Bool)arg2;
- (void)triggerPostActionByCheckAudioTrack:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (id)postMgrAttachTextContent:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (id)postMgrGetMusicInfo;
- (id)onPostFollowTopicFeedId:(id)arg1;
- (id)onPostMusicIds:(id)arg1;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(id)arg2;
- (id)onPostFollowMuiscFeedId:(id)arg1;
- (id)feedPostMusicInfoBy:(id)arg1;
- (void)updateFeedPostInfoBy:(id)arg1 musicInfo:(id)arg2;
- (_Bool)feedPostIsOnLoadingStateBy:(id)arg1;
- (void)updateFeedPostInfoBy:(id)arg1 onLoadingState:(_Bool)arg2;
- (void)updatePostMgrConfig;
- (void)onFeedShowPostEntranceByContentVM:(id)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)openPersonalCenterWithPostAction:(_Bool)arg1 fromScene:(unsigned long long)arg2;
- (void)updateTargetRefreshLogic:(long long)arg1 enableRefresh:(_Bool)arg2;
- (void)_updateTabByPostAction;
- (void)delayPostWithPostSession:(id)arg1;
- (_Bool)isShouldPopToTimelineVC:(Class)arg1;
- (_Bool)isPostFromMusicScene:(unsigned long long)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)onMemberShipFeedPostSessionStartUpload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

