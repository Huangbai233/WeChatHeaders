//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMFinderLiveHomePageBottomPlayerView, MMFinderLiveHomePageBottomPlayerViewModel, MMFinderLiveIconTransitionCarouselView, MMUIButton, NSString, UIImage, UILabel, UIView, WCFinderFeedFlowView, WCFinderLiveHomePageInitialParams, WCFinderLiveHomePageScrollActionSheet, WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell, WCFinderLiveHomePageViewModel, WCFinderRedDotCtrlInfo, _TtC6WeChat22MMFinderLiveFPSMonitor;
@protocol WCFinderLiveHomePageViewControllerDelegate;

@interface WCFinderLiveHomePageViewController
{
    _Bool _directlyOpenJumpInfoPage;
    _Bool _selfCached;
    _Bool _canUseDataCache;
    _Bool _isInInteractivePushTransition;
    _Bool _originalNeedShowWindow;
    unsigned int _enterSquareScene;
    WCFinderFeedFlowView *_feedFlowView;
    id <WCFinderLiveHomePageViewControllerDelegate> _delegate;
    WCFinderRedDotCtrlInfo *_finderLiveEntryRedDotCtrlInfo;
    unsigned long long _redDotObjectID;
    unsigned long long _clkInitialTimeStamp;
    CDUnknownBlockType _viewDidAppearBlock;
    MMFinderLiveIconTransitionCarouselView *_navIconCarouselView;
    MMUIButton *_navRightButton;
    UILabel *_navRightTitleLabel;
    WCFinderLiveHomePageViewModel *_vm;
    WCFinderLiveHomePageInitialParams *_params;
    UIView *_redDotAnimCellView;
    UIView *_redDotAnimCellParentView;
    UIView *_redDotAnimMaskView;
    WCFinderLiveHomePageScrollActionSheet *_currentActionSheet;
    MMFinderLiveHomePageBottomPlayerView *_bottomPlayerView;
    MMFinderLiveHomePageBottomPlayerViewModel *_bottomPlayerViewModel;
    UIImage *_cellSnapshot;
    WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *_tabLiveStreamCell;
    _TtC6WeChat22MMFinderLiveFPSMonitor *_fpsMonitor;
}

+ (double)calculateRecommendAreaTwoColumnCellWidthInVC:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat22MMFinderLiveFPSMonitor *fpsMonitor; // @synthesize fpsMonitor=_fpsMonitor;
@property(nonatomic) __weak WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell *tabLiveStreamCell; // @synthesize tabLiveStreamCell=_tabLiveStreamCell;
@property(retain, nonatomic) UIImage *cellSnapshot; // @synthesize cellSnapshot=_cellSnapshot;
@property(retain, nonatomic) MMFinderLiveHomePageBottomPlayerViewModel *bottomPlayerViewModel; // @synthesize bottomPlayerViewModel=_bottomPlayerViewModel;
@property(nonatomic) _Bool originalNeedShowWindow; // @synthesize originalNeedShowWindow=_originalNeedShowWindow;
@property(nonatomic) _Bool isInInteractivePushTransition; // @synthesize isInInteractivePushTransition=_isInInteractivePushTransition;
@property(retain, nonatomic) MMFinderLiveHomePageBottomPlayerView *bottomPlayerView; // @synthesize bottomPlayerView=_bottomPlayerView;
@property(retain, nonatomic) WCFinderLiveHomePageScrollActionSheet *currentActionSheet; // @synthesize currentActionSheet=_currentActionSheet;
@property(retain, nonatomic) UIView *redDotAnimMaskView; // @synthesize redDotAnimMaskView=_redDotAnimMaskView;
@property(retain, nonatomic) UIView *redDotAnimCellParentView; // @synthesize redDotAnimCellParentView=_redDotAnimCellParentView;
@property(retain, nonatomic) UIView *redDotAnimCellView; // @synthesize redDotAnimCellView=_redDotAnimCellView;
@property(retain, nonatomic) WCFinderLiveHomePageInitialParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderLiveHomePageViewModel *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UILabel *navRightTitleLabel; // @synthesize navRightTitleLabel=_navRightTitleLabel;
@property(retain, nonatomic) MMUIButton *navRightButton; // @synthesize navRightButton=_navRightButton;
@property(retain, nonatomic) MMFinderLiveIconTransitionCarouselView *navIconCarouselView; // @synthesize navIconCarouselView=_navIconCarouselView;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearBlock; // @synthesize viewDidAppearBlock=_viewDidAppearBlock;
@property(nonatomic) unsigned int enterSquareScene; // @synthesize enterSquareScene=_enterSquareScene;
@property(nonatomic) unsigned long long clkInitialTimeStamp; // @synthesize clkInitialTimeStamp=_clkInitialTimeStamp;
@property(nonatomic) _Bool canUseDataCache; // @synthesize canUseDataCache=_canUseDataCache;
@property(nonatomic) _Bool selfCached; // @synthesize selfCached=_selfCached;
@property(nonatomic) unsigned long long redDotObjectID; // @synthesize redDotObjectID=_redDotObjectID;
@property(nonatomic) _Bool directlyOpenJumpInfoPage; // @synthesize directlyOpenJumpInfoPage=_directlyOpenJumpInfoPage;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderLiveEntryRedDotCtrlInfo; // @synthesize finderLiveEntryRedDotCtrlInfo=_finderLiveEntryRedDotCtrlInfo;
@property(nonatomic) __weak id <WCFinderLiveHomePageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
- (void)updateLiveHomePageInitialParamsScene:(unsigned long long)arg1;
- (void)onTabLiveStreamSectionFeedViewDidEndScrolling:(id)arg1;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 forwardAction:(id)arg2;
- (void)onTabLiveStreamSectionFeedViewNeedCheckAutoPlay:(id)arg1;
- (void)onTabLiveStreamSectionFeedViewStartInnerPlay:(id)arg1 containerModel:(id)arg2;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 aggregationCellClickJumpThemeTemplate:(id)arg2 entryBuffer:(id)arg3 jumpBypass:(id)arg4;
- (_Bool)shouldTabLiveStreamSectionFeedViewHandleSelectAction:(id)arg1;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 aggregationCellClickJumpLive:(id)arg2;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 selectElementVM:(id)arg2 playableCell:(id)arg3 indexPath:(id)arg4;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onTabLiveStreamSectionFeedView:(id)arg1 clickRecommendUrl:(id)arg2;
- (void)registerYReportSdk;
@property(readonly, nonatomic) unsigned long long homePageScene;
- (id)getTargetTransitionContext:(_Bool)arg1 fromVC:(id)arg2;
- (void)onFromVcTransitionBegin:(id)arg1 liveTaskId:(id)arg2 isPop:(_Bool)arg3;
- (void)onFromVcTransitionEnd:(id)arg1 liveTaskId:(id)arg2 isPop:(_Bool)arg3 isComplete:(_Bool)arg4;
- (void)onHomePageSectionHeaderView:(id)arg1 clickMoreTabInfo:(id)arg2;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onShowConcertTicketAction:(id)arg1;
- (void)onHomePageNoticeAction:(_Bool)arg1 feedVM:(id)arg2;
- (void)onHomePageAggregationCellClickJumpThemeTemplate:(id)arg1;
- (void)onHomePageAggregationCell:(id)arg1 clickJumpLive:(id)arg2;
- (void)onBaseLiveCellForwardAction:(id)arg1;
- (void)onRelatedLiveCellForwardAction:(id)arg1;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)onSpecialColumnSectionView:(id)arg1 forwardAction:(id)arg2;
- (void)onSpecialColumnSectionViewFetchMoreLiveList:(id)arg1;
- (void)onSpecialColumnSectionViewStartInnerPlay:(id)arg1 containerModel:(id)arg2;
- (_Bool)shouldSpecialColumnSectionViewHandleSelectAction:(id)arg1;
- (void)onSpecialColumnSectionView:(id)arg1 actionWithJumpModel:(id)arg2;
- (void)onSpecialColumnSectionView:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onSpecialColumnSectionView:(id)arg1 clickRecommendUrl:(id)arg2;
- (void)onSpecialColumnSectionView:(id)arg1 selectElementVM:(id)arg2 playableCell:(id)arg3;
- (void)onAdSectionView:(id)arg1 selectElementVM:(id)arg2;
- (void)onHistorySectionView:(id)arg1 deleteTid:(id)arg2;
- (void)onHistorySectionViewFetchMoreLiveList:(id)arg1;
- (void)onHistorySectionView:(id)arg1 selectElementVM:(id)arg2 cell:(id)arg3;
- (void)onFollowSectionViewFetchMoreLiveList:(id)arg1;
- (void)onFollowSectionView:(id)arg1 selectElementVM:(id)arg2 thumbImage:(id)arg3;
- (void)onBannerSectionView:(id)arg1 forwardAction:(id)arg2;
- (void)onBannerSectionViewStartInnerPlay:(id)arg1 containerModel:(id)arg2;
- (_Bool)shouldBannerSectionViewHandleSelectAction:(id)arg1;
- (void)onBannerSectionView:(id)arg1 clickContact:(id)arg2 feedVM:(id)arg3;
- (void)onBannerSectionView:(id)arg1 selectElementVM:(id)arg2 cell:(id)arg3;
- (void)onBannerSectionView:(id)arg1 clickRecommendUrl:(id)arg2;
- (void)openModel:(id)arg1 inSectionView:(id)arg2 goToReplay:(_Bool)arg3;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowViewReloadData:(id)arg1;
- (void)finderFeedFlowViewDidEndDragging:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)finderFeedFlowView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (double)parentMaxOffset;
- (double)tabLiveStreamHeight;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)bindNewExposeReport:(id)arg1 feedVM:(id)arg2 indexPath:(id)arg3;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 feedVM:(id)arg3 withContainerId:(unsigned long long)arg4 andUsrname:(id)arg5 indexPath:(id)arg6;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onHomePageLiveStreamBatchLoadBottom;
- (void)onHomePageUpdateFlowLoadState;
- (void)onHomePageFakeLoadingFinish;
- (void)onHomePageResponseFlagUpdate;
- (void)onHomePageDeleteContainerTid:(id)arg1 containerId:(unsigned long long)arg2;
- (void)updateHomePageWithNavTabs:(id)arg1;
- (void)onHomePageNavTabsUpdate;
- (void)onHomePageBatchReplaceDataFromRange:(struct _NSRange)arg1 insertRange:(struct _NSRange)arg2 removeRange:(struct _NSRange)arg3 section:(unsigned long long)arg4;
- (void)onHomePageFetchAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 section:(unsigned long long)arg3;
- (void)onHomePageHasNoMoreData:(unsigned long long)arg1;
- (void)onHomePageFetchFailWithErrorCode:(int)arg1 section:(unsigned long long)arg2;
- (void)onHomePageRefreshSectionAllData:(unsigned long long)arg1;
- (void)onHomePageRefreshAllData;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (id)createReplayEnterInfoDicWithDataItem:(id)arg1 replayContainerType:(long long)arg2;
- (void)pushFinderShareDetailViewControllerWithFeedVM:(id)arg1 sectionVM:(id)arg2 cardIndex:(unsigned long long)arg3 replayContainerType:(long long)arg4;
- (void)requestCheckScrollAutoPlay;
- (void)handleFeedFlowViewTabStreamStyleChange;
- (_Bool)isTabStreamStyle;
- (void)reportRightNavButtonExpose;
- (void)setFromReportScene:(id)arg1;
- (void)setFromLiveID:(unsigned long long)arg1;
- (_Bool)isShowBottomPlayerState;
- (void)performNavRightCarousel:(_Bool)arg1;
- (void)scrollToTop;
- (void)refreshRecentWatchIfNeeded;
- (void)onForwardAction:(id)arg1 containerId:(unsigned long long)arg2;
- (void)tryStopRedDotCellAnimation;
- (void)redDotAnimateFirstCell:(id)arg1;
- (_Bool)checkRedDotTargetingAction:(unsigned long long *)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
@property(readonly, nonatomic) _Bool isViewAppearing;
- (_Bool)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)reportFpsResult;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onMoreLiveClicked:(id)arg1;
- (void)onPersonalCenterButtonClicked;
- (void)onTabsSqaureClicked;
- (void)onSearchClicked;
- (void)onBackButtonClicked:(id)arg1;
- (void)checkOpenJumpPage;
- (void)reloadData;
- (void)setupViews;
- (void)setupBackground;
- (void)updateNav;
- (void)updateBottomSkeletonStatus:(_Bool)arg1;
- (void)updateEnterSkeletonStatus:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshTopForRedDotPreload;
- (void)refreshTop;
- (void)dealloc;
- (void)initFpsMonitor;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

