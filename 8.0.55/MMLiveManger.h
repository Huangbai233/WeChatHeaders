//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIContext, MMAVCameraCapture, MMLiveMangerProxy, MMLiveVideoFrameReprocessPipeLine, MMLiveVideoFrameWidgetManageLogic, MMRenderVideoFrame, MMVideoRciRenderView, MMVideoRenderView, MMViewCapture, MMWeEffectManager, NSString, UIImageView, WCLoopMetricsCollector;
@protocol MMLiveManagerCaptureDelegate, MMLiveManagerMetricsDelegate, MMLiveMangerPusherDelegate;

@interface MMLiveManger : NSObject
{
    long long _resolution;
    struct CGSize _videoSize;
    int _videoFPS;
    int _maxRenderFPS;
    _Bool _enableFaceDetect;
    _Bool _isPaused;
    _Bool _remoteFrontMirror;
    _Bool _remoteBackMirror;
    long long _renderMode;
    struct opaqueCMSampleBuffer *_lastSampleBufferFromViewCapture;
    struct _opaque_pthread_mutex_t _compositingLock;
    struct __CVBuffer *_lastCapturedPixelBuffer;
    struct _opaque_pthread_mutex_t _pixelBufferLock;
    _Bool _enableZoom;
    _Bool _enableTouchFocus;
    _Bool _enableRenderViewGestures;
    _Bool _isMainThreadLag2024T31Enabled;
    _Bool _isLiveCaptureRenderRotateTransiting;
    _Bool _isUseWeEffectMirror;
    _Bool _enableRci;
    _Bool _renderViewInRotateAnimation;
    _Bool _isStartCustomRender;
    _Bool _isResignActive;
    id <MMLiveMangerPusherDelegate> _pusherDelegate;
    id <MMLiveManagerMetricsDelegate> _metricsDelegate;
    id <MMLiveManagerCaptureDelegate> _captureDelegate;
    MMRenderVideoFrame *_mRenderVideoFrame;
    MMWeEffectManager *_weEffectManager;
    WCLoopMetricsCollector *_captureMetricsCollector;
    double _aspectRatioOfCamera;
    double _sizeRatioOfCameraToScreen;
    double _marginXRatioOfCameraToScreen;
    long long _centerXSideOfCameraToScreen;
    double _centerYRatioOfCameraToScreen;
    MMLiveMangerProxy *_liveManagerProxy;
    MMAVCameraCapture *_cameraCapturer;
    MMVideoRenderView *_renderView;
    MMVideoRciRenderView *_rciRenderView;
    MMViewCapture *_viewCapture;
    CIContext *_compositingContext;
    double _zoomScale;
    MMLiveVideoFrameReprocessPipeLine *_videoFrameReprocessPipeLine;
    long long _expectedFrameOrientation;
    UIImageView *_overlapImageView;
    CDUnknownBlockType _rotateAnimationRenderRecoverCallback;
    long long _fpsCounter;
    unsigned long long _captureFrameCount;
    unsigned long long _renderFrameCount;
    long long _captureFps;
    long long _renderFps;
    unsigned long long _captureFpsStatCnt;
    unsigned long long _renderFpsStatCnt;
    CDUnknownBlockType _captureFpsReport;
    CDUnknownBlockType _renderFpsReport;
}

+ (void)destroySharedInstance;
+ (id)sharedInstance;
+ (CDUnknownBlockType)createReportTimer:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType renderFpsReport; // @synthesize renderFpsReport=_renderFpsReport;
@property(copy) CDUnknownBlockType captureFpsReport; // @synthesize captureFpsReport=_captureFpsReport;
@property unsigned long long renderFpsStatCnt; // @synthesize renderFpsStatCnt=_renderFpsStatCnt;
@property unsigned long long captureFpsStatCnt; // @synthesize captureFpsStatCnt=_captureFpsStatCnt;
@property long long renderFps; // @synthesize renderFps=_renderFps;
@property long long captureFps; // @synthesize captureFps=_captureFps;
@property unsigned long long renderFrameCount; // @synthesize renderFrameCount=_renderFrameCount;
@property unsigned long long captureFrameCount; // @synthesize captureFrameCount=_captureFrameCount;
@property(nonatomic) _Bool isResignActive; // @synthesize isResignActive=_isResignActive;
@property(nonatomic) long long fpsCounter; // @synthesize fpsCounter=_fpsCounter;
@property(nonatomic) _Bool isStartCustomRender; // @synthesize isStartCustomRender=_isStartCustomRender;
@property(copy, nonatomic) CDUnknownBlockType rotateAnimationRenderRecoverCallback; // @synthesize rotateAnimationRenderRecoverCallback=_rotateAnimationRenderRecoverCallback;
@property(retain, nonatomic) UIImageView *overlapImageView; // @synthesize overlapImageView=_overlapImageView;
@property(nonatomic) _Bool renderViewInRotateAnimation; // @synthesize renderViewInRotateAnimation=_renderViewInRotateAnimation;
@property(nonatomic) long long expectedFrameOrientation; // @synthesize expectedFrameOrientation=_expectedFrameOrientation;
@property(nonatomic) _Bool enableRci; // @synthesize enableRci=_enableRci;
@property(retain, nonatomic) MMLiveVideoFrameReprocessPipeLine *videoFrameReprocessPipeLine; // @synthesize videoFrameReprocessPipeLine=_videoFrameReprocessPipeLine;
@property _Bool isUseWeEffectMirror; // @synthesize isUseWeEffectMirror=_isUseWeEffectMirror;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(retain) CIContext *compositingContext; // @synthesize compositingContext=_compositingContext;
@property(retain) MMViewCapture *viewCapture; // @synthesize viewCapture=_viewCapture;
@property(retain) MMVideoRciRenderView *rciRenderView; // @synthesize rciRenderView=_rciRenderView;
@property(retain, setter=hide_setRenderView:) MMVideoRenderView *renderView; // @synthesize renderView=_renderView;
@property(retain) MMAVCameraCapture *cameraCapturer; // @synthesize cameraCapturer=_cameraCapturer;
@property(nonatomic) __weak MMLiveMangerProxy *liveManagerProxy; // @synthesize liveManagerProxy=_liveManagerProxy;
@property double centerYRatioOfCameraToScreen; // @synthesize centerYRatioOfCameraToScreen=_centerYRatioOfCameraToScreen;
@property long long centerXSideOfCameraToScreen; // @synthesize centerXSideOfCameraToScreen=_centerXSideOfCameraToScreen;
@property double marginXRatioOfCameraToScreen; // @synthesize marginXRatioOfCameraToScreen=_marginXRatioOfCameraToScreen;
@property double sizeRatioOfCameraToScreen; // @synthesize sizeRatioOfCameraToScreen=_sizeRatioOfCameraToScreen;
@property double aspectRatioOfCamera; // @synthesize aspectRatioOfCamera=_aspectRatioOfCamera;
@property(nonatomic) _Bool isLiveCaptureRenderRotateTransiting; // @synthesize isLiveCaptureRenderRotateTransiting=_isLiveCaptureRenderRotateTransiting;
@property(readonly, nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool isMainThreadLag2024T31Enabled; // @synthesize isMainThreadLag2024T31Enabled=_isMainThreadLag2024T31Enabled;
@property(nonatomic) _Bool enableRenderViewGestures; // @synthesize enableRenderViewGestures=_enableRenderViewGestures;
@property(retain, nonatomic) WCLoopMetricsCollector *captureMetricsCollector; // @synthesize captureMetricsCollector=_captureMetricsCollector;
@property(retain, nonatomic) MMWeEffectManager *weEffectManager; // @synthesize weEffectManager=_weEffectManager;
@property(nonatomic) _Bool enableTouchFocus; // @synthesize enableTouchFocus=_enableTouchFocus;
@property(nonatomic) _Bool enableZoom; // @synthesize enableZoom=_enableZoom;
@property(retain, nonatomic) MMRenderVideoFrame *mRenderVideoFrame; // @synthesize mRenderVideoFrame=_mRenderVideoFrame;
@property(nonatomic) __weak id <MMLiveManagerCaptureDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
@property(nonatomic) __weak id <MMLiveManagerMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property(nonatomic) __weak id <MMLiveMangerPusherDelegate> pusherDelegate; // @synthesize pusherDelegate=_pusherDelegate;
- (_Bool)getWeEffectNeedMirror;
- (void)updateWeEffectNeedMirrorIfNeeded;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (struct CGSize)getVideoSize:(struct CGSize)arg1 homeOrientation:(long long)arg2;
- (_Bool)enableStats;
- (void)changeStatsState;
- (void)onResignActive;
- (void)onBecomeActive;
- (void)updateRenderViewInRotateAnimation:(_Bool)arg1;
- (_Bool)getLiveCaptureRenderRotateTransiting;
- (void)checkRenderRotateTransitingChanged;
- (void)hideOverlapImageViewIfNeeded;
- (void)callAndReleaseRenderCallback;
- (void)showImageViewOverRenderViewWithSize:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2;
- (void)animateRCIRenderViewRotationWithCoordinator:(id)arg1 completion:(CDUnknownBlockType)arg2 renderRecoverCompletion:(CDUnknownBlockType)arg3;
- (void)animateRenderViewRotationWithCoordinator:(id)arg1 completion:(CDUnknownBlockType)arg2 renderRecoverCompletion:(CDUnknownBlockType)arg3;
- (void)animateRotationWithCoordinator:(id)arg1 completion:(CDUnknownBlockType)arg2 renderRecoverCompletion:(CDUnknownBlockType)arg3;
- (void)updateForCustomRenderState;
- (void)stopCustomRender;
- (void)startCustomRender;
- (_Bool)getCurrentRenderable;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)viewCapture:(id)arg1 didCaptureSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 orientation:(long long)arg3;
- (void)updateLastSampleBufferFromViewCapture:(struct opaqueCMSampleBuffer *)arg1;
- (void)resumeViewCapture;
- (void)pauseViewCapture;
- (void)stopViewCapture;
- (void)startViewCaptureWithView:(id)arg1;
@property(readonly, nonatomic) _Bool isViewCapturing;
@property(nonatomic) struct CGSize videoSize;
- (void)onRenderViewFocusAtPoint:(struct CGPoint)arg1;
- (void)updateFocusAtPoint:(struct CGPoint)arg1;
- (void)onRenderViewPinchScale:(double)arg1;
- (void)updateZoomScaleWithGestureScale:(double)arg1;
- (_Bool)checkNeedSkipRenderFrame;
- (long long)getFrameInterval;
- (int)currVideoFPS;
- (void)addUser:(id)arg1 videoView:(id)arg2;
- (void)ignoreDarkFramesOnceAfterSettingConfiguration;
- (void)setRemoteMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setRotation:(int)arg1;
@property(readonly, nonatomic) _Bool isUsingUltraWideCamera;
@property(readonly, nonatomic) _Bool isRunning;
- (struct CGSize)getCaptureVideoSize;
- (void)setVideoResolution1920x1440;
- (void)setVideoResolutionUse1920x1080:(_Bool)arg1;
- (void)setVideoResolution:(int)arg1 sampleBufferSize:(struct CGSize)arg2 homeOrientation:(int)arg3;
- (void)setFaceDetect:(_Bool)arg1;
- (void)setFront:(_Bool)arg1;
- (void)setMaxRenderFrameRate:(int)arg1;
- (void)setFrameRate:(int)arg1;
- (void)switchCameraWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchCamera;
- (void)stopCameraCapture;
- (void)startCameraCaptureUseFrontCamera:(_Bool)arg1;
- (void)startCameraCapture;
- (void)setCustomCameraConfigs:(id)arg1;
- (void)notifyOutputRenderFrame:(id)arg1;
- (void)notifyOutputSampleBufferForTransmit:(struct opaqueCMSampleBuffer *)arg1 localRenderFlipX:(_Bool)arg2;
- (void)notifyOutputSampleBufferForRender:(struct opaqueCMSampleBuffer *)arg1 localRenderFlipX:(_Bool)arg2;
- (void)sendVideoData:(struct opaqueCMSampleBuffer *)arg1 shouldReportCaptureMetrics:(_Bool)arg2;
- (struct opaqueCMSampleBuffer *)createCompositedSampleBufferWithCameraSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isCameraMirror:(_Bool)arg2 inScreenSampleBuffer:(struct opaqueCMSampleBuffer *)arg3;
- (void)onAutoChangedVirtualCameraCaptureDevice:(_Bool)arg1;
- (void)onCameraCaptureRunningChanged:(_Bool)arg1;
- (void)onCameraCapture:(struct opaqueCMSampleBuffer *)arg1 mirror:(_Bool)arg2 rotation:(long long)arg3 isFront:(_Bool)arg4;
@property(readonly, nonatomic) MMLiveVideoFrameWidgetManageLogic *widgetManageLogic;
- (void)setRenderView:(id)arg1;
- (void)initNotifications;
- (id)initInternal;
- (void)logForRenderStatIfNeed;
- (void)logForCaptureStatIfNeed;
- (void)increaseRenderFpsStatCnt;
- (void)increaseCaptureFpsStatCnt;
- (void)increaseRenderFrameCnt;
- (void)increaseCaptureFrameCnt;
- (CDUnknownBlockType)createRenderFpsReporter;
- (CDUnknownBlockType)createCaptureFpsReporter;
- (void)clearRenderStats;
- (void)updateRenderStats;
- (void)initRenderStats;
- (void)clearCaptureStats;
- (void)updateCaptureStats;
- (void)initCaptureStats;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

