//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSDictionary, NSMutableArray, NSObject, NSString, TencentLBSLocation, WAMemoryPressureRecord, WAThreadSafeMutableDictionary;
@protocol OS_dispatch_source;

@interface WAAppTaskMgr
{
    NSMutableArray *_arrJumpList;
    MMTimer *_timerCheckBackgroundTask;
    NSString *_curRemoteDebugAppID;
    NSString *_curRemoteDebugQrCodeID;
    _Bool _isBeingDismissTaskForIpadGame;
    unsigned int _locationCacheTime;
    NSObject<OS_dispatch_source> *_memoryWarningLevelSource;
    unsigned long long _lastMemoryWaringTimeStamp;
    unsigned long long _lastMemoryWarningPressureFlag;
    unsigned long long _currentMemoryWarningPressureFlag;
    WAMemoryPressureRecord *_memoryPressureRecord;
    NSDictionary *_dicMemoryWarningPolicies;
    WAThreadSafeMutableDictionary *_dicAppID2Task;
    NSString *_currentMatrixScene;
    TencentLBSLocation *_locationCache;
}

+ (id)genTitleTailWithDebugMode:(unsigned int)arg1;
+ (id)minimizeTaskDataFromWeAppTask:(id)arg1 isManually:(_Bool)arg2;
+ (id)minimizationTaskKeyWithAppID:(id)arg1 debbugMode:(unsigned int)arg2;
+ (id)lastAppIDWithViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int locationCacheTime; // @synthesize locationCacheTime=_locationCacheTime;
@property(retain, nonatomic) TencentLBSLocation *locationCache; // @synthesize locationCache=_locationCache;
@property(copy, nonatomic) NSString *currentMatrixScene; // @synthesize currentMatrixScene=_currentMatrixScene;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *dicAppID2Task; // @synthesize dicAppID2Task=_dicAppID2Task;
@property(retain, nonatomic) NSDictionary *dicMemoryWarningPolicies; // @synthesize dicMemoryWarningPolicies=_dicMemoryWarningPolicies;
@property(retain, nonatomic) WAMemoryPressureRecord *memoryPressureRecord; // @synthesize memoryPressureRecord=_memoryPressureRecord;
@property(nonatomic) unsigned long long currentMemoryWarningPressureFlag; // @synthesize currentMemoryWarningPressureFlag=_currentMemoryWarningPressureFlag;
@property(nonatomic) unsigned long long lastMemoryWarningPressureFlag; // @synthesize lastMemoryWarningPressureFlag=_lastMemoryWarningPressureFlag;
@property(nonatomic) unsigned long long lastMemoryWaringTimeStamp; // @synthesize lastMemoryWaringTimeStamp=_lastMemoryWaringTimeStamp;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningLevelSource; // @synthesize memoryWarningLevelSource=_memoryWarningLevelSource;
- (void)onWeAppServiceClosed;
- (void)onFontSizeChange;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)updateCurrentRemoteDebugQrCodeID:(id)arg1;
- (id)getCurrentRemoteDebugQrCodeID;
- (void)updateCurrentRemoteDebugAppID:(id)arg1;
- (id)getCurrentRemoteDebugAppID;
- (void)resumeAllGame:(_Bool)arg1;
- (void)pauseAllGame;
- (id)allGameViewController;
- (_Bool)isWeAppStatusBarHidden;
- (_Bool)isWeAppScreenOn;
- (unsigned int)maxGameTaskRunningCount;
- (unsigned int)maxSharedResourceBackgroundTaskRunningCount;
- (unsigned int)maxTaskRunningCount;
- (void)onTimerCheckBackgroundTask:(id)arg1;
- (void)invadateCheckBackgroundTaskTimer;
- (void)startCheckBackgroundTaskTimer;
- (void)setMatrixWeAppSceneByTask:(id)arg1;
- (void)refreshMatrixWeAppScene;
- (void)refreshMatrixWeAppUserTypeAndCustomInfo;
- (void)taskNavigatonViewDidDisappear:(id)arg1;
- (void)taskNavigatonViewWillAppear:(id)arg1;
- (void)taskDidRestoreIntermediatePageWhenLaunch:(id)arg1;
- (void)taskWillRestoreIntermediatePageWhenLaunch:(id)arg1;
- (void)taskDidCancelColdLaunchWithAppID:(id)arg1;
- (void)taskDidColdLaunchFaiedWithAppID:(id)arg1;
- (void)taskDidFinishLaunchWithAppID:(id)arg1;
- (void)taskDidFinishHotLaunchWithAppID:(id)arg1;
- (void)taskDidFinishColdLaunchWithAppID:(id)arg1;
- (void)taskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)taskDidClose:(id)arg1;
- (void)checkAndCloseExceedMaxConcurrentCountTask;
- (_Bool)isGameBackgroundTaskAllowToClose:(id)arg1;
- (void)checkGameAppBackgroundTask:(id)arg1;
- (void)abandonPrefretchPreloadTaskInLaunchingTaskIfNeeded;
- (void)closeAllWebViewInNavigatorTask;
- (void)closeTimeoutBackgoundTask;
- (void)closeBackgroundJITRuntimeGame:(_Bool)arg1 inScene:(unsigned long long)arg2;
- (void)closeBackgroundTask:(_Bool)arg1 inScene:(unsigned long long)arg2 didCloseWeAppCount:(unsigned int *)arg3 simulatedWeAppCount:(unsigned int *)arg4 gameCount:(unsigned int *)arg5;
- (void)closeBackgroundTask:(_Bool)arg1 inScene:(unsigned long long)arg2;
- (void)closeAllTaskUseTips:(_Bool)arg1 tipTitle:(id)arg2 tipContent:(id)arg3 includeForeSimulatedNative:(_Bool)arg4 reason:(unsigned long long)arg5;
- (void)onAppTaskClose:(id)arg1;
- (void)closeGameTaskOnNavigationController:(id)arg1;
- (void)closeTask:(id)arg1 reason:(unsigned long long)arg2;
- (void)closeTask:(id)arg1;
- (void)deleteTask:(id)arg1;
- (id)tryGetPrevTaskWithAppId:(id)arg1 username:(id)arg2 debugModeType:(unsigned long long)arg3;
- (unsigned int)getThreadIdForAppid:(id)arg1;
- (id)currentForegroundTask;
- (void)callOnTerminateContact:(id)arg1 appid:(id)arg2;
- (void)callOnTerminateAppID:(id)arg1;
- (void)endRemoteDebugIfNeededForAppid:(id)arg1;
- (id)getActivityDescriber;
- (id)allTaskArray;
- (void)removeTaskFromMapWithAppID:(id)arg1;
- (void)addTaskToMap:(id)arg1;
- (id)getTaskWithUsername:(id)arg1;
- (id)getTaskWithAppID:(id)arg1;
- (id)getAndNewTaskIfNotExistWithAppID:(id)arg1 relativeURL:(id)arg2 taskExtInfo:(id)arg3 debugModeType:(unsigned int)arg4 isNewTask:(_Bool *)arg5 isJumpFromWeApp:(_Bool)arg6;
- (_Bool)isTaskInRunning:(id)arg1 debugMode:(unsigned long long)arg2;
- (_Bool)isTaskForContactInRunning:(id)arg1 debugMode:(unsigned long long)arg2;
- (_Bool)isBeingDismissTaskForIpadGame;
- (_Bool)isReachMaxBackgroundBluetoothAppCount;
- (unsigned int)currentBackgroundBluetoothAppCount;
- (_Bool)isReachMaxBackgroundLocationAppCount;
- (unsigned int)currentBackgroundLocationAppCount;
- (_Bool)isReachMaxSharedResourceBackgroundAppCount;
- (unsigned int)currentSharedResourceBackgroundAppCount;
- (void)updateCacheLocation:(id)arg1 cacheTime:(unsigned int)arg2;
- (_Bool)isExistAppMediaPlaying;
- (_Bool)isExistAppLivePlaying;
- (_Bool)isExistAppLiveForegroundPlaying;
- (_Bool)isExistAppLivePushing;
- (_Bool)isExistAppWeMediaPlaying;
- (_Bool)isExistAppWXAudioPlaying;
- (_Bool)isExistAppInnerAudioPlaying;
- (_Bool)isExistAppRecording;
- (_Bool)hasGameTaskOnNavigationController:(id)arg1;
- (id)firstAppIdFromRootViewController:(id)arg1;
- (id)getForegroundAppID;
- (unsigned long long)getAppTaskCount;
- (void)syncSendJSEventToTask:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviewId:(unsigned int)arg4 eventId:(unsigned int)arg5;
- (void)sendJSEventToTaskAllWebView:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviews:(id)arg4;
- (void)closeTaskWithAppID:(id)arg1 reason:(unsigned long long)arg2;
- (void)closeTaskWithAppID:(id)arg1;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopAllParent:(_Bool)arg5 completeHandler:(CDUnknownBlockType)arg6;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopParent:(_Bool)arg5 completeHandler:(CDUnknownBlockType)arg6;
- (void)startProvideApi:(id)arg1 openInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)fillReportItemInfoForWeAppLaunchLocation:(id)arg1 locationDictionary:(id)arg2;
- (_Bool)needGetLocationWhenCacheExpired:(unsigned long long)arg1;
- (_Bool)needReportLocation:(unsigned long long)arg1;
- (void)openAppTaskWithContact:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 handlerWrapper:(id)arg4;
- (void)clearAllLifeCycleRecordDataIfNeeded;
- (void)onApplicationWillEnterSuspend;
- (void)delayCheckBackgroundRemainingTime;
- (_Bool)shouldScheduleBackgroundTimingCheck;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)stopActivityWithStateList:(id)arg1 AppTask:(id)arg2;
- (void)onPositiveTaskCloseBtnClick:(id)arg1 CloseFromState:(_Bool)arg2;
- (void)onLeaveTaskDoneAndWillEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)openWeApp:(id)arg1 openContext:(id)arg2 weappNav:(id)arg3;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)minimizePendingTaskContextWithTaskBizKey:(id)arg1 generateType:(unsigned long long)arg2 weAppVC:(id)arg3;
- (id)getAppTaskWithMinimizationTaskKey:(id)arg1;
- (void)tryRescueMinimizeAppTaskWhenViewDidBeDismissed:(id)arg1;
- (_Bool)maximizeAppTask:(id)arg1;
- (void)unminimizeAppTask:(id)arg1;
- (_Bool)updateMinimizedTask:(id)arg1 manually:(_Bool)arg2;
- (_Bool)updateSnapShotImg:(id)arg1 appTask:(id)arg2;
- (_Bool)updateMinimizeSnapShotImg:(id)arg1;
- (void)doFakeMinimizeAnimationWithTask:(id)arg1;
- (_Bool)minimizeAppTask:(id)arg1 manually:(_Bool)arg2 generateType:(unsigned long long)arg3;
- (_Bool)isAppTaskUpdatingBackgroundLocation:(id)arg1;
- (_Bool)isAppTaskHasBackgroundResourceActivity:(id)arg1;
- (_Bool)isAppTaskManuallyMinimized:(id)arg1;
- (_Bool)isAppTaskMinimized:(id)arg1;
- (_Bool)canMinimizeAppTaskOrShowTips:(id)arg1;
- (_Bool)isAppTaskSupportMinimization:(id)arg1;
- (_Bool)isFormJumpWeAppRingWithFromAppId:(id)arg1 toAppId:(id)arg2;
- (unsigned long long)getJumpRoleWithAppId:(id)arg1;
- (void)figureRingJumpWeAppRelationWithFromAppId:(id)arg1 toAppId:(id)arg2 jumpScene:(unsigned long long)arg3;
- (void)addJumpWeAppRelationWithFromAppId:(id)arg1 toAppId:(id)arg2 jumpScene:(unsigned long long)arg3;
- (void)generateJumpWeAppOperation:(id *)arg1 withAppId:(id)arg2 extInfo:(id)arg3;
- (void)addNativeJumpWeAppRefererInfoIfHave:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3;
- (void)clearJumpList;
- (void)removeJumpWeAppLastInfo;
- (id)getBeforeAppIdIfHave:(id)arg1;
- (id)getAppIdListFromJumpWeAppList;
- (void)getJumpWeAppLastInfo:(id *)arg1 fromInfo:(id *)arg2 withAppId:(id)arg3;
- (void)addJumpWeAppRelationIfHave:(id)arg1;
- (void)processJumpWeAppBeforeOpenTaskWithAppId:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 getOperation:(id *)arg4;
- (void)jumpWeAppCateGoryOnServiceClearData;
- (void)jumpWeAppCategoryOnServiceInit;
- (void)fireMemoryEvent:(unsigned int)arg1;
- (void)fakeUrgentMemoryWarning;
- (void)fakeMemoryWarning;
- (_Bool)checkAvailableMemoryIsEnough;
- (void)reportForegroundForceCloseForGameTask:(id)arg1 reason:(unsigned long long)arg2;
- (void)reportForegroundForceCloseForTask:(id)arg1;
- (void)reportAllAppForceClose;
- (void)onDispatchSourceDidReceiveMemoryPressure:(unsigned long long)arg1;
- (void)onDispatchSourceDidBackToNormalMemoryPressure;
- (void)fireMemoryWarningEventToAllTasks;
- (void)fireMemoryWarningEventToActiveTasks;
- (void)unregisterMemoryWarningLevelListener;
- (void)registerMemoryWarningLevelListener;
- (void)unregisterMemoryPressureRecord;
- (void)registerMemoryPressureRecord;
- (void)fetchMemoryWarningReleasePolicies;
- (unsigned long long)releasePreloadPageInForegroundTask;
- (unsigned long long)releaseBackgroundPageInForegroundTask;
- (void)releaseForegroundTaskDidCloseWeAppCount:(unsigned long long *)arg1 simulatedNativeCount:(unsigned long long *)arg2 gameCount:(unsigned long long *)arg3 reason:(unsigned long long)arg4 tipsContent:(id)arg5;
- (_Bool)isForegroundTaskNormalMemoryAndShouldBeIgnored:(id)arg1 whenCloseAllTaskByReason:(unsigned long long)arg2;
- (unsigned long long)releasePreloadPageInStackBackgroundTask;
- (unsigned long long)releaseForegroundPageInStackBackgroundTask;
- (unsigned long long)releaseBackgroundPageInStackBackgroundTask;
- (unsigned long long)releaseForegroundPageInNonStackBackgroundTask;
- (unsigned long long)releaseBackgroundPageInNonStackBackgroundTask;
- (void)releaseNonStackBackgroundTaskDidCloseWeAppCount:(unsigned int *)arg1 simulatedNativeCount:(unsigned int *)arg2 gameCount:(unsigned int *)arg3;
- (void)doMemoryReleasePolicy:(unsigned long long)arg1 forEvent:(unsigned long long)arg2;
- (void)triggerMemoryEvent:(unsigned long long)arg1;
- (void)releaseNonStackBackgroundJITRuntimeGameInScene:(unsigned long long)arg1;
- (void)releaseForegroundAppTaskOnJITGameTerminate;
- (void)notifyMemoryWarningCategoryOnApplicationWillEnterSuspend;
- (void)onForegroundTaskPreloadPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onForegroundTaskForegroundPageTerminatedBySystemTwiceMoreWithAppid:(id)arg1;
- (void)onForegroundTaskForegroundPageTerminatedBySystemTwiceWithAppid:(id)arg1;
- (void)onForegroundTaskForegroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onForegroundTaskBackgroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onStackBackgroundTaskPreloadPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onStackBackgroundTaskForegroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onStackBackgroundTaskBackgroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onNonStackBackgroundTaskPreloadPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onNonStackBackgroundTaskForegroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onNonStackBackgroundTaskBackgroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)resumeBOOMTerminatedPreloadTaskIfNeeded;
- (void)notifyMemoryWarningCategoryWillEnterForeground;
- (void)notifyMemoryWarningCategoryOnServiceClearData;
- (void)notifyMemoryWarningCategoryOnServiceInit;
- (void)taskDidResignBackgroundLocating:(id)arg1;
- (void)taskDidTriggerBackgroundLocating:(id)arg1;
- (unsigned int)backgroundLocatingAppCount;
- (id)backgroundLocatingAppList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

