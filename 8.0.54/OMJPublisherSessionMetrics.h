//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJPublisherSessionMetrics : NSObject
{
    WeakPtr_dad450d4 _backingPublisherSessionMetrics;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) WeakPtr_dad450d4 backingPublisherSessionMetrics; // @synthesize backingPublisherSessionMetrics=_backingPublisherSessionMetrics;
- (void)notifyMCTouchFeedbackButton;
- (void)markMCDidCompleteCreation;
- (void)markMCDidCancelExporting;
- (void)markMCDidEndExportingWithEndReason:(id)arg1 skipped:(_Bool)arg2 resultMediaFilePath:(id)arg3 isHardwareEncoding:(_Bool)arg4;
- (void)markMCDidEndExportingWithSkipped:(_Bool)arg1 resultMediaFilePath:(id)arg2 isHardwareEncoding:(_Bool)arg3;
- (void)markMCDidEndExportingWithSkipped:(_Bool)arg1 resultMediaFilePath:(id)arg2;
- (void)markMCDidStartExportingWithExportScene:(id)arg1 exportParams:(id)arg2;
- (void)markMCWillStartExportingWithTimeline:(id)arg1 currentComposingStepIndex:(long long)arg2 maxComposingStepIndex:(long long)arg3;
- (void)notifyMCScaleTimelineWithScale:(float)arg1;
- (void)notifyMCRedo;
- (void)notifyMCUndo;
- (void)notifyMCAddAssetsWithCount:(long long)arg1;
- (void)notifyMCEnterAddingAssetUI;
- (void)notifyMCTouchEnableOST;
- (void)notifyMCEnterVolumeAdjustmentUI;
- (void)notifyMCEnterSpeedAdjustmentUI;
- (void)notifyMCApplyColorAdjustmentWithBrightness:(float)arg1 contrast:(float)arg2 saturability:(float)arg3 temperature:(float)arg4 vignette:(float)arg5 sharpness:(float)arg6;
- (void)notifyMCEnterColorAdjustmentUI;
- (void)notifyMCSelectFilter:(id)arg1;
- (void)notifyMCEnterFilterUI;
- (void)notifyMCRotateSegment;
- (void)notifyMCSplitSegment;
- (void)notifyMCEditContentRange;
- (void)notifyMCTrimSegment;
- (void)notifyMCReorderSegments;
- (void)notifyMCDeleteSegment;
- (void)notifyMCEnterCropUI;
- (void)notifyMCEnterCanvasUI;
- (void)notifyMCApplyBatchClippingWithID:(id)arg1;
- (void)notifyMCEnterBatchClippingUI;
- (void)markMCDidExitClippingUIWithTimeline:(id)arg1 currentComposingStepIndex:(long long)arg2 maxComposingStepIndex:(long long)arg3;
- (void)markMCWillEnterClippingUIWithEntryType:(id)arg1;
- (void)notifyMCSpeechRecognition;
- (void)notifyMCEnterCaptionStyleUI;
- (void)notifyMCCaptionStartTyping;
- (void)notifyMCSelectVoiceChangeRoleID:(id)arg1;
- (void)notifyMCEnterVoiceChangeUI;
- (void)notifyMCEnterNarrationVolumeAdjustmentUI;
- (void)markMCWillStartTypingNarration;
- (void)markMCDidEndRecordingNarration;
- (void)markMCWillStartRecordingNarration;
- (void)notifyMCSwitchNarrationInputMode:(id)arg1;
- (void)markMCDidExitNarrationUIWithTimeline:(id)arg1 currentComposingStepIndex:(long long)arg2 maxComposingStepIndex:(long long)arg3;
- (void)markMCWillEnterNarrationUIWithEntryType:(id)arg1;
- (void)notifyMCSelectAnimID:(id)arg1;
- (void)notifyMCSelectTextToSpeechRoleID:(id)arg1;
- (void)notifyMCSelectFancyTextStyleID:(id)arg1;
- (void)notifyMCSelectCaptionTextStyleID:(id)arg1;
- (void)notifyMCSelectClipTitleTextStyleID:(id)arg1;
- (void)notifyMCSelectMovieTitleTextStyleID:(id)arg1;
- (void)notifyMCTextCaptionRecognitionComplete;
- (void)notifyMCTextCaptionRecognitionFailed;
- (void)notifyMCTextCaptionCancelRecognition;
- (void)notifyMCTextCaptionRetryRecognition;
- (void)notifyMCTextCaptionStartRecognition;
- (void)notifyMCTextFinishTypingWithText:(id)arg1;
- (void)notifyMCTextStartTyping;
- (void)notifyMCEnterTextFancyTextUI;
- (void)notifyMCEnterTextOSTRecognitionUI;
- (void)notifyMCEnterTextClipTitleUI;
- (void)notifyMCEnterTextMovieTitleUI;
- (void)markMCDidExitTextUIWithTimeline:(id)arg1 currentComposingStepIndex:(long long)arg2 maxComposingStepIndex:(long long)arg3;
- (void)markMCWillEnterTextUIWithEntryType:(id)arg1;
- (void)notifyMCSelectStickerID:(id)arg1;
- (void)notifyMCStickerFinishTypingWithText:(id)arg1;
- (void)notifyMCEnterStickerFancyTextUI;
- (void)notifyMCEnterStickerWhenWhereUI;
- (void)notifyMCEnterStickerEmoticonUI;
- (void)markMCDidExitStickerUIWithTimeline:(id)arg1 currentComposingStepIndex:(long long)arg2 maxComposingStepIndex:(long long)arg3;
- (void)markMCWillEnterStickerUIWithEntryType:(id)arg1;
- (void)notifyMCEnterLyricStyleUI;
- (void)notifyMCMusicTouchEnableOST;
- (void)notifyMCMusicTouchEnableLyric;
- (void)notifyMCMusicTouchEnableMusic;
- (void)markMCDidExitMusicUIWithMusicID:(id)arg1 enableBGM:(_Bool)arg2 enableLyric:(_Bool)arg3 enableOST:(_Bool)arg4 timeline:(id)arg5 currentComposingStepIndex:(long long)arg6 maxComposingStepIndex:(long long)arg7;
- (void)markMCWillEnterMusicUIWithEntryType:(id)arg1;
- (void)notifyMCVoiceCloneEndRecordingWithEndReason:(id)arg1;
- (void)notifyMCVoiceCloneStartRecording;
- (void)notifyMCVoiceCloneConfirmRecording;
- (void)notifyMCTouchAddVoiceCloneButton;
- (void)notifyMCCloseVolumeGuiding;
- (void)notifyMCTouchVolumeGuiding;
- (void)notifyMCExposeVolumeGuiding;
- (void)notifyMCCloseNarrationGuiding;
- (void)notifyMCTouchNarrationGuiding;
- (void)notifyMCExposeNarrationGuiding;
- (void)notifyMCCloseFilterGuiding;
- (void)notifyMCTouchFilterGuiding;
- (void)notifyMCExposeFilterGuiding;
- (void)notifyMCCloseMusicGuiding;
- (void)notifyMCTouchMusicGuiding;
- (void)notifyMCExposeMusicGuiding;
- (void)notifyMCCloseOSTRecognitionGuiding;
- (void)notifyMCTouchOSTRecognitionGuiding;
- (void)notifyMCExposeOSTRecognitionGuiding;
- (void)notifyMCCloseTitleInputGuiding;
- (void)notifyMCTouchTitleInputGuiding;
- (void)notifyMCExposeTitleInputGuiding;
- (void)notifyMCTapCanvas;
- (void)notifyMCDragPlaybackProgressSlider;
- (void)notifyMCTouchPlayButton;
- (void)notifyMCStopPlaying;
- (void)notifyMCStartPlaying;
- (void)markMCDidEndComposingWithTimeline:(id)arg1 currentComposingStepIndex:(long long)arg2 maxComposingStepIndex:(long long)arg3;
- (void)notifyMCFirstVideoFrameDidPresent;
- (void)markMCDidStartComposingWithTimeline:(id)arg1;
- (void)markMCWillStartComposing;
- (void)notifyMCAutoAddBGM:(id)arg1;
- (void)markMCDidEndImporting;
- (void)markMCDidStartImporting;
- (void)markMCWillStartImportingWithIsFromAlbum:(_Bool)arg1 assetCount:(long long)arg2 isFromMovieTemplate:(_Bool)arg3;
- (void)markMCWillStartImportingWithIsFromAlbum:(_Bool)arg1 assetCount:(long long)arg2;
- (void)markMCDidEndSampleComposing;
- (void)markMCWillStartSampleComposing;
- (void)notifyMCTemplateCreatingStartEditing;
- (void)notifyMCTemplateCreatingSwitchOST:(_Bool)arg1;
- (void)notifyMCTemplateCreatingSwitchBGM:(_Bool)arg1;
- (void)notifyMCTemplateCreatingEnterSearchingMusic;
- (void)notifyMCTemplateCreatingSelectMusic:(id)arg1;
- (void)notifyMCTemplateCreatingSelectTemplate:(id)arg1;
- (void)notifyMCTemplateCreatingExposeTemplate:(id)arg1;
- (void)markMCDidEndTemplateExportingWithTemplateID:(id)arg1 musicID:(id)arg2;
- (void)markMCWillStartTemplateCreatingWithAssetCount:(long long)arg1 imageCount:(long long)arg2 videoCount:(long long)arg3;
- (void)notifyMCGenerateDraft;
- (void)markMCDidEndLoadingDraft:(id)arg1;
- (void)markMCWillStartLoadingDraft;
- (void)notifyMCDraftExist;
- (void)markDidEndMovieComposingWithReason:(id)arg1;
- (void)markWillBeginMovieComposing;
- (void)notifySCEnterTemplatePanelShowingMode;
- (void)notifySCEnterAlbum;
- (void)notifySCDuetShootOff;
- (void)notifySCDuetShootOn;
- (void)notifySCReplay;
- (void)notifySCSelectRecordingDurationLimitMode:(id)arg1;
- (void)notifySCTouchRecordingDurationLimitButton;
- (void)notifySCSelectCountDownMode:(id)arg1;
- (void)notifySCTouchCountDownButton;
- (void)notifySCSelectGenderMode:(id)arg1;
- (void)notifySCTouchGenderSwitchButton;
- (void)notifySCCaptionOff;
- (void)notifySCCaptionOn;
- (void)notifySCTouchCaptionButton;
- (void)notifySCExposeCaptionButton;
- (void)notifySCFillInLightOff;
- (void)notifySCFillInLightOn;
- (void)notifySCTouchFillInLightButton;
- (void)notifySCNoMicrophonePermission;
- (void)notifySCCloseMicrophone;
- (void)notifySCOpenMicrophone;
- (void)notifySCTouchMicrophoneButton;
- (void)notifySCSwitchToRearBackCamera;
- (void)notifySCSwitchToFrontFacingCamera;
- (void)notifySCTouchCameraSwitchButton;
- (void)notifySCEndExposeTemplate:(id)arg1;
- (void)notifySCExposeTemplate:(id)arg1;
- (void)notifySCEnterTemplateTab:(id)arg1;
- (void)notifySCExposeShootGuiding;
- (void)markSCDidCompleteCreation;
- (void)markSCDidEndPostEditingWithResultMediaFilePath:(id)arg1;
- (void)markSCWillStartPostEditing;
- (void)markSCDidEndAssetCreatingExportingWithEndReason:(id)arg1;
- (void)markSCWillStartAssetCreatingExporting;
- (void)notifySCAssetCreatingCropReset;
- (void)notifySCAssetCreatingCropFlip;
- (void)notifySCAssetCreatingCropRotate;
- (void)notifySCAssetCreatingCropMove;
- (void)notifySCAssetCreatingCropScale;
- (void)notifySCAssetCreatingEnterCropUI;
- (void)markSCDidEndAssetCreatingWithEndReason:(id)arg1 resultMediaFilePath:(id)arg2;
- (void)markSCWillStartAssetCreatingWithAssetCount:(long long)arg1 imageCount:(long long)arg2 videoCount:(long long)arg3;
- (void)notifySCAssetCreatingEnterAlbum;
- (void)markSCDidEndRecordingWithResultMediaFilePath:(id)arg1 reachDurationLimit:(_Bool)arg2;
- (void)markSCDidStartRecording;
- (void)markSCWillStartRecording;
- (void)notifySCAdjustBeauty:(id)arg1;
- (void)notifySCSelectFaceEffectID:(id)arg1;
- (void)notifySCSelectFilterID:(id)arg1;
- (void)notifySCSelectMakeupID:(id)arg1;
- (void)notifySCSelectBeautyParam:(id)arg1;
- (void)notifySCEnterVisageBeautyAdjustmentUI;
- (void)notifySCEnterVisageFaceEffectUI;
- (void)notifySCEnterVisageFilterUI;
- (void)notifySCEnterVisageMakeupUI;
- (void)notifySCEnterVisageBeautyUI;
- (void)markSCDidExitVisageUI;
- (void)markSCWillEnterVisageUI;
- (void)notifySCDisableMusic;
- (void)markSCDidExitMusicUIWithMusicID:(id)arg1 isMusicEnabled:(_Bool)arg2;
- (void)markSCWillEnterMusicUI;
- (void)notifySCTouchFavoriteButtonWithTemplateID:(id)arg1 isFavorite:(_Bool)arg2;
- (void)markSCDidEndPreviewing;
- (void)markSCDidStartPreviewing;
- (void)markSCWillStartPreviewingWithTemplateID:(id)arg1 templateTabID:(id)arg2 templateIndex:(long long)arg3 isTemplateSelectDefault:(_Bool)arg4 musicID:(id)arg5 isFrontFacingCamera:(_Bool)arg6 isMicrophoneOpened:(_Bool)arg7 isDuetShoot:(_Bool)arg8 isFavorite:(_Bool)arg9;
- (void)notifyFirstVideoFrameDidPresent;
- (void)markDidEndShootComposingWithReason:(id)arg1;
- (void)markWillBeginShootComposing;
- (void)markDidEndWithReason:(id)arg1;
- (void)markWillBegin;
@property(readonly, nonatomic) unsigned long long visitedStates;
@property(readonly, nonatomic) NSString *maasSDKVersion;
@property(readonly, nonatomic) NSString *entryType;
@property(readonly, nonatomic) NSString *sessionID;
- (id)initWithBackingPublisherSessionMetrics:(const void *)arg1;
- (void)dealloc;

@end
