//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAGradientLayer, DynamicBackgroundSystemConfig, MFTitleView, MMUIViewController, MainFrameLeftBarView, NSMutableArray, NSString, NewMainFrameRightTopMenuBtn, UIBarButtonItem, UIButton, UICollectionView, UIImageView, UILabel, UISearchBar, WAAppContainerSearchBar, WADynamicBackgroundGLViewController, WAMainFrameAudioCenterBaseView, WAMainFrameDesktopContainerView, WAMainFrameTaskBarCloseArea, WAMainFrameTaskBarDotLoadingView, WAMainFrameTaskBarLogic, WAMainFrameTaskBarSearchCustomView, WAMainFrameTaskBarSectionWeAppContainerView, WATaskBarCollectionViewLayout;
@protocol WAMainFrameTaskBarViewDelegate;

@interface WAMainFrameTaskBarView : UIView
{
    _Bool _containerVCDisappearing;
    _Bool _visible;
    _Bool _draggingShowState;
    _Bool _showState;
    _Bool _isSpread;
    _Bool _isStarNodeSpread;
    _Bool _containerTableViewIsSettingInset;
    _Bool _isPresentingSecondaryPage;
    _Bool _isPresentingSearch;
    _Bool _forbidInnerItemTransform;
    _Bool _tapTicState;
    _Bool _reseted;
    _Bool _canShowDynamicBackground;
    _Bool _isDraggingDown;
    _Bool _notifiedStartPull;
    _Bool _isAnimatingShowing;
    _Bool _isAnimatingHiding;
    _Bool _currentInDarkStyle;
    _Bool _isInDarkMode;
    _Bool _isLandscape;
    _Bool _cellOnceCreated;
    id <WAMainFrameTaskBarViewDelegate> _taskBarViewDelegate;
    MMUIViewController *_containerVC;
    UICollectionView *_mixedCollectionView;
    UIView *_fakeNavigationBottomBackground;
    UIView *_fakeNavigationBackground;
    UISearchBar *_realSearchBar;
    WAMainFrameDesktopContainerView *_desktopContainerView;
    UIView *_backgroundContainerView;
    UIView *_backgroundView;
    UIView *_bgMaskView;
    WADynamicBackgroundGLViewController *_dynamicBGVC;
    CAGradientLayer *_backgroundLayer;
    UIView *_contentView;
    UIView *_fakeTopTitleView;
    UILabel *_fakeTopTitleLabel;
    UILabel *_accessibilityTopTitle;
    UIButton *_accessibilityCloseAreaButton;
    UIView *_fakeTopTitleSeperateLine;
    UIView *_transformViewContainerView;
    UIView *_mixedCollectionViewContainerView;
    UIView *_transformView;
    CAGradientLayer *_gradientLayer;
    WAMainFrameTaskBarCloseArea *_closeArea;
    UIView *_closeAreaBackgroundView;
    UIImageView *_closeImageView;
    UILabel *_closeLabel;
    UIButton *_closeButton;
    UIBarButtonItem *_savedRightButtonItem;
    WAMainFrameTaskBarDotLoadingView *_arrowImageView;
    WATaskBarCollectionViewLayout *_mixedLayout;
    WAMainFrameTaskBarLogic *_taskBarLogic;
    NSMutableArray *_mixedSectionData;
    NSMutableArray *_weAppSectionData;
    DynamicBackgroundSystemConfig *_manualBackgroundSystemConfig;
    CADisplayLink *_displayLink;
    double _manualColorRatio;
    UIView *_fakeNavigationBarView;
    UIView *_fakeNavigationBarBackgroundView;
    UIView *_fakeNavigationBarInnerView;
    MFTitleView *_fakeNavigationBarTitleView;
    WAAppContainerSearchBar *_searchBar;
    WAMainFrameTaskBarSearchCustomView *_searchButtonContainer;
    WAMainFrameTaskBarSectionWeAppContainerView *_weAppContainerView;
    MainFrameLeftBarView *_fakeNavigationBarLeftBarButton;
    NewMainFrameRightTopMenuBtn *_fakeNavigationBarRightButton;
    UIButton *_fakeMenuBtnArea;
    double _lastLayoutWidth;
    double _emptyViewAreaHeight;
    WAMainFrameAudioCenterBaseView *_audioCenter;
    struct CGPoint _tableViewContentOffsetOnTapSearch;
    struct CGPoint _tableViewLastContentOffset;
}

+ (id)mixColor1:(id)arg1 color2:(id)arg2 ratio:(double)arg3;
+ (_Bool)checkLimitedBlockForType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMainFrameAudioCenterBaseView *audioCenter; // @synthesize audioCenter=_audioCenter;
@property(nonatomic) double emptyViewAreaHeight; // @synthesize emptyViewAreaHeight=_emptyViewAreaHeight;
@property(nonatomic) double lastLayoutWidth; // @synthesize lastLayoutWidth=_lastLayoutWidth;
@property(nonatomic) _Bool cellOnceCreated; // @synthesize cellOnceCreated=_cellOnceCreated;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) _Bool currentInDarkStyle; // @synthesize currentInDarkStyle=_currentInDarkStyle;
@property(retain, nonatomic) UIButton *fakeMenuBtnArea; // @synthesize fakeMenuBtnArea=_fakeMenuBtnArea;
@property(retain, nonatomic) NewMainFrameRightTopMenuBtn *fakeNavigationBarRightButton; // @synthesize fakeNavigationBarRightButton=_fakeNavigationBarRightButton;
@property(retain, nonatomic) MainFrameLeftBarView *fakeNavigationBarLeftBarButton; // @synthesize fakeNavigationBarLeftBarButton=_fakeNavigationBarLeftBarButton;
@property(retain, nonatomic) WAMainFrameTaskBarSectionWeAppContainerView *weAppContainerView; // @synthesize weAppContainerView=_weAppContainerView;
@property(retain, nonatomic) WAMainFrameTaskBarSearchCustomView *searchButtonContainer; // @synthesize searchButtonContainer=_searchButtonContainer;
@property(retain, nonatomic) WAAppContainerSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MFTitleView *fakeNavigationBarTitleView; // @synthesize fakeNavigationBarTitleView=_fakeNavigationBarTitleView;
@property(retain, nonatomic) UIView *fakeNavigationBarInnerView; // @synthesize fakeNavigationBarInnerView=_fakeNavigationBarInnerView;
@property(retain, nonatomic) UIView *fakeNavigationBarBackgroundView; // @synthesize fakeNavigationBarBackgroundView=_fakeNavigationBarBackgroundView;
@property(retain, nonatomic) UIView *fakeNavigationBarView; // @synthesize fakeNavigationBarView=_fakeNavigationBarView;
@property(nonatomic) _Bool isAnimatingHiding; // @synthesize isAnimatingHiding=_isAnimatingHiding;
@property(nonatomic) _Bool isAnimatingShowing; // @synthesize isAnimatingShowing=_isAnimatingShowing;
@property(nonatomic) _Bool notifiedStartPull; // @synthesize notifiedStartPull=_notifiedStartPull;
@property(nonatomic) _Bool isDraggingDown; // @synthesize isDraggingDown=_isDraggingDown;
@property(nonatomic) struct CGPoint tableViewLastContentOffset; // @synthesize tableViewLastContentOffset=_tableViewLastContentOffset;
@property(nonatomic) double manualColorRatio; // @synthesize manualColorRatio=_manualColorRatio;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) DynamicBackgroundSystemConfig *manualBackgroundSystemConfig; // @synthesize manualBackgroundSystemConfig=_manualBackgroundSystemConfig;
@property(nonatomic) _Bool canShowDynamicBackground; // @synthesize canShowDynamicBackground=_canShowDynamicBackground;
@property(retain, nonatomic) NSMutableArray *weAppSectionData; // @synthesize weAppSectionData=_weAppSectionData;
@property(retain, nonatomic) NSMutableArray *mixedSectionData; // @synthesize mixedSectionData=_mixedSectionData;
@property(nonatomic) _Bool reseted; // @synthesize reseted=_reseted;
@property(nonatomic) _Bool tapTicState; // @synthesize tapTicState=_tapTicState;
@property(retain, nonatomic) WAMainFrameTaskBarLogic *taskBarLogic; // @synthesize taskBarLogic=_taskBarLogic;
@property(retain, nonatomic) WATaskBarCollectionViewLayout *mixedLayout; // @synthesize mixedLayout=_mixedLayout;
@property(retain, nonatomic) WAMainFrameTaskBarDotLoadingView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIBarButtonItem *savedRightButtonItem; // @synthesize savedRightButtonItem=_savedRightButtonItem;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *closeLabel; // @synthesize closeLabel=_closeLabel;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UIView *closeAreaBackgroundView; // @synthesize closeAreaBackgroundView=_closeAreaBackgroundView;
@property(retain, nonatomic) WAMainFrameTaskBarCloseArea *closeArea; // @synthesize closeArea=_closeArea;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *transformView; // @synthesize transformView=_transformView;
@property(retain, nonatomic) UIView *mixedCollectionViewContainerView; // @synthesize mixedCollectionViewContainerView=_mixedCollectionViewContainerView;
@property(retain, nonatomic) UIView *transformViewContainerView; // @synthesize transformViewContainerView=_transformViewContainerView;
@property(retain, nonatomic) UIView *fakeTopTitleSeperateLine; // @synthesize fakeTopTitleSeperateLine=_fakeTopTitleSeperateLine;
@property(retain, nonatomic) UIButton *accessibilityCloseAreaButton; // @synthesize accessibilityCloseAreaButton=_accessibilityCloseAreaButton;
@property(retain, nonatomic) UILabel *accessibilityTopTitle; // @synthesize accessibilityTopTitle=_accessibilityTopTitle;
@property(retain, nonatomic) UILabel *fakeTopTitleLabel; // @synthesize fakeTopTitleLabel=_fakeTopTitleLabel;
@property(retain, nonatomic) UIView *fakeTopTitleView; // @synthesize fakeTopTitleView=_fakeTopTitleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) WADynamicBackgroundGLViewController *dynamicBGVC; // @synthesize dynamicBGVC=_dynamicBGVC;
@property(retain, nonatomic) UIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(retain, nonatomic) WAMainFrameDesktopContainerView *desktopContainerView; // @synthesize desktopContainerView=_desktopContainerView;
@property(nonatomic) struct CGPoint tableViewContentOffsetOnTapSearch; // @synthesize tableViewContentOffsetOnTapSearch=_tableViewContentOffsetOnTapSearch;
@property(nonatomic) _Bool forbidInnerItemTransform; // @synthesize forbidInnerItemTransform=_forbidInnerItemTransform;
@property(nonatomic) _Bool isPresentingSearch; // @synthesize isPresentingSearch=_isPresentingSearch;
@property(nonatomic) _Bool isPresentingSecondaryPage; // @synthesize isPresentingSecondaryPage=_isPresentingSecondaryPage;
@property(nonatomic) _Bool containerTableViewIsSettingInset; // @synthesize containerTableViewIsSettingInset=_containerTableViewIsSettingInset;
@property(nonatomic) _Bool isStarNodeSpread; // @synthesize isStarNodeSpread=_isStarNodeSpread;
@property(nonatomic) _Bool isSpread; // @synthesize isSpread=_isSpread;
@property(nonatomic) _Bool showState; // @synthesize showState=_showState;
@property(nonatomic) _Bool draggingShowState; // @synthesize draggingShowState=_draggingShowState;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak UISearchBar *realSearchBar; // @synthesize realSearchBar=_realSearchBar;
@property(retain, nonatomic) UIView *fakeNavigationBackground; // @synthesize fakeNavigationBackground=_fakeNavigationBackground;
@property(retain, nonatomic) UIView *fakeNavigationBottomBackground; // @synthesize fakeNavigationBottomBackground=_fakeNavigationBottomBackground;
@property(nonatomic) _Bool containerVCDisappearing; // @synthesize containerVCDisappearing=_containerVCDisappearing;
@property(retain, nonatomic) UICollectionView *mixedCollectionView; // @synthesize mixedCollectionView=_mixedCollectionView;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <WAMainFrameTaskBarViewDelegate> taskBarViewDelegate; // @synthesize taskBarViewDelegate=_taskBarViewDelegate;
- (id)getWeAppSectionData;
- (id)taskBarOpenSession;
- (void)onSetWAMainFrameTaskBarViewShowState:(_Bool)arg1;
- (void)onHideWAMainFrameTaskBarView;
- (id)getAudioCenterView;
- (void)initAudioCell;
- (void)layoutAudioCell;
- (void)showViewsInNavigationBar;
- (void)hideViewsInNavigationBar;
- (void)reportWeAppSectionMoreAppear:(_Bool)arg1 myWeAppOnly:(_Bool)arg2;
- (void)reportTaskBarFeedAppear:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)reportWeTaskBarFeedDelete:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)reportWeTaskBarWeAppFeedClick:(id)arg1 position:(int)arg2 isMyWeApp:(_Bool)arg3;
- (void)reportWeTaskBarFeedClick:(id)arg1 weappData:(id)arg2 position:(long long)arg3;
- (void)onSectionViewWillDisplay:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)onSectionViewDelete:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)onWeAppSectionViewClick:(id)arg1 position:(int)arg2 isMyWeApp:(_Bool)arg3;
- (void)onSectionViewClick:(id)arg1 weappData:(id)arg2 position:(int)arg3;
- (void)onTingTaskBarShowingStatusChanged:(_Bool)arg1 success:(_Bool)arg2;
- (void)notifySilentModeUpdated;
- (void)notifyLimitedModeUpdated;
- (void)onMiniTaskEntryShowStateChanged;
- (void)onNavigationBarHiddenChanged;
- (void)mm_onColorAppearanceDidChange;
- (void)onLimitedModeChanged;
- (void)willEndSearch;
- (void)willBeginSearch;
- (void)desktopWillEndSearch;
- (void)didEnterWeappSearchPage;
- (void)onSearchPageClickCancel;
- (_Bool)needDisableCommUseAppForSearch;
- (void)onTapOnSearchButton;
- (_Bool)isSearchButtonClickable;
- (void)onClickSearch;
- (void)notifyWeAppChanged;
- (void)desktopWillExit;
- (void)desktopWillEnter;
- (id)reportSession;
- (unsigned long long)currentPageType;
- (_Bool)isDynamicBackgroundDarkStyle;
- (_Bool)isPointInItemArea:(struct CGPoint)arg1;
- (void)updateFakeNavigationBarRightBtnRedDot:(_Bool)arg1;
- (void)updateFakeNavigationBarTitleViewNearMode;
- (void)updateFakeNavigationBarTitleView:(unsigned int)arg1 title:(id)arg2;
- (void)updateBackgroundColorWithColor1:(union _GLKVector4)arg1 color2:(union _GLKVector4)arg2;
- (void)endLoadBGWebView;
- (void)reloadBGWebView;
- (_Bool)getStarNodeShowState;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isTaskBarSectionVisible;
- (_Bool)onDragViewTo:(struct CGPoint)arg1;
- (void)onDragStateChange:(_Bool)arg1;
- (void)onNewMoreWeAppIcon:(id)arg1;
- (id)getMyWeAppSectionMoreIconPos;
- (void)notifyMyWeAppChanged:(_Bool)arg1 isFromMyWeApp:(_Bool)arg2 weappItem:(id)arg3 position:(int)arg4;
- (void)onClickMore:(_Bool)arg1 shouldScrollToBottom:(_Bool)arg2;
- (void)animateChangeSectionHeight;
- (void)onMyWeAppItemDeleted:(id)arg1 position:(int)arg2;
- (void)onWeAppItemDeleted:(id)arg1 position:(int)arg2;
- (void)onWeAppItemSelected:(id)arg1 position:(int)arg2 isMyWeApp:(_Bool)arg3;
- (id)myWeAppViewModel;
- (id)weAppViewModel;
- (id)arrMyWeAppItem;
- (id)arrWeAppItem;
- (id)myWeAppView;
- (id)weAppView;
- (void)onListViewHeightChange:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)dragUpToClose;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onTranslationYChanged:(double)arg1;
- (double)getSelfContentViewY;
- (void)reverseVoiceTic;
- (void)voiceTic;
- (void)taptic;
- (_Bool)canBecomeFirstResponder;
- (void)onTapCloseArea:(id)arg1;
- (void)onTapFakeMenuBtn:(id)arg1;
- (void)layoutArrow;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)getIndexPathForFirstTaskItem;
- (id)getIndexPathForLastTaskItem;
- (void)layoutFakeNavigationBarRightButton;
- (void)layoutFakeNavigationBarTitleCenterXIfNeeded;
- (void)layoutAccessibilityTopTitle;
- (void)layoutSearchButton;
- (void)layoutContentView;
- (void)layoutBackgroundView;
- (_Bool)needFixVerticalScrollIssue;
- (_Bool)shouldHideSearchButton;
- (void)checkHiddenState;
- (void)reloadCommonUseData:(unsigned long long)arg1;
- (void)commonUseDataEndLoading;
- (void)stopCommuseLoadingOvertime;
- (void)onTaskBarDataStartUpdateCommonUseDataFromSvr;
- (void)reloadData;
- (void)updateFakeNavigationBarContentColor:(id)arg1;
- (void)initFakeNavigationBarView;
- (void)initCloseAreaBackgroundView;
- (void)initCloseArea;
- (void)addGradientMaskView;
- (void)initMixedCollectionView;
- (id)createLayout;
- (void)initArrow;
- (void)initFakeTopTitleView;
- (void)initDesktopView;
- (void)initContentView;
- (union _GLKVector4)mixColorWithA:(union _GLKVector4)arg1 b:(union _GLKVector4)arg2 portion:(double)arg3;
- (union _GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (void)backgroundDisplayLink:(id)arg1;
- (void)buildBackgroundLayer;
- (void)buildGLLayer;
- (void)buildManualBackgroundDisplayLink;
- (void)buildManualBackgroundSystem;
- (void)buildManualBackground;
- (void)initBackgroundView;
- (void)initView;
- (void)checkViewNodes;
- (void)relayoutSubviews;
- (void)layoutSubviews;
- (void)didEnterBackground;
- (void)onEnterForeground;
- (void)onMemoryWarning;
- (void)didRotate:(id)arg1;
- (void)moveToTopMostItem;
- (void)reset;
- (void)unreset;
- (void)endAnimateToHide;
- (void)startAnimateToHide;
- (void)endAnimateToShow;
- (void)startAnimateToShow;
- (void)animateToHide;
- (void)animateToShow;
- (void)updateDarkStyle;
- (_Bool)isXDevice;
- (void)updateGifAlphaProgress:(double)arg1;
- (void)updateFloatingProgress:(double)arg1 borderOffset:(double)arg2;
- (double)getBackgourndViewAlpha;
- (id)getBackgroundViewColor;
- (void)updateWebBgViewAlphaProgress:(double)arg1;
- (void)updateCollectionViewScaleProgress:(double)arg1;
- (void)updateCollectionViewAlphaProgress:(double)arg1;
- (void)updateFilteredVisibleOffset:(double)arg1 startOffset:(double)arg2 borderOffset:(double)arg3;
- (void)updateVisibleOffset:(double)arg1 startOffset:(double)arg2 borderOffset:(double)arg3;
- (void)updateFilteredVisiableOffset:(double)arg1 borderOffset:(double)arg2;
- (void)updateVisiableOffset:(double)arg1 borderOffset:(double)arg2;
- (void)updateFilteredStickingOffset:(double)arg1;
- (void)updateStickingOffset:(double)arg1;
- (double)calFakeNavigationBarHeight;
- (double)calCloseAreaHeight;
- (double)getFullScreenHeight;
- (double)calTaskBarHeight;
- (void)becomeUnVisible;
- (void)becomeVisible;
- (void)relayout;
- (void)updateItemPerLine;
- (void)animateRemoveSection:(id)arg1;
- (id)currentSectionState;
- (void)updateSectionData;
- (_Bool)enableOthersWording;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)detectDarkMode;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithMainFrameTaskBarLogic:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

