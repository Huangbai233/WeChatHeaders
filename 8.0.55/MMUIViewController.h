//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class GCOpenReportParam, MMLoadingView, MMNavBarInteractiveConfig, MMSnackBar, MMTitleView, MMUINavigationBar, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIBarButtonItem, UIColor, UIFont, UILabel, UINavigationController, UIPanGestureRecognizer, UIScrollView, UIView, WCEventTrackingSystemConfig, WCProgressViewHelper, _TtC7WCUIKit16MMHostingManager;

@interface MMUIViewController : UIViewController
{
    _Bool m_isPopByClickingURL;
    MMLoadingView *m_loadingViewX;
    unsigned int m_uiVcType;
    UILabel *m_newsTitleRecordLabel;
    NSMutableArray *m_fullScreenViews;
    _Bool m_bAnimated;
    _Bool m_bIsBeingPoped;
    _Bool m_bInteractivePopEnabled;
    _Bool m_bDisableAdjustInsetAndOffset;
    double lastScreenWidth;
    UINavigationController *m_navigationController;
    MMTitleView *m_baseTitleView;
    NSMutableDictionary *m_dicDeepLink;
    NSMutableDictionary *m_dicContentInsetAutolayout;
    NSMutableArray *m_arrEndUserOpInfo;
    UIBarButtonItem *m_leftBarBtnItem;
    UIBarButtonItem *m_rightBarBtnItem;
    UIColor *m_titleColor;
    UIColor *m_subTitleColor;
    UIFont *m_titleFont;
    MMUINavigationBar *fakeNaviView;
    UIView *m_navHeaderView;
    UIView *m_navSepLine;
    UIScrollView *m_observeScrollView;
    struct CGPoint m_observeScrollViewLastOffset;
    _Bool m_hasAppear;
    _Bool m_bIsBeingInteractivePop;
    _Bool m_hasAdjustInset;
    double m_navWidth;
    NSString *m_navTitle;
    NSString *m_navSubTitle;
    _Bool m_navLoading;
    UIView *m_navSubLeftView;
    UIView *m_navRightView;
    double m_navTitleOffset;
    _Bool m_navCustomView;
    _Bool m_willPopFromCustomTransitioninig;
    _Bool _m_bAnimating;
    _Bool _isDuringInteractivePop;
    _Bool _isAppearing;
    _Bool _m_willBePoped;
    _Bool _wcautoAdjustsScrollViewInsets;
    _Bool _m_bStopPopWhenDeleteContact;
    _Bool _disableAccessibilityCheck;
    _Bool _disableCheckLeaksWhenQuit;
    _Bool _forbidCreateNavHeader;
    _Bool _layoutRightInSplitView;
    _Bool _isNavBarAccessibilityHiddenBefore;
    _Bool _didObserveInteractivePopGRForDeselectCell;
    _Bool _isBeingRotation;
    unsigned int _checkLeaksDelays;
    UIView *bottomView;
    UIView *m_errorTipsBar;
    MMSnackBar *_snackBar;
    WCProgressViewHelper *_progressViewX;
    UIViewController *_presentingModalViewController;
    UIViewController *_presentedModalViewController;
    MMNavBarInteractiveConfig *_navBarInteractiveConfig;
    WCEventTrackingSystemConfig *_trackingSystemConfig;
    CDUnknownBlockType _viewAppearBlock;
    CDUnknownBlockType _viewDidQuitBlock;
    UIPanGestureRecognizer *_interactiveDismissPanGesture;
    _TtC7WCUIKit16MMHostingManager *_hostingController;
    UIPanGestureRecognizer *_scrollViewInteractivePanGesture;
    long long _orientationBeforeRotation;
}

+ (_Bool)isMiniTaskFeatureEnable;
+ (_Bool)hookViewDidBeDismissed;
+ (_Bool)hookViewDidBePresented;
+ (_Bool)hookViewDidDisappear;
+ (_Bool)hookViewDidAppear;
+ (_Bool)hookViewDidBePoped;
+ (_Bool)hookViewDidBePushed;
+ (void)hookMMUIViewController;
+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBeingRotation; // @synthesize isBeingRotation=_isBeingRotation;
@property(nonatomic) _Bool didObserveInteractivePopGRForDeselectCell; // @synthesize didObserveInteractivePopGRForDeselectCell=_didObserveInteractivePopGRForDeselectCell;
@property(nonatomic) long long orientationBeforeRotation; // @synthesize orientationBeforeRotation=_orientationBeforeRotation;
@property(nonatomic) _Bool isNavBarAccessibilityHiddenBefore; // @synthesize isNavBarAccessibilityHiddenBefore=_isNavBarAccessibilityHiddenBefore;
@property(retain, nonatomic) UIPanGestureRecognizer *scrollViewInteractivePanGesture; // @synthesize scrollViewInteractivePanGesture=_scrollViewInteractivePanGesture;
@property(nonatomic) _Bool layoutRightInSplitView; // @synthesize layoutRightInSplitView=_layoutRightInSplitView;
@property(retain, nonatomic) _TtC7WCUIKit16MMHostingManager *hostingController; // @synthesize hostingController=_hostingController;
@property(retain, nonatomic) UIPanGestureRecognizer *interactiveDismissPanGesture; // @synthesize interactiveDismissPanGesture=_interactiveDismissPanGesture;
@property(nonatomic) _Bool forbidCreateNavHeader; // @synthesize forbidCreateNavHeader=_forbidCreateNavHeader;
@property(copy, nonatomic) CDUnknownBlockType viewDidQuitBlock; // @synthesize viewDidQuitBlock=_viewDidQuitBlock;
@property(copy, nonatomic) CDUnknownBlockType viewAppearBlock; // @synthesize viewAppearBlock=_viewAppearBlock;
@property(nonatomic) unsigned int checkLeaksDelays; // @synthesize checkLeaksDelays=_checkLeaksDelays;
@property(nonatomic) _Bool disableCheckLeaksWhenQuit; // @synthesize disableCheckLeaksWhenQuit=_disableCheckLeaksWhenQuit;
@property(nonatomic) _Bool disableAccessibilityCheck; // @synthesize disableAccessibilityCheck=_disableAccessibilityCheck;
@property(retain, nonatomic) WCEventTrackingSystemConfig *trackingSystemConfig; // @synthesize trackingSystemConfig=_trackingSystemConfig;
@property(retain, nonatomic) MMNavBarInteractiveConfig *navBarInteractiveConfig; // @synthesize navBarInteractiveConfig=_navBarInteractiveConfig;
@property(nonatomic) _Bool m_bStopPopWhenDeleteContact; // @synthesize m_bStopPopWhenDeleteContact=_m_bStopPopWhenDeleteContact;
@property(nonatomic) _Bool wcautoAdjustsScrollViewInsets; // @synthesize wcautoAdjustsScrollViewInsets=_wcautoAdjustsScrollViewInsets;
@property(nonatomic) _Bool m_willBePoped; // @synthesize m_willBePoped=_m_willBePoped;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(nonatomic) _Bool isDuringInteractivePop; // @synthesize isDuringInteractivePop=_isDuringInteractivePop;
@property(nonatomic) _Bool m_bAnimating; // @synthesize m_bAnimating=_m_bAnimating;
@property(nonatomic) __weak UIViewController *presentedModalViewController; // @synthesize presentedModalViewController=_presentedModalViewController;
@property(nonatomic) __weak UIViewController *presentingModalViewController; // @synthesize presentingModalViewController=_presentingModalViewController;
@property(retain, nonatomic) WCProgressViewHelper *progressViewX; // @synthesize progressViewX=_progressViewX;
@property(retain, nonatomic) MMSnackBar *snackBar; // @synthesize snackBar=_snackBar;
@property(nonatomic) _Bool m_willPopFromCustomTransitioninig; // @synthesize m_willPopFromCustomTransitioninig;
@property(retain, nonatomic) UIView *m_errorTipsBar; // @synthesize m_errorTipsBar;
@property(nonatomic) _Bool m_bIsBeingInteractivePop; // @synthesize m_bIsBeingInteractivePop;
@property(retain, nonatomic) NSMutableArray *m_arrEndUserOpInfo; // @synthesize m_arrEndUserOpInfo;
@property(nonatomic) _Bool m_bDisableAdjustInsetAndOffset; // @synthesize m_bDisableAdjustInsetAndOffset;
@property(nonatomic) _Bool m_bInteractivePopEnabled; // @synthesize m_bInteractivePopEnabled;
@property(nonatomic) _Bool m_bIsBeingPoped; // @synthesize m_bIsBeingPoped;
@property(nonatomic) _Bool m_bAnimated; // @synthesize m_bAnimated;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView;
@property(retain, nonatomic) UILabel *m_newsTitleRecordLabel; // @synthesize m_newsTitleRecordLabel;
@property(nonatomic) unsigned int m_uiVcType; // @synthesize m_uiVcType;
@property(retain, nonatomic) MMLoadingView *loadingViewX; // @synthesize loadingViewX=m_loadingViewX;
- (void)restrictContentViewSize;
- (_Bool)shouldRestrictContentViewSize;
- (void)injected;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (_Bool)shouldFixParentAppearEventWhenPresented;
- (void)onSubSceneOrientationDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)onMainSceneOrientationDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)didChangeToOrientation:(long long)arg1 previousOrientation:(long long)arg2;
- (void)didMoveToNewScene:(id)arg1;
- (void)hideErrorTipsBar;
- (void)showErrorTipsBar:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)reportEndOpInfo;
- (void)appendEndOpInfo:(id)arg1;
- (void)parseDeepLink:(id)arg1 animation:(_Bool)arg2;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)setDeepLinkParam:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)dismissSearchControllIfNeeded;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (unsigned long long)modalTransitionPanGestureType;
- (void)mmUIViewControllerHandleScreenEdgePanGesture:(id)arg1;
- (_Bool)shouldSkipNavInteractiveGesture;
- (void)onInteractiveDismissComplete;
- (_Bool)shouldInteractiveDismiss;
@property(readonly, nonatomic) _Bool interactiveDismissEnabled;
- (void)setInteractiveDismissEnabled:(_Bool)arg1 panGesture:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)shouldInteractivePop;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didBeginEditing:(id)arg1;
- (_Bool)isSubviewResponder:(id)arg1;
- (void)resignSubviewResponder:(id)arg1;
- (void)viewWillInteractivePop;
- (void)viewDidBeInteractivePoped;
- (void)viewWillBeInteractivePoped;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (_Bool)shouldHideNavigationBar;
- (void)foreNavigationBarShow;
- (_Bool)isInNavigationHiddenTrasition;
- (_Bool)isTopInCurrentNavController;
- (void)onNavigationBarHiddenChanged;
- (void)onNavigationBarAlphaChanged;
- (void)removeFakeNaviView;
- (void)restoreNavigationBar;
- (double)navigationAreaHeight;
- (void)internalAddFakeNaviView:(id)arg1;
- (void)addFakeNaviView;
- (_Bool)isChildControllerOf:(id)arg1;
- (_Bool)isSeachActive;
- (_Bool)shouldNavigationBarAccessibilityHidden;
- (_Bool)useCustomNavibar;
- (void)restoreNavHeaderIfNeed;
- (void)setNavBarBottomLineHidden:(_Bool)arg1;
- (id)getNavBarSepLine;
- (void)initNavibarSepLine;
- (void)initNavHeaderIfNeed;
- (id)getDefaultForegroundColor;
- (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5 color:(id)arg6;
- (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 color:(id)arg5;
- (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5;
- (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
- (long long)getForegroundColor;
- (id)navigationSubTitleColor;
- (id)navigationTitleFont;
- (id)navigationTitleColor;
- (void)onNavigationBarBackgroundColorChange;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)showNavigationBarSepLine;
- (_Bool)navigationBarBlurEffect;
- (id)realNavigationBarBackgroundColor;
- (id)navigationBarBackgroundColor;
- (_Bool)useTransparentNavibar;
- (void)updateStatusBarColor;
- (void)tryPerformStatusBarUpdateInTopWindow;
- (_Bool)shouldHandleStatusBarInMainWindow;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)setNeedsStatusBarAppearanceUpdate;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (_Bool)hidesStatusBar;
- (void)didAskSearchControllerShouldBeginWithResult:(_Bool)arg1;
- (void)didDisappearToSearchController;
- (void)willDisappearToSearchController;
- (void)didAppearFromSearchController;
- (void)willAppearFromSearchController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)debugCheckLeaks;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_cellForMainTableViewSelectedRow;
- (void)handleInteractivePopGR:(id)arg1;
- (void)unobserveInteractivePopGRForDeselectCell;
- (void)observeInteractivePopGRForDeselectCell;
- (id)_findMainMMTableView;
- (void)deselectMainTableView;
- (void)deselectCellAlongsideTransition;
- (id)findMainTableView;
- (void)removeDuplicateBarButton;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isPresentedIn;
- (_Bool)isPushedIn;
- (id)businessInfoForCurrentPage;
- (id)obtainSessionParamExpects;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (id)getViewController;
- (void)resetViewStatus;
- (void)forceRotateToOrientation:(long long)arg1;
- (long long)currentInterfaceOrientation;
- (void)didForceChangeOrientation;
- (void)willForceChangeOrientation;
- (void)startForcedRotationToPortrait;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)isSearchControllerPop;
- (_Bool)disableScrollViewBottomInsetAdjustment;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)protectStatusBarFromBeingFuckedByForeGround:(SEL)arg1;
- (void)setViewAppearBlock:(CDUnknownBlockType)arg1 callbackWhenNextAppear:(_Bool)arg2;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setStatusBarFontBlack;
- (void)setStatusBarFontDefault;
- (void)setStatusBarFontWhite;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)setTopBarsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeTopBarsHiddenAnimated:(_Bool)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setTitleOnly:(id)arg1;
- (void)setTitleInterfaceOritation:(long long)arg1;
- (void)reloadTitleView;
- (double)getRightBarButtonWidth;
- (double)getLeftBarButtonWidth;
- (id)getMainScrollView;
- (void)observeScrollview;
- (double)adjustedStatusBarHeight;
- (_Bool)hasTitle;
- (void)setTitleView:(id)arg1;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 leftLoading:(_Bool)arg3 rightView:(id)arg4 subLeftView:(id)arg5 titleOffset:(double)arg6;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 leftLoading:(_Bool)arg3 rightView:(id)arg4 titleOffset:(double)arg5;
- (void)setTitle:(id)arg1 subTitle:(id)arg2 leftLoading:(_Bool)arg3 rightView:(id)arg4;
- (void)setTitle:(id)arg1 leftLoading:(_Bool)arg2;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)setTitle:(id)arg1 rightView:(id)arg2;
- (id)getTitleColor;
- (void)setSubTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)willShow;
- (void)willDisshow;
- (void)didDisshow;
- (void)didAppear;
- (void)willDisappear;
- (void)adjustView;
- (void)willAppear;
- (void)setIsPopByClickingURL;
- (void)updateNavigationBar;
- (void)restoreNavigationBarBkg;
- (void)removeNavigationBarBkg;
- (void)viewWillLayoutSubviews;
- (void)onMainWindowFrameChanged;
- (void)viewSafeAreaInsetsDidChange;
- (void)adjustContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)handleDeprecatedRotationCallback;
- (void)viewDidTransitionToNewSize;
- (void)setAutolayoutTopOffset:(double)arg1 forView:(id)arg2;
- (double)getVisibleHeightOri:(long long)arg1;
- (double)getVisibleHeight;
- (double)getContentViewHeight;
- (double)getContentViewYforTranslucentNaviBar;
- (_Bool)isStatusBarHidden;
- (double)getContentViewY;
- (double)getSafeTopInset;
- (double)getSafeBottomInset;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)fixNavigationBarInIOS13;
- (void)updateNavibarSepline;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)registerYReportSdk;
- (void)viewDidLoad;
- (_Bool)accessibilityPerformEscape;
- (_Bool)disMissSelf;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)adjustNavHeaderView;
- (void)adjustViewAndNavBarRect;
- (void)adjustSubviewRects;
- (void)adjustTableViewInset:(id)arg1;
- (void)adjustTableViewRect;
- (double)preferSnackBarBottomOffset;
- (void)showFailText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showOKText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showIcon:(id)arg1 text:(id)arg2;
- (void)showFailText:(id)arg1;
- (void)showOKText:(id)arg1;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2;
- (void)stopLoadingWithFailText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoading;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(_Bool)arg3;
- (void)startLoadingWithText:(id)arg1 block:(_Bool)arg2;
- (_Bool)hasAppear;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;
@property(retain, nonatomic) GCOpenReportParam *reportParam;
- (CDUnknownBlockType)dr_setPageIsNotFilterSame;
- (CDUnknownBlockType)dr_setPageIsFilter;
- (CDUnknownBlockType)dr_setPageReportInterval;
- (CDUnknownBlockType)dr_setEventCallback;
- (CDUnknownBlockType)dr_setCgiPolicy;
- (CDUnknownBlockType)dr_setPageReportPolicy2;
- (CDUnknownBlockType)dr_setPageReportPolicy;
- (CDUnknownBlockType)dr_getInnerProperty;
- (CDUnknownBlockType)dr_resetInnerProperty;
- (CDUnknownBlockType)dr_removeInnerProperty;
- (CDUnknownBlockType)dr_setInnerPropertys;
- (CDUnknownBlockType)dr_setInnerProperty;
- (CDUnknownBlockType)dr_resetRefPageParams;
- (CDUnknownBlockType)dr_removeRefPageParams;
- (CDUnknownBlockType)dr_setRefPageParams;
- (CDUnknownBlockType)dr_setRefPageParam;
- (CDUnknownBlockType)dr_getPageEventParam;
- (CDUnknownBlockType)dr_removePageEventParams;
- (CDUnknownBlockType)dr_removePageEventParam;
- (CDUnknownBlockType)dr_setPageEventParams;
- (CDUnknownBlockType)dr_setPageEventParam;
- (CDUnknownBlockType)dr_resetPageParams;
- (CDUnknownBlockType)dr_removePageParams;
- (CDUnknownBlockType)dr_removePageParam;
- (CDUnknownBlockType)dr_setPageParams;
- (CDUnknownBlockType)dr_setPageParam;
- (CDUnknownBlockType)dr_getDynamicParamsBlocks;
- (CDUnknownBlockType)dr_addDynamicParamsBlock;
- (CDUnknownBlockType)dr_setDynamicParamsBlock;
- (void)setDr_dynamicParamsBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)dr_setPageName;
- (CDUnknownBlockType)dr_setBizGroupId;
- (CDUnknownBlockType)dr_setPageId;
- (CDUnknownBlockType)dr_bindPageReportInfo;
@property(copy, nonatomic) NSNumber *dr_isHalfSubPage;
@property(nonatomic) _Bool dr_isFullSubPage;
@property(nonatomic) __weak id dr_relatedModel;
@property(readonly, copy, nonatomic) NSMutableDictionary *drLastReportTimes;
@property(readonly, copy, nonatomic) NSMutableDictionary *drReportIntervals;
@property(nonatomic) unsigned long long dr_sessionInTime;
@property(nonatomic) unsigned long long dr_pageInTime;
@property(nonatomic) long long dr_pageStep;
@property(readonly, copy, nonatomic) NSDictionary *dr_reportPolicy;
@property(readonly, copy, nonatomic) NSDictionary *dr_sourcePageParams;
@property(readonly, copy, nonatomic) NSDictionary *dr_refPageParams;
@property(readonly, copy, nonatomic) NSDictionary *dr_pageParams;
@property(copy, nonatomic) NSString *dr_pageName;
@property(nonatomic) unsigned long long dr_bizGroupId;
@property(nonatomic) unsigned long long dr_pageId;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 asModule:(id)arg4 identification:(id)arg5 endReasonType:(int)arg6;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 asModule:(id)arg3 identification:(id)arg4 endReasonType:(int)arg5;
- (void)stopLoadingWithFailText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 asModule:(id)arg3 identification:(id)arg4 endReasonType:(int)arg5;
- (void)stopLoadingWithFailText:(id)arg1 asModule:(id)arg2 identification:(id)arg3 endReasonType:(int)arg4;
- (void)stopLoadingWithOKText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 asModule:(id)arg3 identification:(id)arg4 endReasonType:(int)arg5;
- (void)stopLoadingWithOKText:(id)arg1 asModule:(id)arg2 identification:(id)arg3 endReasonType:(int)arg4;
- (void)stopLoadingAsModule:(id)arg1 identification:(id)arg2 endReasonType:(int)arg3;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(_Bool)arg3 asModule:(id)arg4 identification:(id)arg5;
- (void)startLoadingWithText:(id)arg1 block:(_Bool)arg2 asModule:(id)arg3 identification:(id)arg4;
- (void)startLoadingWithText:(id)arg1 asModule:(id)arg2 identification:(id)arg3;
- (void)startLoadingNonBlockAsModule:(id)arg1 identification:(id)arg2;
- (void)startLoadingBlockedAsModule:(id)arg1 identification:(id)arg2;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 atPageName:(id)arg4 moduleName:(id)arg5 identification:(id)arg6 endReasonType:(int)arg7;
- (void)stopLoadingAndShowIcon:(id)arg1 text:(id)arg2 atPageName:(id)arg3 moduleName:(id)arg4 identification:(id)arg5 endReasonType:(int)arg6;
- (void)stopLoadingWithFailText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 atPageName:(id)arg3 moduleName:(id)arg4 identification:(id)arg5 endReasonType:(int)arg6;
- (void)stopLoadingWithFailText:(id)arg1 atPageName:(id)arg2 moduleName:(id)arg3 identification:(id)arg4 endReasonType:(int)arg5;
- (void)stopLoadingWithOKText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 atPageName:(id)arg3 moduleName:(id)arg4 identification:(id)arg5 endReasonType:(int)arg6;
- (void)stopLoadingWithOKText:(id)arg1 atPageName:(id)arg2 moduleName:(id)arg3 identification:(id)arg4 endReasonType:(int)arg5;
- (void)stopLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3 endReasonType:(int)arg4;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 block:(_Bool)arg3 atPageName:(id)arg4 moduleName:(id)arg5 identification:(id)arg6;
- (void)startLoadingWithText:(id)arg1 block:(_Bool)arg2 atPageName:(id)arg3 moduleName:(id)arg4 identification:(id)arg5;
- (void)startLoadingWithText:(id)arg1 atPageName:(id)arg2 moduleName:(id)arg3 identification:(id)arg4;
- (void)startLoadingNonBlockAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (void)startLoadingBlockedAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (id)createInfoForReportWhenLaunchMiniTaskWithTaskData:(id)arg1 isFromLeftEdgeGesture:(_Bool)arg2;
- (id)miniTaskContextId;
- (unsigned long long)genMiniTaskPageActionScene;
- (_Bool)canPresentMiniTaskDetailPageDerectly;
- (_Bool)canPushMiniTaskViewController:(_Bool)arg1;
- (_Bool)canPushMiniTaskGuideController:(_Bool)arg1;
- (void)openMiniTaskViewControllerWithInteractiveController:(id)arg1 transitionContext:(id)arg2 guideTransitionContext:(id)arg3 animated:(_Bool)arg4 pageActionInfo:(id)arg5;
- (void)openMiniTaskViewControllerWithGesture:(id)arg1 transitionContext:(id)arg2 animated:(_Bool)arg3 pageActionInfo:(id)arg4;
- (_Bool)openMiniTaskInteractionGuideControllerWithPageActionInfo:(id)arg1 tips:(id)arg2;
- (void)openMiniTaskViewController:(long long)arg1;
- (void)onOpenNavLeftMiniTask;
- (_Bool)shouldBlockMiniInteractiveTransitionComplete:(id)arg1;
- (void)onMiniInteractiveTransitionWillEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionChanged:(id)arg1 progress:(double)arg2;
- (void)onMiniInteractiveTransitionBegin:(id)arg1;
- (_Bool)shouldMiniInteractiveTransitionBegin:(id)arg1;
- (id)MiniTaskEdgeGestureHandler;
- (void)bindMiniTaskEdgeGestureHandler;
- (void)checkAndUpdateLeftNavBarItemForMiniTaskEntry;
- (void)onMiniTaskPushGestureEnded:(_Bool)arg1;
- (_Bool)shouldMiniTaskGestureBegin;
- (void)viewDidAppearFromQuickReplySession;
- (void)viewWillPresentQuickReplySession:(id)arg1;
- (long long)preferredQuickReplyMsgStyle;
- (_Bool)shouldShowQuickReplyPush:(id)arg1;
- (_Bool)isFinderTabPage:(id)arg1;
- (_Bool)isPerformanceMonitorSwitch;
- (void)sf_viewDidBeDismissed:(_Bool)arg1;
- (void)sf_viewDidBePresented:(_Bool)arg1;
- (void)sf_viewDidDisappear:(_Bool)arg1;
- (void)sf_viewDidAppear:(_Bool)arg1;
- (void)sf_viewDidBePoped:(_Bool)arg1;
- (void)sf_viewDidBePushed:(_Bool)arg1;
- (void)startCommonLoadingBlocked;
- (void)startCommonLoading;
- (void)startCommonLoading:(_Bool)arg1;
- (void)stopBizLoading;
- (void)setWCBizAuthTitle:(id)arg1;
- (void)handleHeroHorizonalPanWithGr:(id)arg1;
- (id)genHeroDissmissPanGR;
@property(nonatomic, readonly) _Bool isInteractiveTrasitioning;
- (void)updateIsBeingDismissFromPageSheet:(_Bool)arg1;
- (_Bool)isBeingDismissedFromPageSheet;
- (_Bool)isShowInPageSheet;
- (void)applyGradientMaskToLabel:(id)arg1;
- (double)getNavigationBarHeight;
- (void)handleNavigationBarHiddenStatusOnDisappear;
- (void)handleNavigationBarHiddenStatusOnAppear;
- (long long)navigationBarHiddenStatus;
- (_Bool)stickyToExpand;
- (id)titleView;
- (double)scrollViewContentInsetBottomForInteractive;
- (double)scrollViewContentInsetTopForInteractive;
- (double)navigationBarHeight;
- (double)statusBarHeight;
- (_Bool)isScrollViewExceedsTop;
- (void)setNavigationBarAlpha:(double)arg1 withTitleIncluded:(_Bool)arg2;
- (void)fixScrollViewContentOffset;
- (void)setNavigationBarY:(double)arg1;
- (void)restoreNavigationBarToFullSize;
- (void)restoreNavigationBarToFullSizeAnimatedWithDuration:(double)arg1;
- (void)restoreNavigationBarToFullSizeOnScrollToTop;
- (void)handleDidScrolling:(id)arg1;
- (void)setScrollState:(id)arg1;
- (void)updateBGTransparentWithForceUpdate:(_Bool)arg1;
- (void)updateFadeBkgAlpha;
- (void)internalHandleFade:(id)arg1;
- (void)handleFade:(id)arg1;
- (_Bool)isDarkBackground;
- (void)handleBeginScrolling:(id)arg1;
- (void)onScrollViewInteractivePan:(id)arg1;
- (void)onScrollViewContentOffsetChanged:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviewsInNavBar;
- (void)viewWillDisappearInNavBar:(_Bool)arg1;
- (void)viewWillAppearInNavBar:(_Bool)arg1;
@property(readonly, nonatomic) UIView *transitionRootView; // @dynamic transitionRootView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
