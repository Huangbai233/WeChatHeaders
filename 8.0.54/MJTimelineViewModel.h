//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class MJElementSegmentViewModel, MJSegmentEditingStateViewModel, MJSegmentViewModel, MJStorylineViewModel, MJTimelineViewConfiguration, MJVisualClipSegmentViewModel, NSIndexPath, NSMutableDictionary, NSOrderedSet, NSString, OMCTimeline, OMJAspectRatio, UBDictionarySignal, UBEmptySignal, UBValueSignal;
@protocol MJMovieComposingContext;

@interface MJTimelineViewModel : NSObject
{
    _Bool _shouldShowVoiceChangeInspectorAfterRecording;
    _Bool _isContentDescStyleSynced;
    _Bool _isOSTCaptionStyleSynced;
    _Bool _isNarrationCaptionStyleSynced;
    _Bool _isNarrationVoiceSynced;
    _Bool _isTTSVoiceSynced;
    _Bool _isTimeScaleChanged;
    _Bool _isPreviousFocusedSegmentAnchored;
    _Bool _isAutoVolumeAdjustmentEnabled;
    float _narrationSegmentsVolume;
    OMCTimeline *_timeline;
    id <MJMovieComposingContext> _composingContext;
    MJStorylineViewModel *_storylineVM;
    MJTimelineViewConfiguration *_configuration;
    double _firstRecordingEndTime;
    unsigned long long _narrationType;
    unsigned long long _OSTRecognitionStatus;
    NSString *_syncedNarrationRoleID;
    NSString *_syncedNarrationRoleName;
    NSString *_syncedTTSRoleID;
    NSString *_syncedTTSRoleName;
    UBValueSignal *_playheadTimeDidChangeSignal;
    UBValueSignal *_previewSeekToTimeSignal;
    UBDictionarySignal *_scrollToTimeSignal;
    double _timeScaleInPoints;
    double _timeScaleInPixels;
    UBEmptySignal *_timeScaleDidChangeSignal;
    unsigned long long _timelineEditingState;
    UBDictionarySignal *_timelineEditingStateDidChangeSignal;
    NSMutableDictionary *_didSelectSegmentHandlers;
    OMJAspectRatio *_originalVideoAspectRatioDesc;
    unsigned long long _previousFocusedSegmentType;
    MJSegmentViewModel *_focusedSegmentVM;
    NSIndexPath *_trimPrepareSegmentIndexPath;
    UBDictionarySignal *_timelineDidMutateSignal;
    MJSegmentEditingStateViewModel *_segmentEditingStateVM;
    CDStruct_1b6d18a9 _playheadTime;
    CDStruct_1b6d18a9 _targetPlayheadTimeOnce;
    CDStruct_1b6d18a9 _anchoredSegmentStartTimeBeforeMove;
}

+ (void)disableAllImagesDigiZoomIfNeededWithTimeline:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) float narrationSegmentsVolume; // @synthesize narrationSegmentsVolume=_narrationSegmentsVolume;
@property(nonatomic) CDStruct_1b6d18a9 anchoredSegmentStartTimeBeforeMove; // @synthesize anchoredSegmentStartTimeBeforeMove=_anchoredSegmentStartTimeBeforeMove;
@property(nonatomic) _Bool isAutoVolumeAdjustmentEnabled; // @synthesize isAutoVolumeAdjustmentEnabled=_isAutoVolumeAdjustmentEnabled;
@property(readonly, nonatomic) MJSegmentEditingStateViewModel *segmentEditingStateVM; // @synthesize segmentEditingStateVM=_segmentEditingStateVM;
@property(readonly, nonatomic) UBDictionarySignal *timelineDidMutateSignal; // @synthesize timelineDidMutateSignal=_timelineDidMutateSignal;
@property(retain, nonatomic) NSIndexPath *trimPrepareSegmentIndexPath; // @synthesize trimPrepareSegmentIndexPath=_trimPrepareSegmentIndexPath;
@property(retain, nonatomic) MJSegmentViewModel *focusedSegmentVM; // @synthesize focusedSegmentVM=_focusedSegmentVM;
@property(readonly, nonatomic) _Bool isPreviousFocusedSegmentAnchored; // @synthesize isPreviousFocusedSegmentAnchored=_isPreviousFocusedSegmentAnchored;
@property(readonly, nonatomic) unsigned long long previousFocusedSegmentType; // @synthesize previousFocusedSegmentType=_previousFocusedSegmentType;
@property(readonly, nonatomic) OMJAspectRatio *originalVideoAspectRatioDesc; // @synthesize originalVideoAspectRatioDesc=_originalVideoAspectRatioDesc;
@property(retain, nonatomic) NSMutableDictionary *didSelectSegmentHandlers; // @synthesize didSelectSegmentHandlers=_didSelectSegmentHandlers;
@property(readonly, nonatomic) UBDictionarySignal *timelineEditingStateDidChangeSignal; // @synthesize timelineEditingStateDidChangeSignal=_timelineEditingStateDidChangeSignal;
@property(nonatomic) unsigned long long timelineEditingState; // @synthesize timelineEditingState=_timelineEditingState;
@property(readonly, nonatomic) UBEmptySignal *timeScaleDidChangeSignal; // @synthesize timeScaleDidChangeSignal=_timeScaleDidChangeSignal;
@property(readonly, nonatomic) double timeScaleInPixels; // @synthesize timeScaleInPixels=_timeScaleInPixels;
@property(nonatomic) double timeScaleInPoints; // @synthesize timeScaleInPoints=_timeScaleInPoints;
@property(readonly, nonatomic) _Bool isTimeScaleChanged; // @synthesize isTimeScaleChanged=_isTimeScaleChanged;
@property(nonatomic) CDStruct_1b6d18a9 targetPlayheadTimeOnce; // @synthesize targetPlayheadTimeOnce=_targetPlayheadTimeOnce;
@property(readonly, nonatomic) UBDictionarySignal *scrollToTimeSignal; // @synthesize scrollToTimeSignal=_scrollToTimeSignal;
@property(readonly, nonatomic) UBValueSignal *previewSeekToTimeSignal; // @synthesize previewSeekToTimeSignal=_previewSeekToTimeSignal;
@property(readonly, nonatomic) UBValueSignal *playheadTimeDidChangeSignal; // @synthesize playheadTimeDidChangeSignal=_playheadTimeDidChangeSignal;
@property(nonatomic) CDStruct_1b6d18a9 playheadTime; // @synthesize playheadTime=_playheadTime;
@property(readonly, nonatomic) NSString *syncedTTSRoleName; // @synthesize syncedTTSRoleName=_syncedTTSRoleName;
@property(readonly, nonatomic) NSString *syncedTTSRoleID; // @synthesize syncedTTSRoleID=_syncedTTSRoleID;
@property(readonly, nonatomic) NSString *syncedNarrationRoleName; // @synthesize syncedNarrationRoleName=_syncedNarrationRoleName;
@property(readonly, nonatomic) NSString *syncedNarrationRoleID; // @synthesize syncedNarrationRoleID=_syncedNarrationRoleID;
@property(nonatomic) _Bool isTTSVoiceSynced; // @synthesize isTTSVoiceSynced=_isTTSVoiceSynced;
@property(nonatomic) _Bool isNarrationVoiceSynced; // @synthesize isNarrationVoiceSynced=_isNarrationVoiceSynced;
@property(nonatomic) _Bool isNarrationCaptionStyleSynced; // @synthesize isNarrationCaptionStyleSynced=_isNarrationCaptionStyleSynced;
@property(nonatomic) _Bool isOSTCaptionStyleSynced; // @synthesize isOSTCaptionStyleSynced=_isOSTCaptionStyleSynced;
@property(nonatomic) _Bool isContentDescStyleSynced; // @synthesize isContentDescStyleSynced=_isContentDescStyleSynced;
@property(readonly, nonatomic) unsigned long long OSTRecognitionStatus; // @synthesize OSTRecognitionStatus=_OSTRecognitionStatus;
@property(nonatomic) unsigned long long narrationType; // @synthesize narrationType=_narrationType;
@property(nonatomic) double firstRecordingEndTime; // @synthesize firstRecordingEndTime=_firstRecordingEndTime;
@property(nonatomic) _Bool shouldShowVoiceChangeInspectorAfterRecording; // @synthesize shouldShowVoiceChangeInspectorAfterRecording=_shouldShowVoiceChangeInspectorAfterRecording;
@property(retain, nonatomic) MJTimelineViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) MJStorylineViewModel *storylineVM; // @synthesize storylineVM=_storylineVM;
@property(readonly, nonatomic) __weak id <MJMovieComposingContext> composingContext; // @synthesize composingContext=_composingContext;
@property(readonly, nonatomic) OMCTimeline *timeline; // @synthesize timeline=_timeline;
- (void)updateVideoTagFromSegments;
- (unsigned long long)getUserNarrationTypeCacheValue;
- (void)cacheUserNarrationType:(unsigned long long)arg1;
- (void)disableImagesDigiZoomIfNeededWithSegmentIDs:(id)arg1;
- (double)calcScaleForAspectFillWithSegmentVM:(id)arg1;
- (void)updateContentScaleMode:(unsigned long long)arg1;
- (void)restoreSegmentNormalizedPositions:(id)arg1;
- (id)recordSegmentNormalizedPositions;
- (_Bool)updateAspectRatio:(id)arg1;
- (void)adjustMusicDurationAndConstraintsOnDidMove;
- (void)adjustMusicConstraints;
- (_Bool)shouldLimitTrimToTargetTime:(CDStruct_1b6d18a9)arg1 segmentVM:(id)arg2;
- (void)syncRoleIDAndRoleNameAfterUndoRedo;
- (void)syncWithOpDesc:(id)arg1;
- (_Bool)canApplyAdjsutableValueBetweenSegmentVM:(id)arg1 andSegmentVM:(id)arg2 strictTypeCheck:(_Bool)arg3;
- (void)applyAdjustmentValuesToTransitionSegment:(id)arg1 referenceSegment:(id)arg2;
- (void)applyAdjustmentValuesToAllSegmentsConformsToProtocols:(id)arg1 referenceToObject:(id)arg2 mutationOptions:(unsigned long long)arg3 strictTypeCheck:(_Bool)arg4;
- (void)applyAdjustmentValuesToAllSegmentsConformsToProtocols:(id)arg1 referenceToObject:(id)arg2 strictTypeCheck:(_Bool)arg3;
- (void)applyAdjustmentValuesToAllSegmentsConformsToProtocols:(id)arg1 referenceToObject:(id)arg2;
- (id)removeSegmentsWithIDs:(id)arg1 shouldAutoFocus:(_Bool)arg2 autoFocusTargetTime:(CDStruct_1b6d18a9)arg3 targetEditingState:(unsigned long long)arg4;
- (id)removeSegmentWithID:(id)arg1 shouldAutoFocus:(_Bool)arg2 autoFocusTargetTime:(CDStruct_1b6d18a9)arg3 targetEditingState:(unsigned long long)arg4;
- (_Bool)shouldRemoveSegmentWithID:(id)arg1;
- (_Bool)moveStorySegmentVMAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)splitFocusedSegmentVM;
- (_Bool)updateAllStoryElementSegmentsWithVolume:(float)arg1;
- (_Bool)canUpdateStoryElementSegmentsVolume;
- (float)storyElementSegmentsVolume;
- (_Bool)updateAllNarrationSegmentsWithVolume:(float)arg1;
- (_Bool)updateMusicSegmentWithVolume:(float)arg1;
- (_Bool)canUpdateMusicSegmentVolume;
- (float)musicSegmentVolume;
- (void)applyAutoVolumeAdjustmentIfNeeded;
- (void)updateTTSVoiceSyncWithRoleID:(id)arg1 roleName:(id)arg2;
- (void)updateNarrationVoiceSyncWithRoleID:(id)arg1 roleName:(id)arg2;
- (_Bool)updateAllNarrationAnimPresetsWithID:(id)arg1;
- (_Bool)updateAllNarrationCaptionFontsWithName:(id)arg1;
- (_Bool)updateAllNarrationCaptionColorStylesWithID:(id)arg1;
- (_Bool)updateAllNarrationCaptionStylesWithMaterialID:(id)arg1;
- (_Bool)updateAllOSTCaptionAnimPresetsWithID:(id)arg1;
- (_Bool)updateAllOSTCaptionFontsWithName:(id)arg1;
- (_Bool)updateAllOSTCaptionColorStylesWithID:(id)arg1;
- (_Bool)updateAllOSTCaptionStylesWithMaterialID:(id)arg1;
- (_Bool)updateAllContentDescFontsWithName:(id)arg1;
- (_Bool)updateAllContentDescColorStylesWithID:(id)arg1;
- (_Bool)updateAllContentDescStylesWithMaterialID:(id)arg1;
- (_Bool)setAllStorySegmentsDurationToOrigin;
- (_Bool)canSetAllStorySegmentsDurationToOrigin;
- (_Bool)setAllStorySegmentsDurationTo:(CDStruct_1b6d18a9)arg1;
- (_Bool)canSetAllStorySegmentsDurationTo:(CDStruct_1b6d18a9)arg1;
- (id)anchorNarrationSegmentWithFilePath:(id)arg1 audioFileID:(id)arg2 captionTexts:(id)arg3 captionStyleID:(id)arg4 atTime:(CDStruct_1b6d18a9)arg5 shouldAutoFocus:(_Bool)arg6 targetEditingState:(unsigned long long)arg7 outputSegmentID:(id *)arg8;
- (id)anchorMusicSegmentWithMusicInfo:(id)arg1 musicFilePath:(id)arg2 lyricStyleID:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 shouldAutoFocus:(_Bool)arg5 targetEditingState:(unsigned long long)arg6;
- (id)anchorEmoticonSegmentWithFilePath:(id)arg1 decoderType:(unsigned long long)arg2 timingFillMode:(unsigned long long)arg3 atTime:(CDStruct_1b6d18a9)arg4 duration:(CDStruct_1b6d18a9)arg5 shouldAutoFocus:(_Bool)arg6 targetEditingState:(unsigned long long)arg7;
- (id)anchorWhenWhereSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldAutoFocus:(_Bool)arg4 targetEditingState:(unsigned long long)arg5;
- (id)anchorCaptionSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldAutoFocus:(_Bool)arg4 targetEditingState:(unsigned long long)arg5;
- (id)anchorFancyTextSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldAutoFocus:(_Bool)arg4 targetEditingState:(unsigned long long)arg5 outputSegmentID:(id *)arg6;
- (id)anchorContentDescSegmentWithMaterialID:(id)arg1 belongingSegmentID:(id)arg2 shouldAutoFocus:(_Bool)arg3 targetEditingState:(unsigned long long)arg4 outputSegmentID:(id *)arg5;
- (id)anchorMovieTitleSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldAutoFocus:(_Bool)arg4 targetEditingState:(unsigned long long)arg5;
- (id)insertPhotoVideoSegmentsWithAssetIDs:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 shouldAutoFocus:(_Bool)arg3 targetEditingState:(unsigned long long)arg4;
- (id)_firstElementSegmentIDFromIDs:(id)arg1;
- (CDStruct_1b6d18a9)suggestedTransitionDurationWithSegmentID:(id)arg1 isOverlappingTransition:(_Bool)arg2;
- (CDStruct_1b6d18a9)suggestedNonOverlappingTransitionDurationWithSegmentID:(id)arg1;
- (CDStruct_1b6d18a9)suggestedOverlappingTransitionDurationWithSegmentID:(id)arg1;
- (id)retriveTimelineMutationInfoSilently;
- (_Bool)retriveTimelineMutationInfoWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasAnyMutation;
@property(readonly, nonatomic) _Bool hasAnyDecoration;
- (void)endTrimmingOnFocusedSegmentWithShouldTakeSnapshot:(_Bool)arg1 shouldSkim:(_Bool)arg2;
- (void)endTrimmingOnFocusedSegmentWithShouldTakeSnapshot:(_Bool)arg1;
- (_Bool)applyTrimmingOnFocusedSegmentWithSnapTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)applyTrimmingOnFocusedSegmentWithDeltaTime:(CDStruct_1b6d18a9)arg1;
- (void)beginTrimmingOnFocusedSegmentWithEdge:(unsigned long long)arg1;
- (_Bool)moveFocusedAnchoredSegmentAboveSegmentWithID:(id)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)endMovingSegment;
- (void)beginMovingSegmentWithVM:(id)arg1;
- (_Bool)canMoveSegmentAtIndexPath:(id)arg1;
- (_Bool)canReorderSegmentAtIndexPath:(id)arg1;
- (void)resignSegmentVMFocus;
- (void)focusOnSegmentVM:(id)arg1;
@property(readonly, nonatomic) _Bool isFocusedOnAnchoredSegment;
@property(readonly, nonatomic) _Bool isFocusedOnStorySegment;
@property(readonly, nonatomic) MJVisualClipSegmentViewModel *firstMovieClipSegmentVM;
@property(readonly, nonatomic) struct CGSize pointSize;
@property(readonly, nonatomic) unsigned long long frameRateType;
@property(readonly, nonatomic) double frameRateValue;
@property(readonly, nonatomic) OMJAspectRatio *videoAspectRatioDesc;
@property(readonly, nonatomic) double safeVideoAspectRatio;
@property(readonly, nonatomic) double videoAspectRatio;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoFrameDuration;
- (void)updatePlayheadTimeSilently:(CDStruct_1b6d18a9)arg1;
- (void)setPlayheadTime:(CDStruct_1b6d18a9)arg1 shouldUpdatePreview:(_Bool)arg2;
@property(readonly, nonatomic) UBValueSignal *durationDidChangeSignal;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) double musicSegmentLyricsDefaultY;
@property(readonly, nonatomic) double captionSegmentDefaultY;
@property(readonly, nonatomic) double narrationSegmentDefaultY;
@property(readonly, nonatomic) double contentDescSegmentDefaultY;
@property(readonly, nonatomic) double movieTitleSegmentDefaultY;
@property(readonly, nonatomic) struct CGPoint textSegmentDefaultScale;
- (void)updateOSTRecognitionStatus:(unsigned long long)arg1;
- (void)toggleOSTEnabled;
- (void)updateOSTEnabledFromSegments;
@property(nonatomic) _Bool isOSTEnabled;
- (_Bool)hasMovieTitleSegment;
@property(readonly, nonatomic) MJElementSegmentViewModel *movieTitleSegmentVM;
- (id)nextStorySegmentVM:(id)arg1;
- (id)previousStorySegmentVM:(id)arg1;
- (id)nextStoryElementSegment:(id)arg1;
- (id)previousStoryElementSegment:(id)arg1;
- (void)ensureAllSegmentsNotInEditingState;
- (id)nearstNextAnchoredSegmentAtTime:(CDStruct_1b6d18a9)arg1 withType:(unsigned long long)arg2;
- (id)nearstAnchoredSegmentAtTime:(CDStruct_1b6d18a9)arg1 withType:(unsigned long long)arg2;
- (id)allSegmentIDsWithType:(unsigned long long)arg1;
- (id)firstMusicSegment;
- (id)firstNarrationSegment;
- (id)firstCaptionSegment;
- (id)firstContentDescSegment;
- (id)storyElementSegmentVMAtTime:(CDStruct_1b6d18a9)arg1;
- (id)storyElementSegmentVMAtIndexPath:(id)arg1;
- (id)storyElementSegmentVMAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfStoryElementSegmentVMs;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) NSOrderedSet *allSegmentVMs;
- (_Bool)containsSegmentVMWithType:(unsigned long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)containsSegmentVMWithType:(unsigned long long)arg1;
- (id)segmentVMWithID:(id)arg1;
- (_Bool)containsSegmentVMWithID:(id)arg1;
- (id)indexPathOfSegmentVMWithID:(id)arg1;
- (id)indexPathOfSegmentVM:(id)arg1;
- (id)segmentVMAtIndexPath:(id)arg1;
- (_Bool)containsSegmentVMAtIndexPath:(id)arg1;
- (unsigned long long)indexOfSegmentVM:(id)arg1;
- (id)segmentVMAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSegmentVMs;
- (void)syncWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithTimeline:(id)arg1 composingContext:(id)arg2;
- (void)resetTimelineEditingState;
- (void)handleTapTimelineBackground;
- (void)exitTrimPrepareWithSegmentVM:(id)arg1;
- (void)exitTrimPrepareForSegmentWithID:(id)arg1;
- (void)enterTrimPrepareWithSegmentVM:(id)arg1;
- (void)enterTrimPrepareForSegmentWithID:(id)arg1;
- (void)handleEndTrimmingSegmentWithShouldTakeSnapshot:(_Bool)arg1;
- (void)handleBeginTrimmingSegmentWithEdge:(unsigned long long)arg1;
- (void)handleEndMoving;
- (void)handleBeginMovingSegmentVM:(id)arg1;
- (_Bool)shouldBeginMovingSegmentAtIndexPath:(id)arg1;
- (_Bool)shouldBeginReorderingSegmentAtIndexPath:(id)arg1;
- (void)handleStayOnSegmentAtTime:(CDStruct_1b6d18a9)arg1;
- (id)autoFocusTargetAnchoredSegmentAtTime:(CDStruct_1b6d18a9)arg1;
- (id)autoFocusTargetStorySegmentAtTime:(CDStruct_1b6d18a9)arg1;
- (id)autoFocusTargetSegmentAtTime:(CDStruct_1b6d18a9)arg1;
- (id)handleSelectSegmentVM:(id)arg1;
- (id)handleSelectSegmentAtIndexPath:(id)arg1;
- (void)handleRenderTouchOnSegmentWithID:(id)arg1;
- (void)registerCommandHandlers;
@property(readonly, nonatomic) _Bool isCurrentStateGeneralEditing;
@property(readonly, nonatomic) _Bool isCurrentStateSegmentMoving;
@property(readonly, nonatomic) _Bool isCurrentStateSegmentTrimming;
@property(readonly, nonatomic) _Bool isCurrentStateSegmentTrimPrepare;

@end
