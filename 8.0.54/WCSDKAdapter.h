//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSDKAdapter : NSObject
{
}

+ (id)pathForScanCodeSrModelInPackage;
+ (id)pathForScanCodeDetectModelInPackage;
+ (_Bool)isAuthRequestFrequencyLimitedFor:(unsigned int)arg1 sceneKey:(id)arg2;
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
+ (void)requestWeChatAndSystemAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)requestAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)checkAccessCameraAndShowAlertWithCompletion:(CDUnknownBlockType)arg1;
+ (id)getScenesExcludeArray:(id)arg1;
+ (id)getAllScenes;
+ (id)audioQueue;
+ (id)getConfigItem:(id)arg1;
+ (_Bool)getBoolValue:(id)arg1;
+ (_Bool)isDefineKitchen;
+ (_Bool)isWmpfProject;
+ (void)restart;
+ (_Bool)setAllowHapticsAndSystemSoundsDuringRecording:(_Bool)arg1;
+ (_Bool)otherPlayingBeforeActive;
+ (_Bool)isOtherAudioPlaying;
+ (unsigned long long)currentCategoryId;
+ (_Bool)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3 forceUseBuiltinMic:(_Bool)arg4;
+ (_Bool)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
+ (_Bool)setCategroy:(unsigned long long)arg1 withBlockType:(unsigned long long)arg2;
+ (_Bool)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4 withBlockType:(unsigned long long)arg5;
+ (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
+ (_Bool)setCategroy:(unsigned long long)arg1;
+ (_Bool)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)covertAVCategroy2WCCategroy:(id)arg1;
+ (_Bool)setAVCategroy:(id)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3 forceUseBuiltinMic:(_Bool)arg4;
+ (_Bool)setAVCategroy:(id)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
+ (_Bool)setAVCategroy:(id)arg1 withBlockType:(unsigned long long)arg2;
+ (_Bool)setAVCategroy:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4 withBlockType:(unsigned long long)arg5;
+ (_Bool)setAVCategroy:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
+ (_Bool)setAVCategroy:(id)arg1;
+ (_Bool)setAVCategroy:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)setAVCategroy:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)setSpeaker:(_Bool)arg1 error:(id *)arg2;
+ (_Bool)setMode:(id)arg1 error:(id *)arg2;
+ (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
+ (void)RestartMusic;
+ (void)StopAudio;
+ (void)RestartAudioTalk;
+ (_Bool)PauseAudioTalk;
+ (_Bool)PauseMusic;
+ (_Bool)IsMusicPaused;
+ (_Bool)IsMusicIdle;
+ (long long)cameraPosition;
+ (_Bool)isSupportSwitchCamera;
+ (void)resumeMusicPlay;
+ (void)pauseMusic;
+ (void)SetIdleTimeDisable:(_Bool)arg1;
+ (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 durationMs:(int)arg4;
+ (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (_Bool)StartSnsVideoStreamingDownload:(id)arg1 httpUrl:(id)arg2 fileType:(int)arg3 appType:(int)arg4 filePath:(id)arg5 preloadPercent:(int)arg6 Timeout:(unsigned int)arg7 referer:(id)arg8 blockSize:(unsigned int)arg9;
+ (_Bool)StartHttpVideoStreamingDownload:(id)arg1 httpUrl:(id)arg2 fileType:(int)arg3 filePath:(id)arg4 preloadPercent:(int)arg5 Timeout:(unsigned int)arg6 referer:(id)arg7 blockSize:(unsigned int)arg8;
+ (_Bool)StopDownloadWithClientMediaID:(id)arg1 downloadTaskInfo:(id *)arg2;
+ (unsigned long long)QueryContinousSizeWithClientId:(id)arg1 offset:(unsigned long long)arg2;
+ (unsigned long long)QueryDownloadedSizesWithClientId:(id)arg1;
+ (int)GetAverageSpeedWithClientId:(id)arg1 recentSeconds:(int)arg2;
+ (int)GetAverageSpeedWithRecentSeconds:(int)arg1;
+ (int)GetRecentAverageSpeed;
+ (void)NotifyBuffering:(id)arg1 isBuffering:(_Bool)arg2;
+ (void)UpdatePlaybackTime:(id)arg1 playTime:(double)arg2;
+ (_Bool)stopDownloadTaskWithFileKey:(id)arg1 taskInfo:(id *)arg2;
+ (_Bool)stopDownloadTaskWithFileKey:(id)arg1;
+ (int)requestVideoData:(id)arg1 offset:(unsigned long long)arg2 length:(long long)arg3 bitrate:(int)arg4 dataReadyBlock:(CDUnknownBlockType)arg5;
+ (void)setFastCompleteBlock:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (unsigned long long)startDownloadWithType:(unsigned long long)arg1 downloadMode:(int)arg2 request:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 m3u8Ready:(CDUnknownBlockType)arg5 moovReady:(CDUnknownBlockType)arg6 fastComplete:(CDUnknownBlockType)arg7 complete:(CDUnknownBlockType)arg8 preloadComplete:(CDUnknownBlockType)arg9;
+ (_Bool)startDownloadWithType:(unsigned long long)arg1 request:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;
+ (_Bool)startDownloadTaskWithRequest:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
+ (_Bool)stopUploadTaskWithFileKey:(id)arg1;
+ (_Bool)startUploadTaskWithRequest:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2 existOnSvr:(CDUnknownBlockType)arg3 complete:(CDUnknownBlockType)arg4;
+ (_Bool)startUploadTaskWithRequest:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
+ (id)getConflictWording;
+ (void)showMonoServiceWorkingConflict;
+ (_Bool)isVideoMonoServiceInMainScene:(_Bool)arg1;
+ (_Bool)isVideoMonoServiceWorking;
+ (_Bool)isAudioMonoServiceWorkingInMainScene:(_Bool)arg1 ignoreType:(unsigned long long)arg2;
+ (_Bool)isAudioMonoServiceWorking;
+ (id)valueFromDynamicConfigForKey:(id)arg1;
+ (_Bool)shouldWCBlueToothForceSilentInitControl;
+ (_Bool)getExpt:(id)arg1 withBoolDef:(_Bool)arg2;
+ (long long)getIntegerExpt:(id)arg1 withDef:(long long)arg2;
+ (id)getExpt:(id)arg1 withDef:(id)arg2;
+ (id)getSnsUserOpLogAbtestItem;
+ (id)getUseServerTimeAbtestItem;
+ (void)parseColorDeclarations:(id)arg1 toValues:(id)arg2;
+ (id)parseFontFromValues:(id)arg1;
+ (double)parseFontSizeFromValues:(id)arg1;
+ (id)parseStringFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1;
+ (long long)parseIntegerFromValues:(id)arg1;
+ (_Bool)parseBOOLFromValues:(id)arg1;
+ (struct UIEdgeInsets)parseEdgeInsetsFromValues:(id)arg1;
+ (struct CGRect)parseRectFromValues:(id)arg1;
+ (struct CGSize)parseSizeFromValues:(id)arg1;
+ (struct CGPoint)parsePointFromValues:(id)arg1;
+ (id)parseStrechedImageFromValues:(id)arg1;
+ (id)parseColorFromValues:(id)arg1;
+ (void)setImageCacheObject:(id)arg1 forKey:(id)arg2;
+ (id)getImageCacheObjectForKey:(id)arg1;
+ (id)CheckMarkDisabled;
+ (id)CheckMark;
+ (void)reloadCssForMultiTaskingIfNeed;
+ (id)pathOfResNamed:(id)arg1;
+ (id)getImageName:(id)arg1;
+ (id)svgImageDisableNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageHighlightNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 angle:(int)arg4;
+ (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageNamed:(id)arg1 color:(id)arg2 ignoreNotFound:(_Bool)arg3;
+ (id)svgImageNamed:(id)arg1 color:(id)arg2;
+ (id)imageFromColor:(id)arg1;
+ (id)imageDisableNamed:(id)arg1;
+ (id)imageHighlightNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 alpha:(double)arg2;
+ (id)imageNamed:(id)arg1;
+ (id)getColorByName:(id)arg1 withAlpha:(double)arg2;
+ (id)getColorByName:(id)arg1;
+ (id)getRuleSetForSeletor:(id)arg1;
+ (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2;
+ (void)updateLanguage:(id)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
+ (id)localizedStringForKey:(id)arg1;
+ (void)logFeatureExtIDkeyList:(const void *)arg1 isKeyLog:(_Bool)arg2;
+ (void)logFeatureExtIDkey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
+ (void)clickStreamSearchControllerDidDismiss:(id)arg1;
+ (void)clickStreamSearchControllerDidPresent:(id)arg1;
+ (void)clickStreamViewDidDisappear:(id)arg1;
+ (void)clickStreamViewDidAppear:(id)arg1;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
+ (void)logFeature:(unsigned int)arg1 isReportNow:(_Bool)arg2 isKeyLog:(_Bool)arg3;
+ (void)asyncCustomDump:(id)arg1;
+ (void)customDump:(id)arg1;
+ (void)silentCrash:(id)arg1;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 format:(id)arg7;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(id)arg7;
+ (_Bool)shouldEnableDebugLog;
+ (_Bool)shouldLog:(int)arg1;
+ (void)setup;
+ (id)shareInstance;
- (void)pauseBizWithHandle:(id)arg1;
- (id)getBizAppConfigWithHandle:(id)arg1;
- (void)resumeBizWithHandle:(id)arg1;
- (void)removeFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 frameSetName:(id)arg3;
- (void)removeAllFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2;
- (void)scrollAllOnScreenFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 offsetHeight:(double)arg3 listViewTop:(double)arg4;
- (void)bindFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 containerView:(id)arg3 frameSetName:(id)arg4 frameSetData:(id)arg5;
- (void)preloadWithHandle:(id)arg1 rootConfig:(id)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4 containerRect:(struct CGRect)arg5 preloadStrategy:(long long)arg6;
- (void)notifyJsEventWithHandle:(id)arg1 jsEvent:(id)arg2;
- (void)deactiveWithHandle:(id)arg1;
- (void)activeWithHandle:(id)arg1 viewController:(id)arg2;
- (id)aquireBizWithBizCreator:(id)arg1 instanceKey:(id)arg2;
- (int)getVideoDurationSec:(id)arg1;
- (id)genVideoThumbImage:(id)arg1;
- (id)getAudioModuleWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (void)cancelInterruptionNotifyWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (void)cancelInterruptionNotifyWithScene:(int)arg1;
- (_Bool)isAudioModuleInterrupt:(int)arg1;
- (id)currentInterruptModules;
- (_Bool)isAudioModuleActive:(int)arg1;
- (id)currentActiveModules;
- (_Bool)canSetActiveWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3 mixList:(id)arg4;
- (_Bool)canSetActiveWithScene:(int)arg1 groupName:(id)arg2 identifier:(id)arg3;
- (_Bool)canSetActiveWithScene:(int)arg1 mixList:(id)arg2;
- (_Bool)canSetActiveWithScene:(int)arg1;
- (_Bool)resumeInterruptModule;
- (void)showConflictWording;
- (id)getConflictWording;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 groupName:(id)arg3 identifier:(id)arg4 options:(unsigned long long)arg5 listener:(id)arg6;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 listener:(id)arg5;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 identifier:(id)arg3 listener:(id)arg4;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 listener:(id)arg3;
- (void)onMediaPlayStateChange:(id)arg1;
- (void)clearInterruptStatus;
- (_Bool)isInterrupting;
- (_Bool)isPhoneCalling;
- (void)stopCheck;
- (void)startCheck;
- (id)getemoticonRegex;
- (long long)levelForBiz:(long long)arg1;
- (_Bool)isLimitedModeOn;
- (_Bool)isVisibleChildViewControllerOf:(id)arg1 ToFindViewController:(id)arg2;
- (id)getPrevNavigationControllerFor:(id)arg1;
- (_Bool)getUseWxamDecReport;
- (_Bool)getUseWxamEncReport;
- (_Bool)getUseWxamAdapResolution;
- (_Bool)getUseWxamFullRangeEnc;
- (id)ApplicationDidBecomeActiveNotificationName;
- (unsigned long long)ParserDetectorTypeWith:(unsigned long long)arg1;
- (id)getCTRichTextView;
- (void)setStatusBarHidden:(_Bool)arg1 animation:(long long)arg2 viewController:(id)arg3;
- (void)setStatusBarStyle:(long long)arg1 viewController:(id)arg2;
- (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)isNavigationInWeAppSheetMode:(id)arg1;
- (_Bool)isWeAppStatusBarHidden;
- (id)navigationControllerListWithViewController:(id)arg1;
- (id)topViewControllerOfMainWindow;
- (id)getMainWindowViewController;
- (id)topNavigationControllerOnMainWindow;
- (id)getMainWindow;
- (id)getCurrentNavigationController;
- (id)topViewControllerOfWindow:(id)arg1;
- (id)topMostController;
- (id)getTopViewController;
- (double)tabBarHeight;
- (id)tabBarController_currentViewController;
- (void)setPrimaryShown;
- (void)setPrimaryHidden;
- (_Bool)isVCUseCustomPopTransitioning:(Class)arg1;
- (Class)WAWebViewControllerClass;
- (Class)MMTabBarBaseViewControllerClass;
- (Class)MMTabBarControllerClass;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (double)getLeftColumnWidthForSplitView;
- (void)setRightViewControllerForSplitView:(id)arg1 forPush:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setRightViewControllerForSplitView:(id)arg1 forPush:(_Bool)arg2;
- (id)getRightViewControllerForSplitView;
- (id)getMMTabBarController;
- (id)getMMSplitViewController;
- (_Bool)isUsingSplitView;
- (_Bool)shouldUseSplitView;
- (_Bool)isBrandTimelineOpen;
- (id)resolveURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

