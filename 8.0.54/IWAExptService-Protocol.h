//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol IWAExptService <NSObject>
+ (_Bool)shouldCloseAdDeviceInfoReport;
+ (_Bool)canShowAddToDesktopItem;
+ (_Bool)shouldEnableForwardScreenshotWithContext;
+ (_Bool)shouldEnableScrollViewEnhancement;
+ (_Bool)canShowShareTimelineItem:(_Bool)arg1;
+ (NSString *)checkVideoContentTypeArr;
+ (NSString *)checkVideoContentTypeTimeOut;
+ (NSString *)checkVideoContentTypeSwitch;
+ (double)videlPlayBufferTime;
+ (_Bool)isOpenLaunchTimeAxisKV;
+ (_Bool)isWeAppShouldShowLiveAppMenu;
+ (_Bool)isWeAppPkgEncryptLibUseBatchInject;
+ (_Bool)isWeAppUsePkgEncrypt:(_Bool)arg1;
+ (double)durationWeAppShowToastWhenPasteFor16;
+ (_Bool)isWeAppShowToastWhenPasteFor16;
+ (_Bool)isWeAppOpenEvaluate;
+ (_Bool)isWeAppUseNewPopWhenSwitchTab;
+ (unsigned int)weappCgiShortLinkRetryCount;
+ (_Bool)isOpenWeAppHtmlSuffixProtect;
+ (unsigned int)weappMemoryAbNormalLimitSingleForegroundIncreament;
+ (unsigned int)weappMemoryAbNormalLimitTotalLifeCycleIncreament;
+ (_Bool)isOpenWeAppForceKillMemoryCheck;
+ (_Bool)isOpenWeAppJSMemoryStat;
+ (_Bool)isOpenLaunchDownloadInPrecheckerThread;
+ (_Bool)isWeAppUseSkiaCanvas;
+ (_Bool)shouldOpenMiniProgramABTestCheck;
+ (_Bool)shouldOpenIsolatePluginCheck;
+ (_Bool)shouldCloseWeGameMultiSplitPlugin;
+ (_Bool)shouldAllowMultiSplitPluginCode;
+ (_Bool)shouldJITRuntimeUseNonPersistentDataStore;
+ (unsigned long long)getJITRuntimeDebugSwitch;
+ (unsigned int)getJITRuntimeAtomStringFixGap;
+ (unsigned int)getJITRuntimePreloadWKFeatureVersion;
+ (unsigned int)getWeGamePreloadTaskTimeoutInS;
+ (long long)enableParallelShaderCompile;
+ (unsigned int)getWeGamePreloadTaskLevel;
+ (unsigned int)getWeAppPreloadTaskDegradeType;
+ (_Bool)shouldUseSetCustomAgent;
+ (NSDictionary *)splashADHotStartExptInfo;
+ (double)splashADTimeThreshold;
+ (_Bool)isSplashADAllowGame;
+ (_Bool)isSplashADAllowNoPreload;
+ (_Bool)isSplashADUseWorker;
+ (_Bool)shouldShowSplashAD;
+ (_Bool)shouldShowCommentEntryInMenu;
+ (_Bool)shouldInsertToWebLayer:(long long)arg1;
+ (_Bool)shouldClosePubLibDelayUnpack;
+ (_Bool)shouldCloseSearchEntryInMainList;
+ (_Bool)shouldAllowBatchAttrSyncInMainFrameTaskBar;
+ (_Bool)shouldShowMainFrameTaskBar;
+ (_Bool)shouldShowGameEntryInFTSSearch;
+ (_Bool)shouldShowGameEntryInMainList;
+ (_Bool)shouldReportCommandBufferPerformanceInWeGame;
+ (_Bool)shouldUseCommandBufferInWeGame;
+ (_Bool)shouldReportWebglCmd;
+ (_Bool)shouldOpenWeGameSplashScreen;
+ (_Bool)shouldOpenWeGamePredownload;
+ (_Bool)shouldOpenImageSearchEntry;
+ (_Bool)shouldUseSkiaCanvas;
+ (NSDictionary *)makeSkylinePerformCfg;
+ (_Bool)shouldOpenSkyline;
+ (_Bool)shouldSystemInfoRemoveBlue;

@optional
+ (_Bool)isWxaAsyncGetStorageInfo;
+ (_Bool)webaudioMuteOnBg;
+ (unsigned long long)getWeAppJITRuntimeLiteModeFeatBit;
+ (_Bool)shouldWeAppSubContextEnableEjecta;
+ (_Bool)shouldWeAppWorkerEnableEjecta;
+ (_Bool)shouldWeAppJITRuntimeEnableTouchInClient;
+ (_Bool)shouldWeAppJITRuntimeEnableSuspendAllMediaWhenBackground;
+ (_Bool)shouldWeAppJITRuntimeEnableDirectInvokeJs;
+ (_Bool)shouldWeAppJITRuntimeEnableThread;
+ (_Bool)shouldWeAppEnableNativeRender;
+ (_Bool)shouldOpenSkylineNewSvgImage;
+ (_Bool)shouldOpenSkylineResizeImage;
+ (_Bool)shouldMainFrameTaskBarCommonUseSectionEnable;
+ (_Bool)getExptInfo:(NSString *)arg1 andExptId:(id *)arg2 andGroupId:(id *)arg3;
+ (NSString *)exptValueForExperimentId:(NSString *)arg1;
+ (long long)weGameReopenTimeSeconds;
+ (_Bool)banReportLocationWhenScanWxCode;
+ (_Bool)isWxaOpenAutoSwitchCamera;
+ (long long)weappMainFrameSearchStyle;
+ (long long)dnsTypeForPkgDownload;
+ (_Bool)parallelDownloadSubPackage;
+ (_Bool)isWeAppUseSimulatedNativeProfile;
+ (_Bool)isFollowCronetRedirect;
+ (_Bool)enableLazyLoadWxaPlugin;
+ (_Bool)isOpenJSThreadRunOnHighPriority;
+ (_Bool)isOpenWxaLaunchOptimization;
+ (_Bool)isSemverUseSwift;
+ (NSString *)forceUseDebugVersionAppidList;
+ (_Bool)enableWeAppEarlyLoading;
+ (_Bool)isOpenWeAppBackgroundManuallyTerminateWebView;
+ (_Bool)isOpenLatestPluginJsonMerge;
+ (_Bool)isOpenPrivacyAuthorizationEntry;
+ (_Bool)canUserManageDiscoverWeAppEntryReddot;
+ (NSString *)usrSpaceTraceScanFrequency;
+ (_Bool)isOpenUsrSpaceTrace;
+ (_Bool)shouldWeGameEnableMagicBrush;
+ (NSString *)gameThreadConfig;
+ (_Bool)isWeGamePreserveDrawingBufferDoClear;
+ (_Bool)isRollbackEjectaPresent;
+ (_Bool)isUseSetCurrentContextRefactor;
+ (_Bool)canWeAppCustomServiceSendVideo;
+ (_Bool)isOpenShoppingCartEntry;
+ (_Bool)shouldAllowHandoff:(_Bool)arg1 withGameCheck:(_Bool)arg2 withDeviceType:(unsigned int)arg3 withClientVersion:(unsigned int)arg4;
+ (double)splashADNoPreloadTimeInterval;
+ (double)splashADTimeInterval:(_Bool)arg1;
+ (NSArray *)splashADEnterSceneArray;
+ (_Bool)isEnableWKInspectable;
+ (_Bool)isOpenMiniTask;
+ (NSString *)weappQRCodePrefix;
+ (_Bool)isOpenWalletPrefetch;
+ (_Bool)isCloseSilentOpen;
+ (_Bool)isOpenMPShortLinkMenuEntry;
+ (_Bool)isSettingStorageClearShouldUseContactRecordTime;
+ (_Bool)shouldShowFlagshipTag;
+ (_Bool)shouldShowWxaEasyBuyTag;
+ (_Bool)shouldShowWxaOfficialTag;
+ (_Bool)isEnableDupOpen;
+ (_Bool)isOpenPerformanceIndexReport;
+ (_Bool)isEnableWeAppIgnoreBundlePublicLib;
+ (_Bool)isEnableAliveFailedRecover;
+ (_Bool)canAddWeAppPageToWCFavorite;
+ (long long)weAppPublicResCacheNum;
+ (long long)weAppPublicResCleanPeriod;
+ (long long)weakNetNotifyInterval;
+ (_Bool)shouldEnableCronetSimpleDiskCache;
+ (_Bool)shouldEnableCronet;
+ (_Bool)shouldDirectInvokeOc;
+ (_Bool)shouldDirectInvokeJs;
@end

