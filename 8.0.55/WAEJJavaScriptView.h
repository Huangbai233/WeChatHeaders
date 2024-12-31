//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext, ExternalTextureHandler, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, NSThread, WAEJBindingCanvasContext2D, WAEJBindingCanvasContextWebGLBase, WAEJBindingGlobalUtils, WAEJCanvasContext, WAEJClassLoader, WAEJFileSystem, WAEJFontCache, WAEJNonRetainingProxy, WAEJObjClass, WAEJObjectMemoryMgr, WAEJRenderTriggerCollection, WAEJSharedOpenGLContext, WAEJSharedTextureCache, WAEJTimerCollection;
@protocol EJExternalTextureDelegate, EJGestureDelegate, EJNativeLogViewDelegate, EJPresentable, EJScreenCanvasDelegate, EJTouchDelegate, EJWindowEventsDelegate, WABindingDelegate;

@interface WAEJJavaScriptView : UIView
{
    struct CGSize oldSize;
    NSString *appFolder;
    _Bool hasScreenCanvas;
    _Bool isPaused;
    _Bool isEnterBackground;
    _Bool isRenderTriggersPaused;
    _Bool exitOnMenuPress;
    _Bool landScape;
    WAEJNonRetainingProxy *proxy;
    struct OpaqueJSContext *jsGlobalContext;
    struct OpaqueJSContext *jsSubContext;
    WAEJClassLoader *classLoader;
    WAEJTimerCollection *timers;
    WAEJRenderTriggerCollection *renderTriggers;
    WAEJSharedOpenGLContext *openGLContext;
    WAEJSharedTextureCache *textureCache;
    WAEJFontCache *fontCache;
    WAEJCanvasContext *currentRenderingContext;
    EAGLContext *glCurrentContext;
    struct __CVOpenGLESTextureCache *cvTextureCache;
    CADisplayLink *displayLink;
    NSObject<EJWindowEventsDelegate> *windowEventsDelegate;
    NSObject<EJTouchDelegate> *touchDelegate;
    WAEJCanvasContext<EJPresentable> *screenRenderingContext;
    id <EJNativeLogViewDelegate> nativeLogDelegate;
    NSOperationQueue *backgroundQueue;
    struct OpaqueJSClass *jsBlockFunctionClass;
    _Bool stoped;
    NSString *appId;
    WAEJFileSystem *fileSystem;
    WAEJBindingGlobalUtils *globalObject;
    struct OpaqueJSValue *jsUndefined;
    long long fps;
    long long time;
    long long jank;
    long long bigJank;
    long long jankPerSecond;
    long long bigJankPerSecond;
    _Bool isComponent;
    NSThread *thread;
    _Bool hasSecureCanvas;
    WAEJObjectMemoryMgr *objectMemoryMgr;
    WAEJBindingCanvasContextWebGLBase *webGLCtx;
    WAEJBindingCanvasContext2D *canvasCtx;
    _Bool useWebGL;
    _Bool useCommandBuffer;
    id <EJGestureDelegate> gestureDelegate;
    id <WABindingDelegate> bindingDelegate;
    long long signalWaitingCount;
    _Bool experimental;
    _Bool isPreserveDrawingBufferDoClear;
    double _lastFrameTime;
    double _lastBatchFrameTime;
    unsigned long long _framesTimeTotal;
    unsigned long long _framesTimePerSecond;
    unsigned long long _jankFramesTimeTotalPerSecond;
    NSMutableArray *_lastNFramesTimeRecords;
    unsigned long long _lastNFramesTimeTotal;
    unsigned long long _jankFramesTimeTotal;
    NSMutableSet *_noRetainingContexts;
    NSMutableDictionary *_noRetainingID2CanvasMap;
    unsigned int _canvasId;
    NSMutableArray *_garbageNativeObjects;
    NSMutableArray *_bindingNativeObjects;
    NSMutableArray *_varianceFpsArray;
    _Bool _bInterrupt;
    _Bool _resumeRelease;
    _Bool _delayToRAFEndRelease;
    _Bool _runWhenAppInactive;
    _Bool _isUseSetCurrentContextRefactor;
    _Bool _isPreserveDrawingBufferDoClear;
    NSMutableDictionary *_noRetainingDrawables;
    long long _drawCall;
    long long _vertexCount;
    long long _triangleCount;
    _Bool _bFirstRendered;
    _Bool _bReportVarianceFps;
    long long _currentFpsVarianceBatchCount;
    long long _frameNum;
    char *_commandString;
    unsigned long long _commandLength;
    struct OpaqueJSValue *_getCommandFunc;
    struct OpaqueJSValue *_clearCommandFunc;
    struct OpaqueJSValue *_resetContextFunc;
    WAEJObjClass *_objClass;
    NSMutableDictionary *_customScreenContext;
    struct __CVOpenGLESTextureCache *_cvTextureCache;
    _Bool stopped;
    _Bool _isEnableSkia2D;
    _Bool _isRollbackPresentBugfix;
    _Bool _isEnableRetryLoadImageWhenEnterForeground;
    _Bool _customStyleImpl;
    _Bool _isMagicBrushEnv;
    _Bool _isGameEnv;
    int _maxCanvasSize;
    double startTime;
    long long _viewContentMode;
    unsigned long long _mainCanvasContextType;
    id <EJScreenCanvasDelegate> _screenCanvasDelegate;
    id <EJExternalTextureDelegate> _extTextureDelegate;
    ExternalTextureHandler *_extTextureHandler;
    void *_fontHandler;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) int maxCanvasSize; // @synthesize maxCanvasSize=_maxCanvasSize;
@property(nonatomic) _Bool isGameEnv; // @synthesize isGameEnv=_isGameEnv;
@property(nonatomic) _Bool isMagicBrushEnv; // @synthesize isMagicBrushEnv=_isMagicBrushEnv;
@property(readonly, nonatomic) void *fontHandler; // @synthesize fontHandler=_fontHandler;
@property(retain, nonatomic) ExternalTextureHandler *extTextureHandler; // @synthesize extTextureHandler=_extTextureHandler;
@property(nonatomic) __weak id <EJExternalTextureDelegate> extTextureDelegate; // @synthesize extTextureDelegate=_extTextureDelegate;
@property(nonatomic) __weak id <EJScreenCanvasDelegate> screenCanvasDelegate; // @synthesize screenCanvasDelegate=_screenCanvasDelegate;
@property(nonatomic) _Bool customStyleImpl; // @synthesize customStyleImpl=_customStyleImpl;
@property(nonatomic) unsigned long long mainCanvasContextType; // @synthesize mainCanvasContextType=_mainCanvasContextType;
@property(nonatomic, getter=size) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long viewContentMode; // @synthesize viewContentMode=_viewContentMode;
@property(readonly, nonatomic) _Bool isEnableRetryLoadImageWhenEnterForeground; // @synthesize isEnableRetryLoadImageWhenEnterForeground=_isEnableRetryLoadImageWhenEnterForeground;
@property(readonly, nonatomic) _Bool isRollbackPresentBugfix; // @synthesize isRollbackPresentBugfix=_isRollbackPresentBugfix;
@property(readonly, nonatomic) _Bool isEnableSkia2D; // @synthesize isEnableSkia2D=_isEnableSkia2D;
@property(nonatomic, getter=isPreserveDrawingBufferDoClear) _Bool isPreserveDrawingBufferDoClear; // @synthesize isPreserveDrawingBufferDoClear=_isPreserveDrawingBufferDoClear;
@property(nonatomic) _Bool experimental; // @synthesize experimental;
@property(nonatomic) __weak id <WABindingDelegate> bindingDelegate; // @synthesize bindingDelegate;
@property(nonatomic) __weak id <EJGestureDelegate> gestureDelegate; // @synthesize gestureDelegate;
@property(nonatomic) _Bool useCommandBuffer; // @synthesize useCommandBuffer;
@property(nonatomic) _Bool useWebGL; // @synthesize useWebGL;
@property(retain, nonatomic) WAEJBindingCanvasContext2D *canvasCtx; // @synthesize canvasCtx;
@property(retain, nonatomic) WAEJBindingCanvasContextWebGLBase *webGLCtx; // @synthesize webGLCtx;
@property(nonatomic) _Bool hasSecureCanvas; // @synthesize hasSecureCanvas;
@property(retain, nonatomic) WAEJObjectMemoryMgr *objectMemoryMgr; // @synthesize objectMemoryMgr;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread;
@property(nonatomic) _Bool isComponent; // @synthesize isComponent;
@property(nonatomic) __weak WAEJBindingGlobalUtils *globalObject; // @synthesize globalObject;
@property(nonatomic) __weak id <EJNativeLogViewDelegate> nativeLogDelegate; // @synthesize nativeLogDelegate;
@property(readonly, nonatomic) WAEJSharedTextureCache *textureCache; // @synthesize textureCache;
@property(readonly, nonatomic) WAEJFontCache *fontCache; // @synthesize fontCache;
@property(nonatomic) _Bool stopped; // @synthesize stopped;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) WAEJFileSystem *fileSystem; // @synthesize fileSystem;
@property(retain, nonatomic) WAEJClassLoader *classLoader; // @synthesize classLoader;
@property(retain, nonatomic) NSOperationQueue *backgroundQueue; // @synthesize backgroundQueue;
@property(retain, nonatomic) WAEJCanvasContext<EJPresentable> *screenRenderingContext; // @synthesize screenRenderingContext;
@property(retain, nonatomic) NSObject<EJTouchDelegate> *touchDelegate; // @synthesize touchDelegate;
@property(retain, nonatomic) NSObject<EJWindowEventsDelegate> *windowEventsDelegate; // @synthesize windowEventsDelegate;
@property(readonly, nonatomic) WAEJSharedOpenGLContext *openGLContext; // @synthesize openGLContext;
@property(retain, nonatomic) WAEJCanvasContext *currentRenderingContext; // @synthesize currentRenderingContext;
@property(nonatomic) long long signalWaitingCount; // @synthesize signalWaitingCount;
@property(nonatomic) _Bool landScape; // @synthesize landScape;
@property(readonly, nonatomic) double startTime; // @synthesize startTime;
@property(nonatomic) _Bool exitOnMenuPress; // @synthesize exitOnMenuPress;
@property(readonly, nonatomic) struct OpaqueJSContext *jsSubContext; // @synthesize jsSubContext;
@property(readonly, nonatomic) struct OpaqueJSContext *jsGlobalContext; // @synthesize jsGlobalContext;
@property(nonatomic) _Bool hasScreenCanvas; // @synthesize hasScreenCanvas;
@property(nonatomic, getter=isEnterBackground) _Bool isEnterBackground; // @synthesize isEnterBackground;
@property(nonatomic, getter=isPaused) _Bool isPaused; // @synthesize isPaused;
- (_Bool)isRunInSubThread;
- (void)onGLViewStyleChanged:(unsigned int)arg1 withStyle:(struct CGRect)arg2;
- (void)handleGLViewStyleChanged:(id)arg1;
- (_Bool)setCaptureDelegate:(unsigned int)arg1 mark:(unsigned int)arg2 options:(id)arg3 delegate:(id)arg4;
- (void)onSetCaptureDelegate:(id)arg1;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *cvTextureCache; // @synthesize cvTextureCache=_cvTextureCache;
- (unsigned int)sg_get_texture:(struct OpaqueJSValue *)arg1;
- (void *)sg_get_state:(void *)arg1;
- (void)sg_swap:(void *)arg1;
- (void)sg_make_current:(void *)arg1;
- (void)sg_release_context:(void *)arg1;
- (void)sg_retain_context:(void *)arg1;
- (void *)sg_get_context:(struct OpaqueJSValue *)arg1;
- (void)destroyCanvasForID:(unsigned int)arg1;
- (void)removeCustomScreenContext:(unsigned int)arg1;
- (void)addCustomScreenContext:(id)arg1 key:(unsigned int)arg2;
- (void)removeDrawableObject:(unsigned int)arg1;
- (id)getDrawableObject:(unsigned int)arg1;
- (void)addDrawableObject:(unsigned int)arg1 drawable:(id)arg2;
- (id)getObjClass;
- (void)batchRender:(id)arg1;
- (void)setBatchRenderingContext:(id)arg1;
- (void)resetJankInfo;
- (CDStruct_b6d5f750)getPerformance;
- (void)setReportVarianceFps:(_Bool)arg1;
- (long long)getVarianceFps;
- (void)addNativeBindingObject:(id)arg1;
- (void)addNativeGarbageObject:(id)arg1;
- (void)sendGarbageCollectEvent;
- (void)markBindingObjectStopRender;
- (void)notifyScreenCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(struct CGRect)arg3;
- (void)notifyScreenCanvasViewDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)notifyScreenCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (_Bool)enableScreenCanvasViewDelegate;
- (void)removeCanvasForID:(unsigned int)arg1;
- (unsigned int)setCanvas:(id)arg1;
- (id)getCanvasForElementID:(id)arg1;
- (id)getCanvasForID:(unsigned int)arg1;
- (void)markContextStopRender;
- (void)removeContext:(id)arg1;
- (void)addContext:(id)arg1;
- (void)sendErrorEvent:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)gameKVReport:(unsigned int)arg1 logstr:(id)arg2;
- (struct OpaqueJSValue *)setPreferredFramesPerSecond:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)deleteRenderTrigger:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)createRenderTrigger:(struct OpaqueJSContext *)arg1 isMain:(_Bool)arg2 argc:(unsigned long long)arg3 argv:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)deleteTimer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)skipCurrentTaskLoop;
- (void)triggerTimerImmediate:(id)arg1;
- (struct OpaqueJSValue *)createTimer:(struct OpaqueJSContext *)arg1 isMain:(_Bool)arg2 argc:(unsigned long long)arg3 argv:(const struct OpaqueJSValue **)arg4 repeat:(_Bool)arg5;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesMoved:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesCancelled:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesEnded:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesBegan:(id)arg1;
- (void)_setCurrentRenderingContextRefactor:(id)arg1;
- (void)setInterrupt:(_Bool)arg1;
- (void)stopImpl:(id)arg1;
- (void)stop:(_Bool)arg1;
- (void)clearCachesImpl;
- (void)clearCaches;
- (void)onSuspend;
- (void)suspend;
- (void)onResume;
- (void)resume;
- (void)onPause;
- (void)pause;
- (void)enterForeground;
- (void)enterBackground;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)listenEnterBackground:(_Bool)arg1;
- (struct OpaqueJSValue *)recordFrame:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)present;
- (void)notifyFrameEnd:(double)arg1;
- (void)notifyFrameStart:(double)arg1;
- (void)presentRenderingContextAndRecord:(id)arg1 drawCall:(long long *)arg2 vertexCount:(long long *)arg3 triangleCount:(long long *)arg4;
- (void)run:(id)arg1;
- (struct OpaqueJSValue *)createFunctionWithBlock:(CDUnknownBlockType)arg1;
- (struct OpaqueJSValue *)jsValueForPath:(id)arg1;
- (void)logException:(struct OpaqueJSValue *)arg1 ctx:(struct OpaqueJSContext *)arg2;
- (struct OpaqueJSValue *)invokeCallback:(struct OpaqueJSValue *)arg1 isMain:(_Bool)arg2 thisObject:(struct OpaqueJSValue *)arg3 argc:(unsigned long long)arg4 argv:(const struct OpaqueJSValue **)arg5;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2 ignoreException:(_Bool)arg3;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1;
- (void)loadScriptAtPath:(id)arg1;
- (void)onLayoutSubviews:(id)arg1;
- (void)layoutSubviews;
- (void)observeKeyPaths:(id)arg1 selector:(SEL)arg2;
- (void)removeObserverForKeyPaths:(id)arg1;
- (void)releaseContext:(_Bool)arg1;
- (void)dealloc;
- (void)setupWithJSContext:(struct OpaqueJSContext *)arg1 name:(const char *)arg2 isComponent:(_Bool)arg3;
- (void)attachJSContext:(struct OpaqueJSContext *)arg1;
- (void)setupJSContextOnSubThread:(struct OpaqueJSContext *)arg1 name:(const char *)arg2 config:(id)arg3;
- (id)initWithFrameOnlyMainThreadPart:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(struct OpaqueJSContext *)arg2 name:(const char *)arg3 config:(id)arg4;

@end
