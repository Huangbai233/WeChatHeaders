//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, MMGPUClarityFilter, MMGPUClarityPreProcess, MMGPUSpatiotemporalDenosing, NSArray, NSMutableArray, NSRecursiveLock, NSString, SpatiotemporalDenosingPreProcess, WCLoopMetricsCollector, WeVisByPassFS, WeVisGLFrameBuffer, WeVisGLRGBA2YUVTwoPassFS, WeVisGLTexture, WeVisGLYUV2RGBA, WeVisPixelBuffer;
@protocol WeVisVoipEffectDelegate;

@interface WeVisVoipEffectMgr : NSObject
{
    int _rotation;
    struct unique_ptr<WeEffect::X3DEffect, std::default_delete<WeEffect::X3DEffect>> _spWeEffect;
    unsigned int _trackFaceRotation;
    _Bool _remoteIsNotPhone;
    _Bool _needMirror;
    _Bool _enableSTFilter;
    _Bool _enableSkipBeauty;
    _Bool _enableClarity;
    int _clarityMode;
    _Bool _useMultiTemporalFilter;
    _Bool _enableRciEffect;
    long long lutFilterId;
    long long lutRosyLutId;
    long long sharpenFilterId;
    long long teethBrightId;
    basic_string_5909a4e2 filterStrPath;
    long long filterID;
    WeVisPixelBuffer *sdkSrcPixelBuffer;
    WeVisGLTexture *texSdkSrcRGBA;
    WeVisGLTexture *texSdkDstRGBA;
    WeVisGLTexture *texSrcY;
    WeVisGLTexture *texSrcUV;
    WeVisGLTexture *texSrcRGBA;
    WeVisGLTexture *texDstY;
    WeVisGLTexture *texDstUV;
    WeVisGLFrameBuffer *fboSdkSrcRGBA;
    WeVisGLFrameBuffer *fboDstY;
    WeVisGLFrameBuffer *fboDstUV;
    WeVisGLFrameBuffer *fboSrcRGBA;
    int widthSrcY;
    int heightSrcY;
    int widthSrcUV;
    int heightSrcUV;
    int widthScaled;
    int heightScaled;
    int widthSdk;
    int heightSdk;
    int widthDstY;
    int heightDstY;
    int widthDstUV;
    int heightDstUV;
    int requiredWidthDstY;
    int requiredHeightDstY;
    WeVisGLYUV2RGBA *yuv2rgba;
    WeVisGLRGBA2YUVTwoPassFS *rgba2yuvTwoPass;
    WeVisByPassFS *scalePass;
    MMGPUSpatiotemporalDenosing *stDenosingFilter;
    SpatiotemporalDenosingPreProcess *denosingPreProcess;
    MMGPUClarityFilter *clarityFilter;
    MMGPUClarityPreProcess *clarityPreProcess;
    WeVisPixelBuffer *dstPixelBuffer;
    struct vector<unsigned char, std::allocator<unsigned char>> sdkSrcRGBData;
    struct __CVOpenGLESTextureCache *cvTextureCache;
    _Bool enableTranspose;
    _Bool usingBackCamera;
    int oldRotation;
    int oldInputWidth;
    int oldInputHeight;
    int oldOutputWidth;
    int oldOutputHeight;
    struct vector<unsigned char, std::allocator<unsigned char>> faceTrackInputRGB;
    struct __CVPixelBufferPool *mOutPool;
    long long sceneType;
    float blurRate;
    float eyePouchRate;
    float smileFoldsRate;
    float teethBrightRate;
    float contourRate;
    long long faceAutoSlimerId;
    long long girlFaceAutoSlimerId;
    long long boyFaceAutoSlimerId;
    long long smallHeadId;
    long long cheekboneId;
    long long lowerJawboneId;
    long long wingOfNoseId;
    long long shortChinId;
    long long longChinId;
    long long lowHairLineId;
    long long highHairLineId;
    long long eyeBiggerV2Id;
    long long zhaiLianId;
    long long contourId;
    struct __CVBuffer *texY;
    struct __CVBuffer *texUV;
    struct WeVisDataReport22049 dataReport22049;
    NSArray *_modelKeyArray;
    struct mutex mCacheMutex;
    struct priority_queue<cacheElement, std::vector<cacheElement>, cacheCmp> mRenderTargetCache;
    int mLastFrameId;
    int mFrameCount;
    int mLastWidth;
    int mLastHeight;
    unsigned int mLastRenderTarget;
    _Bool isSTFilterBuildinPipeline;
    _Bool isUseSpatilFilterForPipeline;
    _Bool isSizeChanged;
    unsigned long long _deviceType;
    _Bool _isAllowFp16;
    _Bool _isBackground;
    _Bool _shouldUseIPadRotationWhenProcessingVideoSampleBuffer;
    NSString *_dataUniqueID;
    id <WeVisVoipEffectDelegate> _resultDelegate;
    CDUnknownBlockType _dataReportCallback;
    NSMutableArray *_face2DStickers;
    NSMutableArray *_face3DStickers;
    NSMutableArray *_eyeBrows;
    NSMutableArray *_eyeShadows;
    NSMutableArray *_lipSticker;
    NSMutableArray *_faceContours;
    NSMutableArray *_blusher;
    NSMutableArray *_segments;
    NSMutableArray *_frontStickers;
    NSMutableArray *_effectMaterials;
    NSMutableArray *_pendingOpBlocks;
    EAGLContext *_glContext;
    NSRecursiveLock *_lock;
    long long _trackConfig;
    long long _actionConfig;
    WCLoopMetricsCollector *_liveCaptureMetricsCollector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) WCLoopMetricsCollector *liveCaptureMetricsCollector; // @synthesize liveCaptureMetricsCollector=_liveCaptureMetricsCollector;
@property(nonatomic) long long actionConfig; // @synthesize actionConfig=_actionConfig;
@property(nonatomic) long long trackConfig; // @synthesize trackConfig=_trackConfig;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(retain, nonatomic) NSMutableArray *pendingOpBlocks; // @synthesize pendingOpBlocks=_pendingOpBlocks;
@property(retain, nonatomic) NSMutableArray *effectMaterials; // @synthesize effectMaterials=_effectMaterials;
@property(retain, nonatomic) NSMutableArray *frontStickers; // @synthesize frontStickers=_frontStickers;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSMutableArray *blusher; // @synthesize blusher=_blusher;
@property(retain, nonatomic) NSMutableArray *faceContours; // @synthesize faceContours=_faceContours;
@property(retain, nonatomic) NSMutableArray *lipSticker; // @synthesize lipSticker=_lipSticker;
@property(retain, nonatomic) NSMutableArray *eyeShadows; // @synthesize eyeShadows=_eyeShadows;
@property(retain, nonatomic) NSMutableArray *eyeBrows; // @synthesize eyeBrows=_eyeBrows;
@property(retain, nonatomic) NSMutableArray *face3DStickers; // @synthesize face3DStickers=_face3DStickers;
@property(retain, nonatomic) NSMutableArray *face2DStickers; // @synthesize face2DStickers=_face2DStickers;
@property(nonatomic) _Bool shouldUseIPadRotationWhenProcessingVideoSampleBuffer; // @synthesize shouldUseIPadRotationWhenProcessingVideoSampleBuffer=_shouldUseIPadRotationWhenProcessingVideoSampleBuffer;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(copy, nonatomic) CDUnknownBlockType dataReportCallback; // @synthesize dataReportCallback=_dataReportCallback;
@property(nonatomic) __weak id <WeVisVoipEffectDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(copy, nonatomic) NSString *dataUniqueID; // @synthesize dataUniqueID=_dataUniqueID;
- (void)setSceneType:(long long)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)registerBackgroundNotification;
- (void)waitForPipeLineEnd;
- (void)enableSkipBeauty:(_Bool)arg1;
- (void)enableClarityFilter:(_Bool)arg1 withMode:(int)arg2;
- (void)enableSTDenoiseFilter:(_Bool)arg1 useSpatioFilter:(_Bool)arg2 useMultiTemporalFilter:(_Bool)arg3;
- (void)clearFilters;
- (void)clearMakeUp;
- (void)clearStickers;
- (void)clearAllEffects;
- (void)clean;
- (void)notifyEventsIfNeeded;
- (void)collectPerformanceData;
- (id)processVideoSampleBufferWithPipeLine:(struct opaqueCMSampleBuffer *)arg1 pixelBufferFlipX:(_Bool)arg2 shouldIgnoreBackground:(_Bool)arg3;
- (id)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 pixelBufferFlipX:(_Bool)arg2 shouldIgnoreBackground:(_Bool)arg3;
- (unsigned int)getIPadRotation;
- (id)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 shouldIgnoreBackground:(_Bool)arg2;
- (id)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 outputTexture:(int *)arg2 shouldIgnoreBackground:(_Bool)arg3;
- (id)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 outputTexture:(int *)arg2 pixelBufferFlipX:(_Bool)arg3 shouldIgnoreBackground:(_Bool)arg4;
- (_Bool)getSrcTexYUVFromPixelBuffer:(struct __CVBuffer *)arg1;
- (_Bool)callFaceTrackForPixelBuffer:(struct __CVBuffer *)arg1;
- (void)genYUVSourceWithWidth:(int)arg1 Height:(int)arg2;
- (void)genVideoInputSources:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)updateVideoInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (_Bool)updateOutCVPixelbufferFromPool;
- (void)requireVideoOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (void)updateActionConfig:(id)arg1;
- (void)updateActionsForAssetPath:(id)arg1;
- (void)clearEffectMaterialsFolder;
- (void)setMakeupGlobalAlpha:(float)arg1;
- (void)applyEffectMaterialsFolder:(id)arg1;
- (void)setContourRate:(float)arg1;
- (void)applyContour;
- (void)applyBlusher:(id)arg1;
- (void)applyContours:(id)arg1;
- (void)applyLipStick:(id)arg1;
- (void)applyEyeShadow:(id)arg1;
- (void)applyEyeBrow:(id)arg1;
- (void)applyFrontSticker:(id)arg1;
- (void)applyBackSticker:(id)arg1;
- (void)removeEffectMaterial:(long long)arg1;
- (void)applyEffectMaterial:(id)arg1;
- (void)apply2DSticker:(id)arg1;
- (void)SetNaturalFilter:(float)arg1;
- (void)applyFilterWithConfig:(id)arg1 alpha:(double)arg2;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)setZhaiLian:(float)arg1;
- (void)setZhaiLianTemplate;
- (void)setEyeBiggerV2:(float)arg1;
- (void)setEyeBiggerV2Template;
- (void)setMouthMorph:(float)arg1;
- (void)setLowHighHairLine:(float)arg1;
- (void)setHighHairLineTemplate;
- (void)setLowHairLineTemplate;
- (void)setShortLongChin:(float)arg1;
- (void)setLongChinTemplate;
- (void)setShortChinTemplate;
- (void)setWingOfNose:(float)arg1;
- (void)setWingOfNoseTemplate;
- (void)setLowerJawbone:(float)arg1;
- (void)setLowerJawboneTemplate;
- (void)setCheekbone:(float)arg1;
- (void)setCheekboneTemplate;
- (void)setSmallHead:(float)arg1;
- (void)setSmallHeadTemplate;
- (void)setTeethBright:(float)arg1;
- (void)setSharpenFilter:(float)arg1;
- (void)setRemoveEyePouch:(float)arg1 smileFolds:(float)arg2;
- (void)setBrowEnhance:(float)arg1;
- (void)setBoyFaceAutoSlimer:(float)arg1;
- (void)setBoyFaceAutoSlimerTemplate;
- (void)setGirlFaceAutoSlimer:(float)arg1;
- (void)setGirlFaceAutoSlimerTemplate;
- (void)setFaceAutoSlimer:(float)arg1;
- (void)setFaceThin:(float)arg1;
- (void)setEyeBright:(float)arg1;
- (void)setEyeBigger:(float)arg1;
- (void)setSkinBright:(float)arg1;
- (void)setSkinSmooth:(float)arg1;
- (unsigned int)getAppScenario;
- (void)setRosy:(float)arg1;
- (void)setLutFilter:(float)arg1;
- (void)setBackgroundEffectRate:(float)arg1 segmentMode:(int)arg2;
- (float)limitValue:(float)arg1 ToMin:(float)arg2 ToMax:(float)arg3;
- (_Bool)needWeEffectInstance:(int)arg1 device:(unsigned long long)arg2;
- (void)flushDataReport:(id)arg1;
- (void)loadingSettings;
- (void)performPendingOpBlocks;
- (_Bool)enableFaceOccuSeg;
- (long long)faceConfig;
- (_Bool)needFaceTrack;
- (void)setRotationForTrackFace:(int)arg1;
- (void)setRemoteIsNotPhone:(_Bool)arg1;
- (void)setUsingBackCamera:(_Bool)arg1;
- (void)setRotation:(int)arg1;
- (void)enableTranspose:(_Bool)arg1;
- (void)dealloc;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2 modelKeyArray:(id)arg3 SDKMode:(int)arg4 runDeviceType:(unsigned long long)arg5 isAllowFp16:(_Bool)arg6 isClientRciEnabled:(_Bool)arg7;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2 modelKeyArray:(id)arg3 SDKMode:(int)arg4;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2 modelKeyArray:(id)arg3 runDeviceType:(unsigned long long)arg4 isAllowFp16:(_Bool)arg5 isClientRciEnabled:(_Bool)arg6;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2 modelKeyArray:(id)arg3;
- (id)initWithGlContext:(id)arg1 sceneType:(long long)arg2;
- (id)init;
- (void)setEffect:(id)arg1;

@end

