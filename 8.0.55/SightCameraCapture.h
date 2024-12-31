//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioSessionDataSourceDescription, AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MJCameraTemplateReportObject, MJTemplateCameraSession, MMQRCodeScanner, NSMutableArray, NSObject, NSRecursiveLock, NSString, XEffectEffectManager;
@protocol OS_dispatch_queue, SightCameraCaptureDelegate;

@interface SightCameraCapture
{
    _Bool m_isActive;
    _Bool m_isAudioActive;
    _Bool m_isFileOutputActive;
    AVCaptureSession *m_captureSession;
    AVCaptureDevice *m_inputCamera;
    NSString *m_videoPreset;
    AVCaptureDeviceInput *m_videoInput;
    AVCaptureDeviceInput *m_audioInput;
    AVCaptureStillImageOutput *m_imageOutput;
    AVCaptureVideoDataOutput *m_videoOutput;
    AVCaptureAudioDataOutput *m_audioOutput;
    AVCaptureMovieFileOutput *m_fileOutput;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    struct CGSize m_targetVideoSize;
    double m_targetBitRate;
    int m_captureFrameRate;
    NSMutableArray *m_movieWriters;
    NSMutableArray *m_moviePreviewers;
    MMQRCodeScanner *m_QRCodeScanner;
    unsigned int m_scannerSkip;
    NSObject<OS_dispatch_queue> *m_callbackQueue;
    _Bool m_bIsUsingHighExposureISO;
    _Bool m_needCapturePicture;
    CDUnknownBlockType m_captureBlock;
    _Bool _activeQRScan;
    _Bool _needsAlwaysResetEffectManagerWhenSwitchingCamera;
    _Bool _needsEffectManager;
    _Bool _dropFirstFrame;
    _Bool _reloadEffectFinish;
    _Bool _currentMJRecordNeedAudio;
    _Bool _currentDeviceIsUltraWideAngleCamera;
    id <SightCameraCaptureDelegate> _delegate;
    NSString *_preset;
    XEffectEffectManager *_effectManager;
    NSRecursiveLock *_m_oLock;
    MJCameraTemplateReportObject *_cameraTemplateReportObj;
    MJTemplateCameraSession *_miaojianSession;
    AVAudioSessionDataSourceDescription *_preAudioSessionDataSource;
    long long _currentDeviceCaptureOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentDeviceCaptureOrientation; // @synthesize currentDeviceCaptureOrientation=_currentDeviceCaptureOrientation;
@property(retain, nonatomic) AVAudioSessionDataSourceDescription *preAudioSessionDataSource; // @synthesize preAudioSessionDataSource=_preAudioSessionDataSource;
@property(retain, nonatomic) MJTemplateCameraSession *miaojianSession; // @synthesize miaojianSession=_miaojianSession;
@property(nonatomic) _Bool currentDeviceIsUltraWideAngleCamera; // @synthesize currentDeviceIsUltraWideAngleCamera=_currentDeviceIsUltraWideAngleCamera;
@property(retain, nonatomic) MJCameraTemplateReportObject *cameraTemplateReportObj; // @synthesize cameraTemplateReportObj=_cameraTemplateReportObj;
@property(nonatomic) _Bool currentMJRecordNeedAudio; // @synthesize currentMJRecordNeedAudio=_currentMJRecordNeedAudio;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(nonatomic) _Bool reloadEffectFinish; // @synthesize reloadEffectFinish=_reloadEffectFinish;
@property(nonatomic) _Bool dropFirstFrame; // @synthesize dropFirstFrame=_dropFirstFrame;
@property(nonatomic) _Bool needsEffectManager; // @synthesize needsEffectManager=_needsEffectManager;
@property(nonatomic) _Bool needsAlwaysResetEffectManagerWhenSwitchingCamera; // @synthesize needsAlwaysResetEffectManagerWhenSwitchingCamera=_needsAlwaysResetEffectManagerWhenSwitchingCamera;
@property(retain, nonatomic) XEffectEffectManager *effectManager; // @synthesize effectManager=_effectManager;
@property(copy, nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(nonatomic) __weak id <SightCameraCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool activeQRScan; // @synthesize activeQRScan=_activeQRScan;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=m_previewLayer;
@property(readonly, nonatomic) _Bool isAudioActive; // @synthesize isAudioActive=m_isAudioActive;
@property(nonatomic) _Bool isActive; // @synthesize isActive=m_isActive;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onInviteMultiTalk;
- (void)onVoipAccept:(id)arg1;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (long long)cameraModuleReportScene;
- (void)cameraModuleInterruptionEnd:(id)arg1;
- (void)cameraModuleInterruptionBegin:(id)arg1;
- (void)camSessionDidPresentFirstFrame:(id)arg1;
- (void)camSession:(id)arg1 needRequestAIGC:(id)arg2;
- (void)camSession:(id)arg1 recordingDidFail:(id)arg2;
- (void)camSession:(id)arg1 recordingTimeDidChange:(CDStruct_1b6d18a9)arg2 maxRecordingDuration:(CDStruct_1b6d18a9)arg3;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelExportingVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startExportingVideoWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseCameraInputWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearVideoRemixTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseTemplateAndVideoRemixTemplateWithItem:(id)arg1 videoRemixTemplateID:(id)arg2 overridingParams:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setLocationInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)loadTemplateWithTemplateID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isTemplateLoadedWithTemplateID:(id)arg1 version:(unsigned long long)arg2;
- (void)cancelLoadWithTaskID:(int)arg1;
- (void)cancelAll;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)arg1;
- (void)cancelLoadMaterialTask:(long long)arg1;
- (long long)loadMaterial:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelMaterialPackTask:(long long)arg1;
- (long long)requestMaterialPackWithScene:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startRecordingWithOutputFilePath:(id)arg1 exportSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)_audioDeviceType;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)changeCameraMusic:(id)arg1 musicEnable:(_Bool)arg2 restartPreview:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerLocalMusicWithInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isCameraWXMusicLoaded:(id)arg1;
- (_Bool)isCameraMusicLoaded:(id)arg1;
- (void)sendMaasCamSessionWithTouches:(id)arg1 event:(id)arg2 states:(unsigned long long)arg3;
- (int)loadTemplateWithTemplateId:(id)arg1 priority:(long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)preloadTemplateWithTemplateId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearTemplateWithMusicEnabled:(_Bool)arg1 params:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginUseTemplateWithTemplate:(id)arg1 enableMusic:(_Bool)arg2 params:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getTemplateInfoWithItem:(id)arg1;
- (_Bool)isTemplateLoadedWithTemplate:(id)arg1;
- (void)clearTemplateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 shouldEnableAudio:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearFilterDescWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFilterDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startCamSessionPreviewingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isUsingMaasCapSessionForRender;
- (id)capFunSessionRenderView;
- (void)startUpCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanUpCameraSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)destroyMiaojianSession;
- (void)createMiaojianSession;
- (float)getValidParamValue:(float)arg1;
- (void)setBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (void)effectManager:(id)arg1 didOutputPixelBuffer:(id)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (id)effectManagerPreviewLayer;
- (void)switchBeautyEffect:(_Bool)arg1;
- (void)deallocEffectManager;
- (void)initEffectManager;
- (id)processWithSampleImageAfterPerformCachedOperations:(id)arg1;
- (void)resetExposureISO;
- (double)minExposureISO;
- (double)maxExposureISO;
- (double)currentExposureISO;
- (void)setExposureISO:(double)arg1;
- (void)turnOnExposureHighISO;
- (_Bool)isUsingHighExposureISO;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashlightMode;
- (void)initQRCodeScanner;
- (void)onQRCodeScanSuccess:(id)arg1 atPoint:(vector_d4107ee0)arg2 originSize:(struct CGSize)arg3;
- (void)onNoQRCode;
- (void)setMiaojianCameraRecordNeedAudio:(_Bool)arg1;
- (_Bool)switchCameraToPosition:(long long)arg1 needAudio:(_Bool)arg2;
- (_Bool)switchCameraToPosition:(long long)arg1;
- (_Bool)switchCamera;
- (long long)cameraPosition;
- (double)setZoomFactor:(double)arg1 ignoreLimit:(_Bool)arg2 animated:(_Bool)arg3;
- (double)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (double)maxZoomFactor;
- (double)minZoomFactor;
- (double)defaultZoomFactor;
- (_Bool)enableAutoSwitchCameraWhenFocusing;
- (_Bool)enableAutoSwitchCameraWhenFocusing:(long long)arg1;
- (long long)getSuitableCaptureOrientation;
- (_Bool)isSupportZoomWithFactor:(double)arg1 isProMode:(_Bool)arg2;
- (void)zoom;
- (_Bool)canZoom;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)stopCameraCaptureAudioDevice;
- (_Bool)stopCameraCapture;
- (_Bool)startCameraCaptureAudioDevice;
- (void)startCameraCapture;
- (void)onCameraFailed;
- (void)startRunning;
- (_Bool)isRunning;
- (void)capturePreviewImageWithBlock:(CDUnknownBlockType)arg1;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeMoviePreviewer:(id)arg1;
- (void)setMoviePreviwerOutputSizeAndSession:(id)arg1;
- (void)addMoviePreviewer:(id)arg1;
- (void)setPreviewReady;
- (void)removeMovieWriter:(id)arg1;
- (void)addMovieWriter:(id)arg1;
- (_Bool)hasMultipleCameras;
- (id)cameraWithPosition:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)safeCallOnAutoSwitchingCamera;
- (void)switchToFileOutputMode;
- (_Bool)isFileOutputMode;
- (void)resetEffectManagerLite;
- (void)clearEffectManager;
- (void)resetEffectManager;
- (void)setSessionPreset:(id)arg1 forCameraPosition:(long long)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (void)dealloc;
- (void)setCameraFrameRate;
- (void)chooseInputDeviceForBuiltInMic:(_Bool)arg1;
- (void)restoreInputDeviceInMid;
- (_Bool)initCaptureSession:(id)arg1 needAudio:(_Bool)arg2;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 frameRate:(int)arg3 needAudio:(_Bool)arg4;
- (id)initWithSessionPreset:(id)arg1 frameRate:(int)arg2 needAudio:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

