//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class MMFinderLiveEnterSqaureTransitionContext, MMFinderLiveEnterSqaureTransitionController, MMFinderLiveExitSqaureTransitionController, MMFinderLiveMinimizeWindowReporter, MMFinderLiveTask, MMLiveMinimizationInteractiveLogic, MMLiveMinimizeWindow, MMMinimizeLiveContainerView, MMUIButton, MMUIViewController, MiniAudioTaskContentView, MinimizeTaskData, NSArray, NSString, TransitionStateInfo, UIGestureRecognizer, UIImage, UIImageView, UINavigationController, UIViewController;
@protocol MMLiveContainerLogicControllerDelegate, MMLiveContainerLogicDelegate, MMLiveContainerLogicTargetViewControllerDelegate;

@interface MMLiveContainerLogic : NSObject
{
    _Bool _hasStartQuitAnimation;
    _Bool _supportEdgePanGesture;
    _Bool _showNetworkFailIndicatorView;
    _Bool _isMinimizeModeInPIP;
    _Bool _isWaitingRotatePortraitToExtend;
    _Bool _isShowHomePageBottomPlayerLiveView;
    _Bool _isEnterSquareTransitionSpecialState;
    _Bool _isInHomepagePopTransition;
    _Bool _isCollapsing;
    _Bool _isExtending;
    _Bool _isFinishExtendFromCollapse;
    _Bool _isFinishRotateForExtend;
    _Bool _useCommonMinimizeWindow;
    _Bool _useVideoContentMinimizeStyle;
    _Bool _isMinimizeMode;
    _Bool _enterMinimizeModeFromCollapse;
    _Bool _isExtendFromCollapseAnimated;
    _Bool _isCollapseInvoking;
    _Bool _isWaitingRotatePortraitToCollapse;
    _Bool _isShowBottomPlayer;
    _Bool _isBoundEnterSqaureGesture;
    _Bool _isBoundExitSqaureGesture;
    _Bool _enterHomepageTransitionAnimated;
    id <MMLiveContainerLogicDelegate> _liveContainerDelegate;
    long long _currTransitionState;
    UINavigationController *_navigationController;
    UIViewController<MMLiveContainerLogicTargetViewControllerDelegate> *_targetViewController;
    UIImage *_snapShotImage;
    MMUIViewController<MMLiveContainerLogicControllerDelegate> *_logicControllerDelegate;
    MMLiveMinimizeWindow *_minimizeWindow;
    TransitionStateInfo *_nextTransitionStateInfo;
    NSArray *_iphoneExtendIgnoreVCArray;
    NSArray *_ipadExtendIgnoreVCArray;
    MinimizeTaskData *_minimizeTaskData;
    MMLiveMinimizationInteractiveLogic *_minizationInteractiveLogic;
    MMUIButton *_closeButton;
    MiniAudioTaskContentView *_minimizeContainerRootView;
    MMMinimizeLiveContainerView *_minimizeLiveContainerView;
    MMUIButton *_localAudioModeBtn;
    unsigned long long _indicatorState;
    CDUnknownBlockType _collapseCompletionCallback;
    CDUnknownBlockType _extendFromCollapseCompletionCallback;
    MMFinderLiveMinimizeWindowReporter *_audienceMinimizeReporter;
    MMFinderLiveEnterSqaureTransitionController *_enterSqaureTrasitionController;
    MMFinderLiveExitSqaureTransitionController *_exitSqaureTrasitionController;
    UIImageView *_bottomPlayerLiveViewSnapshot;
    MMFinderLiveEnterSqaureTransitionContext *_context;
    struct CGRect _minimizeFrame;
    struct CGRect _minimizeFromRect;
}

+ (_Bool)isPresentingControllerEnableToPresent:(id)arg1;
+ (_Bool)checkIsEnableToPresentInMainScene:(_Bool)arg1;
+ (id)getPresentingVCInMainScene:(_Bool)arg1;
+ (id)getPresentingVC;
- (void).cxx_destruct;
@property(nonatomic) _Bool enterHomepageTransitionAnimated; // @synthesize enterHomepageTransitionAnimated=_enterHomepageTransitionAnimated;
@property(nonatomic) _Bool isBoundExitSqaureGesture; // @synthesize isBoundExitSqaureGesture=_isBoundExitSqaureGesture;
@property(nonatomic) _Bool isBoundEnterSqaureGesture; // @synthesize isBoundEnterSqaureGesture=_isBoundEnterSqaureGesture;
@property(retain, nonatomic) MMFinderLiveEnterSqaureTransitionContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIImageView *bottomPlayerLiveViewSnapshot; // @synthesize bottomPlayerLiveViewSnapshot=_bottomPlayerLiveViewSnapshot;
@property(nonatomic) _Bool isShowBottomPlayer; // @synthesize isShowBottomPlayer=_isShowBottomPlayer;
@property(retain, nonatomic) MMFinderLiveExitSqaureTransitionController *exitSqaureTrasitionController; // @synthesize exitSqaureTrasitionController=_exitSqaureTrasitionController;
@property(retain, nonatomic) MMFinderLiveEnterSqaureTransitionController *enterSqaureTrasitionController; // @synthesize enterSqaureTrasitionController=_enterSqaureTrasitionController;
@property(nonatomic) _Bool isWaitingRotatePortraitToCollapse; // @synthesize isWaitingRotatePortraitToCollapse=_isWaitingRotatePortraitToCollapse;
@property(nonatomic) _Bool isCollapseInvoking; // @synthesize isCollapseInvoking=_isCollapseInvoking;
@property(retain, nonatomic) MMFinderLiveMinimizeWindowReporter *audienceMinimizeReporter; // @synthesize audienceMinimizeReporter=_audienceMinimizeReporter;
@property(nonatomic) _Bool isExtendFromCollapseAnimated; // @synthesize isExtendFromCollapseAnimated=_isExtendFromCollapseAnimated;
@property(copy, nonatomic) CDUnknownBlockType extendFromCollapseCompletionCallback; // @synthesize extendFromCollapseCompletionCallback=_extendFromCollapseCompletionCallback;
@property(copy, nonatomic) CDUnknownBlockType collapseCompletionCallback; // @synthesize collapseCompletionCallback=_collapseCompletionCallback;
@property(nonatomic) unsigned long long indicatorState; // @synthesize indicatorState=_indicatorState;
@property(retain, nonatomic) MMUIButton *localAudioModeBtn; // @synthesize localAudioModeBtn=_localAudioModeBtn;
@property(retain, nonatomic) MMMinimizeLiveContainerView *minimizeLiveContainerView; // @synthesize minimizeLiveContainerView=_minimizeLiveContainerView;
@property(retain, nonatomic) MiniAudioTaskContentView *minimizeContainerRootView; // @synthesize minimizeContainerRootView=_minimizeContainerRootView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMLiveMinimizationInteractiveLogic *minizationInteractiveLogic; // @synthesize minizationInteractiveLogic=_minizationInteractiveLogic;
@property(nonatomic) _Bool enterMinimizeModeFromCollapse; // @synthesize enterMinimizeModeFromCollapse=_enterMinimizeModeFromCollapse;
@property(nonatomic) _Bool isMinimizeMode; // @synthesize isMinimizeMode=_isMinimizeMode;
@property(retain, nonatomic) MinimizeTaskData *minimizeTaskData; // @synthesize minimizeTaskData=_minimizeTaskData;
@property(nonatomic) _Bool useVideoContentMinimizeStyle; // @synthesize useVideoContentMinimizeStyle=_useVideoContentMinimizeStyle;
@property(nonatomic) _Bool useCommonMinimizeWindow; // @synthesize useCommonMinimizeWindow=_useCommonMinimizeWindow;
@property(nonatomic) _Bool isFinishRotateForExtend; // @synthesize isFinishRotateForExtend=_isFinishRotateForExtend;
@property(nonatomic) _Bool isFinishExtendFromCollapse; // @synthesize isFinishExtendFromCollapse=_isFinishExtendFromCollapse;
@property(retain, nonatomic) NSArray *ipadExtendIgnoreVCArray; // @synthesize ipadExtendIgnoreVCArray=_ipadExtendIgnoreVCArray;
@property(retain, nonatomic) NSArray *iphoneExtendIgnoreVCArray; // @synthesize iphoneExtendIgnoreVCArray=_iphoneExtendIgnoreVCArray;
@property(retain, nonatomic) TransitionStateInfo *nextTransitionStateInfo; // @synthesize nextTransitionStateInfo=_nextTransitionStateInfo;
@property(nonatomic) _Bool isExtending; // @synthesize isExtending=_isExtending;
@property(nonatomic) _Bool isCollapsing; // @synthesize isCollapsing=_isCollapsing;
@property(retain, nonatomic) MMLiveMinimizeWindow *minimizeWindow; // @synthesize minimizeWindow=_minimizeWindow;
@property(nonatomic) __weak MMUIViewController<MMLiveContainerLogicControllerDelegate> *logicControllerDelegate; // @synthesize logicControllerDelegate=_logicControllerDelegate;
@property(retain, nonatomic) UIImage *snapShotImage; // @synthesize snapShotImage=_snapShotImage;
@property(nonatomic) struct CGRect minimizeFromRect; // @synthesize minimizeFromRect=_minimizeFromRect;
@property(nonatomic) struct CGRect minimizeFrame; // @synthesize minimizeFrame=_minimizeFrame;
@property(nonatomic) _Bool isInHomepagePopTransition; // @synthesize isInHomepagePopTransition=_isInHomepagePopTransition;
@property(nonatomic) _Bool isEnterSquareTransitionSpecialState; // @synthesize isEnterSquareTransitionSpecialState=_isEnterSquareTransitionSpecialState;
@property(nonatomic) __weak UIViewController<MMLiveContainerLogicTargetViewControllerDelegate> *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(nonatomic) _Bool isShowHomePageBottomPlayerLiveView; // @synthesize isShowHomePageBottomPlayerLiveView=_isShowHomePageBottomPlayerLiveView;
@property(nonatomic) _Bool isWaitingRotatePortraitToExtend; // @synthesize isWaitingRotatePortraitToExtend=_isWaitingRotatePortraitToExtend;
@property(nonatomic) _Bool isMinimizeModeInPIP; // @synthesize isMinimizeModeInPIP=_isMinimizeModeInPIP;
@property(nonatomic) _Bool showNetworkFailIndicatorView; // @synthesize showNetworkFailIndicatorView=_showNetworkFailIndicatorView;
@property(nonatomic) _Bool supportEdgePanGesture; // @synthesize supportEdgePanGesture=_supportEdgePanGesture;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) long long currTransitionState; // @synthesize currTransitionState=_currTransitionState;
@property(nonatomic) _Bool hasStartQuitAnimation; // @synthesize hasStartQuitAnimation=_hasStartQuitAnimation;
@property(nonatomic) __weak id <MMLiveContainerLogicDelegate> liveContainerDelegate; // @synthesize liveContainerDelegate=_liveContainerDelegate;
- (id)audienceLogReporter;
- (void)configEnterHomepageTransitionAnimated:(_Bool)arg1;
- (void)attachTransitionTargetViewController:(id)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(_Bool)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)clearMinimizeWindowLastReportDatas;
- (void)reportForStopMinimizeWindow;
- (void)reportForStartMinimizeWindowFrom:(unsigned long long)arg1;
- (void)reportForStartMinimizeWindowIfNeed;
- (void)updateHomepagePlayerViewForSrcViewFrameChanged;
- (void)updateMinimizeUIForSrcViewFrameChanged;
- (void)handleForBottomPlayerSrcViewFrameChanged;
- (void)handleForMinimizeSrcViewFrameChanged;
- (void)onOlympicLiveView:(id)arg1 liveTaskId:(id)arg2 showLiveStreamChange:(_Bool)arg3;
- (void)onLiveReplayViewPlayerFrameChanged:(id)arg1 liveTaskId:(id)arg2 newPlayerFrame:(struct CGRect)arg3;
- (void)onDismissMinimizeWindowDidEnd:(id)arg1;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onMMLiveWillStart;
- (void)onLiveTask:(id)arg1 liveClosed:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 livePausedForPaidLiveTrialTimeupChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 livePlayStatusForAudienceChanged:(long long)arg2;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(_Bool)arg2 isPureAudioDisplayModeValueChanged:(_Bool)arg3 showTip:(_Bool)arg4;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(_Bool)arg2 isPureAudioDisplayModeValueChanged:(_Bool)arg3;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 localAudioModeStateChangedTo:(unsigned long long)arg2;
- (void)onLiveViewConnectMicViewFrameChanged:(id)arg1 newConnectMicViewFrame:(struct CGRect)arg2;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(struct CGRect)arg2;
- (void)dismissLiveViewController;
- (void)showLiveView;
- (void)foldToWindow;
- (void)absorbToWindow;
- (_Bool)isMinimizeTaskMgrContainerLive;
- (void)dismissLiveViewFromMinimizeContainer;
- (void)adjustMinimizeLiveContainerSize;
- (void)adjustFrameForDisplayView:(id)arg1 withBusiness:(long long)arg2;
- (void)adjustMinimizeHomepageDisplayViewFrameInContext:(id)arg1;
- (void)adjustMinimizeDisplayViewFrameForBusiness:(long long)arg1;
- (_Bool)reAttachLiveViewToMinimizeContainer;
- (void)attachLiveViewToMinimizeContainer;
- (struct CGSize)getMinimizeLiveViewSizeForBusiness:(long long)arg1;
- (double)getLiveViewHeightPerWidthPercent;
- (void)adjustBottomPlayerSubviewsSize:(id)arg1;
- (struct CGSize)getLiveMinimizeSize;
- (void)updateMinimizeLiveContainerViewSize;
- (void)hideCloseButton;
- (void)adjustCloseButtonFrame;
- (void)displayCloseButton;
- (void)hideIndicators;
- (void)displayIndicators;
- (_Bool)isMinimizeTaskPlaying:(id)arg1;
- (long long)onMMLiveMinimizeWindowRequestPreviousOrientation;
- (void)onMMLiveMinimizeWindowClicked;
- (void)minimizeWindowWillHide:(_Bool)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onContainerSizeDidChange:(id)arg1 fromSize:(struct CGSize)arg2 toSize:(struct CGSize)arg3;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)removeMinimizeTask;
- (id)getCurrentMinimizeTaskFloatingView;
- (_Bool)canUseGlobalMinimization;
- (void)updateMinimizeViewFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (id)getMinimizeTaskKey;
- (void)updateMinimizeContainerRootViewButtonEnableForAudience;
- (void)updateMinimizeContainerRootViewButtonShowForAudience;
- (void)updateMinimizeLiveLocalAudioModeBtn;
- (id)getMinimizeTaskData;
- (struct CGRect)minimizeWindowFrame;
- (id)convertSceneInfo:(id)arg1;
- (void)transferConfigScenes;
- (_Bool)isViewControllerMustIgnoreExtendLive:(id)arg1;
- (id)getIgnoreExtendLiveSceneInfo:(id)arg1;
- (id)getExtendTransitionContainerBackView;
- (struct CGRect)requestMaximizeToRect;
- (struct CGRect)requestMinimizeFromRect;
- (id)requestSnapshotImage;
- (long long)requestPreviousOrientation;
- (struct CGRect)requestMinimizeLiveFrameInScreen;
- (struct CGRect)requestMinimizeFrame;
- (long long)requestCurrentTransitionState;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)getCurrPresentingViewController;
- (struct CGRect)bottomPlayerViewSrcFrame;
- (_Bool)canEnterSquare;
- (void)attachIndicatorViewToHomePageBottomPlayer:(id)arg1;
- (void)attachLiveViewToHomePageBottomPlayer:(id)arg1;
- (void)attachIndicatorViewToHomePageBottomPlayerCurrentContext;
- (void)attachLiveViewToHomePageBottomPlayerFromCurrentContext;
- (_Bool)reAttachLiveViewToHomePageBottomPlayer;
- (void)onEnterSqaureTransitionControllerEnd:(id)arg1 context:(id)arg2 isComplete:(_Bool)arg3 isInteracting:(_Bool)arg4 isPop:(_Bool)arg5;
- (void)onEnterSqaureTransitionControllerBegin:(id)arg1 isPop:(_Bool)arg2 isGesturePanEnter:(_Bool)arg3;
- (id)getSnapshotLiveViewVideoContainer;
- (id)reconstructForEnterContext:(id)arg1;
- (id)reconstructForExitContext:(id)arg1;
- (void)notifyWillEnterSquareTransition:(_Bool)arg1;
- (void)onWillEnterSquareTransitionHandler:(_Bool)arg1;
- (void)updateEnterSqaureSpecialTransition:(_Bool)arg1;
- (void)takeBottomPlayerLiveViewSnapshot;
- (void)onMinimizationInteractiveQuitDidEnd;
- (void)onMinimizationInteractiveDidEnd:(_Bool)arg1;
- (void)onMinimizationInteractiveWillEnd:(_Bool)arg1;
- (_Bool)minimizationInteractiveShouldInvoke;
- (_Bool)minimizationInteractiveShouldBegin;
- (void)onMinimizationInteractiveDidBegin:(_Bool)arg1;
- (id)getLiveContentSnapShotImageForBusiness:(long long)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) _Bool isCurrentShowPauseButton;
@property(readonly, nonatomic) _Bool isExtendingFromCollapse;
@property(readonly, nonatomic) _Bool enableUseMinimizeContainerRootView;
@property(readonly, nonatomic) _Bool isShowWindowOverLiveVC;
- (void)clearIndicatorStateFlag:(unsigned long long)arg1;
- (void)setIndicatorStateFlag:(unsigned long long)arg1;
- (void)closeMinimizeWindow;
- (void)onCloseButtonClicked;
- (void)onAudioModeButtonClicked;
@property(readonly) UIGestureRecognizer *edgeGestureRecognizer;
@property(readonly, nonatomic) _Bool isLivePlaying;
@property(readonly, nonatomic) double mostPIPDelayDuration;
@property(readonly, nonatomic) _Bool useCustomPIP;
@property(readonly, nonatomic) _Bool usePIPMinimizeWindow;
@property(readonly, nonatomic) _Bool isShowMinimizeWindowInPIP;
@property(readonly, nonatomic) _Bool enableUsePIPMinimizeWindow;
- (void)unboundEnterSqaureGesture:(id)arg1 isPop:(_Bool)arg2;
- (void)bindEnterSqaureGesture:(id)arg1 isPop:(_Bool)arg2;
- (id)snapshotSmallLiveView:(id)arg1 frame:(struct CGRect)arg2;
- (SEL)getHandlePopDownToTopGestureSEL;
- (id)getHandlePopDownToTopGestureTarget;
- (SEL)getHandleCollectionViewGestureSel;
- (id)getHandleCollectionViewGestureTarget;
- (id)getMinimizeTaskFloatingView;
- (void)showLiveViewControllerWithDismissWindow:(_Bool)arg1;
- (void)updateCurrentTransitionState:(long long)arg1;
- (void)attachToLivePivotViewController:(id)arg1;
- (void)addScreenEdgePanGestureRecognizer:(id)arg1;
- (void)popHomepageWithTransition;
- (void)pushHomePageWithTransition;
- (void)popHomepageWithAnimated:(_Bool)arg1;
- (void)updateIsShowHomePageBottomPlayerLiveView:(_Bool)arg1;
- (_Bool)presentTargetViewControllerWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)presentNavigationController:(id)arg1 animated:(_Bool)arg2 skipPresentingVcCheck:(_Bool)arg3 addEdgePanGesture:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)presentLiveViewControllerWithExistingNavigationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)presentLiveViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)checkIsEnableToPresentLiveViewControllerInMainScene:(_Bool)arg1 skippingPresentingVcCheck:(_Bool)arg2;
- (void)changeStatusBarColor;
- (void)restoreStatusBarColor;
- (void)minimizeInteractiveDidEnd;
- (void)preHandleForMinimizeInteractive;
- (void)minimizeInteractiveWillEnd;
- (void)quitWithAnimationDidStop;
- (void)collapseWithAnimationDidStop;
- (void)quitWithoutDismiss;
- (void)quitWithoutNavigation;
- (void)dismissTopControllerWithoutQuitingAnimated:(_Bool)arg1;
- (void)quitAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)quitWithoutAnimation:(CDUnknownBlockType)arg1;
- (void)quitWithAnimation:(CDUnknownBlockType)arg1;
- (long long)getImageOrientation;
- (void)restoreOrientationForLandScape;
- (void)extendFromCollapseForPreviousLandscape:(CDUnknownBlockType)arg1;
- (void)checkExtendFromCollapseFinish;
- (void)restoreOrientationForPortrait;
- (void)restoreMinimizeWindowForExtendFail;
- (void)clearNavigationControllerToOnlyLive:(id)arg1;
- (void)extendFromCollapseForPreviousPortraitAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extendFromCollapseUsePIPAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invokeExtendFromCollapseAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)checkNeedInvokeExtendFromCollapse;
- (void)ensureEndExtendFromCollapseTransitionAfterDelay;
- (void)extendFromCollapseAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extendFromCollapseAnimated:(_Bool)arg1;
- (void)extendFromCollapseWithAnimation;
- (_Bool)isPreviousSupportLandscape;
- (_Bool)checkNeedPreRotateOrientation;
- (void)deleteViewController:(id)arg1;
- (void)attachStopStateDisplayController:(id)arg1;
- (void)stopLiveAndRemoveMinimizeTask;
- (void)closeCurrentLiveAndRemoveMinimizeTaskWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeLiveMinimizeTask;
- (void)dismissLiveMinimizedWindow;
- (void)showLiveInMinimizedWindow;
- (void)invokeCollapseWithAnimation;
- (_Bool)inner_checkNeedInvokeCollapse;
- (_Bool)checkNeedInvokeCollapseAfterAnchorPreviewRotateEnd;
- (_Bool)checkNeedInvokeCollapse;
- (void)ensureEndCollapseTransitionAfterDelay;
- (void)collapseWithAnimation:(CDUnknownBlockType)arg1;
- (void)restartLiveWithController:(id)arg1 navigation:(id)arg2;
- (_Bool)presentAnimated:(_Bool)arg1 animationType:(long long)arg2;
- (_Bool)fadeInWithAnimation;
- (_Bool)extendWithAnimation;
- (_Bool)morphPresentWithAnimation;
- (_Bool)presentViewControllerAnimated:(_Bool)arg1;
- (void)clearStates;
- (void)endTransition;
- (_Bool)isIndicatorEnd;
- (_Bool)isCurrentTransitionStateValid;
- (void)updateMinimizeWindowWithLiveView:(id)arg1;
- (void)createReporter;
- (void)initNotifications;
- (void)registerExtension;
- (id)initWithLogicControllerDelegate:(id)arg1 useCommonMinimizeWindow:(_Bool)arg2 useVideoContentMinimizeStyle:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

