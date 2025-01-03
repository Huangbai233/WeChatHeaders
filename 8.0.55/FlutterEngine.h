//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterBasicMessageChannel, FlutterBinaryMessengerRelay, FlutterDartProject, FlutterMethodChannel, FlutterTextureRegistryRelay, FlutterViewController, NSMutableDictionary, NSString, NSURL;
@protocol FlutterBinaryMessenger, FlutterEngineDelegate, FlutterTextureRegistry, NSObject;

@interface FlutterEngine : NSObject
{
    struct scoped_nsobject<FlutterDartProject> _dartProject;
    struct shared_ptr<flutter::ThreadHost> _threadHost;
    unique_ptr_49980375 _shell;
    NSString *_labelPrefix;
    struct unique_ptr<fml::WeakNSObjectFactory<FlutterEngine>, std::default_delete<fml::WeakNSObjectFactory<FlutterEngine>>> _weakFactory;
    WeakNSObject_d08cd568 _viewController;
    struct scoped_nsobject<FlutterDartVMServicePublisher> _publisher;
    struct shared_ptr<flutter::FlutterPlatformViewsController> _platformViewsController;
    int _renderingApi;
    struct shared_ptr<flutter::ProfilerMetricsIOS> _profiler_metrics;
    struct shared_ptr<flutter::SamplingProfiler> _profiler;
    struct scoped_nsobject<FlutterPlatformPlugin> _platformPlugin;
    struct scoped_nsobject<FlutterTextInputPlugin> _textInputPlugin;
    struct scoped_nsobject<FlutterUndoManagerPlugin> _undoManagerPlugin;
    struct scoped_nsobject<FlutterSpellCheckPlugin> _spellCheckPlugin;
    struct scoped_nsobject<FlutterRestorationPlugin> _restorationPlugin;
    struct scoped_nsobject<FlutterMethodChannel> _localizationChannel;
    struct scoped_nsobject<FlutterMethodChannel> _navigationChannel;
    struct scoped_nsobject<FlutterMethodChannel> _restorationChannel;
    struct scoped_nsobject<FlutterMethodChannel> _platformChannel;
    struct scoped_nsobject<FlutterMethodChannel> _platformViewsChannel;
    struct scoped_nsobject<FlutterMethodChannel> _textInputChannel;
    struct scoped_nsobject<FlutterMethodChannel> _undoManagerChannel;
    struct scoped_nsobject<FlutterMethodChannel> _scribbleChannel;
    struct scoped_nsobject<FlutterMethodChannel> _spellCheckChannel;
    struct scoped_nsobject<FlutterBasicMessageChannel> _lifecycleChannel;
    struct scoped_nsobject<FlutterBasicMessageChannel> _systemChannel;
    struct scoped_nsobject<FlutterBasicMessageChannel> _settingsChannel;
    struct scoped_nsobject<FlutterBasicMessageChannel> _keyEventChannel;
    struct scoped_nsobject<FlutterMethodChannel> _screenshotChannel;
    struct ScopedTypeRef<NSString *(^)(), fml::internal::ScopedBlockTraits<NSString *(^)()>> _localeDelegate;
    struct vector<fml::ScopedTypeRef<void (^)(NSData *), fml::internal::ScopedBlockTraits<void (^)(NSData *)>>, std::allocator<fml::ScopedTypeRef<void (^)(NSData *), fml::internal::ScopedBlockTraits<void (^)(NSData *)>>>> _dataReportHandlers;
    struct scoped_nsobject<FlutterBasicMessageChannel> _skiaChannel;
    struct scoped_nsobject<FlutterBasicMessageChannel> _statChannel;
    CDUnknownBlockType _anrReportCallback;
    CDUnknownBlockType _onReportSlowRunnerCallback;
    long long _nextTextureId;
    _Bool _allowHeadlessExecution;
    _Bool _restorationEnabled;
    FlutterBinaryMessengerRelay *_binaryMessenger;
    FlutterTextureRegistryRelay *_textureRegistry;
    struct unique_ptr<flutter::ConnectionCollection, std::default_delete<flutter::ConnectionCollection>> _connections;
    _Bool _disallowDeliverAppLifecycleInViewControllerLifecycle;
    struct ScopedTypeRef<void (^)(), fml::internal::ScopedBlockTraits<void (^)()>> _requestPreRenderFinishedCallback;
    _Bool _isGpuDisabled;
    _Bool _enableEmbedderAPI;
    id <FlutterEngineDelegate> _engineDelegate;
    NSString *_isolateId;
    NSMutableDictionary *_pluginPublications;
    NSMutableDictionary *_registrars;
    NSString *_initialRoute;
    id <NSObject> _flutterViewControllerWillDeallocObserver;
    CDStruct_60417d04 _embedderAPI;
}

+ (void)setLookupSharedObjectCallback:(CDUnknownFunctionPointerType)arg1;
+ (void)setIgnoreThreadLoggingCallback:(CDUnknownFunctionPointerType)arg1;
+ (id)getDartSdkHash;
+ (struct ThreadHost)makeThreadHost:(id)arg1 settings:(void *)arg2;
+ (id)generateThreadLabel:(id)arg1;
+ (_Bool)isProfilerEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_60417d04 *embedderAPI; // @synthesize embedderAPI=_embedderAPI;
@property(nonatomic) _Bool enableEmbedderAPI; // @synthesize enableEmbedderAPI=_enableEmbedderAPI;
@property(retain, nonatomic) id <NSObject> flutterViewControllerWillDeallocObserver; // @synthesize flutterViewControllerWillDeallocObserver=_flutterViewControllerWillDeallocObserver;
@property(copy, nonatomic) NSString *initialRoute; // @synthesize initialRoute=_initialRoute;
@property(readonly, nonatomic) NSMutableDictionary *registrars; // @synthesize registrars=_registrars;
@property(readonly, nonatomic) NSMutableDictionary *pluginPublications; // @synthesize pluginPublications=_pluginPublications;
@property(nonatomic) _Bool isGpuDisabled; // @synthesize isGpuDisabled=_isGpuDisabled;
@property(copy, nonatomic) NSString *isolateId; // @synthesize isolateId=_isolateId;
@property(nonatomic) id <FlutterEngineDelegate> engineDelegate; // @synthesize engineDelegate=_engineDelegate;
- (void)requestPreRender:(CDUnknownBlockType)arg1;
- (void)callRequestPreRenderFinishedCallback;
- (long long)uiTaskRunnerPtr;
@property(readonly, nonatomic) _Bool isUsingImpeller;
@property(readonly, nonatomic) FlutterDartProject *project;
- (const void *)threadHost;
- (id)spawnWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4 sharedIsolateMode:(_Bool)arg5;
- (id)spawnWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (void)waitForFirstFrame:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onLocaleUpdated:(id)arg1;
- (void)setLocaleDelegate:(CDUnknownBlockType)arg1;
- (void)onMemoryWarning:(id)arg1;
- (void)flutterDidEnterBackground:(id)arg1;
- (void)flutterWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)valuePublishedByPlugin:(id)arg1;
- (_Bool)hasPlugin:(id)arg1;
- (id)registrarForPlugin:(id)arg1;
- (id)pluginRegistry;
- (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2;
- (id)lookupKeyForAsset:(id)arg1;
- (void)textureFrameAvailable:(long long)arg1;
- (void)unregisterTexture:(long long)arg1;
- (long long)registerTexture:(id)arg1;
- (void)setSharePlatformMessageRouter:(const void *)arg1;
- (shared_ptr_21a0cd4f)platformMessageRouter;
- (void)cleanUpConnection:(long long)arg1;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(CDUnknownBlockType)arg2 taskQueue:(id)arg3;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(CDUnknownBlockType)arg2;
- (id)makeBackgroundTaskQueue;
- (void)sendOnChannel:(id)arg1 message:(id)arg2 binaryReply:(CDUnknownBlockType)arg3;
- (void)sendOnChannel:(id)arg1 message:(id)arg2;
- (void)setBinaryMessenger:(id)arg1;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *textureRegistry;
@property(readonly, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
- (void)flutterViewAccessibilityDidCall;
- (struct Screenshot)takeScreenshot:(int)arg1 asBase64Encoded:(_Bool)arg2;
- (void)flutterUndoManagerPlugin:(id)arg1 handleUndoWithDirection:(long long)arg2;
- (void)flutterTextInputView:(id)arg1 didResignFirstResponderWithTextInputClient:(int)arg2;
- (void)flutterTextInputView:(id)arg1 removeTextPlaceholder:(int)arg2;
- (void)flutterTextInputView:(id)arg1 insertTextPlaceholderWithSize:(struct CGSize)arg2 withClient:(int)arg3;
- (void)flutterTextInputViewScribbleInteractionFinished:(id)arg1;
- (void)flutterTextInputViewScribbleInteractionBegan:(id)arg1;
- (void)flutterTextInputPlugin:(id)arg1 requestElementsInRect:(struct CGRect)arg2 result:(CDUnknownBlockType)arg3;
- (void)flutterTextInputPlugin:(id)arg1 focusElement:(id)arg2 atPoint:(struct CGPoint)arg3 result:(CDUnknownBlockType)arg4;
- (void)flutterTextInputView:(id)arg1 showToolbar:(int)arg2;
- (id)flutterTextInputView:(id)arg1 createNativeKeyboardView:(id)arg2;
- (void)flutterTextInputView:(id)arg1 showAutocorrectionPromptRectForStart:(unsigned long long)arg2 end:(unsigned long long)arg3 withClient:(int)arg4;
- (void)flutterTextInputView:(id)arg1 performAction:(long long)arg2 withClient:(int)arg3;
- (void)flutterTextInputView:(id)arg1 updateFloatingCursor:(long long)arg2 withClient:(int)arg3 withPosition:(id)arg4;
- (void)flutterTextInputView:(id)arg1 updateEditingClient:(int)arg2 withDelta:(id)arg3;
- (void)flutterTextInputView:(id)arg1 updateEditingClient:(int)arg2 withState:(id)arg3 withTag:(id)arg4;
- (void)flutterTextInputView:(id)arg1 updateEditingClient:(int)arg2 withState:(id)arg3;
- (void)flutterTextInputView:(id)arg1 hideKeyBoardWithConfig:(id)arg2;
- (void)flutterTextInputView:(id)arg1 showKeyBoardWithConfig:(id)arg2;
- (void)onReportSlowRunner:(id)arg1 duration:(long long)arg2 stackTraces:(id)arg3 phase:(id)arg4;
- (void)onReportAnr:(id)arg1 duration:(long long)arg2 phase:(id)arg3;
- (void)setSlowRunnerReportCallback:(CDUnknownBlockType)arg1;
- (void)setAnrReportCallback:(CDUnknownBlockType)arg1;
- (void)addDataReportHandler:(CDUnknownBlockType)arg1;
- (void)reportMemoryUsage;
- (void)notifyLowMemory;
- (_Bool)runWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (_Bool)runWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3;
- (_Bool)runWithEntrypoint:(id)arg1 initialRoute:(id)arg2;
- (_Bool)runWithEntrypoint:(id)arg1;
- (_Bool)runWithEntrypoint:(id)arg1 libraryURI:(id)arg2;
- (_Bool)run;
- (void)updateDisplays;
- (_Bool)createShell:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3;
- (void)setUpShell:(unique_ptr_49980375)arg1 withVMServicePublication:(_Bool)arg2;
- (void)launchEngine:(id)arg1 libraryURI:(id)arg2 entrypointArgs:(id)arg3;
- (struct Screenshot)screenshot:(int)arg1 base64Encode:(_Bool)arg2;
- (void)maybeSetupPlatformViewChannels;
- (void)setUpChannels;
- (void)startProfiler;
- (void)resetChannels;
@property(readonly, nonatomic) NSURL *vmServiceUrl;
@property(readonly, nonatomic) NSURL *observatoryUrl;
@property(readonly, nonatomic) FlutterBasicMessageChannel *statChannel;
@property(readonly, nonatomic) FlutterBasicMessageChannel *skiaChannel;
@property(readonly, nonatomic) FlutterBasicMessageChannel *keyEventChannel;
@property(readonly, nonatomic) FlutterBasicMessageChannel *settingsChannel;
@property(readonly, nonatomic) FlutterBasicMessageChannel *systemChannel;
@property(readonly, nonatomic) FlutterBasicMessageChannel *lifecycleChannel;
- (id)spellCheckChannel;
- (id)scribbleChannel;
- (id)undoManagerChannel;
@property(readonly, nonatomic) FlutterMethodChannel *textInputChannel;
@property(readonly, nonatomic) FlutterMethodChannel *platformChannel;
@property(readonly, nonatomic) FlutterMethodChannel *restorationChannel;
@property(readonly, nonatomic) FlutterMethodChannel *navigationChannel;
@property(readonly, nonatomic) FlutterMethodChannel *localizationChannel;
- (id)restorationPlugin;
- (id)undoManagerPlugin;
- (id)textInputPlugin;
- (void *)platformViewsController;
- (id)platformPlugin;
@property(nonatomic) __weak FlutterViewController *viewController;
- (void)destroyContext:(_Bool)arg1;
- (void)notifyViewControllerDeallocated;
- (void)attachView;
- (void)ensureSemanticsEnabled;
- (void)sendKeyEvent:(const CDStruct_19ee6a98 *)arg1 callback:(CDUnknownFunctionPointerType)arg2 userData:(void *)arg3;
- (RefPtr_c4449933)rasterTaskRunner;
- (RefPtr_c4449933)uiTaskRunner;
- (RefPtr_c4449933)platformTaskRunner;
- (void *)iosPlatformView;
- (WeakPtr_db4fcd97)platformView;
- (void)dispatchPointerDataPacket:(unique_ptr_efd15f96)arg1;
- (void)updateFlutterViewportMetrics:(CDStruct_1388058e)arg1;
- (void)updateViewportMetrics:(struct ViewportMetrics)arg1;
- (WeakNSObject_ed46922b)getWeakNSObject;
- (void *)shell;
- (void)dealloc;
- (void)releaseInUIThread;
- (void)setAllowDeliverAppLifecycleInViewControllerLifecycle:(_Bool)arg1;
- (void)setUseCoreTextShape:(_Bool)arg1;
- (void)setFontShapeUseCoreText:(_Bool)arg1;
- (void)setDisableSemantics:(_Bool)arg1;
- (void)preCreateThreadMerger;
- (int)platformViewsRenderingAPI;
- (void)recreatePlatformViewController;
- (void)setUpApplicationLifecycleNotifications:(id)arg1;
- (void)setUpSceneLifecycleNotifications:(id)arg1;
- (id)initWithName:(id)arg1 project:(id)arg2 allowHeadlessExecution:(_Bool)arg3 restorationEnabled:(_Bool)arg4;
- (id)initWithName:(id)arg1 project:(id)arg2 allowHeadlessExecution:(_Bool)arg3;
- (id)initWithName:(id)arg1 project:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

