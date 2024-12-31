//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMotionManager, MMObject, MMWindowController, MemoryMappedKV, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SightDraftMgr, UIImage, WCSightCameraBeautyConfig, WXSourceColorProperties;
@protocol SightCaptureLogic;

@interface SightFacade
{
    _Bool m_preventCamera;
    MMWindowController *m_sightDraftTipsWindow;
    MMWindowController *m_sightTipsWindow;
    MMWindowController *m_sightWindowController;
    MMObject<SightCaptureLogic> *m_logic;
    SightDraftMgr *m_draftMgr;
    WXSourceColorProperties *m_colorProperties;
    unsigned int m_compressorID;
    NSMutableDictionary *m_compressorDic;
    NSMutableArray *m_invalidateCompressor;
    unsigned int m_captureCounter;
    unsigned int m_continousCaptureID;
    CDStruct_1b6d18a9 m_lastCaptureTime;
    UIImage *m_blurImage;
    _Bool m_lightDetector;
    CMMotionManager *m_cmManager;
    unsigned int videoQualityLevel;
    _Bool _needShakeDetector;
    _Bool _isNeedResumeWXMusic;
    float _jsapiMaxVideoDuration;
    float _allowableSightMaxDuration;
    NSMutableDictionary *_sessionsMap;
    NSDictionary *_sightLimitationDictionary;
    NSArray *_allowableSightFPS;
    NSArray *_allowableSightFrameSize;
    MemoryMappedKV *_mappedKV;
    WCSightCameraBeautyConfig *_sightCameraBeautyConfig;
    NSString *_nsTmpMoviePath;
}

+ (id)generateSessionID;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nsTmpMoviePath; // @synthesize nsTmpMoviePath=_nsTmpMoviePath;
@property(retain, nonatomic) WCSightCameraBeautyConfig *sightCameraBeautyConfig; // @synthesize sightCameraBeautyConfig=_sightCameraBeautyConfig;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(nonatomic) _Bool isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(nonatomic) float allowableSightMaxDuration; // @synthesize allowableSightMaxDuration=_allowableSightMaxDuration;
@property(retain, nonatomic) NSArray *allowableSightFrameSize; // @synthesize allowableSightFrameSize=_allowableSightFrameSize;
@property(retain, nonatomic) NSArray *allowableSightFPS; // @synthesize allowableSightFPS=_allowableSightFPS;
@property(retain, nonatomic) NSDictionary *sightLimitationDictionary; // @synthesize sightLimitationDictionary=_sightLimitationDictionary;
@property(retain, nonatomic) NSMutableDictionary *sessionsMap; // @synthesize sessionsMap=_sessionsMap;
@property(nonatomic) float jsapiMaxVideoDuration; // @synthesize jsapiMaxVideoDuration=_jsapiMaxVideoDuration;
@property(nonatomic) _Bool needShakeDetector; // @synthesize needShakeDetector=_needShakeDetector;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=m_blurImage;
@property(readonly, nonatomic) _Bool preventCamera; // @synthesize preventCamera=m_preventCamera;
- (_Bool)isProModeEnabledForScene:(unsigned long long)arg1;
- (double)autoSwitchingCameraLensPosition;
- (_Bool)enableAutoSwitchCameraWhenFocusing;
- (void)setCaptureNeedAudio:(_Bool)arg1;
- (unsigned long long)sightCaptureSceneToSystemAuthScene:(unsigned long long)arg1;
- (void)goToSettingAuthorization;
- (void)showAuthorizationForMediaTypeAudioWithCancelTitle:(id)arg1;
- (void)showAuthorizationForMediaTypeAudioWithHandler:(CDUnknownBlockType)arg1 cancelTitle:(id)arg2;
- (void)showAuthorizationForMediaTypeAudioWithHandler:(CDUnknownBlockType)arg1;
- (void)showAuthorizationForMediaTypeVideoWithHandler:(CDUnknownBlockType)arg1;
- (void)showAuthorizationAlertViewForMediaType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)showAuthorizationAlertViewForMediaType:(unsigned long long)arg1;
- (_Bool)authorizationStatusAuthorizedForMediaTypeAudio;
- (_Bool)authorizationStatusAuthorizedForMediaTypeVideo;
- (_Bool)authorizationStatusAuthorizedForMediaType:(unsigned long long)arg1;
- (float)megaVideoAlbumMaxSelectDuration;
- (void)timelineVideoSightAutoPlayEnableChanged:(_Bool)arg1;
- (_Bool)isTimelineVideoSightAutoPlayEnable;
- (void)setShouldSaveMediaToLibrary:(_Bool)arg1 withMediaType:(unsigned long long)arg2;
- (_Bool)shouldSaveMediaToLibraryWithMediaType:(unsigned long long)arg1;
- (void)muteVideoWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)calcVideoMd5WithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)getOrignalImageQualityLevel:(struct CGSize)arg1 outImageSize:(struct CGSize)arg2 compressionRatio:(float)arg3;
- (unsigned int)getImageQualityLevel:(unsigned int)arg1 chooseTime:(int)arg2 coverImageSize:(struct CGSize)arg3 compressionRatio:(float)arg4;
- (unsigned int)getVideoQualityLevel;
- (unsigned long long)minAudioBitrateForOriginalInSingle;
- (unsigned long long)minAudioBitrateForOriginalInStereo;
- (unsigned long long)maxAudioBitrateForLinearPCM;
- (unsigned long long)minAudioBitrateInStereo;
- (unsigned long long)minAudioSampleRateInStereo;
- (id)adaptiveBitrateAdjustment:(id)arg1 VideoTrack:(id)arg2 Asset:(id)arg3 scene:(unsigned long long)arg4 VideoEncodeParams:(id)arg5 videosize:(struct CGSize)arg6 Edited:(_Bool)arg7 addStickers:(_Bool)arg8 enableABA:(_Bool)arg9 forceHWTranscoding:(_Bool)arg10;
- (id)adaptiveBitrateAdjustment:(id)arg1 VideoTrack:(id)arg2 Asset:(id)arg3 scene:(unsigned long long)arg4 VideoEncodeParams:(id)arg5 videosize:(struct CGSize)arg6 Edited:(_Bool)arg7 addStickers:(_Bool)arg8 enableABA:(_Bool)arg9;
- (void)loadOriginalVideoInfoFromPath:(id)arg1 forEncodeParams:(id)arg2;
- (_Bool)checkSWTranscodingChange:(id)arg1 InputViodeoPrams:(struct WxVideoTransParaABA)arg2 OutViodeoPrams:(struct WxVideoTransParaABA)arg3 scene:(unsigned long long)arg4 encVideoDuration:(double)arg5;
- (float)calculateAudioQualityLevel:(id)arg1 VideoEncodeParams:(id)arg2 enableAuQA:(_Bool)arg3 useOriAu:(_Bool)arg4;
- (void)initWxVideoTransParaABA:(id)arg1 videosize:(struct CGSize)arg2 Asset:(id)arg3 wxVideoTransParaABA:(struct WxVideoTransParaABA *)arg4 VideoEncodeParams:(id)arg5 Edited:(_Bool)arg6;
- (void)initABAReportPrams:(id)arg1 wxABAPrams:(struct WxAdaptiveBRResParams)arg2 inPara:(struct WxVideoTransParaABA)arg3 outPara:(struct WxVideoTransParaABA)arg4;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)exportVideoWithAsset:(id)arg1 scene:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)shouldForceUsingMAV:(id)arg1;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5 andPathPrefix:(id)arg6 encodeJson:(id)arg7 extraInfo:(id)arg8 isSwRetryTask:(_Bool)arg9 usingMAV:(_Bool)arg10;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5 andPathPrefix:(id)arg6 encodeJson:(id)arg7 extraInfo:(id)arg8 usingMAV:(_Bool)arg9;
- (void)exportVideoWithCompressByAsset:(id)arg1 assetURL:(id)arg2 scene:(unsigned long long)arg3 isSlowMotion:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5 andPathPrefix:(id)arg6;
- (void)exportVideoWithAsset:(id)arg1 scene:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3 andPathPrefix:(id)arg4;
- (_Bool)isVideoShouldExportWithoutCompressByAsset:(id)arg1 scene:(unsigned long long)arg2 encodeJson:(id)arg3;
- (_Bool)isVideoShouldExportWithoutCompressByAsset:(id)arg1 scene:(unsigned long long)arg2;
- (float)getSightCameraBeautyConfigValueForType:(unsigned long long)arg1;
- (id)convertBeautyEffectTypeToSaveKey:(unsigned long long)arg1;
- (void)setBeautyEffectValue:(double)arg1 forType:(unsigned long long)arg2;
- (double)getConfigBeautyEffectValueForType:(unsigned long long)arg1;
- (double)getDefaultBeautyEffectValueForType:(unsigned long long)arg1;
- (double)naturalFilterValue;
- (double)multiSamplingValue;
- (double)defaultFilterValue;
- (double)beautyTeethBrightValue;
- (double)beautySharpenValue;
- (double)beautySmileFoldValue;
- (double)beautyRemoveEyePouchValue;
- (double)beautyWingOfNoseValue;
- (double)beautyLowerJowboneValue;
- (double)beautyCheekboneValue;
- (double)beautySmallHeadValue;
- (double)beautyRosyFaceValue;
- (double)beautyThinFaceValue;
- (double)beautySkinBrightValue;
- (double)beautyEyeBiggerValue;
- (double)beautyEyeBrightValue;
- (double)beautySkinSmoothValue;
- (void)setBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (void)switchBeautyEffect:(_Bool)arg1;
- (void)deallocEffectManager;
- (void)resetEffectManagerLite;
- (void)initEffectManager;
- (void)changeCameraMusic:(id)arg1 musicEnable:(_Bool)arg2 restartPreview:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isCameraWXMusicLoaded:(id)arg1;
- (_Bool)isCameraMusicLoaded:(id)arg1;
- (void)clearTemplateWithMusicEnabled:(_Bool)arg1 params:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMaasCamSessionWithTouches:(id)arg1 event:(id)arg2 states:(unsigned long long)arg3;
- (void)preloadTemplateWithTemplateId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMiaojianCameraRecordNeedAudio:(_Bool)arg1;
- (void)beginUseTemplateWithTemplate:(id)arg1 enableMusic:(_Bool)arg2 params:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getTemplateInfoWithItem:(id)arg1;
- (_Bool)isTemplateLoadedWithTemplate:(id)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 shouldEnableAudio:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearFilterDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)postTemplateRecordingResultNotification:(id)arg1 finishInfo:(id)arg2;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelExportingVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startExportingVideoWithBitRate:(int)arg1 audioBitrate:(float)arg2 orientation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginUseCameraInputWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setSightCameraDelegate:(id)arg1;
- (void)clearVideoRemixTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseTemplateAndVideoRemixTemplateWithItem:(id)arg1 videoRemixTemplateID:(id)arg2 overridingParams:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)loadTemplateWithTemplateID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (void)cancelLoadWithTaskID:(int)arg1;
- (void)cancelAll;
- (void)setLocationInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isUsingMaasCapSessionForRender;
- (id)capFunSessionRenderView;
- (void)cleanUpCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startUpCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)effectManagerPreviewLayer;
- (void)initEffectManagerWithBeautyConfig:(id)arg1;
- (_Bool)needsBeautyEffectWithScene:(unsigned long long)arg1;
- (_Bool)needsBeautyBtnWithScene:(unsigned long long)arg1;
- (id)processWithSampleImageAfterPerformCachedOperations:(id)arg1;
- (double)minExposureISO;
- (double)maxExposureISO;
- (double)currentExposureISO;
- (void)setExposureISO:(double)arg1;
- (void)resetExposureISO;
- (void)turnOnExposureHighISO;
- (_Bool)isUsingHighExposureISO;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashlightMode;
- (struct CGSize)videoSizeWithAsset:(id)arg1;
- (unsigned long long)checkIfVideoAllowedToBeSentWithVideoAsset:(id)arg1 videoPath:(id)arg2 pickerScene:(unsigned long long)arg3 isSlowmotion:(_Bool)arg4;
- (struct WxAdaptiveBRResParams)getABAControlParameters:(unsigned long long)arg1 addStickers:(_Bool)arg2;
- (unsigned long long)judgeScence:(unsigned long long)arg1 subType:(unsigned long long)arg2;
- (int)getVcodec2EncodingPreset:(unsigned long long)arg1;
- (_Bool)getTAVkitSoftEncNewThreadsControl;
- (double)getSNSPostFinderBitrateRatio;
- (double)getHDRBitrateRatio;
- (double)getHEVCRelativeToH264Ratio:(_Bool)arg1 useHWHEVCEnc:(_Bool)arg2 Scene:(unsigned long long)arg3;
- (_Bool)getShortVideoSWTranscodingInLongFile;
- (int)getSWTranscodingDurationThreshold:(unsigned long long)arg1;
- (_Bool)isEnableFFmpegHevcTranscoding:(unsigned long long)arg1;
- (_Bool)getEnableHEVCEncode:(unsigned long long)arg1;
- (_Bool)audioQualityAnalysisSwitch:(unsigned long long)arg1;
- (_Bool)videoCompositionSoftHEVCEnc;
- (_Bool)adaptiveBitrateAdjustmentSwitch:(unsigned long long)arg1;
- (float)sightCaptureMaxDurationWithScene:(unsigned long long)arg1;
- (float)allowableSightMaxDurationForScene:(unsigned long long)arg1;
- (_Bool)isTurnOnLegalityCheckForReceivedSight;
- (unsigned long long)legalityTypeOfSight:(id)arg1;
- (void)statDraftUse:(unsigned int)arg1 operation:(unsigned int)arg2;
- (void)statDraftSave:(unsigned int)arg1;
- (void)statPlay:(unsigned int)arg1;
- (void)statOper:(unsigned int)arg1 operation:(unsigned int)arg2 targetCount:(unsigned int)arg3;
- (void)statSent:(unsigned int)arg1 target:(unsigned int)arg2;
- (id)getDraftList;
- (void)removeDraft:(id)arg1;
- (void)addDraft:(id)arg1;
- (void)addSightDraft:(id)arg1;
- (void)resumeMusicPlay;
- (void)pauseMusic;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (void)cancelCompress:(unsigned int)arg1;
- (void)turnOffLightBoost;
- (void)turnOnLightBoost;
- (_Bool)isLightBoostOn;
- (void)onRecorderFinished:(unsigned int)arg1 moviePath:(id)arg2 withThumb:(id)arg3 duration:(float)arg4 templateFinishInfo:(id)arg5;
- (void)onRecorderFinished:(unsigned int)arg1 moviePath:(id)arg2 withThumb:(id)arg3 duration:(float)arg4 cameraPosition:(long long)arg5;
- (void)onRecorderFailed:(unsigned int)arg1 errorCode:(unsigned int)arg2;
- (void)onRecorderFailed:(unsigned int)arg1;
- (void)onCameraStop;
- (void)onCameraAudioReady;
- (void)onCameraVideoReady;
- (void)onCameraPreviewReady:(id)arg1;
- (void)onCameraPreviewGap:(id)arg1;
- (void)stopShakeDetector;
- (void)startShakeDector;
- (void)realStartRecording;
- (void)cancelRecording:(unsigned int)arg1;
- (void)stopRecording:(unsigned int)arg1;
- (unsigned int)startRecording:(struct CGSize)arg1 bitrate:(double)arg2 atCaptureScene:(unsigned long long)arg3 orientation:(long long)arg4;
- (void)stopCameraCapture;
- (void)savePreviewBlurImage:(id)arg1;
- (void)detactImageLight:(id)arg1;
- (void)processScreenCapture:(id)arg1;
- (void)savePreviewCapture:(unsigned int)arg1;
- (void)stopSnapShotTimer;
- (void)startSnapShotTimer;
- (void)captureImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (void)releasePreviewView:(id)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (_Bool)switchCamera;
- (long long)cameraPosition;
- (_Bool)isSupportSwitchCamera;
- (double)setZoomFactor:(double)arg1 ignoreLimit:(_Bool)arg2 animated:(_Bool)arg3;
- (double)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (double)defaultZoomFactor;
- (_Bool)isSupportZoomWithFactor:(double)arg1 isProMode:(_Bool)arg2;
- (double)maxZoomFactor;
- (void)zoomInCamera;
- (void)zoomCamera;
- (_Bool)isSupportZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)startQRCodeScanner;
- (_Bool)pauseCamera;
- (void)startCameraAudio;
- (void)activateAudioSession;
- (void)startCamera:(_Bool)arg1 withAudio:(_Bool)arg2;
- (void)startCamera:(_Bool)arg1;
- (void)startCamera;
- (_Bool)isCameraOn;
- (void)onPictureRetake;
- (_Bool)isFinderScene:(unsigned long long)arg1;
- (_Bool)isMomentsScene:(unsigned long long)arg1;
- (void)onBecomeActive;
- (void)onResignActive;
- (double)getCameraHeight;
- (_Bool)isAuthStatusOK;
- (_Bool)needCheckRequestAuthAccess;
- (_Bool)isDeviceSupportForSightCameraWithScene:(unsigned long long)arg1;
- (_Bool)isDeviceSupportForSightCamera;
- (_Bool)isSupportSight;
- (void)dealloc;
- (id)init;
- (void)reportCompressSuccess:(_Bool)arg1 scene:(unsigned long long)arg2 encodeType:(long long)arg3 isUsingMAV:(_Bool)arg4 isSWRetry:(_Bool)arg5 isEnableHEVC:(_Bool)arg6;
- (void)endSessionWithType:(long long)arg1 actionType:(long long)arg2;
- (void)bindSessionIDWithType:(long long)arg1 actionType:(long long)arg2;
- (id)activeSessionIDWithType:(long long)arg1 actionType:(long long)arg2;
- (void)endSessionWithType:(long long)arg1;
- (void)beginSessionID:(id)arg1 withSessionType:(long long)arg2;
- (id)activeSessionIDWithType:(long long)arg1;
- (id)sessionKeyWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
