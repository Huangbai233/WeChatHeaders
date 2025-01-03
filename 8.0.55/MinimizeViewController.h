//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MinimizeAbsorbFloatingView, MinimizeAntiCollisionLogic, MinimizeGestureCircleView, MinimizePendingTaskContext, MinimizeStarFloatingView, MinimizeTaskOuterContentView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIScrollView, UIView;
@protocol MinimizeDetailTaskListViewInterface, MinimizeTaskDataSource, MinimizeVCDelegate;

@interface MinimizeViewController
{
    _Bool _isAnimating;
    _Bool _isLastTimeReverseVertical;
    _Bool _hasSelectedGestureCircle;
    _Bool _hasMoveDraggableTaskViewLong;
    _Bool _hasAbsorbFloatingViewMoveLong;
    _Bool _shouldShowReachMaxCountWhenEndSwipe;
    _Bool _hasFloatingViewDraggedWhenKeyboardShow;
    id <MinimizeVCDelegate> _delegate;
    UIView *_contentView;
    MinimizeAbsorbFloatingView *_absorbFloatingView;
    MinimizeGestureCircleView *_gestureCircleView;
    id <MinimizeTaskDataSource> _dataSource;
    UIView *_maximizeFromView;
    UIView *_maximizeFromIcon;
    UIView *_backgroundView;
    UIScrollView *_backgroundScrollView;
    UIButton *_backgroundCloseButton;
    NSMutableDictionary *_dicTaskKey2TaskViewCache;
    NSMutableArray *_draggableTaskViewList;
    NSMutableArray *_taskStateViewList;
    MinimizeTaskOuterContentView *_outerContentView;
    NSMutableDictionary *_dicStateNum2TaskStateViewCache;
    NSMutableArray *_finalTaskOrStateViewOrderListForAnimation;
    double _lastTopBaseLine;
    double _lastBottomBaseLine;
    UIView<MinimizeDetailTaskListViewInterface> *_lastHighlightTaskView;
    unsigned long long _taskListPageEnterTime;
    MinimizePendingTaskContext *_pendingTaskContext;
    MinimizeStarFloatingView *_recordFloatingView;
    double _floatViewYBeforeKeyboardShow;
    double _currentInputToolBarTop;
    double _currentSystemKeyboardTop;
    MinimizeAntiCollisionLogic *_antiCollisionLogic;
    struct CGPoint _initialAdsorbFloatingViewOrigin;
    struct CGPoint _draggableTaskViewBeginTouchPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MinimizeAntiCollisionLogic *antiCollisionLogic; // @synthesize antiCollisionLogic=_antiCollisionLogic;
@property(nonatomic) double currentSystemKeyboardTop; // @synthesize currentSystemKeyboardTop=_currentSystemKeyboardTop;
@property(nonatomic) double currentInputToolBarTop; // @synthesize currentInputToolBarTop=_currentInputToolBarTop;
@property(nonatomic) _Bool hasFloatingViewDraggedWhenKeyboardShow; // @synthesize hasFloatingViewDraggedWhenKeyboardShow=_hasFloatingViewDraggedWhenKeyboardShow;
@property(nonatomic) double floatViewYBeforeKeyboardShow; // @synthesize floatViewYBeforeKeyboardShow=_floatViewYBeforeKeyboardShow;
@property(retain, nonatomic) MinimizeStarFloatingView *recordFloatingView; // @synthesize recordFloatingView=_recordFloatingView;
@property(retain, nonatomic) MinimizePendingTaskContext *pendingTaskContext; // @synthesize pendingTaskContext=_pendingTaskContext;
@property(nonatomic) unsigned long long taskListPageEnterTime; // @synthesize taskListPageEnterTime=_taskListPageEnterTime;
@property(nonatomic) _Bool shouldShowReachMaxCountWhenEndSwipe; // @synthesize shouldShowReachMaxCountWhenEndSwipe=_shouldShowReachMaxCountWhenEndSwipe;
@property(nonatomic) struct CGPoint draggableTaskViewBeginTouchPoint; // @synthesize draggableTaskViewBeginTouchPoint=_draggableTaskViewBeginTouchPoint;
@property(nonatomic) _Bool hasAbsorbFloatingViewMoveLong; // @synthesize hasAbsorbFloatingViewMoveLong=_hasAbsorbFloatingViewMoveLong;
@property(nonatomic) _Bool hasMoveDraggableTaskViewLong; // @synthesize hasMoveDraggableTaskViewLong=_hasMoveDraggableTaskViewLong;
@property(nonatomic) _Bool hasSelectedGestureCircle; // @synthesize hasSelectedGestureCircle=_hasSelectedGestureCircle;
@property(retain, nonatomic) UIView<MinimizeDetailTaskListViewInterface> *lastHighlightTaskView; // @synthesize lastHighlightTaskView=_lastHighlightTaskView;
@property(nonatomic) double lastBottomBaseLine; // @synthesize lastBottomBaseLine=_lastBottomBaseLine;
@property(nonatomic) double lastTopBaseLine; // @synthesize lastTopBaseLine=_lastTopBaseLine;
@property(nonatomic) _Bool isLastTimeReverseVertical; // @synthesize isLastTimeReverseVertical=_isLastTimeReverseVertical;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSMutableArray *finalTaskOrStateViewOrderListForAnimation; // @synthesize finalTaskOrStateViewOrderListForAnimation=_finalTaskOrStateViewOrderListForAnimation;
@property(retain, nonatomic) NSMutableDictionary *dicStateNum2TaskStateViewCache; // @synthesize dicStateNum2TaskStateViewCache=_dicStateNum2TaskStateViewCache;
@property(retain, nonatomic) MinimizeTaskOuterContentView *outerContentView; // @synthesize outerContentView=_outerContentView;
@property(retain, nonatomic) NSMutableArray *taskStateViewList; // @synthesize taskStateViewList=_taskStateViewList;
@property(retain, nonatomic) NSMutableArray *draggableTaskViewList; // @synthesize draggableTaskViewList=_draggableTaskViewList;
@property(retain, nonatomic) NSMutableDictionary *dicTaskKey2TaskViewCache; // @synthesize dicTaskKey2TaskViewCache=_dicTaskKey2TaskViewCache;
@property(retain, nonatomic) UIButton *backgroundCloseButton; // @synthesize backgroundCloseButton=_backgroundCloseButton;
@property(retain, nonatomic) UIScrollView *backgroundScrollView; // @synthesize backgroundScrollView=_backgroundScrollView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *maximizeFromIcon; // @synthesize maximizeFromIcon=_maximizeFromIcon;
@property(retain, nonatomic) UIView *maximizeFromView; // @synthesize maximizeFromView=_maximizeFromView;
@property(nonatomic) __weak id <MinimizeTaskDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct CGPoint initialAdsorbFloatingViewOrigin; // @synthesize initialAdsorbFloatingViewOrigin=_initialAdsorbFloatingViewOrigin;
@property(retain, nonatomic) MinimizeGestureCircleView *gestureCircleView; // @synthesize gestureCircleView=_gestureCircleView;
@property(retain, nonatomic) MinimizeAbsorbFloatingView *absorbFloatingView; // @synthesize absorbFloatingView=_absorbFloatingView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MinimizeVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onOpenMiniTask;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (void)resetInputViewStatus;
- (double)calcInputViewSafeBottom;
- (void)checkInputviewsTopAndUpdateFloatingViewFrame;
- (struct CGRect)getLimitedFrameOfOriginFrame:(struct CGRect)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)tryNotifyExitTaskListPage:(unsigned long long)arg1;
- (void)highlightTaskView:(id)arg1;
- (id)getCurTaskViewWithPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (id)getCurTaskViewWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetTaskAndStateViewWhenUpdateTask:(id)arg1;
- (id)cachedTaskStateView:(id)arg1;
- (_Bool)isRecordTipsFloatingViewShowing;
- (_Bool)updateTaskAnimated:(id)arg1;
- (_Bool)updateTask:(id)arg1 Title:(id)arg2 Subtitle:(id)arg3 titleTail:(id)arg4 subTitleTail:(id)arg5;
- (void)animateRemoveTaskViewAndRearrangeUI:(id)arg1;
- (void)animateRemoveTaskView:(id)arg1;
- (_Bool)tryUpdateUIWhenRemoveTask:(id)arg1 IsForground:(_Bool)arg2 animationType:(int)arg3;
- (void)endAddMinimizeComplete:(_Bool)arg1;
- (_Bool)updateAddMinimizeWithProgress:(double)arg1 TouchPoint:(struct CGPoint)arg2 ShouldCancel:(_Bool *)arg3;
- (void)beginAddMinimizeInteraction;
- (void)resetGestureCircleViewToCanAddTaskState:(_Bool)arg1 taskKey:(id)arg2;
- (void)resetGestureCircleViewToCanAddTaskState:(_Bool)arg1;
- (void)configGestureCircleViewSelectedFrame;
- (void)configGestureCircleViewNormalFrameWithProgress:(double)arg1;
- (_Bool)trySelectGestureCircleViewWith:(struct CGPoint)arg1 ReachMaxCount:(_Bool)arg2;
- (void)endSwipeToAddMinimize:(id)arg1 isComplete:(_Bool)arg2 pendingTaskContext:(id)arg3;
- (_Bool)canSwipeToAddMinimize:(id)arg1 Progress:(double)arg2 TouchPoint:(struct CGPoint)arg3 ShouldCancel:(_Bool *)arg4;
- (void)endSlideToShowAdsorbFloatingView:(id)arg1 isComplete:(_Bool)arg2;
- (void)slideToShowAdsorbFloatingView:(id)arg1 Progress:(double)arg2;
- (_Bool)isReachMaxCount;
- (unsigned long long)getNormalTaskCount;
- (void)beginPopBackGesture:(id)arg1 GestureMode:(int)arg2;
- (void)showAllTaskViewCloseBtn;
- (void)hideAllTaskViewCloseBtn;
- (unsigned long long)positionTypeWithTaskViewFrame:(struct CGRect)arg1;
- (void)hideOtherTaskViewsAndShowAdsorbFloatingViewAnimated:(id)arg1 CurrentMaximizeTaskView:(id)arg2 Duration:(double)arg3;
- (void)hideTaskViewsAndShowAdsorbFloatingViewAnimated:(id)arg1 Duration:(double)arg2 exitType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)makeSureAbsorbFloatingViewInVisibleArea;
- (void)animateAbsorbFloatingViewToAlpha:(double)arg1 Duration:(double)arg2;
- (id)getTaskView:(id)arg1;
- (void)setOtherTaskToBackground:(id)arg1;
- (void)transitionToMaximization:(id)arg1 Duration:(double)arg2;
- (void)animateShowAbsorbFloatingView:(id)arg1 Duration:(double)arg2 FromFrame:(struct CGRect)arg3;
- (void)handleMinimizeEndAnimation:(id)arg1;
- (void)animateShowRecFloatingViewWithDuration:(double)arg1;
- (void)animateOuterContentTaskAndShowAbsorbFloatingView:(id)arg1 Duration:(double)arg2;
- (void)animateAbsorbFloatingViewToCurrentBackgroundTaskListWithAnimationType:(int)arg1;
- (void)resetAdsorbFloatingViewWithBackgroundTaskList:(id)arg1 Animated:(_Bool)arg2 Duration:(double)arg3;
- (void)resetAdsorbFloatingViewWithBackgroundTaskList:(id)arg1 Animated:(_Bool)arg2;
- (void)resetAdsorbFloatingViewWithBackgroundTaskList:(id)arg1;
- (void)resetAdsorbFloatingViewWithBackgroundTaskList;
- (void)transitionToMinimizationInOutterWindow:(id)arg1 backgroundTaskListBeforeMinimize:(id)arg2 duration:(double)arg3 fromFrame:(struct CGRect)arg4 toFrame:(struct CGRect)arg5;
- (void)transitionToMinimization:(id)arg1 Duration:(double)arg2 FromFrame:(struct CGRect)arg3 toFrame:(struct CGRect)arg4;
- (id)getMaximizeTransitionFloatingView:(id)arg1;
- (void)onMinimizeAnimationEnd:(id)arg1;
- (struct CGRect)getConvertedFloatingIconFrame;
- (struct CGRect)getConvertedVisibleFrame:(id)arg1 toWindow:(id)arg2;
- (struct CGRect)getConvertedVisibleFrame:(id)arg1;
- (id)getCurrentMaskPathConvertedToCurrentScreenCoordinates;
- (id)getMinimizeTransitionFloatingView:(id)arg1;
- (void)hideAllTaskViewList;
- (void)onCloseTaskListButtonClick:(id)arg1;
- (_Bool)showAllTaskListAndHideAdsorbFloatingViewAnimated:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isAbsorbFloatingViewStickToRight;
- (void)calculateTaskViewListTopBaseLine:(double *)arg1 bottomBaseLine:(double *)arg2 verticalReverse:(_Bool *)arg3 shouldCheckReverse:(_Bool)arg4;
- (void)resetTaskAndStateViewListFrameAndOrder:(_Bool)arg1;
- (double)layoutTaskOrStateView:(struct CGPoint)arg1 VerticalReverse:(_Bool)arg2 ViewList:(id)arg3 ViewYInset:(double)arg4;
- (void)moveTaskViewWithScale:(id)arg1 Scale:(double)arg2 PositionType:(unsigned long long)arg3;
- (struct UIEdgeInsets)taskViewEdgeInsets;
- (void)clearAllCacheTaskView;
- (void)tryGenAllTaskAndStateView;
- (void)showAllBackgroundTaskViewListAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isShowingTaskList;
- (void)hideTaskListAndShowAdsorbFloatingViewAnimatedWithExitType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)checkTaskMaxCountOrShowTipsBeforeAdd:(id)arg1 pendingTaskContext:(id)arg2;
- (void)showAlertTips;
- (void)resetAdsorbFloatingViewAlphaForCurrentBackgroundTask;
- (_Bool)maximizeTask:(id)arg1 withEnterTaskScene:(unsigned int)arg2;
- (_Bool)maximizeTask:(id)arg1;
- (void)minimizeToAdsorbFloatingViewWithBackgroundTaskList:(id)arg1;
- (id)hasMinimizeTask:(id)arg1;
- (void)setTaskIsForegournd:(_Bool)arg1 taskKey:(id)arg2;
- (id)getAllOutterTaskList;
- (id)getTask:(id)arg1;
- (id)getBackgroundTaskList;
- (void)removeTaskOrStateViewAnimated:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getCurrentForegroundTask;
- (void)onTaskStateViewTouched:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onTaskStateViewEntryBtnLongPressed:(id)arg1;
- (void)onTaskStateViewEntryBtnClicked:(id)arg1;
- (void)onTaskStateViewDeleteBtnClicked:(id)arg1;
- (void)onDraggableTaskViewDeleteBtnClicked:(id)arg1;
- (void)onDraggableTaskViewTouched:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onDraggableTaskViewLongPress:(id)arg1;
- (void)onDraggableTaskViewTap:(id)arg1;
- (void)onAbsorbFloatingViewFoldStateChange:(_Bool)arg1;
- (void)onOuterContentViewTouched:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onOuterContentViewLongPress:(id)arg1;
- (void)onOuterContentViewTap:(id)arg1;
- (void)onOuterContentViewSizeChanged:(id)arg1 toSize:(struct CGSize)arg2;
- (void)onAbsorbFloatingViewFullyExpand;
- (_Bool)isRemoveTaskOperationTriggered;
- (void)onRemoveCurrentOuterContentTask;
- (void)onAbsorbFloatingViewOuterContentSizeChanged:(struct CGSize)arg1 taskKey:(id)arg2;
- (void)onAbsorbFloatingViewEndResultMoveTo:(struct CGPoint)arg1 moveContext:(id)arg2;
- (void)onAbsorbFloatingViewBegin:(struct CGPoint)arg1;
- (void)onAbsorbFloatingViewLongPress:(struct CGPoint)arg1;
- (void)notifyEnterTaskFromAdsorbFloatingView:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)onMaximizeTaskWithTaskKey:(id)arg1;
- (void)onAbsorbFloatingViewOuterContentTap:(id)arg1;
- (void)onAbsorbFloatingViewTap;
- (void)initGestureCircleView;
- (void)initRecFloatView;
- (void)initAbsorbFloatView;
- (void)initCloseTaskListRelatedView;
- (void)initContentView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)willStatusBarOrientationChanged:(id)arg1;
- (void)loadView;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

