//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJConfigManager : NSObject
{
}

+ (float)maxExportDuration;
+ (long long)freeSpaceThresholdValueForMaasBackingExportInMB;
+ (double)maximumDurationOfVideoSupportedByMaasSDKBackingExport;
+ (_Bool)isMaasSDKAsyncCompositionEnabled;
+ (_Bool)isFinderAsyncCompositionEnabled;
+ (_Bool)shouldOverrideABARemuxSuggestion;
+ (unsigned long long)skipExporVideoCodecOptions;
+ (long long)skipExportFrameRateLimit;
+ (float)skipExportMinDuration;
+ (float)skipExportBitRateLimitV2;
+ (float)skipExportBitRateLimit;
+ (long long)skipExportPixelCountLimit;
+ (_Bool)shouldSkipExportIfNoMutation;
+ (_Bool)shouldEnableImageSeqPrefetch;
+ (_Bool)shouldEnableMetalRenderSys;
+ (void)_updateMaasMetalEnabled:(_Bool)arg1;
+ (_Bool)_hasMaasMetalEnabled;
+ (_Bool)_hasPendingMJTemplateTask;
+ (_Bool)_shouldEnableMetalRenderSysExpt;
+ (float)maxScaleFactorForHandleBox;
+ (_Bool)shouldUseBatchThumbnailProvider;
+ (id)springFestivalEventTimeRange;
+ (_Bool)springFestivalEventEnabled;
+ (float)transitionPreviewTimeOffset;
+ (int)transitionPreviewLoopCount;
+ (_Bool)isTransitionEnabled;
+ (float)movieTemplateExportFPS;
+ (long long)maxTemplateRecommendCount;
+ (_Bool)isTemplateAssetClipperEnabled;
+ (_Bool)isMovieTemplateEnabled;
+ (float)maxSTSAudioDurationWithinTimeout;
+ (float)narrationVolumeGainFactor;
+ (_Bool)isRequestSpeechToSpeechFromILinkMiaojian;
+ (_Bool)isRequestFullSpeechRecognitionFromILinkMiaojian;
+ (_Bool)isRequestSpeechRecognitionFromILinkMiaojian;
+ (float)ttsFirstQueryIntervalMillisBase;
+ (long long)speechToSpeechRequestMaxConcurrent;
+ (long long)speechToSpeechRequestTimeoutMillis;
+ (long long)longSpeechRecognitionRequestTimeoutMillis;
+ (long long)fullSpeechRecognitionRequestTimeoutMillis;
+ (long long)ilinkRequestTimeoutMillis;
+ (long long)audioBufferSplitMaxSize;
+ (long long)audioBufferSplitMinSize;
+ (_Bool)shouldEnableMJPublisherFeedback;
+ (_Bool)shouldSplitAudioBufferForSTSRequest;
+ (_Bool)shouldBlockInteractionForSTSRequest;
+ (id)movieTitleColorStyleName;
+ (id)narrationBottomBarIconName;
+ (id)voiceCloneDefaultRegText;
+ (id)voiceCloneUserAgreementURL;
+ (_Bool)isAIGCVideoTagEnabled;
+ (_Bool)isVoiceCloneEnabled;
+ (_Bool)isFancyTextTTSEnabled;
+ (_Bool)isTTSEnabled;
+ (_Bool)shouldShowVoiceChangeInspectorAfterFirstRecording;
+ (_Bool)isMiaojianTTSTimbreEnabled;
+ (_Bool)isNarrationVocalEnhancementEnabled;
+ (long long)maxDurationForNarration;
+ (long long)minDurationForNarration;
+ (_Bool)narrationVoiceApplyToAllDefaultValue;
+ (_Bool)isNarrationLoudnessEQEnabled;
+ (unsigned long long)finderNarrationDenoiseType;
+ (_Bool)isTextNarrationEnabled;
+ (_Bool)isNarrationEnabled;
+ (long long)movieTitleWordCountLimit;
+ (long long)movieTitleSuggestionMinWordCount;
+ (_Bool)isMovieTitleSuggestionViewerNumberEnabled;
+ (_Bool)isMovieTitleSuggestionEnabled;
+ (_Bool)isTextAnimEnabled;
+ (_Bool)isContentDescEnabled;
+ (id)minorLangList;
+ (_Bool)isMinorLangTransEnabled;
+ (_Bool)isRealShotAnalysisEnabled;
+ (_Bool)isVolumeAnalysisEnabled;
+ (_Bool)isFilterAnalysisEnabled;
+ (_Bool)isMusicAnalysisEnabled;
+ (_Bool)isNarrationAnalysisEnabled;
+ (_Bool)isOSTRecognitionGuideOnlineASREnabled;
+ (_Bool)isOSTRecognitionGuideEnabled;
+ (_Bool)isAnalysisGuideEnabled;
+ (_Bool)isOSTRecognitionEnabled;
+ (float)movieComposingDraftExpireSeconds;
+ (_Bool)isMovieComposingDraftEnabled;
+ (_Bool)isManuallyCancelExportSupported;
+ (_Bool)shouldEnterMovieComposingAfterTemplateComposing;
+ (_Bool)isCanvasEnabled;
+ (_Bool)isCropEnabled;
+ (_Bool)isImageDigiZoomDisabled;
+ (_Bool)isMusicLoopingEnabled;
+ (float)defaultTimelineScaleForTrimming;
+ (float)defaultTimelineScaleForOSTSTT;
+ (float)defaultTimelineScaleForNarration;
+ (float)defaultTimelineScaleForClipping;
+ (id)maxAspectRatio;
+ (id)minAspectRatio;
+ (_Bool)isMultipleFrameRateEnbled;
+ (_Bool)isCustomizedAspectRatioEnabled;
+ (_Bool)useNewTimelineSelectInteraction;
+ (_Bool)isMovieTitleSelectDefaultAnim;
+ (float)movieTitleWithAnimDuration;
+ (float)movieTitleDefaultDuration;
+ (float)minTimelineDurationForAllImageAssets;
+ (float)assetClassifyForMusicRecommendTimeoutSeconds;
+ (float)autoDownloadMusicTimeoutSeconds;
+ (_Bool)shouldAutoAddMusicForImageAssets;
+ (_Bool)shouldDisableAddingInComposingIfFromCam;
+ (_Bool)isMovieComposingTitleGuideDisabled;
+ (_Bool)isSkipMovieComposingTitleInputGuideEnabled;
+ (_Bool)isMovieComposingTitleInputGuideEnabled;
+ (_Bool)preloadCaptureSession;
+ (_Bool)isUseNonTemplateAsDefaultInShootComposing;
+ (float)composingIsFromRealShootContentThresholdValue;
+ (float)lensDirtyCheckThreshold;
+ (float)aigcShootTemplateTimeoutSeconds;
+ (_Bool)shouldShowShootTemplateDescVersion;
+ (_Bool)isEchoCancellationEnabled;
+ (_Bool)isHEVCVideoCodecEnabledInShoot;
+ (_Bool)isMovieComposingEntryTransitionEnabled;
+ (_Bool)isFaceDeformDisableCrop;
+ (long long)shootTemplatePreloadCountForRedPacket;
+ (long long)imageAssetMaximumCountForRedPacket;
+ (long long)videoAssetMaximumDurationForRedPacket;
+ (long long)videoAssetMinimumDurationForRedPacket;
+ (long long)recordMinimumDurationInSeconds;
+ (long long)shootGuideBubbleTriggleDurationInSeconds;
+ (long long)shootGuideBubbleMaximumAppearCount;
+ (_Bool)isShootAssetCroppingRotationEnabled;
+ (_Bool)isShootAssetCroppingEnabled;
+ (_Bool)isShootRecordingTimerEnabled;
+ (_Bool)isShootCountdownTimerEnabled;
+ (_Bool)isShootGeneratedByAssetsEnabled;
+ (_Bool)isShootLyricEnabled;
+ (_Bool)isShootFavTemplateEnabled;
+ (_Bool)isShootGuideBubbleEnabled;
+ (_Bool)isShootTemplatePanelEnabled;
+ (_Bool)isMovieComposingExportHDREnabled;
+ (_Bool)isMovieComposingPlaybackHDREnabled;
+ (_Bool)isMaasCoreHDREnabled;
+ (long long)maximumFileSizeInGBForSingleAssetSelection;
+ (float)maximumFileSizeInBytesForSingleAssetSelection;
+ (_Bool)isTemplateComposingEnabledByDefault;
+ (unsigned long long)finderPublisherEntryType;
+ (_Bool)isMovieComposingEnabled;
+ (_Bool)isFinderPublisherEnabled;

@end

