//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MJActionPanelViewController, MJAnalysisGuidanceManager, MJClippingPanel, MJExportProgressMaskView, MJGradientView, MJMovieComposingBottomBar, MJMovieComposingRecognitionGuideView, MJMovieComposingSession, MJMovieComposingTitleGuideView, MJMovieComposingViewModel, MJMovieTextEditInspector, MJMovieTextSuggestionContext, MJMovieTextSuggestionProcessor, MJMovieTextSuggestionSnapshotGenerator, MJMusicPickingViewModel, MJNarrationRecordingControlView, MJPassthroughView, MJPlaybackViewModel, MJPublisherPlaybackProgressSlider, MJSegmentCropBoxView, MJSegmentCropGestureCaptureView, MJSegmentViewModel, MJTimelineViewController, MJTimelineViewModel, MJVideoSafeAreaTipsView, MMBGMSelectHalfScreenViewController, MMUIButton, MMUILabel, NSMapTable, NSMutableArray, NSString, OMJHandleBoxBorderStyle, OMJPlaybackOverlayView, UIImageView, UIView;
@protocol MJMovieComposingViewControllerDelegate;

@interface MJMovieComposingViewController
{
    _Bool _isFirstAppear;
    _Bool _isRenderViewShrinked;
    _Bool _shouldAutoStartPlaying;
    _Bool _isTitleGuideShrinked;
    _Bool _shouldLeaveTextEditingWhenTextInspectorDidFinish;
    _Bool _isShowingTitleInputGuideInProgress;
    id <MJMovieComposingViewControllerDelegate> _delegate;
    MJMovieComposingViewModel *_viewModel;
    MJMovieComposingSession *_publisherMCSession;
    unsigned long long _state;
    UIImageView *_initialContentImageView;
    MMUIButton *_exitButton;
    MMUIButton *_feedbackButton;
    MMUIButton *_completeButton;
    MJPublisherPlaybackProgressSlider *_playbackProgressSlider;
    UIView *_backgroundGRView;
    UIView *_renderView;
    UIView *_renderViewContainer;
    OMJPlaybackOverlayView *_overlayView;
    MJSegmentViewModel *_previousFocusedSegmentVM;
    MMUIButton *_skipMovieTilteInputGuideButton;
    MMUIButton *_playButton;
    MJMovieComposingBottomBar *_bottomBar;
    MJGradientView *_bottomGradientView;
    NSMutableArray *_panelStack;
    MJPassthroughView *_panelContainer;
    MJClippingPanel *_clippingPanel;
    MJTimelineViewController *_clippingTimelineVC;
    MJActionPanelViewController *_actionPanelVC;
    MJNarrationRecordingControlView *_recordingControlView;
    NSMapTable *_narrationSegmentIDsByIdentifier;
    MJMovieComposingTitleGuideView *_titleGuideView;
    MJMovieComposingRecognitionGuideView *_recognitionGuideView;
    MJAnalysisGuidanceManager *_analysisGuidanceManager;
    unsigned long long _prevEditContentType;
    MJMovieTextEditInspector *_textInspector;
    unsigned long long _stickerEditingOptions;
    MMBGMSelectHalfScreenViewController *_musicPickingVC;
    MJMusicPickingViewModel *_musicPickingVM;
    MJExportProgressMaskView *_progressView;
    NSMutableArray *_toolbarSignalObservers;
    MMUILabel *_canvasUserInteractionTipLabel;
    MJSegmentViewModel *_handleBoxSegmentVM;
    unsigned long long _handleBoxOptions;
    OMJHandleBoxBorderStyle *_handleBoxBorderStyle;
    MJVideoSafeAreaTipsView *_safeAreaTipsView;
    MJSegmentCropBoxView *_cropBoxView;
    MJSegmentCropGestureCaptureView *_cropGestureCaptureView;
    MJMovieTextSuggestionProcessor *_movieTextSuggestionProcessor;
    MJMovieTextSuggestionContext *_movieTextSuggestionContext;
    MJMovieTextSuggestionSnapshotGenerator *_movieTextSuggestionSnapshotGenerator;
    CDStruct_1b6d18a9 _playbackResumeTime;
    CDStruct_1b6d18a9 _narrationStartTimeInTimeline;
}

+ (_Bool)shouldHandleExportError:(id)arg1;
+ (id)defaultSpeechRoleTitleWithName:(id)arg1 hasButton:(_Bool)arg2;
+ (id)defaultHandleBoxTitleWithSegmentType:(unsigned long long)arg1;
+ (id)defaultHandleBoxTitlesWithSegmentVM:(id)arg1 hasButton:(_Bool)arg2;
+ (float)calculateEmoticonAdaptiveScaleWithImageSize:(struct CGSize)arg1 canvasSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MJMovieTextSuggestionSnapshotGenerator *movieTextSuggestionSnapshotGenerator; // @synthesize movieTextSuggestionSnapshotGenerator=_movieTextSuggestionSnapshotGenerator;
@property(retain, nonatomic) MJMovieTextSuggestionContext *movieTextSuggestionContext; // @synthesize movieTextSuggestionContext=_movieTextSuggestionContext;
@property(retain, nonatomic) MJMovieTextSuggestionProcessor *movieTextSuggestionProcessor; // @synthesize movieTextSuggestionProcessor=_movieTextSuggestionProcessor;
@property(retain, nonatomic) MJSegmentCropGestureCaptureView *cropGestureCaptureView; // @synthesize cropGestureCaptureView=_cropGestureCaptureView;
@property(retain, nonatomic) MJSegmentCropBoxView *cropBoxView; // @synthesize cropBoxView=_cropBoxView;
@property(retain, nonatomic) MJVideoSafeAreaTipsView *safeAreaTipsView; // @synthesize safeAreaTipsView=_safeAreaTipsView;
@property(retain, nonatomic) OMJHandleBoxBorderStyle *handleBoxBorderStyle; // @synthesize handleBoxBorderStyle=_handleBoxBorderStyle;
@property(nonatomic) unsigned long long handleBoxOptions; // @synthesize handleBoxOptions=_handleBoxOptions;
@property(retain, nonatomic) MJSegmentViewModel *handleBoxSegmentVM; // @synthesize handleBoxSegmentVM=_handleBoxSegmentVM;
@property(retain, nonatomic) MMUILabel *canvasUserInteractionTipLabel; // @synthesize canvasUserInteractionTipLabel=_canvasUserInteractionTipLabel;
@property(readonly, nonatomic) NSMutableArray *toolbarSignalObservers; // @synthesize toolbarSignalObservers=_toolbarSignalObservers;
@property(retain, nonatomic) MJExportProgressMaskView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MJMusicPickingViewModel *musicPickingVM; // @synthesize musicPickingVM=_musicPickingVM;
@property(retain, nonatomic) MMBGMSelectHalfScreenViewController *musicPickingVC; // @synthesize musicPickingVC=_musicPickingVC;
@property(nonatomic) unsigned long long stickerEditingOptions; // @synthesize stickerEditingOptions=_stickerEditingOptions;
@property(nonatomic) _Bool isShowingTitleInputGuideInProgress; // @synthesize isShowingTitleInputGuideInProgress=_isShowingTitleInputGuideInProgress;
@property(nonatomic) _Bool shouldLeaveTextEditingWhenTextInspectorDidFinish; // @synthesize shouldLeaveTextEditingWhenTextInspectorDidFinish=_shouldLeaveTextEditingWhenTextInspectorDidFinish;
@property(retain, nonatomic) MJMovieTextEditInspector *textInspector; // @synthesize textInspector=_textInspector;
@property(nonatomic) unsigned long long prevEditContentType; // @synthesize prevEditContentType=_prevEditContentType;
@property(retain, nonatomic) MJAnalysisGuidanceManager *analysisGuidanceManager; // @synthesize analysisGuidanceManager=_analysisGuidanceManager;
@property(retain, nonatomic) MJMovieComposingRecognitionGuideView *recognitionGuideView; // @synthesize recognitionGuideView=_recognitionGuideView;
@property(nonatomic) _Bool isTitleGuideShrinked; // @synthesize isTitleGuideShrinked=_isTitleGuideShrinked;
@property(retain, nonatomic) MJMovieComposingTitleGuideView *titleGuideView; // @synthesize titleGuideView=_titleGuideView;
@property(retain, nonatomic) NSMapTable *narrationSegmentIDsByIdentifier; // @synthesize narrationSegmentIDsByIdentifier=_narrationSegmentIDsByIdentifier;
@property(nonatomic) CDStruct_1b6d18a9 narrationStartTimeInTimeline; // @synthesize narrationStartTimeInTimeline=_narrationStartTimeInTimeline;
@property(retain, nonatomic) MJNarrationRecordingControlView *recordingControlView; // @synthesize recordingControlView=_recordingControlView;
@property(retain, nonatomic) MJActionPanelViewController *actionPanelVC; // @synthesize actionPanelVC=_actionPanelVC;
@property(retain, nonatomic) MJTimelineViewController *clippingTimelineVC; // @synthesize clippingTimelineVC=_clippingTimelineVC;
@property(retain, nonatomic) MJClippingPanel *clippingPanel; // @synthesize clippingPanel=_clippingPanel;
@property(retain, nonatomic) MJPassthroughView *panelContainer; // @synthesize panelContainer=_panelContainer;
@property(retain, nonatomic) NSMutableArray *panelStack; // @synthesize panelStack=_panelStack;
@property(retain, nonatomic) MJGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) MJMovieComposingBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MMUIButton *skipMovieTilteInputGuideButton; // @synthesize skipMovieTilteInputGuideButton=_skipMovieTilteInputGuideButton;
@property(retain, nonatomic) MJSegmentViewModel *previousFocusedSegmentVM; // @synthesize previousFocusedSegmentVM=_previousFocusedSegmentVM;
@property(nonatomic) _Bool shouldAutoStartPlaying; // @synthesize shouldAutoStartPlaying=_shouldAutoStartPlaying;
@property(retain, nonatomic) OMJPlaybackOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool isRenderViewShrinked; // @synthesize isRenderViewShrinked=_isRenderViewShrinked;
@property(readonly, nonatomic) UIView *renderViewContainer; // @synthesize renderViewContainer=_renderViewContainer;
@property(readonly, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) UIView *backgroundGRView; // @synthesize backgroundGRView=_backgroundGRView;
@property(nonatomic) CDStruct_1b6d18a9 playbackResumeTime; // @synthesize playbackResumeTime=_playbackResumeTime;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) MJPublisherPlaybackProgressSlider *playbackProgressSlider; // @synthesize playbackProgressSlider=_playbackProgressSlider;
@property(retain, nonatomic) MMUIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) MMUIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) MMUIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UIImageView *initialContentImageView; // @synthesize initialContentImageView=_initialContentImageView;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) MJMovieComposingSession *publisherMCSession; // @synthesize publisherMCSession=_publisherMCSession;
@property(retain, nonatomic) MJMovieComposingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJMovieComposingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldAutorotate;
- (void)checkMemoryLeakOnExit;
- (void)updateProgressToast:(double)arg1 withText:(id)arg2;
- (void)showFailedToastWithText:(id)arg1;
- (void)showSucceededToast;
- (void)dismissProgressToast;
- (void)showProgressToastWithText:(id)arg1;
- (void)showProgressToast;
- (void)showInfiniteProgressToastWithText:(id)arg1;
- (void)showInfiniteProgressToast;
- (CDStruct_1b6d18a9)regulateTimecodeDurationWithPlaybackTime:(CDStruct_1b6d18a9)arg1 playbackTimeRange:(CDStruct_e83c9415)arg2;
- (_Bool)isShowingClipEditingInspector;
- (_Bool)isShowingTrimInspector;
- (void)showTrimInspectorWithCancel:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exportProgressMaskViewDidCancel:(id)arg1;
- (void)bindExport;
- (void)timelineContentRangeEditView:(id)arg1 selectedSegmentPlaybackDurationDidChange:(CDStruct_1b6d18a9)arg2;
- (void)timelineContentRangeEditView:(id)arg1 selectedSegmentPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)timelineContentRangeEditView:(id)arg1 didSkimToSegmentHeadAfterSelect:(id)arg2;
- (void)timelineContentRangeEditView:(id)arg1 didSelectSegmentVM:(id)arg2;
- (void)transitionInspectorDidSelectTransition:(id)arg1;
- (void)speedInspector:(id)arg1 didSelectRawSpeedRatio:(long long)arg2;
- (void)speedInspector:(id)arg1 willSelectRawSpeedRatio:(long long)arg2;
- (void)clippingPanel:(id)arg1 playbackProgressSliderTouchEnd:(id)arg2;
- (void)clippingPanel:(id)arg1 playbackProgressSliderTouchDown:(id)arg2;
- (void)clippingPanel:(id)arg1 playbackProgressSliderValueDidChange:(id)arg2;
- (void)clippingPanel:(id)arg1 redoButtonTouchUpInside:(id)arg2;
- (void)clippingPanel:(id)arg1 undoButtonTouchUpInside:(id)arg2;
- (void)clippingPanel:(id)arg1 playButtonTouchUpInside:(id)arg2;
- (void)pagePanelView:(id)arg1 didDisappearPageAtIndex:(long long)arg2;
- (void)pagePanelView:(id)arg1 didAppearPageAtIndex:(long long)arg2;
- (void)playbackViewModelWillStartPlaying:(id)arg1;
- (void)pauseAndClosePlayback;
- (void)openAndResumePlayback:(_Bool)arg1;
- (void)teardownPlayback;
- (void)setupPlayback;
- (void)startPlayingUsingPlaybackConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showButtons:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideButtons:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showMainPageButtonsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideMainPageButtonsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setButtons:(id)arg1 hidden:(_Bool)arg2;
- (void)setMainPageButtonsHidden:(_Bool)arg1;
- (id)mainPageButtons;
- (void)reloadUndoRedoButtons;
- (void)toolbarRedoButtonTouchUpInside:(id)arg1;
- (void)toolbarUndoButtonTouchUpInside:(id)arg1;
- (void)toolbarPlayButtonTouchUpInside:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)bindToolbar;
- (void)handleBottomBarAction:(long long)arg1;
- (void)playbackControlViewTouchEnd:(id)arg1;
- (void)playbackControlViewTouchDown:(id)arg1;
- (void)playbackControlViewValueChanged:(id)arg1;
- (void)playButtonTouchUpInside:(id)arg1;
- (void)skipMovieTilteInputGuideButtonTouchUpInside:(id)arg1;
- (void)feedbackButtonTouchUpInside:(id)arg1;
- (void)completeButtonTouchUpInside:(id)arg1;
- (void)exitButtonTouchUpInside:(id)arg1;
- (void)showExitConfirmTipWithExitHandler:(CDUnknownBlockType)arg1;
- (void)leavePreviewing;
- (void)updateHandleBoxWithMutationInfo:(id)arg1;
- (void)updatePlaybackButtonWithIsPlaying:(_Bool)arg1;
- (void)didEnterState:(unsigned long long)arg1;
- (void)willLeaveState:(unsigned long long)arg1;
- (void)willEnterState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)registerYReportSdk;
@property(readonly, nonatomic) MJPlaybackViewModel *playbackVM;
@property(readonly, nonatomic) MJTimelineViewModel *timelineVM;
- (void)setupGestures;
- (void)bindViews;
- (void)layoutViews;
- (void)autoLayoutRenderView;
- (void)removeInitailContentTransitionViewIfNeeded;
- (void)setupInitailContentTransitionViewIfNeeded;
- (void)setupViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)showKeyboardForMovieTitleIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)_registerNotifications;
- (id)initWithViewModel:(id)arg1;
- (void)layoutRenderViewOnAspectRatioDidChange;
- (void)animateRenderViewExpandWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateRenderViewShrinkWithHeight:(double)arg1;
- (void)renderViewShrinkNoAnimationWithHeight:(double)arg1;
- (double)composingPanelHeight;
- (struct CGSize)maxRenderSizeExpanded;
- (struct CGSize)maxRenderSizeShrinked;
- (struct CGSize)renderSizeWithContainerSize:(struct CGSize)arg1;
- (void)handleImagePickerDidFinishPickingMediaActionWithAssetInfos:(id)arg1;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (unsigned long long)nextAnticlockwiseContentRotationModeWithCurrentMode:(unsigned long long)arg1;
- (void)timelineReorderView:(id)arg1 didSelectSegmentVM:(id)arg2;
- (void)actionPanelViewControllerDidSelectBatchClipping:(id)arg1 withType:(unsigned long long)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (void)actionPanelViewControllerDidSelectRotate:(id)arg1;
- (void)actionPanelViewControllerDidSelectSplit:(id)arg1;
- (void)actionPanelViewControllerDidSelectSpeechRecognition:(id)arg1;
- (void)actionPanelViewControllerDidSelectEditCaptionStyle:(id)arg1;
- (void)actionPanelViewControllerDidSelectEditCaptionText:(id)arg1;
- (void)actionPanelViewControllerDidSelectContentRange:(id)arg1;
- (void)actionPanelViewControllerDidSelectReorder:(id)arg1;
- (void)actionPanelViewControllerDidSelectCanvas:(id)arg1;
- (void)actionPanelViewControllerDidSelectRemove:(id)arg1;
- (void)willDismissTransitionInspector:(id)arg1;
- (void)actionPanelViewController:(id)arg1 dismissInspectorView:(id)arg2 isFinished:(_Bool)arg3;
- (void)willShowVoiceChangeInspector:(id)arg1;
- (void)willShowTransitionInspector:(id)arg1;
- (void)actionPanelViewController:(id)arg1 showInspectorView:(id)arg2;
- (void)timelineViewController:(id)arg1 didSelectTransition:(id)arg2;
- (void)timelineViewControllerDidLongPress:(id)arg1;
- (void)timelineViewControllerDidSelectAddMusic:(id)arg1;
- (_Bool)dismissEditClipContentRangePanel;
- (void)showEditClipContentRangePanel;
- (_Bool)dismissReorderClipPanel;
- (void)showReorderClipPanel;
- (void)updateWithOpDesc:(id)arg1;
- (void)canvasEditView:(id)arg1 didChangeContentScaleMode:(unsigned long long)arg2;
- (void)canvasEditView:(id)arg1 didChangeAspectRatio:(id)arg2;
- (_Bool)dismissCanvasEditPanel;
- (void)showCanvasPanel;
- (void)insertPhotoVideoSegmentWithAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addingButtonTouchUpInside:(id)arg1;
- (void)setupClippingViewsWithNarration:(_Bool)arg1;
- (void)handleBackgroundTapActionForClipEditing;
- (id)createPanelViewWithInspectorView:(id)arg1 panelHeight:(double)arg2;
- (void)enterClipEditingWithNarration:(_Bool)arg1 popSubPanelType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enterClipEditingWithNarration:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeCropTipLabel;
- (void)showCropTipLabel;
- (void)cropGestureCaptureView:(id)arg1 handlePinchGesture:(id)arg2;
- (void)cropGestureCaptureView:(id)arg1 handlePanGesture:(id)arg2;
- (void)applyCroppedResultWithViewModel:(id)arg1 resultRect:(struct CGRect)arg2;
- (void)bindCropInspector:(id)arg1;
- (void)dismissCropInspector:(id)arg1 isFinished:(_Bool)arg2;
- (void)layoutCropForFixedVerticalPaddingWithVideoAspectRatio:(double)arg1;
- (void)layoutCropForFixedHorizontalPaddingWithVideoAspectRatio:(double)arg1;
- (void)transitionRenderView;
- (void)endClipSkimmingForExitCropMode;
- (void)beginClipSkimmingForEnterCropMode;
- (void)willDismissCropInspector:(id)arg1 isFinished:(_Bool)arg2;
- (void)willShowCropInspector:(id)arg1;
- (id)completeExportUserInfoIfNeeded:(id)arg1;
- (_Bool)shouldInterruptExportInRedPacketEntry;
- (void)notifyComposingDidFailWithError:(id)arg1;
- (void)notifyComposingDidFinishWithAsyncTask:(id)arg1 userInfo:(id)arg2;
- (void)notifyComposingDidFinishWithVideoFileAtPath:(id)arg1 userInfo:(id)arg2;
- (void)_exportAndPublishInnerV2;
- (void)_exportAndPublishInnerV1;
- (void)exportAndPublish;
- (void)updateOverlayViewSpatialInfo;
- (void)enterTextEditingModeIfNeeded;
- (void)internalTakeSnapshotAfterRotationOrScale;
- (void)delayedTakingSnapshotAfterRotationOrScale;
- (void)handleBoxSyncPositionAction;
- (void)handleBoxTTSItemAction;
- (void)handleBoxTrimItemAction;
- (void)handleBoxEditItemStyleAction;
- (void)handleBoxEditItemContentAction;
- (void)handleBoxDeleteItemAction;
- (void)endTrackingSafeArea;
- (void)beginTrackingSafeArea;
- (void)removeSafeAreaTipsView;
- (void)addSafeAreaTipsView;
- (void)updateHandleBoxWithIsPlaying:(_Bool)arg1;
- (void)removeHandleBox;
- (void)showHandleBoxWithSegmentVM:(id)arg1 options:(unsigned long long)arg2 borderStyle:(id)arg3 shouldStopPlaying:(_Bool)arg4;
- (void)showHandleBoxWithSegmentID:(id)arg1 borderStyle:(id)arg2;
- (void)showHandleBoxWithSegmentVM:(id)arg1 options:(unsigned long long)arg2 shouldStopPlaying:(_Bool)arg3;
- (void)showHandleBoxWithSegmentVM:(id)arg1 options:(unsigned long long)arg2;
- (void)showHandleBoxWithSegmentID:(id)arg1;
- (unsigned long long)handleBoxOptionsForSegmentVM:(id)arg1 excludedOptions:(unsigned long long)arg2;
- (id)handleBoxItemsForSegmentVM:(id)arg1 options:(unsigned long long)arg2;
- (void)syncSpatialInfoIfNeeded;
- (void)overlayViewDidEndUpdatingScale:(id)arg1;
- (void)overlayView:(id)arg1 didUpdateScale:(double)arg2;
- (void)overlayViewWillUpdateScale:(id)arg1;
- (void)overlayViewDidEndUpdatingRotation:(id)arg1;
- (void)overlayView:(id)arg1 didUpdateRotation:(double)arg2;
- (void)overlayViewWillUpdateRotation:(id)arg1;
- (void)overlayViewDidEndUpdatingPosition:(id)arg1;
- (void)overlayView:(id)arg1 didUpdatePosition:(struct CGPoint)arg2;
- (void)overlayViewWillUpdatePosition:(id)arg1;
- (void)updateCurrentStoryElementSegmentHandleBoxWithStrokeColor:(id)arg1;
- (void)overlayView:(id)arg1 didDoubleTapOnHandleBox:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)handleOverlayViewSingleTapActionWithSegmentID:(id)arg1;
- (void)handleOverlayViewSingleTapActionOnBackground;
- (void)overlayView:(id)arg1 didTapCanvasAtPoint:(struct CGPoint)arg2;
- (void)updateHandleBoxOnSkimTimeDidChange;
- (void)updateHandleBoxOnTimelineDidMutate:(id)arg1 options:(unsigned long long)arg2;
- (void)updateHandleBoxOnFocusedSegmentDidChange;
- (void)handleSyncPositionWith:(id)arg1;
- (void)internalUpdateHandleBoxWithSettings:(id)arg1;
- (void)bindHandleBox;
- (void)didDoneWithStyleEditVC:(id)arg1;
- (void)styleEditVC:(id)arg1 didCancelWithBackupStyles:(id)arg2 font:(id)arg3 color:(id)arg4 anim:(id)arg5 needBackup:(_Bool)arg6;
- (void)styleEditVC:(id)arg1 didSelectedColor:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedFont:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedMaterial:(id)arg2;
- (id)currentStyleEditingSegmentVM;
- (void)setupLyricEditingViews;
- (void)leaveLyricsEditing;
- (void)enterLyricsEditingWithSegmentVM:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didFinishMusicPicking;
- (void)anchorMusicSegmentInternal:(id)arg1;
- (void)anchorMusicSegment:(id)arg1;
- (void)anchorMusicSegmentIfNeeded:(id)arg1;
- (void)handleMusicSelectResult:(id)arg1;
- (void)bgmSelectedViewControllerDidClose:(id)arg1;
- (void)bgmSelectedViewControllerWillClose:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didClickOSTOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(_Bool)arg5;
- (void)leaveMusicPicking;
- (void)enterMusicPickingWithChangeComposingState:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)reloadVoiceChangeInspectorContents;
- (_Bool)isShowingVoiceChangeInspector;
- (_Bool)dismissTimelineVolumeInspector;
- (void)showTimelineVolumeInspector;
- (void)timelineViewControllerDidSelectAdjustVolume:(id)arg1;
- (id)narrationSegmentVMWithIdentifier:(id)arg1;
- (float)recordingDurationLimitAtTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)isRecordingAvailableAtTime:(CDStruct_1b6d18a9)arg1;
- (void)voiceInputManager:(id)arg1 didReachRecordingDurationLimitWithToastText:(id)arg2 identifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didUpdateRecognitionState:(unsigned long long)arg2 withIdentifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didUpdateDecibels:(const void *)arg2 withIdentifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didUpdateSentenceInfo:(unsigned int)arg2 withIdentifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didFinishRecognitionWithResult:(id)arg2 identifier:(id)arg3 error:(id)arg4;
- (void)voiceInputManager:(id)arg1 didUpdateRecognitionResult:(id)arg2 withIdentifier:(id)arg3 error:(id)arg4;
- (void)voiceInputManager:(id)arg1 didStopRecordingWithIdentifier:(id)arg2 isCancelled:(_Bool)arg3 audioFilePath:(id)arg4 captions:(id)arg5 error:(id)arg6;
- (void)voiceInputManager:(id)arg1 didStartRecordingWithIdentifier:(id)arg2 error:(id)arg3;
- (void)voiceInputManager:(id)arg1 didUpdateAudioLevel:(float)arg2 withIdentifier:(id)arg3;
- (void)_updateRecordingViewWithNarrationType:(unsigned long long)arg1 recordingControlView:(id)arg2;
- (void)_showConfirmTipWithNarrationType:(unsigned long long)arg1 exitHandler:(CDUnknownBlockType)arg2;
- (void)resetPlaybackDuration;
- (void)expandPlaybackDurationForRecording;
- (void)handleDidCancelRecordingInNarrationTextInput;
- (void)handleDidCancelRecordingInNarrationSpeak;
- (void)handleDidStopRecordingInNarrationTextInput;
- (void)handleDidStopRecordingInNarrationSpeak;
- (void)handleDidStartRecordingInNarrationTextInput;
- (void)handleDidStartRecordingInNarrationSpeak;
- (void)narrationRecordingControlViewDidTapOnTypeSwitchButton:(id)arg1;
- (void)narrationRecordingControlViewDidCancelRecording:(id)arg1;
- (void)narrationRecordingControlViewDidStopRecording:(id)arg1;
- (void)narrationRecordingControlViewDidStartRecording:(id)arg1;
- (void)handleRecordFailureWithError:(id)arg1;
- (void)requestSpeechRecognitionWithSegmentVM:(id)arg1;
- (_Bool)handleOverlayViewSingleTapActionForNarrationEdtingWithSegmentID:(id)arg1;
- (void)_disableRecordingControl;
- (void)_enableRecordingControl;
- (void)updateNarrationOnPlayheadTimeDidChangeInNarrationTextInput:(CDStruct_1b6d18a9)arg1;
- (void)updateNarrationOnPlayheadTimeDidChangeInNarrationSpeak:(CDStruct_1b6d18a9)arg1;
- (void)updateNarrationOnPlayheadTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)updateNarrationOnFocusedSegmentDidChange;
- (void)setupNarrationViews;
- (id)topPanelViewModel;
- (id)topPanel;
- (void)_popPanel:(id)arg1;
- (void)_pushPanel:(id)arg1;
- (_Bool)_validateForDismissPanel:(id)arg1;
- (_Bool)_validateForPresentPanel:(id)arg1;
- (id)panelWithType:(unsigned long long)arg1;
- (_Bool)containsPanelWithType:(unsigned long long)arg1;
- (void)dismissPanelWithContentView:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dismissPanel:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPanels:(id)arg1 bottomOffset:(double)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPanel:(id)arg1 bottomOffset:(double)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPanels:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPanel:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupPanels;
- (void)recognitionGuideViewDidConfirm:(id)arg1;
- (void)dismissRecognitionGuideIfNeeded;
- (void)recognitionGuideViewDidCancel:(id)arg1;
- (void)showRecognitionGuideIfNeeded;
- (void)metaEditInspector:(id)arg1 segmentVM:(id)arg2 didCancelEditWithBackupItem:(id)arg3;
- (void)didEndEditWithMetaEditInspector:(id)arg1;
- (void)metaEditInspector:(id)arg1 segmentVM:(id)arg2 updateGeographic:(id)arg3;
- (void)metaEditInspector:(id)arg1 segmentVM:(id)arg2 updateDate:(id)arg3;
- (void)metaEditInspector:(id)arg1 segmentVM:(id)arg2 replaceItem:(id)arg3;
- (void)fetchAnchorTimeBlock:(CDUnknownBlockType)arg1;
- (void)anchorEmoticonWithEmoticonItem:(id)arg1;
- (void)updateEmoticonItem:(id)arg1 forSegmentWithID:(id)arg2;
- (void)emoticonPicker:(id)arg1 selectedEmoticon:(id)arg2;
- (void)emoticonPickerDidFinishLoading:(id)arg1;
- (void)emoticonPickerWillStartLoading:(id)arg1;
- (void)stickerPicker:(id)arg1 didCancelReplace:(id)arg2;
- (void)didEndReplaceWithStickerPicker:(id)arg1;
- (void)requestLocationItemForClipSegment:(id)arg1 wwSegment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleWhenWhereSegmentAfterAdded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)anchorStickerWithMaterialID:(id)arg1 type:(unsigned long long)arg2;
- (void)updateStickerWithMaterialID:(id)arg1 forSegmentWithID:(id)arg2;
- (void)stickerPicker:(id)arg1 didChangeSelection:(id)arg2 atIndex:(long long)arg3;
- (void)notifyStickerEditingSegmentDidDelete;
- (id)setupStickerPagePanelViewModelWithSegmentVM:(id)arg1;
- (id)setupStickerEditingViewsWithSegmentVM:(id)arg1;
- (void)dismissWhenWhereEditInspectorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWhenWhereEditInspectorAnimated:(_Bool)arg1 editType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isShowingWhenWhereEditInspector;
- (_Bool)handleOverlayViewSingleTapActionForStickerEdtingWithSegmentID:(id)arg1;
- (void)leaveStickerEditingWithCompletion:(CDUnknownBlockType)arg1;
- (void)leaveStickerEditing;
- (void)enterStickerEditingWithSegmentVM:(id)arg1 options:(unsigned long long)arg2 editType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enterStickerEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)reloadTTSInspectorContents;
- (void)voiceCloneViewControllerDidFinishCloning:(id)arg1;
- (void)showVoiceCloneViewController;
- (void)dismissTTSInspectorInEditingState;
- (void)dismissTTSInspectorInPreviewingState;
- (void)dismissTTSInspector;
- (void)showTTSInspectorInEditingState:(id)arg1;
- (void)showTTSInspectorInPreviewingState:(id)arg1;
- (id)setupTTSInspectorWithSegmentVM:(id)arg1 shouldRequestVoiceChange:(_Bool)arg2;
- (void)setupClippingPanelForTTS;
- (void)showTTSInspectorWithSegmentVM:(id)arg1 shouldRequestVoiceChange:(_Bool)arg2;
- (_Bool)isShowingTTSInspector;
- (_Bool)handleOverlayViewSingleTapActionForTextEdtingWithSegmentID:(id)arg1;
- (void)notifyTextEditingSegmentDidDelete;
- (void)textEditInspectorWillDisappear:(id)arg1;
- (void)textEditInspectorWillAppear:(id)arg1;
- (void)showVoiceChangeTipsWithNarrationSegmentVM:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2 confirmHandler:(CDUnknownBlockType)arg3;
- (void)showTTSTipsWithSegmentVM:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2 confirmHandler:(CDUnknownBlockType)arg3;
- (void)textEditInspectorDidFinish:(id)arg1;
- (void)textEditInspectorWillBeginEditing:(id)arg1;
- (void)textEditInspector:(id)arg1 didEndChangeMaterialWithDataType:(unsigned long long)arg2;
- (void)stopPlayingAndSkimToSegmentHeadTimeIfNeeded:(id)arg1 shouldEnterEditingState:(_Bool)arg2;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateTextAnimPreset:(id)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateColor:(id)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateFont:(id)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateMaterialID:(id)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateSubText:(id)arg3;
- (void)textEditInspector:(id)arg1 updateUnmarkedText:(id)arg2 isUsingSuggestion:(_Bool)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateText:(id)arg3;
- (id)textEditInspector:(id)arg1 anchorMovieTextWithMaterialID:(id)arg2;
- (void)textEditInspector:(id)arg1 keyboardWillHide:(_Bool)arg2 inspectorHeight:(double)arg3;
- (void)textEditInspector:(id)arg1 keyboardWillShow:(double)arg2 inspectorHeight:(double)arg3;
- (void)enterInspectorWithEntranceType:(long long)arg1 editType:(long long)arg2 scene:(unsigned long long)arg3 segment:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)forceCleanupTextInspector;
- (void)dismissTextInspector;
- (_Bool)isShowingTextInspector;
- (void)textEditingHandlePopMenuActionWith:(id)arg1 type:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stickerPickerNeedsResetPreviewNeedsUpdate:(id)arg1 onIsPlayingDidChange:(_Bool)arg2;
- (void)stickerPickerNeedsResetPreview:(id)arg1;
- (void)OSTRecognitionVC:(id)arg1 didUpdateTimelineViewController:(id)arg2;
- (void)OSTRecognitionVCDidSelectEditCaptionStyle:(id)arg1;
- (void)OSTRecognitionVCDidSelectEditCaptionText:(id)arg1;
- (void)contentDescVC:(id)arg1 didTapOnSegmentAtIndexPath:(id)arg2;
- (long long)contentDescVC:(id)arg1 willScrollThumbnailToTime:(CDStruct_1b6d18a9)arg2 showHandleBox:(_Bool)arg3;
- (id)contentDescVC:(id)arg1 requestStoryElementSegmentVMAtIndexPath:(id)arg2;
- (long long)contentDescVCRequestNumberOfStoryElementSegmentVMs:(id)arg1;
- (id)contentDescSegmentVMWitStorylineSegmentVM:(id)arg1;
- (void)focusOnCurrentContentDescVM;
- (void)focusOnCurrentContentDescBelongingVM;
- (_Bool)checkIfContentDescSegmentExists:(id)arg1;
- (id)contentDescSegmentVM;
- (void)contentDescVCDidSelectDelete:(id)arg1;
- (void)contentDescVCDidSelectEditStyle:(id)arg1;
- (void)contentDescVCDidSelectEditText:(id)arg1;
- (void)showHandleboxForContentDescSegmentAtTime:(CDStruct_1b6d18a9)arg1;
- (void)contentDescVCNeedsResetPreview:(id)arg1;
- (void)contentDescVCNeedsReload:(id)arg1;
- (void)contentDescVCNeedsUpdate:(id)arg1 onIsPlayingDidChange:(_Bool)arg2;
- (void)contentDescVCNeedsUpdate:(id)arg1 onPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)contentDescVCNeedsUpdate:(id)arg1 onSkimTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (_Bool)checkIfMovieTitleSegmentExists:(id)arg1;
- (id)movieTitleSegmentVM;
- (void)movieTitleVCDidSelectTTS:(id)arg1;
- (void)movieTitleVCDidSelectDelete:(id)arg1;
- (void)movieTitleVCDidSelectTrim:(id)arg1;
- (void)movieTitleVCDidSelectEditStyle:(id)arg1;
- (void)movieTitleHandlePanelVCTextActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)movieTitleVCDidSelectEditText:(id)arg1;
- (void)enterEditingStateForForMovieTitleSegment;
- (void)showHandleboxForMovieTitleSegment;
- (void)skimToMovieTitleSegmentHeadTimeIfNeeded;
- (void)movieTitleVCNeedsResetPreview:(id)arg1;
- (void)movieTitleVCNeedsReload:(id)arg1;
- (void)movieTitleVCNeedsUpdate:(id)arg1 onIsPlayingDidChange:(_Bool)arg2;
- (void)movieTitleVCNeedsUpdate:(id)arg1 onPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)movieTitleVCNeedsUpdate:(id)arg1 onSkimTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (id)topTextViewController;
- (_Bool)updateTextPagePanelOnIsPlayingDidChange:(_Bool)arg1;
- (_Bool)updateTextPagePanelOnPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (_Bool)updateTextPagePanelOnSkimTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (_Bool)resetPreviewForTextPagePanelIfNeeded;
- (_Bool)reloadTextPagePanelIfNeeded;
- (id)setupTextPagePanelViewModelWithSegmentVM:(id)arg1 editContentType:(unsigned long long)arg2;
- (id)setupTextEditingViewsWithSegmentVM:(id)arg1 editContentType:(unsigned long long)arg2;
- (void)leaveTextEditingStateWithPanel:(_Bool)arg1;
- (void)leaveTextEditing;
- (void)enterTextEditingStateWithPanel:(_Bool)arg1 shouldShrinkRenderView:(_Bool)arg2 hidePanelDuringAnimation:(_Bool)arg3 segmentVM:(id)arg4 editContentType:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)addTextForFancyTextSegmentVM:(id)arg1;
- (void)enterTextEditingWithOptions:(unsigned long long)arg1 segmentVM:(id)arg2 editContentType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)preloadTextEditingMaterials;
- (void)movieTextSuggestionSnapshotGenerator:(id)arg1 didGenerateSnapShot:(id)arg2;
- (void)movieTextSuggestionProcessor:(id)arg1 didUpdateSuggestions:(id)arg2;
- (id)templateIDForMovieTextSuggestionContext:(id)arg1;
- (id)musicIDForMovieTextSuggestionContext:(id)arg1;
- (id)userLocationForMovieTextSuggestionContext:(id)arg1;
- (id)feedLocationsForMovieTextSuggestionContext:(id)arg1;
- (id)snapshotDataForMovieTextSuggestionContext:(id)arg1;
- (void)updateTitleGuideForState:(unsigned long long)arg1;
- (void)movieComposingTitleGuideViewDidTouchUpInside:(id)arg1;
- (void)movieComposingTitleGuideViewDidSelectCloseButton:(id)arg1;
- (void)layoutTitleGuideView;
- (void)setupTitleGuideView;
- (void)setupTrimmingViews;
- (void)leaveTrimming;
- (void)enterTrimmingWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

