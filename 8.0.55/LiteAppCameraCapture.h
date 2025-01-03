//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue;

@interface LiteAppCameraCapture
{
    _Bool _isActive;
    _Bool _isAudioActive;
    _Bool _activeQRScan;
    AVCaptureVideoPreviewLayer *_previewLayer;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) _Bool activeQRScan; // @synthesize activeQRScan=_activeQRScan;
@property(readonly, nonatomic) _Bool isAudioActive; // @synthesize isAudioActive=_isAudioActive;
@property _Bool isActive; // @synthesize isActive=_isActive;
- (double)minZoomFactor;
- (void)resetExposureISO;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (_Bool)supportTorchMode;
- (void)setFlashlightMode:(long long)arg1;
- (long long)flashMode;
- (_Bool)supportFlashlightMode;
- (_Bool)setFlash:(long long)arg1 AndTorchMode:(long long)arg2;
- (void)setCaptureSessionPreset:(id)arg1;
- (_Bool)switchCamera;
- (_Bool)hasMultipleCameras;
- (void)zoom;
- (double)maxZoomFactor;
- (_Bool)canZoom;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (_Bool)stopCameraCapture;
- (void)startCameraCapture;
- (void)startRunning;
- (void)capturePreviewImageWithFinalFilter:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)takePictureWithFinalFilter:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)adjustImage:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 frameRate:(int)arg2;
- (id)initWithPreset:(id)arg1;

@end

