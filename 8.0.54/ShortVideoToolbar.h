//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CAGradientLayer, EditImageAttr, EditImageIntialView, EditVideoAttr, EditVideoBGMPlayer, EditVideoLogicItem, MJCamChangeTemplateParams, MJCameraTemplateReportObject, MMCameraTemplatePanel, MMCameraTopBarView, MMCameraTouchEventView, MMCircularProgressView, MMImageCropperViewController, MMLoadingView, MMShortVideoParamModel, MMSightCameraOptionManager, MMSightRecordView, MMUIButton, MMUIImageView, MMUILabel, NSArray, NSMutableArray, NSString, OMCGeographicInfo, OMJRecordingResultTraits, RecommendedMusicInfo, ShortVideoToolbarPreviewView, SightBeautyOperationPanel, SightCameraPreviewView, SightShootingModeSwitchView, UIButton, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, WCFinderEditImageMusicView, WCFinderMusicSelectView, WCFinderTemplateMusicSelectEntranceView, WCShortVideoToolBarInitParams, WCUIAlertView;
@protocol ShortVideoBarDelegate;

@interface ShortVideoToolbar
{
    _Bool m_isActive;
    double m_topPositon;
    double m_dragDeltaFix;
    int m_cameraState;
    _Bool m_dragZoomTrigger;
    _Bool m_inCombolMode;
    NSMutableArray *m_recordIDAry;
    UIButton *m_captureBtn;
    MMSightRecordView *m_recordButtonView;
    UILabel *m_tipsLabel;
    UILabel *m_zoomTipsLabel;
    unsigned long long m_cameraMode;
    UIView *m_topBar;
    UIView *m_topBarIcon;
    UIView *m_topBarIconActive;
    _Bool m_requestAuthAccess;
    UIView *m_motionTipsView;
    _Bool m_motionDetected;
    UIButton *m_toolbarCancelButton;
    _Bool m_lightBoostStat;
    _Bool m_lightBoostOpenStat;
    unsigned int m_validReshowLightBoostCmd;
    UIButton *m_lightBoostButton;
    long long m_currentOrientation;
    _Bool m_hasRealStartedForPreStartRecording;
    double m_zoomScaleAtLastPanGesture;
    _Bool m_isPinching;
    float _videoDuration;
    long long _cameraPosition;
    _Bool _draggable;
    _Bool _isShowingPreview;
    _Bool _isForbiddenAnimation;
    _Bool _m_writerTimeout;
    _Bool _m_cameraOpened;
    _Bool _m_shouldContinueRecording;
    _Bool _m_isTakingPicture;
    _Bool _showTipsReady;
    _Bool _onlyShowTemplateSelectedView;
    _Bool _canRelayoutSubviews;
    _Bool _hasShowTempalteModeSwitchTips;
    int _recordState;
    int _btnState;
    unsigned int _m_currWriterID;
    unsigned int _m_tipsCounter;
    NSString *_finishButtonWording;
    id <ShortVideoBarDelegate> _delegate;
    SightCameraPreviewView *_m_cameraPreviewView;
    EditVideoAttr *_editVideoAttr;
    unsigned long long _uiStyle;
    unsigned long long _camSwitchTiming;
    UIView *_m_tipsView;
    UIView *_m_cancelTips;
    MMCircularProgressView *_m_circleProgress;
    UIView *_m_maskWindow;
    ShortVideoToolbarPreviewView *_m_resultPreviewView;
    MMUIButton *_m_hideBarBtn;
    UIImageView *_m_hideBarBtnImageView;
    MMUIButton *_m_albumBtn;
    MMUIButton *_m_beautyBtn;
    double _m_lastZoomScale;
    UIView *_m_toolBar;
    UIView *_m_backgroundView;
    UIView *_m_contentView;
    UIView *_m_preView;
    MMCameraTouchEventView *_m_panOpererView;
    CAGradientLayer *_topMaskGradientLayer;
    CAGradientLayer *_bottomMaskGradientLayer;
    UIImage *_m_originalImage;
    UIImage *_m_waitingSendImage;
    EditImageAttr *_m_editImageAttr;
    EditImageIntialView *_m_editImageInitialView;
    MMLoadingView *_m_loadingView;
    unsigned long long _m_scene;
    NSString *_m_statChatUserName;
    EditVideoLogicItem *_m_editVideoLogicItem;
    NSString *_m_videoPath;
    NSString *_m_waitingSendVideoPath;
    UIImage *_m_thumbImage;
    MMImageCropperViewController *_m_cropperVC;
    MMShortVideoParamModel *_shortVideoModel;
    MMUIImageView *_beautySelectedView;
    WCUIAlertView *_alertView;
    RecommendedMusicInfo *_patMusicInfo;
    EditVideoBGMPlayer *_bgmPlayer;
    MMUIButton *_audioPermissionTipsBtn;
    SightBeautyOperationPanel *_beautyOperationPanel;
    double _currentTemplateMaxRecordingDuration;
    MJCameraTemplateReportObject *_cameraTemplateReportObj;
    OMJRecordingResultTraits *_recordingResultTraits;
    MMUIButton *_closeButton;
    MMUILabel *_flashTipsLabel;
    MMUIButton *_switchButton;
    UIView *_optionAreaView;
    MMSightCameraOptionManager *_optionManager;
    MMCameraTopBarView *_proModeTopBarView;
    MMCameraTemplatePanel *_finderTemplatePanel;
    SightShootingModeSwitchView *_shootingModeSwitchView;
    WCFinderTemplateMusicSelectEntranceView *_musicEntranceView;
    WCShortVideoToolBarInitParams *_params;
    WCFinderMusicSelectView *_musicSelectView;
    WCFinderEditImageMusicView *_patMusicTopView;
    NSArray *_templateMusics;
    unsigned long long _btnTemplateState;
    MJCamChangeTemplateParams *_currentTemplateParams;
    OMCGeographicInfo *_userLocation;
    UIView *_toolbarLeftBtn;
    UIView *_toolbarRightBtn;
    UITapGestureRecognizer *_voiceOverTapInRecordBtn;
    UILongPressGestureRecognizer *_voiceOverLongPressInRecordBtn;
}

+ (id)postEnterSceneKey;
- (void).cxx_destruct;
@property(nonatomic) __weak UILongPressGestureRecognizer *voiceOverLongPressInRecordBtn; // @synthesize voiceOverLongPressInRecordBtn=_voiceOverLongPressInRecordBtn;
@property(nonatomic) __weak UITapGestureRecognizer *voiceOverTapInRecordBtn; // @synthesize voiceOverTapInRecordBtn=_voiceOverTapInRecordBtn;
@property(nonatomic) __weak UIView *toolbarRightBtn; // @synthesize toolbarRightBtn=_toolbarRightBtn;
@property(nonatomic) __weak UIView *toolbarLeftBtn; // @synthesize toolbarLeftBtn=_toolbarLeftBtn;
@property(retain, nonatomic) OMCGeographicInfo *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) MJCamChangeTemplateParams *currentTemplateParams; // @synthesize currentTemplateParams=_currentTemplateParams;
@property(nonatomic) _Bool hasShowTempalteModeSwitchTips; // @synthesize hasShowTempalteModeSwitchTips=_hasShowTempalteModeSwitchTips;
@property(nonatomic) unsigned long long btnTemplateState; // @synthesize btnTemplateState=_btnTemplateState;
@property(retain, nonatomic) NSArray *templateMusics; // @synthesize templateMusics=_templateMusics;
@property(retain, nonatomic) WCFinderEditImageMusicView *patMusicTopView; // @synthesize patMusicTopView=_patMusicTopView;
@property(retain, nonatomic) WCFinderMusicSelectView *musicSelectView; // @synthesize musicSelectView=_musicSelectView;
@property(retain, nonatomic) WCShortVideoToolBarInitParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderTemplateMusicSelectEntranceView *musicEntranceView; // @synthesize musicEntranceView=_musicEntranceView;
@property(retain, nonatomic) SightShootingModeSwitchView *shootingModeSwitchView; // @synthesize shootingModeSwitchView=_shootingModeSwitchView;
@property(retain, nonatomic) MMCameraTemplatePanel *finderTemplatePanel; // @synthesize finderTemplatePanel=_finderTemplatePanel;
@property(retain, nonatomic) MMCameraTopBarView *proModeTopBarView; // @synthesize proModeTopBarView=_proModeTopBarView;
@property(retain, nonatomic) MMSightCameraOptionManager *optionManager; // @synthesize optionManager=_optionManager;
@property(retain, nonatomic) UIView *optionAreaView; // @synthesize optionAreaView=_optionAreaView;
@property(retain, nonatomic) MMUIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) MMUILabel *flashTipsLabel; // @synthesize flashTipsLabel=_flashTipsLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) _Bool canRelayoutSubviews; // @synthesize canRelayoutSubviews=_canRelayoutSubviews;
@property(nonatomic) _Bool onlyShowTemplateSelectedView; // @synthesize onlyShowTemplateSelectedView=_onlyShowTemplateSelectedView;
@property(retain, nonatomic) OMJRecordingResultTraits *recordingResultTraits; // @synthesize recordingResultTraits=_recordingResultTraits;
@property(retain, nonatomic) MJCameraTemplateReportObject *cameraTemplateReportObj; // @synthesize cameraTemplateReportObj=_cameraTemplateReportObj;
@property(nonatomic) double currentTemplateMaxRecordingDuration; // @synthesize currentTemplateMaxRecordingDuration=_currentTemplateMaxRecordingDuration;
@property(retain, nonatomic) SightBeautyOperationPanel *beautyOperationPanel; // @synthesize beautyOperationPanel=_beautyOperationPanel;
@property(retain, nonatomic) MMUIButton *audioPermissionTipsBtn; // @synthesize audioPermissionTipsBtn=_audioPermissionTipsBtn;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) MMUIImageView *beautySelectedView; // @synthesize beautySelectedView=_beautySelectedView;
@property(retain, nonatomic) MMShortVideoParamModel *shortVideoModel; // @synthesize shortVideoModel=_shortVideoModel;
@property(nonatomic) _Bool showTipsReady; // @synthesize showTipsReady=_showTipsReady;
@property(retain, nonatomic) MMImageCropperViewController *m_cropperVC; // @synthesize m_cropperVC=_m_cropperVC;
@property(retain, nonatomic) UIImage *m_thumbImage; // @synthesize m_thumbImage=_m_thumbImage;
@property(copy, nonatomic) NSString *m_waitingSendVideoPath; // @synthesize m_waitingSendVideoPath=_m_waitingSendVideoPath;
@property(copy, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(retain, nonatomic) EditVideoLogicItem *m_editVideoLogicItem; // @synthesize m_editVideoLogicItem=_m_editVideoLogicItem;
@property(copy, nonatomic) NSString *m_statChatUserName; // @synthesize m_statChatUserName=_m_statChatUserName;
@property(nonatomic) unsigned long long m_scene; // @synthesize m_scene=_m_scene;
@property(retain, nonatomic) MMLoadingView *m_loadingView; // @synthesize m_loadingView=_m_loadingView;
@property(retain, nonatomic) EditImageIntialView *m_editImageInitialView; // @synthesize m_editImageInitialView=_m_editImageInitialView;
@property(retain, nonatomic) EditImageAttr *m_editImageAttr; // @synthesize m_editImageAttr=_m_editImageAttr;
@property(retain, nonatomic) UIImage *m_waitingSendImage; // @synthesize m_waitingSendImage=_m_waitingSendImage;
@property(retain, nonatomic) UIImage *m_originalImage; // @synthesize m_originalImage=_m_originalImage;
@property(nonatomic) _Bool m_isTakingPicture; // @synthesize m_isTakingPicture=_m_isTakingPicture;
@property(retain, nonatomic) CAGradientLayer *bottomMaskGradientLayer; // @synthesize bottomMaskGradientLayer=_bottomMaskGradientLayer;
@property(retain, nonatomic) CAGradientLayer *topMaskGradientLayer; // @synthesize topMaskGradientLayer=_topMaskGradientLayer;
@property(retain, nonatomic) MMCameraTouchEventView *m_panOpererView; // @synthesize m_panOpererView=_m_panOpererView;
@property(retain, nonatomic) UIView *m_preView; // @synthesize m_preView=_m_preView;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain, nonatomic) UIView *m_backgroundView; // @synthesize m_backgroundView=_m_backgroundView;
@property(nonatomic) _Bool m_shouldContinueRecording; // @synthesize m_shouldContinueRecording=_m_shouldContinueRecording;
@property(retain, nonatomic) UIView *m_toolBar; // @synthesize m_toolBar=_m_toolBar;
@property(nonatomic) double m_lastZoomScale; // @synthesize m_lastZoomScale=_m_lastZoomScale;
@property(retain, nonatomic) MMUIButton *m_beautyBtn; // @synthesize m_beautyBtn=_m_beautyBtn;
@property(retain, nonatomic) MMUIButton *m_albumBtn; // @synthesize m_albumBtn=_m_albumBtn;
@property(retain, nonatomic) UIImageView *m_hideBarBtnImageView; // @synthesize m_hideBarBtnImageView=_m_hideBarBtnImageView;
@property(retain, nonatomic) MMUIButton *m_hideBarBtn; // @synthesize m_hideBarBtn=_m_hideBarBtn;
@property(retain, nonatomic) ShortVideoToolbarPreviewView *m_resultPreviewView; // @synthesize m_resultPreviewView=_m_resultPreviewView;
@property(retain, nonatomic) UIView *m_maskWindow; // @synthesize m_maskWindow=_m_maskWindow;
@property(nonatomic) unsigned int m_tipsCounter; // @synthesize m_tipsCounter=_m_tipsCounter;
@property(retain, nonatomic) MMCircularProgressView *m_circleProgress; // @synthesize m_circleProgress=_m_circleProgress;
@property(retain, nonatomic) UIView *m_cancelTips; // @synthesize m_cancelTips=_m_cancelTips;
@property(retain, nonatomic) UIView *m_tipsView; // @synthesize m_tipsView=_m_tipsView;
@property(nonatomic) _Bool m_cameraOpened; // @synthesize m_cameraOpened=_m_cameraOpened;
@property(nonatomic) _Bool m_writerTimeout; // @synthesize m_writerTimeout=_m_writerTimeout;
@property(nonatomic) unsigned int m_currWriterID; // @synthesize m_currWriterID=_m_currWriterID;
@property(nonatomic) unsigned long long camSwitchTiming; // @synthesize camSwitchTiming=_camSwitchTiming;
@property(nonatomic) int btnState; // @synthesize btnState=_btnState;
@property(nonatomic) int recordState; // @synthesize recordState=_recordState;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) _Bool isForbiddenAnimation; // @synthesize isForbiddenAnimation=_isForbiddenAnimation;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(retain, nonatomic) SightCameraPreviewView *m_cameraPreviewView; // @synthesize m_cameraPreviewView=_m_cameraPreviewView;
@property(nonatomic) __weak id <ShortVideoBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *finishButtonWording; // @synthesize finishButtonWording=_finishButtonWording;
@property(nonatomic) _Bool isShowingPreview; // @synthesize isShowingPreview=_isShowingPreview;
@property(nonatomic) _Bool draggable; // @synthesize draggable=_draggable;
@property(nonatomic) double topPosition; // @synthesize topPosition=m_topPositon;
@property(nonatomic) _Bool active; // @synthesize active=m_isActive;
@property(nonatomic) int cameraState; // @synthesize cameraState=m_cameraState;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)musicCount;
- (void)finderTemplateMuiscViewDidChangeToANewIndex:(unsigned long long)arg1;
- (void)finderTemplateMuiscViewDidClickMusic;
- (void)finderTemplateMuiscViewDidClickOstBtn;
- (void)finderTemplateMuiscViewDidClickCloseBtn;
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)_releaseAudioModule;
- (void)_deactiveAudioModule;
- (void)_activeAudioModule;
- (void)onFinishQuickReplyMsg;
- (void)onBeginQuickReplyMsg;
- (void)setOthersHidden:(_Bool)arg1;
- (void)onSightBeautyOperationPanelSetBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (void)onSightBeautyOperationPanelSelected:(_Bool)arg1;
- (void)onSightBeautyOperationPanelClose:(_Bool)arg1;
- (void)onShootingModeChanged:(unsigned long long)arg1;
- (void)MMCameraTouchEventView:(id)arg1 didReceiveTouchEventWithState:(unsigned long long)arg2 touches:(id)arg3 event:(id)arg4;
- (void)cameraTemplatePanelFetchDataDidFail:(id)arg1;
- (void)cameraTemplatePanelDataDidChange:(id)arg1;
- (id)cameraEffectPanelGetReportObj;
- (void)preloadMJTemplateResourceWithCurrentIndexIfNeeded:(unsigned long long)arg1;
- (void)cameraTemplatePanelDidSelectItem:(id)arg1 atIndex:(unsigned long long)arg2 inPanel:(id)arg3;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)startBGMPlay;
- (void)reportMultiMediaEditInfo;
- (void)onShortVideoTaken:(id)arg1 videoScoreParams:(id)arg2;
- (void)editVideoViewController:(id)arg1 currentVC:(id)arg2 requestToLaunchMJAppWithScene:(unsigned long long)arg3 launchType:(long long)arg4 editTab:(long long)arg5 musicId:(id)arg6 exportedOpenWX:(int)arg7 launchCallback:(CDUnknownBlockType)arg8;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)onWCEditVideoViewControllerPostFinderDidCancel;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(id)arg1;
- (void)onWCEditVideoViewControllerLongVideoWithPostSession:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)onClickEditVideoDoneBarButton;
- (CDUnknownBlockType)onWillClickEditVideoDoneBarButton;
- (void)onClickEditVideoBackBarButton;
- (_Bool)isShortVideoToolbarUIStyle16To9;
- (_Bool)isShortVideoToolbarUIStyleFitBounds;
- (id)currentViewController;
- (void)handleClickEditImageDoneBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (_Bool)canRecognizePanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)configGestureRecognizerEnableAfterUseTemplate:(id)arg1;
- (void)configGestureRecognizerEnableAfterClearTemplate;
- (void)fetchUserLocationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchUserLocationIfNeeded:(id)arg1;
- (void)safeSetCamSessionEffect:(CDUnknownBlockType)arg1;
- (void)safeClearTemplateFunnyWithCompletion:(CDUnknownBlockType)arg1;
- (void)safeSetCamFunny:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)safeSetCamFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)safeSetCamBeauty:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getCurrentSelectedSongId;
- (id)getCurrentSelectedTemplateMusicId;
- (id)getCurrentSelectedTemplateId;
- (_Bool)needMaasEffect;
- (id)genMultiRecordInfo;
- (void)onPreviewImageClickCancel;
- (unsigned long long)sightCaptureScene2EditVideoEntrance;
- (int)sightCaptureScene2ImagePickerScene;
- (unsigned long long)sightCaptureScene2EditImageEnterScene;
- (id)genFinderTemplateBindedEventParams;
- (id)genFinderTemplateInfoResultWithCheckSum:(id)arg1;
- (void)showPreviewViewWithImage:(id)arg1 imageData:(id)arg2;
- (void)showFinderFullScreenEditVideoViewController;
- (id)genEditViewControllerUIConfigWithPortraitAsset:(_Bool)arg1;
- (void)tryRestoreMiaojianSettingIfNeedCompletion:(CDUnknownBlockType)arg1;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 fromTemplate:(_Bool)arg4;
- (void)stopPreview;
- (void)initReportService;
- (void)updateEditImageReportObjBeforeEnterEditView;
- (void)willEnterEditVideoView;
- (id)getPatMusicInfo;
- (void)enterSegmentShooting;
- (void)startNormalLoadingWithText:(id)arg1 blocked:(_Bool)arg2;
- (void)startNormalLoadingWithBlocked:(_Bool)arg1;
- (void)didTapRetakeButton;
- (id)cameraSwitchTimingLogString;
- (id)cameraModeLogStringWithIsVideo:(_Bool)arg1;
- (_Bool)isChatRoomUserName:(id)arg1;
- (void)hideToolBar;
- (void)showTopBar;
- (void)hideTopBar;
- (void)showMaskWindow;
- (void)startDeactiveAnimation;
- (void)goToSettingAuthorization;
- (void)startActiveAnimation:(_Bool)arg1;
- (void)delaySetTemplateReleatedUIInteractive:(_Bool)arg1;
- (void)trySetupMaasCore;
- (void)setTemplateReleatedBtnUserInteractionEnabled:(_Bool)arg1;
- (void)setActive:(_Bool)arg1 fromShake:(_Bool)arg2;
- (void)deActiveWithoutAnimation;
- (void)handlePinchGesture:(id)arg1;
- (_Bool)enableAdjustLighting;
- (void)handlePanPreview:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)focusCenter;
- (void)tryFoldProModeOption;
- (void)onShaky;
- (void)resetMotionTipsView;
- (void)setupMotionDetector;
- (void)onDragEnd:(double)arg1;
- (void)onDrag:(struct CGPoint)arg1;
- (void)onCancelDelete;
- (void)onBtnClick:(id)arg1;
- (void)onMovieCompressFinished:(id)arg1;
- (void)onVoiceOverStatusChanged;
- (void)onWriterResign;
- (void)onWriterFailed:(id)arg1;
- (void)onTakenPicture:(id)arg1 imageData:(id)arg2;
- (void)normalBtnRelease;
- (void)btnRelease;
- (void)btnDragging:(id)arg1;
- (void)btnDragInside;
- (void)btnDragOutSide;
- (void)_onCaptureBtnTimerCancelled;
- (void)_onCaptureBtnTimerUpdated;
- (void)showFlashingEffect;
- (void)btnPress;
- (void)handleNonVoiceOverBtnRelease;
- (void)handleNonVoiceOverBtnPress;
- (void)handleVoiceOverTapGes:(id)arg1;
- (void)handleVoiceOverLongPressGes:(id)arg1;
- (void)normalBtnPress;
- (void)reportCaptureIsLongPress:(_Bool)arg1;
- (_Bool)canSwitchCameraInRecording;
- (void)showVideoForbidenTips;
- (long long)updateVideoOrientationIfNeeded:(long long)arg1;
- (void)tryCancelPreStartRecording;
- (void)cancelWriterWithoutReprepare;
- (void)cancelWriter;
- (void)finishWriter;
- (void)startWriter;
- (id)getShineAnim;
- (void)turnBarNormalize;
- (void)turnBarCanceling;
- (void)turnBarRecording:(_Bool)arg1;
- (void)turnBarRecording;
- (void)turnBarRecordingLongAnim;
- (void)logicCheckState:(int)arg1;
- (void)onZoomerChangedToFactor:(double)arg1;
- (void)onZoomerIconButtonChangedSelectionTo:(_Bool)arg1;
- (void)onTimerCountDownCancelled;
- (void)onTimerCountDownToTimeSec:(long long)arg1;
- (void)onTimerChangedToType:(long long)arg1;
- (void)onProModeChangeToShowing:(_Bool)arg1;
- (void)onPortraitModeChangeToStatus:(_Bool)arg1;
- (void)onNightModeChangeToStatus:(_Bool)arg1;
- (void)onHDRClickTopBarBtn:(id)arg1;
- (void)onHDRChangeToStatus:(_Bool)arg1;
- (void)onGridLineChangeToStatus:(_Bool)arg1;
- (void)onFlashlightClickTopBarBtn:(id)arg1;
- (void)onFlashlightChangeToStatus:(_Bool)arg1;
- (void)MMSightCameraBeautifyDidSelectFilterItem:(id)arg1;
- (void)MMSightCameraBeautifyDidSelectBeautyItem:(id)arg1;
- (struct CGRect)_getPreviewVisibleAspectFrame;
- (id)_croppedVisibleAspectImageIfNeeded:(id)arg1;
- (void)_onPreviewVisibleAspectChanged;
- (void)onAspectRatioChangedToType:(long long)arg1;
- (id)MJCameraMusicTabViewModelGetMusicInfo:(id)arg1;
- (_Bool)isCameraProModeEnabled;
- (_Bool)isCurringShowingFinderTemplate;
- (_Bool)isFinderTemplateScene;
- (_Bool)enableVideo;
- (_Bool)enablePhoto;
- (void)_takePicture;
- (void)_onWillTakePicture;
- (void)hideCancelTips;
- (void)showCancelTips;
- (void)hideTips;
- (void)fadeInTips;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned int)arg3 fontSize:(double)arg4;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned int)arg3;
- (void)hideFlashTips;
- (void)showFlashTips:(id)arg1;
- (void)updateCameraPreviewViewStatus;
- (void)pauseCamera;
- (void)resumeCamera;
- (void)onCameraStop:(id)arg1;
- (void)onCameraAudioOK:(id)arg1;
- (void)onCameraPreviewOK:(id)arg1;
- (void)updateCameraAccessibility;
- (void)switchCamera;
- (void)switchCameraByButton;
- (float)sightCaptureMaxDuration;
- (void)releasePreview;
- (void)resumePreview;
- (_Bool)isMomentsScene;
- (_Bool)needsBeautyEffect;
- (_Bool)needsEffectManager;
- (void)tryCreatePreview;
- (void)resetBGMPlay;
- (void)dealloc;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_relayoutBottomMaskGradientLayer;
- (void)_initBottomMaskGradientLayer;
- (void)_relayoutTopMaskGradientLayer;
- (void)_initTopMaskGradientLayer;
- (void)_relayoutTipsLabel;
- (void)setMusicSelectViewHidden:(_Bool)arg1;
- (void)adjustTempalteElementShadow;
- (void)initFinderTemplateUI;
- (id)createAndSetFinderTemplatePanel;
- (void)initTipsLabel;
- (void)setupBeautyBtnWithState:(_Bool)arg1;
- (void)setupAlbumBtn;
- (_Bool)canSightPreviewMarginTopNavigationBar;
- (_Bool)canSightPreviewMarginTop0;
- (double)leftHeightAfterMinusPreview;
- (void)_removeOptionAreaContentView:(id)arg1;
- (void)_switchOptionAreaContentView:(id)arg1 andCenterInside:(_Bool)arg2;
- (void)_switchOptionAreaDefaultContentForCurrentScene;
- (void)_relayoutOptionAreaView;
- (void)_initOptionAreaView;
- (void)_relayoutToolBar;
- (void)_relayoutFinderTemplatePanel;
- (double)getToolBarHeight;
- (void)_initToolBar;
- (void)_relayoutPreView;
- (void)_initPreView;
- (void)_relayoutTopBar;
- (void)_initTopBar;
- (void)_relayoutBlurImage;
- (void)updateBlurImage;
- (id)makeBGMaskView;
- (void)_setZoomFactor:(double)arg1;
- (struct CGRect)_getContentViewFrameWithAspectRatio:(double)arg1;
- (double)_getContentViewCenterYIn_4_3_State;
- (double)_getContentViewCenterYIn_1_1_State;
- (struct CGRect)_getContentViewFrameInDefaultState;
- (void)_relayoutBackgroundView;
- (void)_initBackgroundView;
- (void)setupView;
- (unsigned long long)getShortVideoToolbarUIStyle:(unsigned long long)arg1 uiStyle:(unsigned long long)arg2;
- (void)_relayoutViews;
- (void)forceRelayoutSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (unsigned long long)finderPostEnterScene;
- (void)setFinderPostEnterScene:(unsigned long long)arg1;
- (void)sightCameraDismissSelf:(_Bool)arg1;
- (unsigned long long)sightCameraCaptureScene;
- (_Bool)sightCameraIsVisible;
- (void)onAutoSwitchingCamera;
- (_Bool)checkViewControllerHasLoaded;
- (void)camSessionDidPresentFirstFrame:(id)arg1;
- (void)camSession:(id)arg1 recordingTimeDidChange:(CDStruct_1b6d18a9)arg2 maxRecordingDuration:(CDStruct_1b6d18a9)arg3;
- (void)camSession:(id)arg1 recordingDidFail:(id)arg2;
- (void)onSwitchCameraFinished:(id)arg1;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)dismissForVOIPEvents;
- (void)rotateToOrientation:(long long)arg1;
- (void)initFirstOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

