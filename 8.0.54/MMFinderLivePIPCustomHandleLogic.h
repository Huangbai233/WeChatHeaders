//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMFinderLivePIPPerformanceReportObj, MMFinderLivePIPRenderSpaceObject, MMFinderLivePictureInPictureReporter, MMFinderLiveTask, MMFinderLiveTaskId, MMFinderLiveViewController, NSMutableArray, NSMutableDictionary, NSObject, NSString, WCLoopMetricsCollector, WCPIPTextStateDescription;
@protocol OS_dispatch_semaphore;

@interface MMFinderLivePIPCustomHandleLogic
{
    _Bool _isLiveVCAppear;
    _Bool _isLivePlayerNeedStopRenderPixel;
    _Bool _isInBackground;
    _Bool _isResignActive;
    _Bool _is;
    _Bool _isPauseLiveForClosePIP;
    _Bool _isPauseLiveForPausePIP;
    _Bool _isHideLiveMinimizeView;
    _Bool _needAutoHandlePIPForEnterForeground;
    _Bool _isAutoStopPIP;
    _Bool _isSystemPIPStarted;
    _Bool _unablePIP;
    _Bool _isLiveContentUnDisplayed;
    _Bool _isAutoPausePlayer;
    _Bool _isAutoResumePlayer;
    _Bool _needTemporaryIgnoreMainVideoViewFrameChanged;
    _Bool _tryShowSwitchGuide;
    _Bool _hasRenderedLiveFramePixel;
    int _sourceIndex;
    int _lastLogSourceIndex;
    int _sourceUpdateIndex;
    int _lastLogSourceUpdateIndex;
    int _unvalidSourceCnt;
    MMFinderLiveTaskId *_taskId;
    CDUnknownBlockType _switchGuideTryShowCallback;
    unsigned long long _currentPIPStartScene;
    NSObject<OS_dispatch_semaphore> *_refreshLock;
    MMFinderLivePictureInPictureReporter *_reporter;
    WCPIPTextStateDescription *_liveStateDescription;
    WCLoopMetricsCollector *_sourceRefreshMetricsCollector;
    WCLoopMetricsCollector *_pipRenderMetricsCollector;
    MMFinderLivePIPPerformanceReportObj *_performanceReportObj;
    MMFinderLivePIPRenderSpaceObject *_liveSpaceObj;
    MMFinderLivePIPRenderSpaceObject *_operationSpaceObj;
    MMFinderLivePIPRenderSpaceObject *_floatingSpaceObj;
    NSMutableDictionary *_renderObjDict;
    NSObject<OS_dispatch_semaphore> *_renderIdLock;
    NSObject<OS_dispatch_semaphore> *_renderObjLock;
    double _lastRefreshTimeInterval;
    NSMutableArray *_refreshOverTimeList;
    NSMutableArray *_updateOverTimeList;
    double _refreshOverTimeLimitValue;
    double _updateOverTimeLimitValue;
    unsigned long long _logCnt;
    unsigned long long _sourceUpdateLogCnt;
    unsigned long long _lastRefreshSourceTime;
    struct CGSize _videoSize;
}

+ (struct CGRect)getDisplayRectWithNormalizedFrame:(struct CGRect)arg1 renderSize:(struct CGSize)arg2;
+ (id)getFillImageForVideoFrame:(id)arg1 renderSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property unsigned long long lastRefreshSourceTime; // @synthesize lastRefreshSourceTime=_lastRefreshSourceTime;
@property int unvalidSourceCnt; // @synthesize unvalidSourceCnt=_unvalidSourceCnt;
@property unsigned long long sourceUpdateLogCnt; // @synthesize sourceUpdateLogCnt=_sourceUpdateLogCnt;
@property int lastLogSourceUpdateIndex; // @synthesize lastLogSourceUpdateIndex=_lastLogSourceUpdateIndex;
@property int sourceUpdateIndex; // @synthesize sourceUpdateIndex=_sourceUpdateIndex;
@property unsigned long long logCnt; // @synthesize logCnt=_logCnt;
@property int lastLogSourceIndex; // @synthesize lastLogSourceIndex=_lastLogSourceIndex;
@property int sourceIndex; // @synthesize sourceIndex=_sourceIndex;
@property double updateOverTimeLimitValue; // @synthesize updateOverTimeLimitValue=_updateOverTimeLimitValue;
@property double refreshOverTimeLimitValue; // @synthesize refreshOverTimeLimitValue=_refreshOverTimeLimitValue;
@property(retain) NSMutableArray *updateOverTimeList; // @synthesize updateOverTimeList=_updateOverTimeList;
@property(retain) NSMutableArray *refreshOverTimeList; // @synthesize refreshOverTimeList=_refreshOverTimeList;
@property double lastRefreshTimeInterval; // @synthesize lastRefreshTimeInterval=_lastRefreshTimeInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *renderObjLock; // @synthesize renderObjLock=_renderObjLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *renderIdLock; // @synthesize renderIdLock=_renderIdLock;
@property(retain, nonatomic) NSMutableDictionary *renderObjDict; // @synthesize renderObjDict=_renderObjDict;
@property(retain, nonatomic) MMFinderLivePIPRenderSpaceObject *floatingSpaceObj; // @synthesize floatingSpaceObj=_floatingSpaceObj;
@property(retain, nonatomic) MMFinderLivePIPRenderSpaceObject *operationSpaceObj; // @synthesize operationSpaceObj=_operationSpaceObj;
@property(retain, nonatomic) MMFinderLivePIPRenderSpaceObject *liveSpaceObj; // @synthesize liveSpaceObj=_liveSpaceObj;
@property(nonatomic) _Bool hasRenderedLiveFramePixel; // @synthesize hasRenderedLiveFramePixel=_hasRenderedLiveFramePixel;
@property(retain, nonatomic) MMFinderLivePIPPerformanceReportObj *performanceReportObj; // @synthesize performanceReportObj=_performanceReportObj;
@property(retain, nonatomic) WCLoopMetricsCollector *pipRenderMetricsCollector; // @synthesize pipRenderMetricsCollector=_pipRenderMetricsCollector;
@property(retain, nonatomic) WCLoopMetricsCollector *sourceRefreshMetricsCollector; // @synthesize sourceRefreshMetricsCollector=_sourceRefreshMetricsCollector;
@property(nonatomic) _Bool tryShowSwitchGuide; // @synthesize tryShowSwitchGuide=_tryShowSwitchGuide;
@property(nonatomic) _Bool needTemporaryIgnoreMainVideoViewFrameChanged; // @synthesize needTemporaryIgnoreMainVideoViewFrameChanged=_needTemporaryIgnoreMainVideoViewFrameChanged;
@property(nonatomic) _Bool isAutoResumePlayer; // @synthesize isAutoResumePlayer=_isAutoResumePlayer;
@property(nonatomic) _Bool isAutoPausePlayer; // @synthesize isAutoPausePlayer=_isAutoPausePlayer;
@property(retain, nonatomic) WCPIPTextStateDescription *liveStateDescription; // @synthesize liveStateDescription=_liveStateDescription;
@property(retain, nonatomic) MMFinderLivePictureInPictureReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *refreshLock; // @synthesize refreshLock=_refreshLock;
@property(nonatomic) _Bool isLiveContentUnDisplayed; // @synthesize isLiveContentUnDisplayed=_isLiveContentUnDisplayed;
@property(nonatomic) _Bool unablePIP; // @synthesize unablePIP=_unablePIP;
@property(nonatomic) _Bool isSystemPIPStarted; // @synthesize isSystemPIPStarted=_isSystemPIPStarted;
@property(nonatomic) _Bool isAutoStopPIP; // @synthesize isAutoStopPIP=_isAutoStopPIP;
@property(nonatomic) _Bool needAutoHandlePIPForEnterForeground; // @synthesize needAutoHandlePIPForEnterForeground=_needAutoHandlePIPForEnterForeground;
@property(nonatomic) _Bool isHideLiveMinimizeView; // @synthesize isHideLiveMinimizeView=_isHideLiveMinimizeView;
@property(nonatomic) _Bool isPauseLiveForPausePIP; // @synthesize isPauseLiveForPausePIP=_isPauseLiveForPausePIP;
@property(nonatomic) _Bool isPauseLiveForClosePIP; // @synthesize isPauseLiveForClosePIP=_isPauseLiveForClosePIP;
@property(nonatomic) _Bool is; // @synthesize is=_is;
@property(nonatomic) _Bool isResignActive; // @synthesize isResignActive=_isResignActive;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long currentPIPStartScene; // @synthesize currentPIPStartScene=_currentPIPStartScene;
@property(copy, nonatomic) CDUnknownBlockType switchGuideTryShowCallback; // @synthesize switchGuideTryShowCallback=_switchGuideTryShowCallback;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isLivePlayerNeedStopRenderPixel; // @synthesize isLivePlayerNeedStopRenderPixel=_isLivePlayerNeedStopRenderPixel;
@property(nonatomic) _Bool isLiveVCAppear; // @synthesize isLiveVCAppear=_isLiveVCAppear;
- (long long)isContainRenderId:(id)arg1;
- (_Bool)clearAllRenderIds;
- (_Bool)removeRenderId:(id)arg1;
- (_Bool)addRenderId:(id)arg1 inSpace:(long long)arg2;
- (_Bool)insertRenderId:(id)arg1 inSpace:(long long)arg2;
- (_Bool)addStaticLastRenderId:(id)arg1 inSpace:(long long)arg2;
- (_Bool)insertStaticFirstRenderId:(id)arg1 inSpace:(long long)arg2;
- (_Bool)insertRenderId:(id)arg1 aboveRenderObjWithBusinessIds:(id)arg2 inSpace:(long long)arg3;
- (_Bool)insertRenderId:(id)arg1 belowRenderObjWithBusinessIds:(id)arg2 inSpace:(long long)arg3;
- (_Bool)insertRenderId:(id)arg1 aboveAnyRenderObjWithBusinessNames:(id)arg2 inSpace:(long long)arg3;
- (_Bool)insertRenderId:(id)arg1 belowAnyRenderObjWithBusinessNames:(id)arg2 inSpace:(long long)arg3;
- (void)checkRenderIdsValid;
- (void)checkRenderObjectsValid:(long long)arg1;
- (void)clearRenderObjects:(long long)arg1;
- (void)updateRenderObject:(id)arg1;
- (void)handleVideoFrame:(id)arg1;
- (void)notifyWidgetsRootViewWillDisappear;
- (void)notifyWidgetsRootViewDidAppear;
- (void)notifyWidgetsEnterBackground;
- (void)notifyWidgetsEnterForeground;
- (void)showLiveMinimizeView;
- (void)hideLiveMinimizeView;
- (_Bool)checkNeedStartPIPTracking;
- (_Bool)checkNeedAutoRestartPIPForEnterForeground;
- (_Bool)checkNeedAutoStopPIPForEnterForeground;
- (void)cancelHandlePIPInForeground;
- (void)autoRestartPIPForEnterForeground;
- (void)autoHandlePIPForEnterForeground;
- (_Bool)checkNeedAutoRestorePIPForEnterForeground;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)clearTags;
- (void)willEnterForeground:(id)arg1;
- (struct CGRect)getAbsoluteTrtcConnectMicViewFrame;
- (struct CGRect)getAbsoluteVideoContainerViewFrame;
- (struct CGSize)getAbsoluteWindowSizeForCurrUIOrientation;
- (double)getVideoContainerWHPercent;
- (struct CGRect)getNormalizedMainVideoViewFrame;
- (struct CGRect)getAbsoluteMainVideoViewFrame;
- (struct CGRect)getLocalAudioModeAbsoluteRenderViewFrame;
- (struct CGRect)getAbsoluteRenderViewFrame;
- (void)stopLoading;
- (void)startLoading;
- (void)updateRenderSizeFitMode;
- (_Bool)hasWidgetImageForAttach;
- (void)handleForPkAtmosphereBackgroundViewRefresh:(id)arg1;
- (void)handleForReplayStopgapViewRefresh:(id)arg1;
- (void)handleForHLSPlayerViewRefresh:(id)arg1;
- (void)handleForTRTCContainerViewRefresh:(id)arg1;
- (void)handleForAudioModeBackPlayerViewRefresh:(id)arg1;
- (void)handleForAdvertisementPlayerViewRefresh:(id)arg1;
- (void)handleForCDNContainerViewRefresh:(id)arg1;
- (void)handleForLiveStateTextRefreshWithLiveId:(unsigned long long)arg1;
- (void)handleForTrialTimeOutMaskViewRefresh:(id)arg1;
- (void)handleForAnchorBlurBackgroundViewRefresh:(id)arg1;
- (void)handleForAudioMicFromOtherAnchorVideoBackgroundRefresh:(id)arg1;
- (void)handleForAudioMicFromOtherAnchorCoverImageRefresh:(id)arg1;
- (void)handleForAudioMicFromAudienceUserOperationViewRefresh:(id)arg1;
- (void)handleForAudioModeCoverImageRefresh:(id)arg1;
- (void)handleForAudioMicFromOtherAudienceUserViewRefresh:(id)arg1;
- (void)onLiveViewDirtyNotify:(id)arg1;
- (void)onMainSceneSizeChangedFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (void)onLiveTask:(id)arg1 livePlayStatusForAudienceChanged:(long long)arg2;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onLiveTask:(id)arg1 trtcHasVideoSrcChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 isAssistantValueChanged:(_Bool)arg2;
- (void)onLiveViewControllerDidBePopedOrDismissed:(id)arg1;
- (void)onLiveViewControllerWillDisappear:(id)arg1;
- (void)onLiveViewControllerDidAppear:(id)arg1;
- (void)onLiveViewControllerWillAppear:(id)arg1;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(_Bool)arg2 isPureAudioDisplayModeValueChanged:(_Bool)arg3 showTip:(_Bool)arg4;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(_Bool)arg2 isPureAudioDisplayModeValueChanged:(_Bool)arg3;
- (void)onLiveTask:(id)arg1 minimizeWindowDidClosed:(_Bool)arg2 pipMode:(_Bool)arg3;
- (void)onLiveTask:(id)arg1 appSceneChanged:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 videoFPSChanged:(unsigned int)arg2;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(_Bool)arg2;
- (void)checkAndUpdateRenderSizeForVideoSizeChanged:(id)arg1;
- (void)onLiveTask:(id)arg1 replayRemoteVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTask:(id)arg1 trtcLocalVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTask:(id)arg1 trtcMainRemoteVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTask:(id)arg1 cdnPlayRemoteVideoSizeChanged:(struct CGSize)arg2;
- (void)onFinderLivePIPStateTextRefreshWithLiveId:(unsigned long long)arg1;
- (void)onLiveReplayViewPlayerFrameChanged:(id)arg1 liveTaskId:(id)arg2 newPlayerFrame:(struct CGRect)arg3;
- (void)destroy;
- (void)onLiveViewAdvertisementVideoPlayFinished:(id)arg1;
- (void)onLiveView:(id)arg1 enableShowLiveRoomCoverImageViewChanged:(_Bool)arg2;
- (void)onLiveView:(id)arg1 cdnPlayerViewAppearanceChanged:(_Bool)arg2;
- (void)updateRenderViewFrame;
- (void)onLiveViewConnectMicViewFrameChanged:(id)arg1 newConnectMicViewFrame:(struct CGRect)arg2;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(struct CGRect)arg2;
- (void)onLiveView:(id)arg1 videoViewAppearanceChanged:(_Bool)arg2;
- (id)currentReplayController;
- (_Bool)isReplayLive;
- (_Bool)needOpenLivePIP;
- (_Bool)checkMinimizeWindowModeUnvalid;
- (_Bool)isOpeningLivePIPMinimizeWindow;
- (void)handleForAttachWidgetsInReplayView:(id)arg1;
- (void)handleForAttachWidgetsInOperationView:(id)arg1;
- (void)handleForAttachWidgetsInLiveView:(id)arg1;
@property(readonly, nonatomic) _Bool isMinimizeWindowCurrShowPauseBtn;
@property(readonly, nonatomic) _Bool isLiveCurrentPlaying;
- (void)synchronizeLivePicState;
- (void)updateVideoSize:(struct CGSize)arg1 cdn:(_Bool)arg2;
- (id)replayLiveTask;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) MMFinderLiveViewController *finderLiveViewController;
- (_Bool)checkCurrHasPIPAuthority;
- (void)onPIPAuthorityAchieved;
- (void)onPIPAuthorityOccupied;
- (void)showPIPSwitchGuideIfNeed;
- (id)getLiveStateTextDescription;
- (void)clearTemporaryIgnoreMainVideoViewFrameChangeTag;
- (void)unTagTemporaryIgnoreMainVideoViewFrameChanged;
- (void)tagTemporaryIgnoreMainVideoViewFrameChanged;
- (_Bool)needSaveSrcIfPossible;
- (_Bool)needCollectSrcPixelBuffer;
- (void)checkNeedAutoResumePlayer;
- (void)checkNeedAutoPausePlayer;
- (void)tagAttachWidgetRenderCompleted;
- (void)tagPixelBufferRenderCompleted;
- (id)currentRenderIdList;
- (id)currentRenderObjDict;
- (void)clearVideoFrames;
- (void)refresh:(id)arg1 sourceId:(id)arg2;
- (void)onCurrentActivePIPTaskBeRemoved;
- (void)checkNeedResumeLiveAndStartTracingForPIP;
- (void)onStopCustomPixelTransfer;
- (void)onStartCustomPixelTransfer;
- (_Bool)isRenderIdUnValid:(id)arg1;
- (_Bool)isAttachWidgetUnValid:(id)arg1;
- (_Bool)isVideoFrameUnValid:(id)arg1;
- (_Bool)isRenderObjUnValid:(id)arg1;
- (void)delayReportForResumePIP;
- (void)delayReportForPausePIP;
- (void)onPlayerTimeControlStatusChanged:(long long)arg1;
- (void)unDisplayLiveContent;
- (void)displayLiveContent;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)invokeRestoreCompletion:(CDUnknownBlockType)arg1 restore:(_Bool)arg2;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)handlePixelBufferRefresh:(id)arg1;
- (void)clearAttachSources;
- (struct CGRect)getHandledMainVideoViewFrameForMultiScene:(struct CGRect)arg1;
- (struct CGRect)getRenderViewFrame;
- (void)resetTagsForStartHandle;
- (void)stopHandle;
- (void)startHandle;
- (id)getCurrentBusinessId;
- (id)getVideoSrcId;
- (_Bool)isLiveCurrentCDNPlay;
- (struct CGSize)getCurrentVideoFrameSize;
- (struct CGSize)getFloorNormalizedSize:(struct CGSize)arg1;
- (struct CGSize)getCurrRenderSize;
- (struct CGSize)getRenderSize;
- (_Bool)enableStartPictureInPicture;
- (void)createReporter;
- (void)initNotifications;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initDefaultSource;
- (id)initWithTaskId:(id)arg1;
- (void)createPerformanceReportObj;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)onEndRenderBuffer:(struct CGSize)arg1;
- (void)onBeginRenderBuffer;
- (void)onEndAttachWidgets:(unsigned long long)arg1;
- (void)onBeginAttachWidgets;
- (void)onEndNewRenderBuffer:(struct CGSize)arg1;
- (void)onBeginNewRenderBuffer;
- (void)onEndRenderPixel;
- (void)onBeginRenderPixel;
- (void)onEndRefreshSourcePixel;
- (void)onBeginRefreshSourcePixel;
- (double)getUpdateOverTimeLimitValue;
- (double)getRefreshOverTimeLimitValue;
- (void)increateUnvalidSourceCnt;
- (void)increaseSourceUpdateIndex;
- (void)increaseSourceIndex;
- (void)logForSourcePixelBuffer;
- (void)stopLogForSourcePixelBuffer;
- (void)contineLogForSourcePixelBuffer;
- (void)startLogForSourcePixelBuffer;
- (void)checkVideoFrameUpdateToCacheOverTime;
- (void)checkVideoFrameRefreshOverTime;
- (void)reportPerformance;
- (void)createMetricsCollectors;
- (void)initPerformanceDefaultSource;
- (id)getRenderSpaceObj:(long long)arg1;
- (void)onRenderObjChanged:(long long)arg1;
- (void)onRenderObjWillUpdated:(id)arg1;
- (id)innerGetTempRenderObjDictWithType:(long long)arg1;
- (id)innerGetTempRenderObjDict;
- (_Bool)innerClearUnValidRenderObjects:(long long)arg1;
- (_Bool)innerClearRenderObjects:(long long)arg1;
- (_Bool)innerClearAllRenderObjects;
- (_Bool)innerRemoveRenderObject:(id)arg1;
- (_Bool)innerUpdateRenderObject:(id)arg1;
- (_Bool)innerClearUnValidRenderIdList;
- (id)innerGetRenderIdListDescription;
- (id)innerGetTempRenderIdList;
- (_Bool)innerClearAllRenderIds;
- (long long)innerCheckIsContainRenderId:(id)arg1;
- (_Bool)innerRemoveRenderId:(id)arg1;
- (_Bool)innerAddRenderId:(id)arg1 inSpace:(long long)arg2;
- (_Bool)innerInsertRenderId:(id)arg1 inSpace:(long long)arg2;
- (_Bool)innerAddStaticLastRenderId:(id)arg1 inSpace:(long long)arg2;
- (_Bool)innerInsertStaticFirstRenderId:(id)arg1 inSpace:(long long)arg2;
- (_Bool)innerInsertRenderId:(id)arg1 aboveRenderObjWithBusinessIds:(id)arg2 inSpace:(long long)arg3;
- (_Bool)innerInsertRenderId:(id)arg1 belowRenderObjWithBusinessIds:(id)arg2 inSpace:(long long)arg3;
- (_Bool)innerInsertRenderId:(id)arg1 aboveAnyRenderObjWithBusinessNames:(id)arg2 inSpace:(long long)arg3;
- (_Bool)innerInsertRenderId:(id)arg1 belowAnyRenderObjWithBusinessNames:(id)arg2 inSpace:(long long)arg3;
- (void)initRenderDefaultSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

