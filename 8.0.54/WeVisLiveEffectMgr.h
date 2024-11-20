//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class EAGLContext, MMGPUClarityFilter, MMGPUClarityPreProcess, MMGPUSpatiotemporalDenosing, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, SpatiotemporalDenosingPreProcess, WCLoopMetricsCollector, WeVisByPassFS, WeVisGLCompose2RGBA, WeVisGLFrameBuffer, WeVisGLRGBA2YUVTwoPassFS, WeVisGLTexture, WeVisGLYUV2RGBA, WeVisPixelBuffer;
@protocol WeVisLiveEffectDelegate, WeVisLiveEffectEnergyController;

@interface WeVisLiveEffectMgr : NSObject
{
    int rotation;
    struct unique_ptr<WeEffect::X3DEffect, std::default_delete<WeEffect::X3DEffect>> spWeEffect;
    unsigned int trackFaceRotation;
    _Bool remoteIsNotPhone;
    _Bool _needMirror;
    _Bool enableSTFilter;
    _Bool enableSkipBeauty;
    _Bool enableClarity;
    int _clarityMode;
    _Bool _enableRciEffect;
    float _cropTextureRatio;
    long long lutFilterId;
    long long lutRosyLutId;
    long long sharpenFilterId;
    long long teethBrightId;
    basic_string_5909a4e2 filterStrPath;
    long long filterID;
    _Bool initAutoSlimer;
    WeVisPixelBuffer *sdkSrcPixelBuffer;
    WeVisGLTexture *texSdkSrcRGBA;
    WeVisGLTexture *texSdkDstRGBA;
    WeVisGLTexture *texSrcY;
    WeVisGLTexture *texSrcUV;
    WeVisGLTexture *texSrcRGBA;
    WeVisGLTexture *texInputRGBA;
    WeVisGLTexture *texDstY;
    WeVisGLTexture *texDstUV;
    WeVisGLFrameBuffer *fboSdkSrcRGBA;
    WeVisGLFrameBuffer *fboDstY;
    WeVisGLFrameBuffer *fboDstUV;
    WeVisGLFrameBuffer *fboSrcRGBA;
    WeVisGLFrameBuffer *fboInputRGBA;
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
    WeVisGLCompose2RGBA *compose2rgba;
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
    int enableHostDenoise;
    _Bool enableHandEnergySavingMode;
    struct __CVBuffer *texY;
    struct __CVBuffer *texUV;
    struct WeVisDataReport22049 dataReport22049;
    NSArray *modelKeyArray;
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
    _Bool _isAllowFp16;
    struct Settings {
        int Version;
        basic_string_5909a4e2 AssetsDir;
        int FaceAlignmentAlign;
        int FaceAlignmentVisible;
        int FaceAlignmentMouth;
        int FaceAlignmentNose;
        int FaceAlignmentEye;
        int FaceAlignmentForehead;
        int FaceAlignmentIris;
        int FaceMaxNum;
        float ExcludeThresh;
        int Face3DLandmark;
        int Face3DIdentity;
        int FaceAlignmentCombined;
        int PortraitSegment;
        int OccSegment;
        int FaceBeautySkinSmooth;
        int FaceBeautySkinBright;
        int FaceBeautyEyeBright;
        int FaceBeautyEyebrowEnhance;
        int FaceBeautyEyePouch;
        int FaceBeautySmileFolds;
        int FaceBeautySharpenFilter;
        int FaceBeautyTeethBright;
        int FaceBeautyLutFilter;
        int FaceBeautyNaturalFilter;
        int FaceBeautySkinDetect;
        int FaceBeautyBlurDecay;
        int FaceSlim;
        vector_bfe5b09a StickerGroupOrder;
        float FaceBeautySkinSmoothRatio;
        float FaceBeautySkinBrightRatio;
        float FaceBeautyEyeBrightRatio;
        float FaceBeautyEyebrowEnhanceRatio;
        float FaceBeautyEyePouchRatio;
        float FaceBeautySmileFoldsRatio;
        float FaceBeautySharpenFilterRatio;
        float FaceBeautyTeethBrightRatio;
        float FaceBeautyNaturalFilterRatio;
        float HandGestureThresholdLike;
        float HandGestureThresholdSingleHandHeart;
        int BodyPoseAlign;
        int BodyDetectBaseSize;
        float BodyDetectScoreThres;
        float BodyGestureVheartThres;
        int BodyPoseAlignDevice;
        int PortraitSegmentDevice;
        int PortraitSegmentMiniDevice;
        int PortraitSegmentTinyDevice;
        int HairSegment;
        int HairSegmentDevice;
        float PortraitSegmentSmoothC1;
        float PortraitSegmentSmoothC2;
        int ShoeDetectBaseSize;
        float ShoeDetectScoreThres;
        int PortraitSegmentSize;
        int EnableGuidedFilter;
        struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> UpdatedKeys;
    } _settings;
    NSString *beautyAssetsDirectory;
    _Bool _luaRuntimeAvailable;
    _Bool _handModelAvailable;
    _Bool _isBackground;
    _Bool _enableCropTexture;
    _Bool _destroyed;
    unsigned int _faceTrackSkipFrameCnt;
    id <WeVisLiveEffectDelegate> _resultDelegate;
    WCLoopMetricsCollector *_liveCaptureMetricsCollector;
    CDUnknownBlockType _dataReportCallback;
    NSString *_dataUniqueID;
    id <WeVisLiveEffectEnergyController> _energyController;
    NSMutableArray *_face2DStickers;
    NSMutableArray *_face3DStickers;
    NSMutableArray *_eyeBrows;
    NSMutableArray *_eyeShadows;
    NSMutableArray *_lipSticker;
    NSMutableArray *_faceContours;
    NSMutableArray *_blusher;
    NSMutableArray *_segments;
    NSMutableArray *_frontStickers;
    NSMutableArray *_makeupMaterials;
    NSMutableArray *_giftMaterials;
    NSMutableArray *_liveStickerMaterials;
    NSMutableArray *_liveFaceDetectMaterials;
    NSMutableArray *_liveFaceRectDetectMaterials;
    NSMutableArray *_liveVisionEffectMaterials;
    NSMutableArray *_pendingOpBlocks;
    EAGLContext *_glContext;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_handTrackingScriptPathToObjectIdDict;
    NSMutableDictionary *_handTrackingScriptObjectIdToPathDict;
    long long _trackConfig;
    long long _actionConfig;
    unsigned long long _frameCnt;
}

+ (void)configGlobalContext:(void *)arg1 withModelKeyArr:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool destroyed; // @synthesize destroyed=_destroyed;
@property(nonatomic) unsigned int faceTrackSkipFrameCnt; // @synthesize faceTrackSkipFrameCnt=_faceTrackSkipFrameCnt;
@property(nonatomic) unsigned long long frameCnt; // @synthesize frameCnt=_frameCnt;
@property(nonatomic) long long actionConfig; // @synthesize actionConfig=_actionConfig;
@property(nonatomic) long long trackConfig; // @synthesize trackConfig=_trackConfig;
@property(retain, nonatomic) NSMutableDictionary *handTrackingScriptObjectIdToPathDict; // @synthesize handTrackingScriptObjectIdToPathDict=_handTrackingScriptObjectIdToPathDict;
@property(retain, nonatomic) NSMutableDictionary *handTrackingScriptPathToObjectIdDict; // @synthesize handTrackingScriptPathToObjectIdDict=_handTrackingScriptPathToObjectIdDict;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(retain, nonatomic) NSMutableArray *pendingOpBlocks; // @synthesize pendingOpBlocks=_pendingOpBlocks;
@property(retain, nonatomic) NSMutableArray *liveVisionEffectMaterials; // @synthesize liveVisionEffectMaterials=_liveVisionEffectMaterials;
@property(retain, nonatomic) NSMutableArray *liveFaceRectDetectMaterials; // @synthesize liveFaceRectDetectMaterials=_liveFaceRectDetectMaterials;
@property(retain, nonatomic) NSMutableArray *liveFaceDetectMaterials; // @synthesize liveFaceDetectMaterials=_liveFaceDetectMaterials;
@property(retain, nonatomic) NSMutableArray *liveStickerMaterials; // @synthesize liveStickerMaterials=_liveStickerMaterials;
@property(retain, nonatomic) NSMutableArray *giftMaterials; // @synthesize giftMaterials=_giftMaterials;
@property(retain, nonatomic) NSMutableArray *makeupMaterials; // @synthesize makeupMaterials=_makeupMaterials;
@property(retain, nonatomic) NSMutableArray *frontStickers; // @synthesize frontStickers=_frontStickers;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSMutableArray *blusher; // @synthesize blusher=_blusher;
@property(retain, nonatomic) NSMutableArray *faceContours; // @synthesize faceContours=_faceContours;
@property(retain, nonatomic) NSMutableArray *lipSticker; // @synthesize lipSticker=_lipSticker;
@property(retain, nonatomic) NSMutableArray *eyeShadows; // @synthesize eyeShadows=_eyeShadows;
@property(retain, nonatomic) NSMutableArray *eyeBrows; // @synthesize eyeBrows=_eyeBrows;
@property(retain, nonatomic) NSMutableArray *face3DStickers; // @synthesize face3DStickers=_face3DStickers;
@property(retain, nonatomic) NSMutableArray *face2DStickers; // @synthesize face2DStickers=_face2DStickers;
@property _Bool enableCropTexture; // @synthesize enableCropTexture=_enableCropTexture;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) __weak id <WeVisLiveEffectEnergyController> energyController; // @synthesize energyController=_energyController;
@property(nonatomic) _Bool handModelAvailable; // @synthesize handModelAvailable=_handModelAvailable;
@property(nonatomic) _Bool luaRuntimeAvailable; // @synthesize luaRuntimeAvailable=_luaRuntimeAvailable;
@property(copy, nonatomic) NSString *dataUniqueID; // @synthesize dataUniqueID=_dataUniqueID;
@property(copy, nonatomic) CDUnknownBlockType dataReportCallback; // @synthesize dataReportCallback=_dataReportCallback;
@property(retain, nonatomic) WCLoopMetricsCollector *liveCaptureMetricsCollector; // @synthesize liveCaptureMetricsCollector=_liveCaptureMetricsCollector;
@property(nonatomic) __weak id <WeVisLiveEffectDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)setNeedMirror:(unsigned char)arg1;
- (void)setSceneType:(long long)arg1;
- (void)enqueueSerialOperation:(CDUnknownBlockType)arg1;
- (_Bool)setMakeupAlpha:(float)arg1 forObjectWithId:(long long)arg2;
- (_Bool)setLutFilterRate:(float)arg1 forObjectWithId:(long long)arg2;
- (_Bool)setSlimmerParameter:(float)arg1 forObjectWithId:(long long)arg2;
- (_Bool)removeEffectMaterialWithObjectId:(long long)arg1;
- (_Bool)addEffectMaterial:(id)arg1 materialObjectId:(long long *)arg2;
- (int)sendGenericJsonMessage:(id)arg1 toLuaScriptWithId:(int)arg2;
- (void)notifyLuaScriptMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)registerBackgroundNotification;
- (void)increaseFrameCnt;
- (void)setDetectRegion:(struct CGRect)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)waitForPipeLineEnd;
- (void)setEnergySavingModeForHand:(_Bool)arg1;
- (void)removeLuaScriptWithObjectId:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addLuaScriptAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enableSkipBeauty:(_Bool)arg1;
- (void)enableClarityFilter:(_Bool)arg1 withMode:(int)arg2;
- (void)setHostDenoiseInfo:(int)arg1;
- (void)enableSTDenoiseFilter:(_Bool)arg1 useSpatioFilter:(_Bool)arg2;
- (void)clearFilters;
- (void)clearMakeUp;
- (void)clearStickers;
- (void)clearAllEffects;
- (void)clean;
- (id)processVideoSampleBufferWithPipeLine:(struct opaqueCMSampleBuffer *)arg1 pixelBufferFlipX:(_Bool)arg2;
- (id)processRGBAInputTexture:(unsigned int)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2;
- (void)processRenderFrames:(id)arg1 outputSize:(struct CGSize)arg2;
- (void)processRenderFrames:(id)arg1 outputSize:(struct CGSize)arg2 outputTexture:(int *)arg3;
- (id)processVideoPixelBuffer:(struct __CVBuffer *)arg1;
- (id)processVideoPixelBufferInSegmentScene:(struct __CVBuffer *)arg1 faceTrack:(_Bool)arg2;
- (id)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 pixelBufferFlipX:(_Bool)arg2;
- (id)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (unsigned int)getIPadRotation;
- (_Bool)getSrcTexYUVFromPixelBuffer:(struct __CVBuffer *)arg1;
- (int)callFaceTrack;
- (void)genYUVSourceWithWidth:(int)arg1 Height:(int)arg2;
- (void)setUniqueDataID:(id)arg1;
- (void)genVideoInputSources:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)updateVideoOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (void)updateSegmentSceneVideoInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)updateVideoInputWidth:(int)arg1 inputHeight:(int)arg2 outputWidth:(int)arg3 outputHeight:(int)arg4;
- (void)updateOutCVPixelbufferFromPool;
- (struct CGSize)getRequiredVideoOutputSize;
- (void)requireVideoOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (void)updateActionConfig:(id)arg1;
- (void)updateActionsForAssetPath:(id)arg1;
- (void)clearVisionEffectMaterials;
- (void)clearFaceRectDetectMaterials;
- (void)clearFaceDetectMaterials;
- (void)clearStickerMaterials;
- (void)clearGiftMaterials;
- (void)clearMakeupMaterials;
- (void)removeMakeupFilter;
- (void)setMakeupFilterRate:(float)arg1;
- (vector_44833bcd)GetFaceRect;
- (int)getSegmentTexture:(unsigned int *)arg1 maskWidth:(int *)arg2 maskHeight:(int *)arg3;
- (void)applyLiveEffectMaterialFolder:(id)arg1 scene:(unsigned long long)arg2;
- (void)applyMakeupMaterialsFolder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setSkinSegSetting:(_Bool)arg1;
- (void)setMakeupDetail:(long long)arg1 rate:(float)arg2;
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
- (void)apply2DSticker:(id)arg1;
- (void)applyFilterWithConfig:(id)arg1 alpha:(double)arg2;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)setEyeBiggerV2:(float)arg1;
- (void)setEyeBiggerV2Template;
- (void)setMouthMorph:(float)arg1;
- (void)setTeethBright:(float)arg1;
- (void)setSharpenFilter:(float)arg1;
- (void)setRemoveSmileFolds:(float)arg1;
- (void)setRemoveEyePouch:(float)arg1;
- (void)setBrowEnhance:(float)arg1;
- (void)setAnimationCallback:(CDUnknownBlockType)arg1 obejctId:(long long)arg2;
- (void)setFaceAutoSlimer:(float)arg1;
- (void)addFaceAutoSlimerNatureSlim;
- (void)initFaceAutoSlimer;
- (void)setFaceThin:(float)arg1;
- (void)setEyeBright:(float)arg1;
- (void)setEyeBigger:(float)arg1;
- (void)setSkinBright:(float)arg1;
- (void)setSkinSmooth:(float)arg1;
- (unsigned int)getAppScenario;
- (void)setBackgroundEffectRate:(float)arg1 segmentMode:(int)arg2;
- (int)getMaxTextureImageUnit;
- (float)limitValue:(float)arg1 ToMin:(float)arg2 ToMax:(float)arg3;
- (void)initializeModelAvailabilityFlagsWithModelPathMap:(void *)arg1;
- (_Bool)needWeEffectInstance:(int)arg1 globalContextPtr:(void *)arg2;
- (_Bool)needWeEffectInstance:(int)arg1;
- (_Bool)needWeEffectInstance;
- (void)loadingCgiSettings;
- (void)loadingSettings;
- (unsigned int)currFaceTrackSkipFrameCnt;
- (void)updateFaceTrackSkipFrameCnt:(unsigned int)arg1;
- (void)drainPendingOpBlocksOnRelease;
- (void)performPendingOpBlocks;
- (_Bool)enableFaceOccuSeg;
- (long long)faceConfig;
- (_Bool)needFaceTrack;
- (void)setRotationForTrackFace:(int)arg1;
- (void)setRemoteIsNotPhone:(_Bool)arg1;
- (void)setUsingBackCamera:(_Bool)arg1;
- (void)setRotation:(int)arg1;
- (void)enableTranspose:(_Bool)arg1;
- (void)destroy;
- (void)dealloc;
- (void)enableFaceLandsDebugging;
- (id)initWithGlContext:(id)arg1 globalContext:(void *)arg2 sceneType:(long long)arg3 modelKeyArray:(id)arg4 SDKMode:(int)arg5 isAllowFp16:(_Bool)arg6 energyController:(id)arg7 beautyAssetsDirectory:(id)arg8 isClientRciEnabled:(_Bool)arg9;
- (id)initWithGlContext:(id)arg1 globalContext:(void *)arg2 sceneType:(long long)arg3 modelKeyArray:(id)arg4 SDKMode:(int)arg5 isAllowFp16:(_Bool)arg6 energyController:(id)arg7 beautyAssetsDirectory:(id)arg8;

@end
