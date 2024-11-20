//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class JSContext, JSVirtualMachine, MMContext, MMLockstepHandle, MMTCPHandle, MMTimer, MMUDPHandle, NSArray, NSCondition, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSThread, WAAppTaskExtInfo, WAApptaskPublicResLogic, WAContact, WAJSBindingUtilsAdaptor, WAJSCServiceInjectExtendScriptModel, WAJSContextPluginScheduler, WAJSCoreServiceOpenData, WAJSDebuggerConnection, WAJSThread, WAMagicARAdaptor, WAOpenGLView, WAPackageConfig, WAProvideApiConfig, WAWebViewController, WXAudioNative, WasmAdaptor, WeMediaApi, WeXNetAdaptor, WxaExternalInfo;
@protocol IWASkylineRuntime, IWXCanvasAdaptorAPI, IWXPhysxAdaptorAPI, WAJSCoreServiceDelegate, WAJSCoreServiceRemoteDelegate, WAJSServiceProtocol;

@interface WAJSCoreService
{
    unsigned int _workerFlowId;
    unsigned int _debugModeType;
    _Bool _isDebugAndVConsoleOpen;
    _Bool _isIgnoreRemoteCheckDomain;
    WxaExternalInfo *_wxaExternalInfo;
    unsigned long long _appVersion;
    unsigned int _appServiceMaxDataSize;
    WAAppTaskExtInfo *_taskExtInfo;
    NSString *_enterPath;
    unsigned int _enterScene;
    NSArray *_templates;
    WAContact *_contact;
    WAPackageConfig *_packageConfig;
    unsigned long long _taskRunningState;
    _Bool _jsThreadSuspended;
    _Bool _jsThreadDying;
    NSCondition *_condition;
    NSString *lastError;
    NSMutableSet *_setInjectedModule;
    unsigned int _subContextId;
    int _enterJsErrorFunctionCount;
    _Bool _stopReportJsErrorFunction;
    NSString *_relativeServiceJSUrl;
    _Bool _userScriptInjected;
    _Bool _extendedPrefixScriptInjected;
    MMUDPHandle *_udpHandle;
    MMTCPHandle *_tcpHandle;
    MMLockstepHandle *_lockstepHandle;
    WXAudioNative *_wxaudionative;
    WeMediaApi *_wemedia_api;
    struct GameEngineApp *_gameEngineApp;
    WasmAdaptor *_wasmAdaptor;
    NSObject<IWXPhysxAdaptorAPI> *_physxAdaptor;
    _Bool _isWasmInit;
    _Bool _isGameEngineInit;
    unsigned long long _closeTimeStampInMs;
    unsigned int _adWorkerId;
    WAMagicARAdaptor *_magicARAdaptor;
    CDUnknownBlockType _magicARCheckAvailableBlock;
    WAJSBindingUtilsAdaptor *_commonUtilsAdaptor;
    WeXNetAdaptor *_mnxnetAdaptor;
    _Bool _threadInjected;
    _Bool _publiclibInjectFinished;
    _Bool _m_bIsStartFromPreloadAppTask;
    _Bool _shouldUseComponentLazyLoad;
    _Bool _directInvokeJs;
    _Bool _hasInjectErr;
    _Bool _threadIdAssigned;
    _Bool _directInvokeOc;
    unsigned int _developerMarkedScene;
    unsigned int _preloadMoment;
    unsigned int _coldlaunchCostTimeInMs;
    unsigned int _aliveSeed;
    unsigned int _threadId;
    unsigned int _codeCacheVersion;
    NSString *_appID;
    double _threadInjectTime;
    JSVirtualMachine *_jsVirtualMachine;
    WAProvideApiConfig *_provideApiCfg;
    NSString *_instanceId;
    id <WAJSServiceProtocol> _serviceProtocol;
    id <WAJSCoreServiceDelegate> _delegate;
    id <WAJSCoreServiceRemoteDelegate> _remoteDelegate;
    WAWebViewController *_currentWebView;
    id <IWASkylineRuntime> _skylineRuntime;
    NSString *_serviceJSUrl;
    WAJSContextPluginScheduler *_pluginScheduler;
    unsigned long long _runningState;
    WAJSCoreServiceOpenData *_launchData;
    unsigned long long _preloadFinishTimeInMs;
    NSMutableDictionary *_weAppWorkers;
    WAApptaskPublicResLogic *_publicResLogic;
    WAJSDebuggerConnection *_jsDebugConnection;
    MMContext *_userContext;
    NSThread *_thread;
    NSMutableDictionary *_subContexts;
    JSContext *_renderContext;
    NSMutableDictionary *_workerFlows;
    NSMutableDictionary *_timerObjs;
    NSMutableSet *_eventHandlers;
    NSMutableArray *_prevEvents;
    NSMutableArray *_useCodeCacheFileNameListPubLib;
    NSMutableArray *_useCodeCacheFileNameListUsr;
    NSMutableDictionary *_extraInfo;
    NSObject<IWXCanvasAdaptorAPI> *_bindingApp;
    WAOpenGLView *_glview;
    NSMutableDictionary *_dicCheckAliveBlock;
    unsigned long long _xlog_pthreadId;
    MMTimer *_stopCFRunLoopTimer;
    NSMutableDictionary *_dicEventIdToSemaphore;
    NSMutableDictionary *_dicEventIdToSyncResult;
    WAJSCServiceInjectExtendScriptModel *_extendScriptModel;
    WAJSThread *_jsDebugThread;
    NSMutableArray *_preloadEvaluateRet;
    NSMutableArray *_codeLaunchEvaluateRet;
    NSMutableDictionary *_dictWXAudioExpt;
}

+ (void)setTransitInfo:(id)arg1 toDicParam:(id)arg2;
+ (void)setRefererInfo:(id)arg1 toDicParam:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictWXAudioExpt; // @synthesize dictWXAudioExpt=_dictWXAudioExpt;
@property(retain, nonatomic) NSMutableArray *codeLaunchEvaluateRet; // @synthesize codeLaunchEvaluateRet=_codeLaunchEvaluateRet;
@property(retain, nonatomic) NSMutableArray *preloadEvaluateRet; // @synthesize preloadEvaluateRet=_preloadEvaluateRet;
@property(nonatomic) _Bool directInvokeOc; // @synthesize directInvokeOc=_directInvokeOc;
@property(retain, nonatomic) WAJSThread *jsDebugThread; // @synthesize jsDebugThread=_jsDebugThread;
@property(nonatomic) unsigned int codeCacheVersion; // @synthesize codeCacheVersion=_codeCacheVersion;
@property(retain, nonatomic) WAJSCServiceInjectExtendScriptModel *extendScriptModel; // @synthesize extendScriptModel=_extendScriptModel;
@property(retain, nonatomic) NSMutableDictionary *dicEventIdToSyncResult; // @synthesize dicEventIdToSyncResult=_dicEventIdToSyncResult;
@property(retain, nonatomic) NSMutableDictionary *dicEventIdToSemaphore; // @synthesize dicEventIdToSemaphore=_dicEventIdToSemaphore;
@property(retain, nonatomic) MMTimer *stopCFRunLoopTimer; // @synthesize stopCFRunLoopTimer=_stopCFRunLoopTimer;
@property(nonatomic) unsigned long long xlog_pthreadId; // @synthesize xlog_pthreadId=_xlog_pthreadId;
@property(nonatomic) _Bool threadIdAssigned; // @synthesize threadIdAssigned=_threadIdAssigned;
@property(nonatomic) unsigned int threadId; // @synthesize threadId=_threadId;
@property(nonatomic) unsigned int aliveSeed; // @synthesize aliveSeed=_aliveSeed;
@property(retain, nonatomic) NSMutableDictionary *dicCheckAliveBlock; // @synthesize dicCheckAliveBlock=_dicCheckAliveBlock;
@property(retain) WAOpenGLView *glview; // @synthesize glview=_glview;
@property(retain) NSObject<IWXCanvasAdaptorAPI> *bindingApp; // @synthesize bindingApp=_bindingApp;
@property(retain) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSMutableArray *useCodeCacheFileNameListUsr; // @synthesize useCodeCacheFileNameListUsr=_useCodeCacheFileNameListUsr;
@property(retain, nonatomic) NSMutableArray *useCodeCacheFileNameListPubLib; // @synthesize useCodeCacheFileNameListPubLib=_useCodeCacheFileNameListPubLib;
@property(retain) NSMutableArray *prevEvents; // @synthesize prevEvents=_prevEvents;
@property(retain) NSMutableSet *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property _Bool hasInjectErr; // @synthesize hasInjectErr=_hasInjectErr;
@property(retain) NSMutableDictionary *workerFlows; // @synthesize workerFlows=_workerFlows;
@property(nonatomic) __weak JSContext *renderContext; // @synthesize renderContext=_renderContext;
@property(retain) NSMutableDictionary *subContexts; // @synthesize subContexts=_subContexts;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property __weak MMContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) WAJSDebuggerConnection *jsDebugConnection; // @synthesize jsDebugConnection=_jsDebugConnection;
@property(nonatomic) unsigned int coldlaunchCostTimeInMs; // @synthesize coldlaunchCostTimeInMs=_coldlaunchCostTimeInMs;
@property(nonatomic) _Bool directInvokeJs; // @synthesize directInvokeJs=_directInvokeJs;
@property(nonatomic) _Bool shouldUseComponentLazyLoad; // @synthesize shouldUseComponentLazyLoad=_shouldUseComponentLazyLoad;
@property(nonatomic) __weak WAApptaskPublicResLogic *publicResLogic; // @synthesize publicResLogic=_publicResLogic;
@property(retain, nonatomic) NSMutableDictionary *weAppWorkers; // @synthesize weAppWorkers=_weAppWorkers;
@property(nonatomic) unsigned long long preloadFinishTimeInMs; // @synthesize preloadFinishTimeInMs=_preloadFinishTimeInMs;
@property(nonatomic) unsigned int preloadMoment; // @synthesize preloadMoment=_preloadMoment;
@property(nonatomic) _Bool m_bIsStartFromPreloadAppTask; // @synthesize m_bIsStartFromPreloadAppTask=_m_bIsStartFromPreloadAppTask;
@property(retain, nonatomic) WAJSCoreServiceOpenData *launchData; // @synthesize launchData=_launchData;
@property(nonatomic) unsigned long long runningState; // @synthesize runningState=_runningState;
@property(retain, nonatomic) WAJSContextPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(copy, nonatomic) NSString *serviceJSUrl; // @synthesize serviceJSUrl=_serviceJSUrl;
@property(retain, nonatomic) id <IWASkylineRuntime> skylineRuntime; // @synthesize skylineRuntime=_skylineRuntime;
@property(retain, nonatomic) WAWebViewController *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(nonatomic) __weak id <WAJSCoreServiceRemoteDelegate> remoteDelegate; // @synthesize remoteDelegate=_remoteDelegate;
@property(nonatomic) __weak id <WAJSCoreServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WAJSServiceProtocol> serviceProtocol; // @synthesize serviceProtocol=_serviceProtocol;
@property(copy) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property _Bool publiclibInjectFinished; // @synthesize publiclibInjectFinished=_publiclibInjectFinished;
@property(retain, nonatomic) WAProvideApiConfig *provideApiCfg; // @synthesize provideApiCfg=_provideApiCfg;
@property(retain) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property _Bool threadInjected; // @synthesize threadInjected=_threadInjected;
@property double threadInjectTime; // @synthesize threadInjectTime=_threadInjectTime;
@property(copy) NSString *appID; // @synthesize appID=_appID;
@property unsigned int developerMarkedScene; // @synthesize developerMarkedScene=_developerMarkedScene;
- (struct __CVBuffer *)getPixelBufferBy:(unsigned int)arg1;
- (void *)getEGLContext:(struct OpaqueJSValue *)arg1;
- (void)modifyWebGLTexture:(struct OpaqueJSValue *)arg1 glTexture:(unsigned int)arg2;
- (void)OnCheckAccessCameraAndShowAlertFinish:(id)arg1;
- (struct ShoeConfig)magicarGetShoeConfig;
- (struct MonoDepthConfig)magicarGetDepthConfig;
- (struct HandConfig)magicarGetHandConfig;
- (struct BodyConfig)magicarGetBodyConfig;
- (struct OCRConfig)magicarGetOCRConfig;
- (struct FaceConfig)magicarGetFaceConfig;
- (struct WAAppInfo)magicarGetAppInfo;
- (struct OSDConfig)magicarGetOSDConfig;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)getFilePath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (void)checkIsMagicARAvailableNeedCamera:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onLibWorkerCreated:(unsigned int)arg1;
- (unsigned int)adWorkerId;
- (id)wxaudioTmpRootPath;
- (id)audioTmpRootPath;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)getAudioFilePath:(id)arg1;
- (_Bool)onWXAudioGetABTestBool:(id)arg1 defaultVal:(_Bool)arg2;
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)getFileData:(id)arg1;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (_Bool)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (id)weMediaGetAbsolutePath:(id)arg1;
- (void)weMediaTryStopAudioDevice:(unsigned long long)arg1;
- (_Bool)weMediaTryStartAudioDevice:(unsigned long long)arg1;
- (_Bool)weMediaGetExternalConfig:(id)arg1 defaultVal:(_Bool)arg2;
- (void)weMediaLOG:(int)arg1 log:(const char *)arg2;
- (id)getWeMediaApi;
- (id)getAudioNative;
- (id)getArrUseCodeCacheFileNameListUsr;
- (id)getArrUseCodeCacheFileNameListPubLib;
- (id)geExtroInfo;
- (id)getTaskExtInfo;
- (void)initGameEngine:(id)arg1 mb:(id)arg2;
- (void)initWASM:(id)arg1 mb:(id)arg2;
- (void)sendWeAppWorkerCreated:(unsigned int)arg1 error:(id)arg2;
- (id)getWeAppWorker:(unsigned int)arg1;
- (void)sendWorkerMessageToService:(unsigned int)arg1 msg:(id)arg2;
- (void)setupWeAppWorker;
- (void)getAllVMJSFootprintMemoryInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getWorkersVMJSFootprintMemoryInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getMainVMJSFootprintMemoryInBytesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)getAllVMJSFootprintMemoryInBytes;
- (unsigned long long)getWorkersVMJSFootprintMemoryInBytes;
- (unsigned long long)getMainVMJSFootprintMemoryInBytes;
- (id)extJSModelOnTarget:(unsigned long long)arg1 atTiming:(unsigned long long)arg2;
- (id)extJSOnTarget:(unsigned long long)arg1 atTiming:(unsigned long long)arg2;
- (id)extJSBeforeMainContextPublib;
- (id)extJSBeforeSubContextPublib;
- (id)getExtJSModels;
- (void)executeOnWorker:(unsigned int)arg1 invoker:(id)arg2;
- (id)systemTheme;
- (_Bool)hasWebViewId:(unsigned long long)arg1;
- (_Bool)isNativeWeApp;
- (void)releaseMagicBrushCore;
- (void)setupLazyInitMagicBrushCore;
- (id)getBindingApp;
- (id)jsCoreForIDWrap:(id)arg1;
- (void)jsCore_sendMessageToJSCDebugger:(id)arg1 jsCoreIDWrap:(id)arg2;
- (void)jsCore_disconnectJSCoreIDWrap:(id)arg1;
- (_Bool)jsCore_setupJSCDebuggerConnection:(CDUnknownBlockType)arg1 jsCoreIDWrap:(id)arg2;
- (_Bool)hasRemoreDebugger;
- (_Bool)hasLocalJSCore;
- (_Bool)isNewDubugMode;
- (_Bool)isLegacyDebugMode;
- (void)jSCore_invokeHandler:(id)arg1 param:(id)arg2 callbackID:(unsigned int)arg3 contextID:(unsigned int)arg4;
- (void)jSCore_publishHandler:(id)arg1 param:(id)arg2 webViewIDs:(id)arg3;
- (void)webCore_invoke:(id)arg1 param:(id)arg2;
- (void)stopRemoteDebug;
- (void)alterWillStop;
- (void)startRemoteDebug;
- (void)pluginCodeUsageHit:(id)arg1 version:(unsigned long long)arg2;
- (void)didFinishColdLaunch;
- (_Bool)isDidFinishColdLaunch;
- (void)recordUserScriptBatchInjectDetail:(id)arg1;
- (void)reportUserScriptInjectTime:(id)arg1 length:(long long)arg2 startTime:(unsigned long long)arg3 pluginId:(id)arg4 pluginVersion:(long long)arg5 engineType:(int)arg6 encryptLibCanUseBatchInject:(_Bool)arg7 codeCacheDetail:(id)arg8 jitLiteMode:(unsigned int)arg9;
- (void)reportUserScriptInjectTime:(id)arg1 length:(long long)arg2 startTime:(unsigned long long)arg3 pluginId:(id)arg4 pluginVersion:(long long)arg5 codeCacheDetail:(id)arg6;
- (void)reportScriptInjectTime:(id)arg1 length:(long long)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 preload:(unsigned int)arg5 engineType:(int)arg6 codeCacheDetail:(id)arg7 jitLiteMode:(unsigned int)arg8;
- (void)reportScriptInjectTime:(id)arg1 length:(long long)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 preload:(unsigned int)arg5 codeCacheDetail:(id)arg6;
- (void)invokeOnServiceThread:(CDUnknownBlockType)arg1;
- (void)invokeOnServiceThreadImpl:(CDUnknownBlockType)arg1;
- (_Bool)performOnService:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (void)evaluateJavascriptFile:(id)arg1 withSourceURL:(id)arg2;
- (id)evaluateJavaScriptFromStringInRenderContext:(id)arg1;
- (void)evaluateJavascript:(id)arg1 withSourceURL:(id)arg2;
- (void)sendJsInvoker:(id)arg1;
- (void)markSubPkgInjected:(id)arg1;
- (void)sendSubPkgReadyEvent:(id)arg1;
- (void)workThread_injectModuleAppServiceScript:(id)arg1;
- (void)injectModuleAppServiceWithModuleName:(id)arg1;
- (void)trimNavigateJSAPIFromDelayToForegroundPool;
- (void)executeDelayToForegroundJSAPI;
- (void)addDelayToForegroundJSAPI:(CDUnknownBlockType)arg1 jsapiName:(id)arg2;
- (void)threadDidReceiveBackground;
- (void)threadDidReceiveForeground;
- (void)resumeWorkingThreadToDie:(_Bool)arg1;
- (void)threadDidReceiveSuspend;
- (void)suspendWorkingThread;
- (void)checkWorkingThreadStatusWhenRunningStateChanged;
- (void)onRunningStateDidChanged:(unsigned long long)arg1;
- (void)onRunningStateWillChanged:(unsigned long long)arg1;
- (void)onWeAppEnterForeground:(id)arg1 isFromSystemAwake:(_Bool)arg2;
- (void)onWeAppEnterBackground:(long long)arg1;
- (void)asyncPrintConsoleLogToCurrentWebView:(id)arg1;
- (void)printConsoleLog:(id)arg1 level:(long long)arg2;
- (void)printConsoleLog:(id)arg1;
- (id)currentAppearance;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)setWxaExternalInfo:(id)arg1;
- (id)getCurPubResLogic;
- (unsigned int)getCurTaskRunningState;
- (_Bool)isGameClass;
- (_Bool)isGameApp;
- (_Bool)isService;
- (id)getWxaExternalInfo;
- (void)setIsIgnoreRemoteCheckDomain:(_Bool)arg1;
- (_Bool)isIgnoreRemoteCheckDomain;
- (void)setIsDebugAndVConsoleOpen:(_Bool)arg1;
- (_Bool)isDebugAndVConsoleOpen;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (unsigned int)getAppType;
- (unsigned long long)getEnvironmentType;
- (id)getCurrentPageQuery;
- (id)sourceOpenSDKAppID;
- (_Bool)isParentViewControllerDidAppear:(id)arg1;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)getParentViewController;
- (void)sendResultBeforeEnd:(id)arg1 resultType:(long long)arg2 handler:(id)arg3;
- (id)getWAContact;
- (id)getAppId;
- (id)getEventHandler:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)reportRequstPaymentApiPreOKCallResult:(id)arg1 forEvent:(unsigned int)arg2;
- (void)reportApiCallResult:(id)arg1;
- (void)workThread_invokeCallbackHandler:(id)arg1;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)onTimer:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)notifyJSInjectedOnMainThread:(id)arg1;
- (_Bool)isPlayingWeMedia;
- (_Bool)isPlayingWxAudio;
- (_Bool)isPlayingInnerAudio;
- (void)stopPlayingBackgroundAudio;
- (_Bool)isPlayingBackgroundAudio;
- (_Bool)isMonopolizeBackgroundAudio;
- (void)workThread_reportPubLibCoverageForJSContext:(id)arg1 appid:(id)arg2 publibStringVersion:(id)arg3 publibStringUpdateTime:(id)arg4;
- (void)workThread_reportPubLibCoverageIfNeededWithAppid:(id)arg1 publibStringVersion:(id)arg2 publibStringUpdateTime:(id)arg3;
- (void)reportPubLibCoverageIfNeededWithAppid:(id)arg1 publibStringVersion:(id)arg2 publibStringUpdateTime:(id)arg3;
- (_Bool)shouldReportPubLibCoverage;
- (void)contextWillBeDestroyed:(id)arg1;
- (void)setupTimerBlock:(id)arg1;
- (id)setupWeixinJSCore;
- (void)setupAPIBlock:(id)arg1 contextId:(unsigned int)arg2;
- (void)setupInvokeHandler:(id)arg1 appId:(id)arg2 param:(id)arg3 callbackId:(unsigned int)arg4 contextId:(unsigned int)arg5 workerId:(unsigned int)arg6 responseUseBase64:(_Bool)arg7;
- (void)setupNativeClient:(id)arg1 withappId:(id)arg2;
- (_Bool)getFeaturePermission:(unsigned int)arg1 withappId:(id)arg2;
- (void)setupSystemLog:(id)arg1;
- (void)sendJsContextToSkyline;
- (void)sendJsContextToSkylineServiceThread;
- (void)markThreadInjected;
- (void)injectJSBaseForAppBrandThread:(id)arg1 sdkScript:(id)arg2 extendedScriptModel:(id)arg3 userScriptFile:(id)arg4 fromPreload:(_Bool)arg5;
- (void)lockStepKVStat:(long long)arg1 kv:(id)arg2;
- (void)lockStepIDKeyStat:(const void *)arg1;
- (void)logDebug:(id)arg1 target:(long long)arg2;
- (void)logWarning:(id)arg1 target:(long long)arg2;
- (void)logInfo:(id)arg1 target:(long long)arg2;
- (void)logError:(id)arg1 target:(long long)arg2;
- (void)setNativeGlobalConfig;
- (void)initNativeGlobal;
- (void)initOnJITMode;
- (void)initJSCProfiler:(id)arg1;
- (void)reportJSErrorOnIsolatedContext:(id)arg1 context:(id)arg2;
- (void)reportJSError:(id)arg1;
- (id)genContextNameWithVMType:(id)arg1 vmId:(unsigned int)arg2 contextType:(id)arg3 contextId:(unsigned int)arg4;
- (id)genContextNameWithMainContext:(_Bool)arg1 contextId:(unsigned int)arg2;
- (id)getCurrentWebView;
- (id)wxAppInfoDicWithTemplate:(id)arg1 contactAttribute:(id)arg2;
- (id)getUserScriptEvaluateRet;
- (id)getPubLibEvaluateRet;
- (id)getPrivateNativeContextFilePath;
- (id)getPrivateNativeContextJSString;
- (id)getServiceSubContextFilePath:(_Bool)arg1;
- (id)getServiceSubContextContentString:(_Bool)arg1;
- (id)getServiceSDKFilePath;
- (id)getServiceSDKContentString;
- (id)getUserConfig;
- (void)getScreenWidth:(double *)arg1 screenHeight:(double *)arg2;
- (id)getSystemInfo;
- (id)getAppLaunchConfigForWebView:(_Bool)arg1;
- (id)getAppLaunchConfigJSVarInjectToolForWebView:(_Bool)arg1;
- (id)getServerModeInfo;
- (void)injectJavaScript;
- (void)releaseWorkerFlows;
- (void)releaseJSContext;
- (void)initJSContext:(id)arg1;
- (void)setEnterPath:(id)arg1 withScene:(unsigned int)arg2 taskExtInfo:(id)arg3;
- (void)triggerStrictBanMode:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 permissionAppID:(id)arg2 model:(id)arg3 handler:(CDUnknownBlockType)arg4 failHandler:(CDUnknownBlockType)arg5 transferHandler:(CDUnknownBlockType)arg6;
- (_Bool)checkJSAPIRunInMainThread:(id)arg1;
- (_Bool)checkJSAPIRunMode:(id)arg1;
- (id)getPermissionWithJSAPI:(id)arg1 appId:(id)arg2 byTempPermission:(id)arg3;
- (void)tryInjectJavaScript;
- (void)onAppBeforPushNavigation:(id)arg1 packageConfig:(id)arg2 extraInfo:(id)arg3;
- (_Bool)isJSInjected;
- (void)performEventOnThread:(id)arg1 afterThreadInject:(_Bool)arg2;
- (void)performEventOnThread:(id)arg1;
- (id)makeSubscribeInvoker:(id)arg1 param:(id)arg2 srcWebviewID:(unsigned int)arg3 dstWebviewID:(unsigned int)arg4;
- (id)makeSubscribeInvoker:(id)arg1 param:(id)arg2 webviewID:(unsigned int)arg3;
- (void)sendInnerAppBrandEvent:(long long)arg1 serviceParam:(id)arg2 pluginParam:(id)arg3 webviewID:(unsigned long long)arg4;
- (void)sendInnerAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)sendAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)workthread_sendJSEventToService:(id)arg1;
- (void)innerSendJSEventToService:(id)arg1;
- (void)sendJSEventToService:(id)arg1;
- (void)sendJSEventToPreloadService:(id)arg1 param:(id)arg2;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (void)sendJSEventToWorker:(id)arg1 param:(id)arg2 workerId:(unsigned int)arg3;
- (void)sendWebviewEventToService:(id)arg1 webViewId:(unsigned int)arg2;
- (void)webviewApiResult:(id)arg1;
- (void)sendReturnSyncEventToService:(id)arg1 webViewId:(unsigned int)arg2;
- (void)sendErrorEvent:(id)arg1;
- (void)workThread_runOperationBlock:(CDUnknownBlockType)arg1;
- (void)asyncRunOperationBlockOnWorkThread:(CDUnknownBlockType)arg1;
- (unsigned int)getThreadId;
- (void)stopProvideApi;
- (void)startProvideApi:(id)arg1 extraInfo:(id)arg2;
- (void)stopCFRunLoop;
- (void)stopAppBrandAndThread;
- (void)registerLeakDetector;
- (void)stopAppBrand:(_Bool)arg1;
- (void)setupContact:(id)arg1;
- (void)startAppBrand:(id)arg1 packageConfig:(id)arg2 extraInfo:(id)arg3;
- (void)injectExtendedScriptIfNeededWith:(id)arg1 contact:(id)arg2;
- (void)reportInitialUserScriptInjectReady;
- (void)setupSubContext:(_Bool)arg1;
- (void)prepareJSContextInspectable:(id)arg1;
- (_Bool)shouldEnableJSContextInspectable:(id)arg1;
- (void)sendWorkerMessage:(unsigned int)arg1 msg:(id)arg2;
- (void)setupWeixinWorker;
- (void)_evaluateNewDebugScript:(id)arg1;
- (void)evaluateNewDebugScript:(id)arg1;
- (void)stopDebugNew;
- (void)startDebugNew;
- (void)injectNewJsDebugScript;
- (void)checkAliveTimeOut:(id)arg1;
- (void)checkAliveReturn:(id)arg1;
- (void)checkAlive:(CDUnknownBlockType)arg1;
- (void)serviceThread_checkAliveWithAliveJS:(id)arg1;
- (unsigned int)gameRenderMode;
- (unsigned int)getCodeCacheVersion;
- (_Bool)bytecodeEnbaled;
- (unsigned int)engineType;
- (id)usrFileSourceUrlWithFileName:(id)arg1;
- (id)usrBytecodeIdentifierWithFileName:(id)arg1;
- (id)publibSourceUrlWithFileName:(id)arg1;
- (id)publibBytecodeIdentifierWithFileName:(id)arg1;
- (void)updateContextName;
- (void)updateServiceThreadName;
- (void)startServiceThread;
- (void)runServiceBlock:(CDUnknownBlockType)arg1;
- (void)addServiceBlock:(CDUnknownBlockType)arg1;
- (void)startServiceThread:(unsigned long long)arg1;
- (void)runThread:(id)arg1;
- (void)changeServiceThreadPriorityToNormal;
- (void)changeServiceThreadPriorityToHigh;
- (void)setThreadPriorityWithQosClass:(unsigned int)arg1 schedPriority:(int)arg2;
- (void)serviceThreadWillStart;
- (void)loadAppConfig;
- (void)injectPublicServiceJSForPreload;
- (id)getPreloadAppLaunchConfig;
- (id)getPreloadAppLaunchConfigJSVarInjectTool;
- (id)initForPreloadAppTask:(id)arg1;
- (void)internalInit;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (unsigned long long)servicePlugin_getEnvironmentType;

// Remaining properties
@property(retain) JSContext *context;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

