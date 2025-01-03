//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAEAGLLayer, CALayer, EAGLContext, MMLiveRemoteCdnCustomRenderMetricsMonitor, MMLiveTextureBuffer, MMWeEffectFrame, NSObject, glVideoSharpen;
@protocol OS_dispatch_queue;

@interface CdnRenderView
{
    unsigned long long _renderFrameCount;
    _Bool _isInitOpenglParam;
    long long _format;
    struct CGSize _bufSize;
    struct CGRect _frameRect;
    float _imageVertices[8];
    const float *_preferredConversion;
    const float *_preferredOffsetVec3;
    struct CGRect _frame;
    CALayer *_layer;
    _Bool _sharedContextUsed;
    _Bool _rendering;
    struct __CVBuffer *_sampleBufferToRender;
    unsigned long long _busyCount;
    long long _startPlayTs;
    unsigned int mQuadVAO;
    unsigned int mQuadVBO;
    float _maskTexSizeVec2[2];
    _Bool _ownMaskTexture;
    _Bool _isBufferSetup;
    _Bool _isRotating;
    _Bool _isInitProgram;
    _Bool _mReceivedFirstFrame;
    _Bool _isCurrCustomRenderWithWeffect;
    unsigned int _yuvYTextureS;
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _yuvYTexture;
    unsigned int _yuvUTexture;
    unsigned int _yuvVTexture;
    unsigned int _maskTexture;
    unsigned int _programHandle;
    unsigned int _srcRGBATexture;
    unsigned int _srcFboId;
    unsigned int _positionSlot;
    unsigned int _matrixSlot;
    unsigned int _texCoordSlot;
    unsigned int _yuvTypeUniform;
    unsigned int _textureUniformY;
    unsigned int _textureUniformU;
    unsigned int _textureUniformV;
    unsigned int _textureUniformMask;
    unsigned int _maskTexSizeUniform;
    unsigned int _yuvConversionMatrixUniform;
    unsigned int _yuvOffsetMatrixUniform;
    unsigned int _mRawDataFrameType;
    long long _renderMode;
    CDUnknownBlockType _renderLogger;
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_curContext;
    glVideoSharpen *_sharpenFilter;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    NSObject<OS_dispatch_queue> *_renderQueue;
    MMWeEffectFrame *_currProcessedWeEffectFrame;
    MMLiveTextureBuffer *_maskTexBuffer;
    MMLiveRemoteCdnCustomRenderMetricsMonitor *_metricsMonitor;
    CDUnknownBlockType _checkIsCurrTopPerfLevelCallback;
    CDUnknownBlockType _increasePerfLevelCallback;
    CDUnknownBlockType _decreasePerfLevelCallback;
    CDUnknownBlockType _checkTimeRangeIsFullLoadCallback;
    struct CGSize _srcRGBATexSize;
    struct CGRect _normalizedDisplayRect;
    struct CGRect _videoRect;
}

+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
+ (Class)layerClass;
+ (_Bool)checkInitParamValidWithRenderMode:(long long)arg1 renderScene:(long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType checkTimeRangeIsFullLoadCallback; // @synthesize checkTimeRangeIsFullLoadCallback=_checkTimeRangeIsFullLoadCallback;
@property(copy, nonatomic) CDUnknownBlockType decreasePerfLevelCallback; // @synthesize decreasePerfLevelCallback=_decreasePerfLevelCallback;
@property(copy, nonatomic) CDUnknownBlockType increasePerfLevelCallback; // @synthesize increasePerfLevelCallback=_increasePerfLevelCallback;
@property(copy, nonatomic) CDUnknownBlockType checkIsCurrTopPerfLevelCallback; // @synthesize checkIsCurrTopPerfLevelCallback=_checkIsCurrTopPerfLevelCallback;
@property(retain, nonatomic) MMLiveRemoteCdnCustomRenderMetricsMonitor *metricsMonitor; // @synthesize metricsMonitor=_metricsMonitor;
@property(nonatomic) _Bool isCurrCustomRenderWithWeffect; // @synthesize isCurrCustomRenderWithWeffect=_isCurrCustomRenderWithWeffect;
@property(retain) MMLiveTextureBuffer *maskTexBuffer; // @synthesize maskTexBuffer=_maskTexBuffer;
@property(retain, nonatomic) MMWeEffectFrame *currProcessedWeEffectFrame; // @synthesize currProcessedWeEffectFrame=_currProcessedWeEffectFrame;
@property(nonatomic) _Bool mReceivedFirstFrame; // @synthesize mReceivedFirstFrame=_mReceivedFirstFrame;
@property(nonatomic) _Bool isInitProgram; // @synthesize isInitProgram=_isInitProgram;
@property _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) _Bool isBufferSetup; // @synthesize isBufferSetup=_isBufferSetup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(nonatomic) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
@property(nonatomic) unsigned int mRawDataFrameType; // @synthesize mRawDataFrameType=_mRawDataFrameType;
@property(nonatomic) unsigned int yuvOffsetMatrixUniform; // @synthesize yuvOffsetMatrixUniform=_yuvOffsetMatrixUniform;
@property(nonatomic) unsigned int yuvConversionMatrixUniform; // @synthesize yuvConversionMatrixUniform=_yuvConversionMatrixUniform;
@property(nonatomic) unsigned int maskTexSizeUniform; // @synthesize maskTexSizeUniform=_maskTexSizeUniform;
@property(nonatomic) unsigned int textureUniformMask; // @synthesize textureUniformMask=_textureUniformMask;
@property(nonatomic) unsigned int textureUniformV; // @synthesize textureUniformV=_textureUniformV;
@property(nonatomic) unsigned int textureUniformU; // @synthesize textureUniformU=_textureUniformU;
@property(nonatomic) unsigned int textureUniformY; // @synthesize textureUniformY=_textureUniformY;
@property(nonatomic) unsigned int yuvTypeUniform; // @synthesize yuvTypeUniform=_yuvTypeUniform;
@property(nonatomic) unsigned int texCoordSlot; // @synthesize texCoordSlot=_texCoordSlot;
@property(nonatomic) unsigned int matrixSlot; // @synthesize matrixSlot=_matrixSlot;
@property(nonatomic) unsigned int positionSlot; // @synthesize positionSlot=_positionSlot;
@property(nonatomic) unsigned int srcFboId; // @synthesize srcFboId=_srcFboId;
@property(nonatomic) struct CGSize srcRGBATexSize; // @synthesize srcRGBATexSize=_srcRGBATexSize;
@property(nonatomic) unsigned int srcRGBATexture; // @synthesize srcRGBATexture=_srcRGBATexture;
@property(nonatomic) unsigned int programHandle; // @synthesize programHandle=_programHandle;
@property(nonatomic) unsigned int maskTexture; // @synthesize maskTexture=_maskTexture;
@property(nonatomic) _Bool ownMaskTexture; // @synthesize ownMaskTexture=_ownMaskTexture;
@property(nonatomic) unsigned int yuvVTexture; // @synthesize yuvVTexture=_yuvVTexture;
@property(nonatomic) unsigned int yuvUTexture; // @synthesize yuvUTexture=_yuvUTexture;
@property(nonatomic) unsigned int yuvYTexture; // @synthesize yuvYTexture=_yuvYTexture;
@property(nonatomic) unsigned int frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(nonatomic) unsigned int renderBuffer; // @synthesize renderBuffer=_renderBuffer;
@property(nonatomic) unsigned int yuvYTextureS; // @synthesize yuvYTextureS=_yuvYTextureS;
@property(retain, nonatomic) glVideoSharpen *sharpenFilter; // @synthesize sharpenFilter=_sharpenFilter;
@property(retain, nonatomic) EAGLContext *curContext; // @synthesize curContext=_curContext;
@property(retain, nonatomic) CAEAGLLayer *eaglLayer; // @synthesize eaglLayer=_eaglLayer;
@property(readonly, copy, nonatomic) CDUnknownBlockType renderLogger; // @synthesize renderLogger=_renderLogger;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property struct CGRect normalizedDisplayRect; // @synthesize normalizedDisplayRect=_normalizedDisplayRect;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)resetPitchAndYaw;
- (void)copyPixelBuffer2dataPtr:(char **)arg1 pixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3 planeWidth:(unsigned long long)arg4;
- (id)copyDataFromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)setRotation:(long long)arg1;
- (unsigned long long)calculateRotation;
- (void)calculateVerticesWithSrcSize:(struct CGSize)arg1 dstSize:(struct CGSize)arg2 renderToSrcTexture:(_Bool)arg3;
- (void)resetStatsInternal;
- (void)resetStats;
- (void)statisticFrame:(_Bool)arg1;
- (_Bool)isCustomRenderWithWeEffect;
- (_Bool)needRenderToSrcTexture;
@property(readonly, nonatomic) _Bool preProcessByWeffectBeforeRender;
- (void)onCdnRenderStatsFpsUpdate:(int)arg1;
- (void)onCdnRenderStatsMonitoredBlock:(unsigned long long)arg1;
- (void)onDrawVr;
- (void)onDrawSrcTexture;
- (void)onDraw;
- (void)convertYUVToRGBOutput:(_Bool)arg1 renderToSrcTexture:(_Bool)arg2;
- (void)setEnhanceParam:(int)arg1;
- (void)innerRenderTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)_renderTexture:(unsigned int)arg1 texSize:(struct CGSize)arg2 maskTexture:(unsigned int)arg3;
- (void)renderTexture:(unsigned int)arg1 texSize:(struct CGSize)arg2 maskTexture:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)innerRenderTexBuff:(char *)arg1 texSize:(struct CGSize)arg2;
- (void)_renderTexBuff:(char *)arg1 texSize:(struct CGSize)arg2;
- (void)renderTexBuff:(char *)arg1 texSize:(struct CGSize)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)pauseRenderLocalView;
- (void)innerRenderFrame:(struct __CVBuffer *)arg1;
- (void)_invokeRenderWeEffectFrame:(id)arg1;
- (_Bool)checkWeEffectFrameValid:(id)arg1;
- (_Bool)checkEnableProcessByWeEffect;
- (void)updateMaskTextureWithTexBuff:(id)arg1 texSize:(struct CGSize)arg2;
- (void)_invokeRenderFrame:(struct __CVBuffer *)arg1 maskTexBuff:(id)arg2 maskTexSize:(struct CGSize)arg3;
- (void)_renderCameraFrame:(struct __CVBuffer *)arg1 maskTexBuff:(id)arg2 maskTexSize:(struct CGSize)arg3;
- (void)renderCameraFrame:(struct __CVBuffer *)arg1 maskTexBuff:(id)arg2 maskTexSize:(struct CGSize)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)renderCameraFrame:(struct __CVBuffer *)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)renderFrame:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)renderFrame:(id)arg1;
- (void)innerRenderFrame:(struct __CVBuffer *)arg1 yuvBytes:(char *)arg2 u:(char *)arg3 v:(char *)arg4 format:(long long)arg5 width:(int)arg6 height:(int)arg7;
- (void)onRenderEnd;
- (void)onRenderBegin;
- (void)compileShadersVr;
- (id)getFlagmentShaderStr;
- (id)getVertexShaderStr;
- (void)compileShaders;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)deleteTexture;
- (void)setupQuadVertexStream;
- (void)setupSrcFboId;
- (void)setupSrcRGBATexture:(struct CGSize)arg1;
- (void)setupTexture;
- (void)setupBufferOnComplete:(CDUnknownBlockType)arg1;
- (void)setupLayer;
- (void)_setupSharedOpenGL;
- (void)setupSharedOpenGL;
- (void)setupSharedOpenGLAsync;
- (double)getWeVisMgrCreateTime;
- (void)updateNeedProcessByWeffect:(_Bool)arg1;
- (void)configCdnWeEffectManager:(id)arg1;
- (id)getCdnRenderContext;
- (void)resumeMonitor;
- (void)pauseMonitor;
- (float)currentScale;
- (void)sendNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)sendNotifyEvent:(int)arg1;
- (void)dealloc;
- (id)sharedContext;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (struct CGRect)getCurrFrameRect;
- (void)setup;
- (void)removeFromSuperview;
- (void)asyncLayout;
- (void)layoutSubviews;
- (void)setCustomrenderMode:(long long)arg1;
- (void)setSensorControlFlag:(_Bool)arg1 keepLastSensor:(_Bool)arg2;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)handleGesturesOperation:(id)arg1;
- (void)uninitVrParameter;
- (void)initVrParameter;
- (id)initRemoteViewWithFrame:(struct CGRect)arg1 renderMode:(long long)arg2 renderScene:(long long)arg3;
- (void)onRenderMonitorEnd;
- (void)onRenderMonitorBegin;
- (void)initMetricsReportData;

@end

