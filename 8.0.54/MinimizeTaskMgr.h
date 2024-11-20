//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MemoryMappedKV, MinimizationWindow, MinimizeTaskData, MinimizeTaskNewSessionInfoSmall, NSMutableArray, NSMutableDictionary, NSString, UIViewController;

@interface MinimizeTaskMgr
{
    _Bool _isMainWindowResignKeyWindow;
    _Bool _isFullScreenPlaying;
    _Bool _isMMMusicPlayerActive;
    _Bool _isWillShowImagePicker;
    _Bool _isForcedHiddenByMMMVPlayer;
    int _gestureMode;
    NSMutableArray *_passiveStateTaskList;
    MinimizationWindow *_minimizeWindow;
    MinimizeTaskNewSessionInfoSmall *_smallSessionInfo;
    NSString *_pendingNewTaskKeyForReport;
    unsigned long long _minimizeWindowState;
    NSString *_lastAdsorbFloatingViewSessionId;
    unsigned long long _lastAdsorbFloatingViewCreateTime;
    unsigned long long _lastAbsorbFloatingViewFoldTime;
    NSMutableDictionary *_dicTaskKey2NotifyDelegate;
    NSString *_lastestOutContainerTaskBizName;
    MinimizeTaskData *_currentTransitioningTaskData;
    NSMutableArray *_tmpSnapshotViewListWhenSwitchTask;
    NSString *_taskKeyWithGesture;
    UIViewController *_prevWillAppearViewController;
    MemoryMappedKV *_mappedKV;
    struct CGPoint _lastAdsorbFloatingViewPosition;
}

+ (id)newTransitionControllerForTaskKey:(id)arg1 TaskBizKey:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(nonatomic) __weak UIViewController *prevWillAppearViewController; // @synthesize prevWillAppearViewController=_prevWillAppearViewController;
@property(nonatomic) _Bool isForcedHiddenByMMMVPlayer; // @synthesize isForcedHiddenByMMMVPlayer=_isForcedHiddenByMMMVPlayer;
@property(nonatomic) _Bool isWillShowImagePicker; // @synthesize isWillShowImagePicker=_isWillShowImagePicker;
@property(nonatomic) _Bool isMMMusicPlayerActive; // @synthesize isMMMusicPlayerActive=_isMMMusicPlayerActive;
@property(nonatomic) _Bool isFullScreenPlaying; // @synthesize isFullScreenPlaying=_isFullScreenPlaying;
@property(nonatomic) _Bool isMainWindowResignKeyWindow; // @synthesize isMainWindowResignKeyWindow=_isMainWindowResignKeyWindow;
@property(nonatomic) int gestureMode; // @synthesize gestureMode=_gestureMode;
@property(retain, nonatomic) NSString *taskKeyWithGesture; // @synthesize taskKeyWithGesture=_taskKeyWithGesture;
@property(retain, nonatomic) NSMutableArray *tmpSnapshotViewListWhenSwitchTask; // @synthesize tmpSnapshotViewListWhenSwitchTask=_tmpSnapshotViewListWhenSwitchTask;
@property(retain, nonatomic) MinimizeTaskData *currentTransitioningTaskData; // @synthesize currentTransitioningTaskData=_currentTransitioningTaskData;
@property(copy, nonatomic) NSString *lastestOutContainerTaskBizName; // @synthesize lastestOutContainerTaskBizName=_lastestOutContainerTaskBizName;
@property(retain, nonatomic) NSMutableDictionary *dicTaskKey2NotifyDelegate; // @synthesize dicTaskKey2NotifyDelegate=_dicTaskKey2NotifyDelegate;
@property(nonatomic) unsigned long long lastAbsorbFloatingViewFoldTime; // @synthesize lastAbsorbFloatingViewFoldTime=_lastAbsorbFloatingViewFoldTime;
@property(nonatomic) unsigned long long lastAdsorbFloatingViewCreateTime; // @synthesize lastAdsorbFloatingViewCreateTime=_lastAdsorbFloatingViewCreateTime;
@property(retain, nonatomic) NSString *lastAdsorbFloatingViewSessionId; // @synthesize lastAdsorbFloatingViewSessionId=_lastAdsorbFloatingViewSessionId;
@property(nonatomic) struct CGPoint lastAdsorbFloatingViewPosition; // @synthesize lastAdsorbFloatingViewPosition=_lastAdsorbFloatingViewPosition;
@property(nonatomic) unsigned long long minimizeWindowState; // @synthesize minimizeWindowState=_minimizeWindowState;
@property(retain, nonatomic) NSString *pendingNewTaskKeyForReport; // @synthesize pendingNewTaskKeyForReport=_pendingNewTaskKeyForReport;
@property(retain, nonatomic) MinimizeTaskNewSessionInfoSmall *smallSessionInfo; // @synthesize smallSessionInfo=_smallSessionInfo;
@property(retain, nonatomic) MinimizationWindow *minimizeWindow; // @synthesize minimizeWindow=_minimizeWindow;
@property(retain, nonatomic) NSMutableArray *passiveStateTaskList; // @synthesize passiveStateTaskList=_passiveStateTaskList;
- (unsigned int)currentTaskTransitionType;
- (void)resetInputViewStatus;
- (_Bool)isFloatingViewFold;
- (void)foldToWindowWithTaskBizName:(id)arg1 andTaskBizKey:(id)arg2 animated:(_Bool)arg3;
- (void)foldToWindowWithTaskBizName:(id)arg1 andTaskBizKey:(id)arg2;
- (void)absorbToWindowWithTaskBizName:(id)arg1 andTaskBizKey:(id)arg2 animated:(_Bool)arg3;
- (void)absorbToWindowWithTaskBizName:(id)arg1 andTaskBizKey:(id)arg2;
- (void)foldToWindow;
- (void)absorbToWindow;
- (void)endAddMinimizeInteractionComplete:(_Bool)arg1;
- (_Bool)updateAddMinimizeInteractionWithProgress:(double)arg1 TouchPoint:(struct CGPoint)arg2 ShouldCancel:(_Bool *)arg3;
- (void)beginAddMinimizeInteraction;
- (void)removeAllFloatingTaskAndNotify;
- (long long)availableNormalTaskCount;
- (void)onWCWebSameLayerVideoPlayFullScreen:(_Bool)arg1;
- (void)onMPVideoPlayFullScreen:(_Bool)arg1;
- (void)onWSVideoPlayFullScreen:(_Bool)arg1;
- (void)onWAVideoPlayFullScreen:(_Bool)arg1;
- (void)UIWindowDidBecomeKeyNotification:(id)arg1;
- (_Bool)shouldIgnoreAppearAndDisappearEventForVC:(id)arg1;
- (_Bool)isForbidResetFullScreenPlayingStatusWhenVcWillAppear:(id)arg1;
- (_Bool)isViewControllerInViewStacks:(id)arg1;
- (_Bool)isCurrentContainerBlockDisplay;
- (_Bool)isCurrentContainerRelatedVCInViewStacks;
- (_Bool)isViewControllerNeedHideMinimization:(id)arg1;
- (void)MMUIViewControllerDidBeDismissed:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)handleViewControllerAppearanceEvent:(id)arg1;
- (void)checkAndHandleCurrentTopViewControllerAppearance;
- (void)onMMImagePickerManagerShow;
- (void)onMMImagePickerManagerFinish;
- (void)onTextStateMusicEnd;
- (void)onTextStateMusicStart;
- (void)mvPlayer:(id)arg1 didUpdateShowMinimizeWindow:(_Bool)arg2;
- (void)onHDHeadImageWillDisappear;
- (void)onHDHeadImageWillAppear;
- (void)markImagePicking:(_Bool)arg1;
- (void)MMSightCameraWillBePoped;
- (void)MMSightCameraWillBePushed;
- (void)MMSightCameraWillBeDealloc;
- (void)MMSightCameraWillBeDismissed;
- (void)MMSightCameraWillBePresent;
- (void)onStoryPreviewStatusShow;
- (void)onStoryPreviewStatusHide;
- (void)onLoginOK;
- (void)onManulLoginOK;
- (void)setWindowMinimizationState:(unsigned long long)arg1;
- (void)routeExposedTaskEventWithTaskKey:(id)arg1;
- (void)routeRemoveTaskEventWithTaskKey:(id)arg1;
- (_Bool)routeEnterTaskEventWithTaskKey:(id)arg1 openContext:(id)arg2 enterTaskScene:(unsigned int)arg3;
- (void)clearGestureRelatedData;
- (void)endPopBackGesture:(id)arg1 taskBizKey:(id)arg2 isComplete:(_Bool)arg3 pendingTaskContext:(id)arg4;
- (void)endPopBackGesture:(id)arg1 TaskBizKey:(id)arg2 isComplete:(_Bool)arg3;
- (_Bool)updatePopBackGesture:(id)arg1 Progress:(double)arg2 TouchPoint:(struct CGPoint)arg3 ShouldCancel:(_Bool *)arg4;
- (_Bool)updatePopBackGesture:(id)arg1 TaskBizKey:(id)arg2 Progress:(double)arg3 TouchPoint:(struct CGPoint)arg4 ShouldCancel:(_Bool *)arg5;
- (void)beginPopBackGesture:(id)arg1;
- (void)beginPopBackGesture:(id)arg1 TaskBizKey:(id)arg2;
- (void)onRemoveCurrentOuterContentTask;
- (void)onAbsorbFloatingViewFoldStateChange:(_Bool)arg1;
- (void)minimizeWindowWillHide:(_Bool)arg1;
- (void)notifyTaskContainerMinimizeWindowWillHide:(id)arg1 animated:(_Bool)arg2;
- (void)minimizeWindowWillShow:(_Bool)arg1;
- (_Bool)needShowMinimizeWindow;
- (_Bool)hasSpecialTask;
- (void)onUpdateAbsorbFloatingViewLastPosition:(struct CGPoint)arg1 moveContext:(id)arg2;
- (void)onExitTaskListPage:(unsigned long long)arg1 ExitType:(unsigned long long)arg2;
- (void)onTaskCountExceedMaxWhenSlideToAddNewTask:(id)arg1;
- (void)onOuterContentViewSizeDidChanged:(id)arg1 From:(struct CGSize)arg2 To:(struct CGSize)arg3;
- (void)onEnterTaskList;
- (void)onPositiveTaskCloseBtnClick:(id)arg1 CloseFromState:(_Bool)arg2;
- (void)onClearPendingTask:(id)arg1 bAddNewTask:(_Bool)arg2;
- (void)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onFloatingViewMoveToTrash:(id)arg1;
- (_Bool)tryDeleteTaskRelatedData:(id)arg1;
- (_Bool)tryDeleteTaskFromList:(id)arg1;
- (void)realEnterTask:(id)arg1 FromFloatingView:(id)arg2 EnterTaskScene:(unsigned int)arg3;
- (void)onFloatingViewTap:(id)arg1 FromFloatingView:(id)arg2 WillEnterBackgroundTaskKey:(id)arg3 EnterTaskScene:(unsigned int)arg4;
- (void)markWidgetFullScreen:(_Bool)arg1;
- (_Bool)hasOutterContainerTask;
- (_Bool)hasOuterContentTaskOfBizName:(id)arg1;
- (id)getAllBackgroundTaskList;
- (id)getAllOutterTaskList;
- (void)setTaskIsForegournd:(_Bool)arg1 taskKey:(id)arg2;
- (id)getPassiveTask:(id)arg1;
- (id)getTask:(id)arg1;
- (id)lastestContainerTaskBizName;
- (void)setRelatedVCForContainer:(id)arg1 taskBizName:(id)arg2 taskBizKey:(id)arg3;
- (id)currentOutterContainerTask;
- (_Bool)removeUsedTaskData:(id)arg1;
- (_Bool)appendOrUpdateUsedTaskData:(id)arg1 notifyDelegate:(id)arg2;
- (_Bool)removeTask:(id)arg1 TaskBizKey:(id)arg2 animationType:(int)arg3;
- (_Bool)removeTask:(id)arg1 TaskBizKey:(id)arg2;
- (_Bool)tryAdjustTaskListOrderIfNeed:(id)arg1 NewTaskData:(id)arg2;
- (_Bool)removeTask:(id)arg1 TaskList:(id)arg2;
- (_Bool)replaceTask:(id)arg1 TaskList:(id)arg2;
- (_Bool)updateTaskState:(id)arg1 NewTaskData:(id)arg2;
- (_Bool)updateTask:(id)arg1 WithTaskData:(id)arg2;
- (_Bool)updateTaskWithTaskData:(id)arg1;
- (_Bool)tryUpdateTaskText:(id)arg1 NewTaskData:(id)arg2;
- (_Bool)isMPArticleURL:(id)arg1;
- (id)getBizNameFromURL:(id)arg1;
- (_Bool)hasTask:(id)arg1 TaskBizKey:(id)arg2;
- (_Bool)isTaskInForground:(id)arg1 TaskBizKey:(id)arg2;
- (id)getTask:(id)arg1 TaskBizKey:(id)arg2;
- (id)taskSnapShotImageWithTaskData:(id)arg1;
- (_Bool)updateTaskSnapshot:(id)arg1 taskBizName:(id)arg2 taskBizKey:(id)arg3;
- (_Bool)p_checkAndUpdateTask:(id)arg1 notifyDelegate:(id)arg2 errCode:(unsigned int *)arg3 isNotify:(_Bool)arg4;
- (_Bool)p_checkAndAddTask:(id)arg1 notifyDelegate:(id)arg2 errCode:(unsigned int *)arg3 isNotify:(_Bool)arg4;
- (_Bool)p_tryAddTaskAndMinimize:(id)arg1 notiDelegate:(id)arg2 errCode:(unsigned int *)arg3;
- (_Bool)checkAndAddOrReplaceTaskData:(id)arg1 isNotify:(_Bool)arg2;
- (_Bool)tryAddTaskAndMinimize:(id)arg1 notiDelegate:(id)arg2 errCode:(unsigned int *)arg3;
- (_Bool)tryAddTaskAndMinimize:(id)arg1 NotiDelegate:(id)arg2;
- (_Bool)maximizeTask:(id)arg1 TaskBizKey:(id)arg2;
- (_Bool)checkTaskMaxCountOrShowTipsBeforeAdd:(id)arg1 pendingTaskContext:(id)arg2;
- (_Bool)canShowMinimizeOperationWithTaskBizName:(id)arg1;
- (_Bool)canShowMinimizeOperation;
- (id)minimizeTaskListWithTaskBizName:(id)arg1;
- (void)delayRemoveTmpSnapShotViews;
- (_Bool)checkInCurrentTransionWithTaskBizName:(id)arg1 taskBizKey:(id)arg2;
- (void)onMinimizeAnimationEnd:(id)arg1;
- (void)onMinimizeAnimationEnd:(id)arg1 TaskBizKey:(id)arg2;
- (void)onMinimizeAnimationBegin:(id)arg1 FromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (void)onMinimizeAnimationBegin:(id)arg1 TaskBizKey:(id)arg2 FromFrame:(struct CGRect)arg3 toFrame:(struct CGRect)arg4 duration:(double)arg5;
- (void)resetMinimizeAnimationTaskData;
- (void)performMinimizeAnimationWithTaskBizName:(id)arg1 taskBizKey:(id)arg2 animated:(_Bool)arg3;
- (void)performMinimizeAnimationWithTaskBizName:(id)arg1 taskBizKey:(id)arg2;
- (struct CGRect)getConvertedVisbleFrameWithOuterContentSize:(struct CGSize)arg1;
- (struct CGRect)getConvertedVisibleFrame:(id)arg1 TaskBizKey:(id)arg2 toWindow:(id)arg3;
- (struct CGRect)getConvertedVisibleFrame:(id)arg1 TaskBizKey:(id)arg2;
- (id)getCurrentMaskPathConvertedToCurrentScreenCoordinates;
- (id)getCurrentAbsorbFloatingView;
- (id)getCurrentFloatingView;
- (id)getTransitionFloatingView:(id)arg1;
- (id)getOutterTaskListFloatingView:(id)arg1 TaskBizKey:(id)arg2;
- (id)getTransitionFloatingView:(id)arg1 TaskBizKey:(id)arg2;
- (void)onServiceClearData;
- (void)loadTaskListFromFileAndShowAbsorbFloatingView;
- (void)onServiceInit;
- (id)transformAffStarDataToMinimizeTaskData:(id)arg1;
- (id)transformMinimizeTaskDataToAffStarOpt:(id)arg1;
- (id)transformMinimizeTaskDataToStarOpt:(id)arg1;
- (void)handleAffStarSyncDataChange:(id)arg1;
- (void)analyzeArrSyncTaskData:(id)arg1 dicAddTaskData:(id)arg2 dicDeleteTaskData:(id)arg3;
- (id)mergeArrTaskDataInLocalAndAff:(id)arg1;
- (id)getArrTaskDataFromAff;
- (void)delteTaskAndMinimizeInAff:(id)arg1;
- (void)addTaskAndMinimizeToAff:(id)arg1;
- (void)handleServiceDataSynInit;
- (id)filterArrTaskDataInSwitchClose:(id)arg1;
- (_Bool)checkIsNeedSynData:(id)arg1;
- (_Bool)operateMinimizeTaskDataSyn:(id)arg1 isAdd:(_Bool)arg2;
- (_Bool)checkIsNeedOperateDataSyn:(id)arg1 isAdd:(_Bool)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processNewXmlStarcmd:(id)arg1 andNsUsrName:(id)arg2;
- (unsigned int)addSceneForViewControllerName:(id)arg1;
- (unsigned int)bizTypeFromTaskBizName:(id)arg1;
- (void)reportSmallSessionEndWithScene:(unsigned int)arg1;
- (void)reportSmallSessionStartWithTaskData:(id)arg1 scene:(unsigned int)arg2;
- (void)generalReportWithTaskData:(id)arg1 eventType:(unsigned int)arg2 andScene:(unsigned int)arg3;
- (void)tryReportAbsorbFloatingViewFoldStateChange:(_Bool)arg1;
- (void)reportMoveContainerOperationWithMoveContext:(id)arg1 toPoint:(struct CGPoint)arg2;
- (void)tryReportRemovePassiveStateTaskOperation:(id)arg1 UserTrigger:(_Bool)arg2;
- (unsigned long long)opTypeFromMaximizeScene:(unsigned int)arg1;
- (void)tryReportRemoveTaskOperation:(id)arg1 IsLastTask:(_Bool)arg2 FromCloseButtonInListPage:(_Bool)arg3;
- (void)fillOperationCommonInfo:(id)arg1 Task:(id)arg2;
- (void)tryReportMinimizeOperation:(id)arg1 OpType:(unsigned long long)arg2;
- (void)reportMaximizeOperation:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)reportExitTaskListPage:(unsigned long long)arg1 exitType:(unsigned long long)arg2;
- (id)trySaveAggreSessionId:(_Bool)arg1;
- (id)getMiniSessionIdList:(id)arg1;
- (int)getReportState:(id)arg1;
- (long long)getIndexFromTaskList:(id)arg1 CurrentTask:(id)arg2;
- (long long)getTaskOrder:(id)arg1;
- (void)tryReportWhenUpdateTask:(id)arg1 NewTask:(id)arg2;
- (void)tryGenExtInfoAndReportNewTask:(id)arg1 overloadedType:(unsigned long long)arg2;
- (void)genExtInfoAndReportNewTask:(id)arg1;
- (unsigned long long)getTotalTaskCount;
- (void)checkAndMigrateOldNormalList;
- (void)callMinimizeTaskUpdateSnapshot:(id)arg1 preferredSize:(struct CGSize)arg2;
- (void)callMinimizeTaskDataRemoved:(id)arg1;
- (void)callMinimizeTaskDataExposed:(id)arg1;
- (_Bool)callMinimizeTaskDataEntered:(id)arg1 openContext:(id)arg2 enterTaskScene:(unsigned int)arg3;
- (id)notifityDelegateRecoverIfNeed:(id)arg1;
- (_Bool)recoverNotifyDelegate:(id)arg1;
- (_Bool)checkIfTaskValid:(id)arg1;
- (id)recoverLastAdsorbFloatingViewInfo;
- (_Bool)saveLastAdsorbFloatingViewInfo:(struct CGPoint)arg1 AggreSessionId:(id)arg2;
- (_Bool)saveLastAdsorbFloatingViewSessionId:(id)arg1;
- (_Bool)saveLastAdsorbFloatingViewPosition:(struct CGPoint)arg1;
- (void)addMinimizeTaskAnimationWithTaskData:(id)arg1 animationView:(id)arg2 fromViewFrame:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addMinimizeTaskAnimationForActionSheetWithTaskData:(id)arg1 animationView:(id)arg2 fromViewFrame:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addMinimizeTaskAnimationForActionSheetWithTaskData:(id)arg1 animationViewImage:(id)arg2 fromViewFrame:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showMinimizeAnimationFrom:(id)arg1 complete:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

