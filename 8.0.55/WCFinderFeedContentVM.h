//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderBarItem, FinderNpsSurveyInfo, ForwardMessageLogicController, MMFinderLiveCastViewModel, NSData, NSNumber, NSString, SessionForwardRecordLogic, SharePreConfirmSheetView, SharePreConfirmView, WCFinderDataItem, WCFinderFeedContentReportModel, WCFinderFeedContentTempModel, WCFinderFeedLayoutContentVM, WCFinderFeedVideoCellViewModel, WCFinderLiveNoticeCellViewModel, WCFinderObjectHotTopic, WCFinderProfilePreloadInfo, WCFinderProgressBarStatusInfo;

@interface WCFinderFeedContentVM : NSObject
{
    _Bool _forceExpand;
    _Bool _forceRecExpand;
    _Bool _photoScrollByManual;
    _Bool _hideSeparatorLine;
    _Bool _shouldForceDisableLikeAction;
    _Bool _isPostingDataItem;
    _Bool _isStreamHistoryItem;
    _Bool _isStreamItemMarkRead;
    _Bool _needsShowLikeTips;
    _Bool _hasAlreadyShowedLikeTips;
    _Bool _hasAlreadyShowePrivateAccountLikeTips;
    _Bool _showFoldFeedInfo;
    _Bool _allowsExternalPlayback;
    _Bool _hasExposed;
    _Bool _isNeedDisplayBulletSettingOption;
    _Bool _imageFeedDisplayPauseTips;
    _Bool _canShowFavFoldFeed;
    _Bool _favRelateListEnableOnClick;
    _Bool _isDisableTextExposeReport;
    _Bool _canShowLikeFoldFeed;
    _Bool _extLinkDisableClick;
    _Bool _fullShareListShowJumpFinderYet;
    _Bool _fullShareListShowMoreRelatedYet;
    _Bool _isShowingCommonBottomBannerView;
    _Bool _isMultiSceneEnable;
    _Bool _isShowInSubScene;
    _Bool _isInZoomInState;
    _Bool _pausePannelLastIsShowState;
    _Bool _dislikeFlagInRecommend;
    _Bool _forbidTextViewClick;
    _Bool _needStaticH;
    _Bool _interestBottomViewHadShown;
    _Bool _isFinderIdentity;
    _Bool _hasPreloadCommentList;
    _Bool _isVideoNeedSilentPaly;
    _Bool _isFriendLikeMSGFeed;
    _Bool _shareFromFastForward;
    _Bool _isCertificateType;
    int _scene;
    int _lastShowCarouselBusinessType;
    WCFinderDataItem *_dataItem;
    NSString *_extensionKey;
    double _unExpandConstTextHeight;
    double _expandConstTextHeight;
    unsigned long long _currentDisplayImageIndex;
    unsigned long long _currentPageStartTimestamp;
    double _uploadingProgress;
    unsigned long long _refCommentID;
    NSNumber *_commentListViewHeight;
    NSString *_descriptionText;
    unsigned long long _contentStyle;
    NSString *_dataSceneClassName;
    double _createTime;
    unsigned long long _descriptionType;
    double _feedStayStartTimeInMs;
    double _currentPlayPosition;
    double _maxPlayPosition;
    WCFinderProgressBarStatusInfo *_progressBarStatusInfo;
    long long _timelineTabType;
    NSString *_likeEducateTips;
    double _foldCellCollectionOffsetX;
    double _playRate;
    unsigned long long _fromScene;
    unsigned long long _feedShareType;
    WCFinderFeedLayoutContentVM *_favFoldlayoutContentVM;
    NSString *_calTrailingLinkText;
    unsigned long long _relateListActionType;
    WCFinderFeedContentTempModel *_tempModel;
    WCFinderFeedContentReportModel *_reportModel;
    WCFinderObjectHotTopic *_hotNewsTopic;
    FinderBarItem *_barItem;
    NSString *_mappingBusinessId;
    WCFinderLiveNoticeCellViewModel *_noticeCellViewModel;
    WCFinderFeedVideoCellViewModel *_videoCellViewModel;
    unsigned long long _stopPlayCount;
    unsigned long long _continuePlayCount;
    NSString *_sessionExtraKey;
    unsigned long long _videoReplayCount;
    MMFinderLiveCastViewModel *_liveCastViewModel;
    unsigned long long _chooseType;
    NSData *_interestLastBuffer;
    WCFinderProfilePreloadInfo *_profliePreloadInfo;
    NSString *_fromSessionId;
    FinderNpsSurveyInfo *_npsSurveyInfo;
    ForwardMessageLogicController *_forwardLogic;
    NSString *_videoMediaPath;
    unsigned long long _feedPhotoPreDownloadMaxCount;
    NSString *_likeTailWording;
    NSString *_multiLikeTailWording;
    NSString *_fullFeedMultiLikeTailWording;
    unsigned long long _contentUILayoutID;
    SessionForwardRecordLogic *_forwardRecordLogic;
    SharePreConfirmView *_sharePreConfirmView;
    SharePreConfirmSheetView *_sharePreConfirmSheetView;
    struct CGSize _profileStreamCacheSize;
    struct CGSize _TLStreamCacheSize;
}

+ (id)getFinderSecurityReportLinkByCommentScene:(int)arg1 feedId:(id)arg2 extParams:(id)arg3;
+ (struct WCFinderDynamicIcon)fetchLikeTokenWithLikeFlag:(int)arg1 isPrivateAccount:(_Bool)arg2 objectType:(int)arg3 iconSize:(struct CGSize)arg4 customColor:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCertificateType; // @synthesize isCertificateType=_isCertificateType;
@property(nonatomic) _Bool shareFromFastForward; // @synthesize shareFromFastForward=_shareFromFastForward;
@property(retain, nonatomic) SharePreConfirmSheetView *sharePreConfirmSheetView; // @synthesize sharePreConfirmSheetView=_sharePreConfirmSheetView;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) SessionForwardRecordLogic *forwardRecordLogic; // @synthesize forwardRecordLogic=_forwardRecordLogic;
@property(nonatomic) unsigned long long contentUILayoutID; // @synthesize contentUILayoutID=_contentUILayoutID;
@property(copy, nonatomic) NSString *fullFeedMultiLikeTailWording; // @synthesize fullFeedMultiLikeTailWording=_fullFeedMultiLikeTailWording;
@property(copy, nonatomic) NSString *multiLikeTailWording; // @synthesize multiLikeTailWording=_multiLikeTailWording;
@property(copy, nonatomic) NSString *likeTailWording; // @synthesize likeTailWording=_likeTailWording;
@property(nonatomic) _Bool isFriendLikeMSGFeed; // @synthesize isFriendLikeMSGFeed=_isFriendLikeMSGFeed;
@property(nonatomic) _Bool isVideoNeedSilentPaly; // @synthesize isVideoNeedSilentPaly=_isVideoNeedSilentPaly;
@property(nonatomic) unsigned long long feedPhotoPreDownloadMaxCount; // @synthesize feedPhotoPreDownloadMaxCount=_feedPhotoPreDownloadMaxCount;
@property(nonatomic) _Bool hasPreloadCommentList; // @synthesize hasPreloadCommentList=_hasPreloadCommentList;
@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(retain, nonatomic) NSString *videoMediaPath; // @synthesize videoMediaPath=_videoMediaPath;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) FinderNpsSurveyInfo *npsSurveyInfo; // @synthesize npsSurveyInfo=_npsSurveyInfo;
@property(retain, nonatomic) NSString *fromSessionId; // @synthesize fromSessionId=_fromSessionId;
@property(retain, nonatomic) WCFinderProfilePreloadInfo *profliePreloadInfo; // @synthesize profliePreloadInfo=_profliePreloadInfo;
@property(nonatomic) _Bool interestBottomViewHadShown; // @synthesize interestBottomViewHadShown=_interestBottomViewHadShown;
@property(retain, nonatomic) NSData *interestLastBuffer; // @synthesize interestLastBuffer=_interestLastBuffer;
@property(nonatomic) unsigned long long chooseType; // @synthesize chooseType=_chooseType;
@property(nonatomic) _Bool needStaticH; // @synthesize needStaticH=_needStaticH;
@property(retain, nonatomic) MMFinderLiveCastViewModel *liveCastViewModel; // @synthesize liveCastViewModel=_liveCastViewModel;
@property(nonatomic) unsigned long long videoReplayCount; // @synthesize videoReplayCount=_videoReplayCount;
@property(retain, nonatomic) NSString *sessionExtraKey; // @synthesize sessionExtraKey=_sessionExtraKey;
@property(nonatomic) _Bool forbidTextViewClick; // @synthesize forbidTextViewClick=_forbidTextViewClick;
@property(nonatomic) _Bool dislikeFlagInRecommend; // @synthesize dislikeFlagInRecommend=_dislikeFlagInRecommend;
@property(nonatomic) unsigned long long continuePlayCount; // @synthesize continuePlayCount=_continuePlayCount;
@property(nonatomic) unsigned long long stopPlayCount; // @synthesize stopPlayCount=_stopPlayCount;
@property(nonatomic) _Bool pausePannelLastIsShowState; // @synthesize pausePannelLastIsShowState=_pausePannelLastIsShowState;
@property(retain, nonatomic) WCFinderFeedVideoCellViewModel *videoCellViewModel; // @synthesize videoCellViewModel=_videoCellViewModel;
@property(retain, nonatomic) WCFinderLiveNoticeCellViewModel *noticeCellViewModel; // @synthesize noticeCellViewModel=_noticeCellViewModel;
@property(copy, nonatomic) NSString *mappingBusinessId; // @synthesize mappingBusinessId=_mappingBusinessId;
@property(nonatomic) _Bool isInZoomInState; // @synthesize isInZoomInState=_isInZoomInState;
@property(nonatomic) _Bool isShowInSubScene; // @synthesize isShowInSubScene=_isShowInSubScene;
@property(nonatomic) _Bool isMultiSceneEnable; // @synthesize isMultiSceneEnable=_isMultiSceneEnable;
@property(nonatomic) _Bool isShowingCommonBottomBannerView; // @synthesize isShowingCommonBottomBannerView=_isShowingCommonBottomBannerView;
@property(nonatomic) _Bool fullShareListShowMoreRelatedYet; // @synthesize fullShareListShowMoreRelatedYet=_fullShareListShowMoreRelatedYet;
@property(nonatomic) _Bool fullShareListShowJumpFinderYet; // @synthesize fullShareListShowJumpFinderYet=_fullShareListShowJumpFinderYet;
@property(retain, nonatomic) FinderBarItem *barItem; // @synthesize barItem=_barItem;
@property(retain, nonatomic) WCFinderObjectHotTopic *hotNewsTopic; // @synthesize hotNewsTopic=_hotNewsTopic;
@property(nonatomic) _Bool extLinkDisableClick; // @synthesize extLinkDisableClick=_extLinkDisableClick;
@property(retain, nonatomic) WCFinderFeedContentReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(retain, nonatomic) WCFinderFeedContentTempModel *tempModel; // @synthesize tempModel=_tempModel;
@property(nonatomic) unsigned long long relateListActionType; // @synthesize relateListActionType=_relateListActionType;
@property(nonatomic) _Bool canShowLikeFoldFeed; // @synthesize canShowLikeFoldFeed=_canShowLikeFoldFeed;
@property(copy, nonatomic) NSString *calTrailingLinkText; // @synthesize calTrailingLinkText=_calTrailingLinkText;
@property(nonatomic) _Bool isDisableTextExposeReport; // @synthesize isDisableTextExposeReport=_isDisableTextExposeReport;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *favFoldlayoutContentVM; // @synthesize favFoldlayoutContentVM=_favFoldlayoutContentVM;
@property(nonatomic) _Bool favRelateListEnableOnClick; // @synthesize favRelateListEnableOnClick=_favRelateListEnableOnClick;
@property(nonatomic) _Bool canShowFavFoldFeed; // @synthesize canShowFavFoldFeed=_canShowFavFoldFeed;
@property(nonatomic) _Bool imageFeedDisplayPauseTips; // @synthesize imageFeedDisplayPauseTips=_imageFeedDisplayPauseTips;
@property(nonatomic) _Bool isNeedDisplayBulletSettingOption; // @synthesize isNeedDisplayBulletSettingOption=_isNeedDisplayBulletSettingOption;
@property(nonatomic) unsigned long long feedShareType; // @synthesize feedShareType=_feedShareType;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool hasExposed; // @synthesize hasExposed=_hasExposed;
@property(nonatomic) int lastShowCarouselBusinessType; // @synthesize lastShowCarouselBusinessType=_lastShowCarouselBusinessType;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(nonatomic) double foldCellCollectionOffsetX; // @synthesize foldCellCollectionOffsetX=_foldCellCollectionOffsetX;
@property(nonatomic) _Bool showFoldFeedInfo; // @synthesize showFoldFeedInfo=_showFoldFeedInfo;
@property(retain, nonatomic) NSString *likeEducateTips; // @synthesize likeEducateTips=_likeEducateTips;
@property(nonatomic) _Bool hasAlreadyShowePrivateAccountLikeTips; // @synthesize hasAlreadyShowePrivateAccountLikeTips=_hasAlreadyShowePrivateAccountLikeTips;
@property(nonatomic) _Bool hasAlreadyShowedLikeTips; // @synthesize hasAlreadyShowedLikeTips=_hasAlreadyShowedLikeTips;
@property(nonatomic) _Bool needsShowLikeTips; // @synthesize needsShowLikeTips=_needsShowLikeTips;
@property(nonatomic) long long timelineTabType; // @synthesize timelineTabType=_timelineTabType;
@property(nonatomic) struct CGSize TLStreamCacheSize; // @synthesize TLStreamCacheSize=_TLStreamCacheSize;
@property(retain, nonatomic) WCFinderProgressBarStatusInfo *progressBarStatusInfo; // @synthesize progressBarStatusInfo=_progressBarStatusInfo;
@property(nonatomic) double maxPlayPosition; // @synthesize maxPlayPosition=_maxPlayPosition;
@property(nonatomic) double currentPlayPosition; // @synthesize currentPlayPosition=_currentPlayPosition;
@property(nonatomic) _Bool isStreamItemMarkRead; // @synthesize isStreamItemMarkRead=_isStreamItemMarkRead;
@property(nonatomic) struct CGSize profileStreamCacheSize; // @synthesize profileStreamCacheSize=_profileStreamCacheSize;
@property(nonatomic) _Bool isStreamHistoryItem; // @synthesize isStreamHistoryItem=_isStreamHistoryItem;
@property(nonatomic) _Bool isPostingDataItem; // @synthesize isPostingDataItem=_isPostingDataItem;
@property(nonatomic) double feedStayStartTimeInMs; // @synthesize feedStayStartTimeInMs=_feedStayStartTimeInMs;
@property(nonatomic) unsigned long long descriptionType; // @synthesize descriptionType=_descriptionType;
@property(nonatomic, getter=getFetchDataItemTime) double createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *dataSceneClassName; // @synthesize dataSceneClassName=_dataSceneClassName;
@property(nonatomic) _Bool shouldForceDisableLikeAction; // @synthesize shouldForceDisableLikeAction=_shouldForceDisableLikeAction;
@property(nonatomic) _Bool hideSeparatorLine; // @synthesize hideSeparatorLine=_hideSeparatorLine;
@property(nonatomic) unsigned long long contentStyle; // @synthesize contentStyle=_contentStyle;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSNumber *commentListViewHeight; // @synthesize commentListViewHeight=_commentListViewHeight;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) double uploadingProgress; // @synthesize uploadingProgress=_uploadingProgress;
@property(nonatomic) _Bool photoScrollByManual; // @synthesize photoScrollByManual=_photoScrollByManual;
@property(nonatomic) unsigned long long currentPageStartTimestamp; // @synthesize currentPageStartTimestamp=_currentPageStartTimestamp;
@property(nonatomic) unsigned long long currentDisplayImageIndex; // @synthesize currentDisplayImageIndex=_currentDisplayImageIndex;
@property(nonatomic) double expandConstTextHeight; // @synthesize expandConstTextHeight=_expandConstTextHeight;
@property(nonatomic) double unExpandConstTextHeight; // @synthesize unExpandConstTextHeight=_unExpandConstTextHeight;
@property(nonatomic) _Bool forceRecExpand; // @synthesize forceRecExpand=_forceRecExpand;
@property(nonatomic) _Bool forceExpand; // @synthesize forceExpand=_forceExpand;
@property(retain, nonatomic) NSString *extensionKey; // @synthesize extensionKey=_extensionKey;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, copy) NSString *description;
- (void)fetchFeedbackReasonIfNeedWithLiveScene:(long long)arg1;
- (unsigned int)carouselLatency;
- (_Bool)liveFeedShowBrandLogo;
- (_Bool)liveFeedShowLikeView;
- (_Bool)liveFeedShowCommentView;
- (_Bool)liveFeedShowProductView;
- (_Bool)isEmptyLiveStyle;
- (unsigned long long)liveFeedStreamUIStyle;
@property(readonly, nonatomic) unsigned long long reportHotCommentCount;
- (void)reportLiveFeedShare:(unsigned long long)arg1 quickShare:(_Bool)arg2 contactArray:(id)arg3;
@property(readonly, nonatomic) unsigned long long reportHotFriendCommentCount;
- (_Bool)enableResponseToFriendLikeToolbar;
- (id)feedReportLiteAppQuery;
- (id)feedSecurityReportLink;
- (_Bool)isMasterViewerScene;
- (_Bool)canForwardToTextState;
- (_Bool)feedHasBGM;
- (_Bool)shouldShowFullScreenTimelineJumpView;
- (_Bool)isFullScreenFriendRecommendTipsBarStyle;
- (_Bool)isFullScreenFollowHistoryTipsBarStyle;
- (_Bool)shouldShowFullScreenTipsBar;
- (id)feedWidgetInfo;
- (void)setFeedWidgetInfo:(id)arg1;
- (void)tryShowPromoteTips;
- (void)tryPreloadTemplateInfo;
- (id)dumpCurrMutexFeatureViewTypes;
- (void)resetShowMutexFeatureViewType:(unsigned long long)arg1;
- (void)setShowMutexFeatureViewType:(unsigned long long)arg1;
- (_Bool)canShowMutexFeatureViewType:(unsigned long long)arg1;
- (_Bool)canShowAirPlayEntry;
- (_Bool)canShowRingToneEntry;
- (_Bool)canShowTemplateVideoEntry;
- (id)getPostSourceInfo;
- (id)getPatMusicJumpInfo;
- (_Bool)canShowPatMusicEntry;
- (_Bool)isStickyTop;
- (_Bool)disableForwardBySpamCheck;
- (_Bool)isForceDisplayFeedCreateTime;
- (_Bool)disableForwardByPrivateAccount;
- (_Bool)disableFavByPrivateAccount;
- (_Bool)isPrivateAccount;
- (id)tmpThumbImage;
- (void)clearTmpThumbImage;
- (void)setTmpThumbImage:(id)arg1;
@property(readonly, nonatomic) int interactRealType;
- (int)_interactRealType;
- (void)changeFeedPrivateStateSucBlock:(CDUnknownBlockType)arg1;
- (void)reverseCommentState;
- (void)onTextStatePublished;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onFinderAsyncLoadInfoSuccessful:(id)arg1 scene:(int)arg2;
- (void)onFeedExtPersmissionFlagChanged:(id)arg1 flag:(int)arg2;
- (void)onFeedBulletSwitchChangedNeedReflush:(id)arg1;
- (void)onFinderDataItemPromotionInfoUpdateWithTid:(id)arg1 promotionInfo:(id)arg2;
- (void)onFinderDataItemOriginalSoundInfoUpdateWithTid:(id)arg1 originalSoundInfo:(id)arg2;
- (void)onFinderDataItemJumpCarouselUpdateWithTid:(id)arg1 jumpInfoList:(id)arg2;
- (_Bool)isTemplateCard;
- (unsigned long long)getCurBottomCarouselPostType;
- (id)getTargetJumpInfoFromJumpArray:(int)arg1;
- (id)getTargetJumpInfoFromCarouselArray:(int)arg1;
- (void)onFinderDataItemHotCommentUpdateWithTid:(id)arg1 hotCommentList:(id)arg2;
- (void)onFinderContactLastestLiveObjectUpdate:(id)arg1;
- (void)onFinderContactLastestLiveInfoUpdate:(id)arg1;
- (void)onFinderDataStickyTopStateChanged:(id)arg1;
- (void)onFinderContactLivingStatusHasChange:(id)arg1;
- (void)onFinderDataItem:(id)arg1 modifyOriginalInfo:(id)arg2;
- (void)onFinderDataItemPlayHistoryInfoUpdateWithTid:(id)arg1 playHistoryInfo:(id)arg2;
- (void)onFinderTargetDataItemMediaURLIsExpired:(id)arg1;
- (void)_handleCnyBulletCommentWithGroupKey:(id)arg1 businessType:(unsigned long long)arg2 actionType:(unsigned long long)arg3 content:(id)arg4 commentScene:(int)arg5 bulletCommentSource:(int)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)onFinderBulletCommentWithGroupKey:(id)arg1 businessType:(unsigned long long)arg2 actionType:(unsigned long long)arg3 content:(id)arg4 commentScene:(int)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)onCanvasViewActionFinderBulletCommentWithBusinessType:(int)arg1 pageId:(id)arg2 commentScene:(int)arg3 actionType:(int)arg4 content:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)onCanvasViewGotHalfRandomCard:(id)arg1 forPageId:(id)arg2;
- (void)setReplaySwitchStateOffLocally;
- (_Bool)replaySwitchStateOn;
- (_Bool)shouldShowReplaySwitch;
- (void)setBulletCommentOpenLocally;
- (_Bool)bulletMenuShowOpen;
- (void)onCanvasViewDidBeDismissedWithPageId:(id)arg1;
- (void)onRedCoverStateChanged:(id)arg1;
- (void)registerLiveStateExtensionIfNeeded;
- (void)onFinderDataItemWithTid:(id)arg1 jumpInfoContainerChanged:(id)arg2 commentScene:(int)arg3 noExposeReport:(_Bool)arg4;
- (void)onFinderDataItemWithTid:(id)arg1 jumpInfoContainerChanged:(id)arg2 commentScene:(int)arg3;
- (void)onFinderDataItemWithTid:(id)arg1 adEntryItemChanged:(id)arg2;
- (void)onFinderDataItemWithTid:(id)arg1 asyncRecommendInfoUpdatedIncommentScene:(int)arg2;
- (void)onFinderDataItemLiveClose:(id)arg1;
- (void)onFinderDataItemPrivateUpdate:(id)arg1 isPrivate:(_Bool)arg2;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFinderDataItemDeleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 tid:(id)arg3;
- (void)onFinderDataItemIsLikedFailed:(id)arg1;
- (void)onFinderDataItem:(id)arg1 updateFavStateByKeyExtention:(_Bool)arg2;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)arg1;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(_Bool)arg4;
- (void)onFinderDataItemPostSubCommentFail:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemFoldLayoutHasUpdate:(id)arg1 scene:(int)arg2;
- (void)updateCommentCountByPostingComment;
- (void)onFinderDataItemPostCommentFail:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostTemplateCommentSuccessfulWithCommentId:(unsigned long long)arg1 targetFeedId:(id)arg2 postFeedID:(id)arg3;
- (void)onFinderDataItemPostCommentSuccessful:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemRePostWithTid:(id)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)sendLiveExtensionIfNeed;
- (void)callExtensionIfNeededWithOldJumpInfoContainer:(id)arg1 newJumpInfoContainer:(id)arg2 onShowPosition:(int)arg3;
- (void)updateDataItem:(int)arg1 source:(long long)arg2 dataItem:(id)arg3;
- (void)updateDataItem;
- (void)deleteComment:(id)arg1 scene:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)preloadFinderProfileCGI;
- (id)membershipInfo;
- (_Bool)canShowMembershipFlagButton;
- (double)getFeedLastPlayProgress;
- (double)getGlobalPlayProgress;
- (void)cleanPreloadComment;
- (void)disablePreloadComment;
- (void)preloadCommentWithScene:(int)arg1 playPosition:(double)arg2 isPlayEnd:(_Bool)arg3;
- (void)preloadActionWithValue:(id)arg1 actionType:(unsigned long long)arg2;
- (unsigned long long)getAuthorFeedContentStatus;
- (unsigned long long)_getUploadFeedStatusWithDefaultStatus:(unsigned long long)arg1;
- (unsigned long long)getNormalFeedContentStatus;
- (void)generalStartDownloadImagePriority:(_Bool)arg1 maxCount:(unsigned long long)arg2 onlyThumb:(_Bool)arg3;
- (_Bool)followFlowUsingCustomCover;
- (void)startDownloadAllThumbImageImmediately;
- (void)startDownloadStreamImagePriority:(_Bool)arg1;
- (void)startDownloadStreamImageImmediately;
- (void)startDownloadImagePage:(unsigned long long)arg1;
- (void)cancelDownloadImage;
- (void)startDownloadImagePriority:(_Bool)arg1;
- (void)startDownloadImageImmediately;
- (_Bool)shouldResponseToPanGesture;
- (_Bool)shouldResponseToTapGesture;
- (_Bool)shouldHiddenAdCorner;
- (_Bool)isHardAdLiveFeed;
- (_Bool)isSelfClubContactPostFeed;
- (_Bool)isSelfPostFeed;
- (_Bool)isLayoutFeed;
- (id)unreadFriendLikeArray;
- (_Bool)isFoldFeed;
- (_Bool)isRecommendFeed;
- (void)updateLikeListDisplayName;
- (void)updateHotCommentListDisplayName;
- (void)resetContentHeight;
- (_Bool)isPhotoWithBGM;
- (_Bool)isSelfPrivate;
- (unsigned int)currentContentInnerAppMsgType;
- (id)getActiviyFinderShareToFriendMessageWrapWithEventNickname:(id)arg1 eventHeadUrl:(id)arg2 byPassInfoString:(id)arg3 relayIndex:(id)arg4 finderLiveEventInfo:(id)arg5 liveShareSceneIfLive:(long long)arg6;
- (void)shareActivityToFriend:(id)arg1 fromVC:(id)arg2 eventNickname:(id)arg3 eventHeadUrl:(id)arg4 byPassInfoString:(id)arg5 relayIndex:(id)arg6 finderLiveEventInfo:(id)arg7;
- (void)shareActivityToTextStateFromVC:(id)arg1 customViewImage:(id)arg2 viewHeight:(double)arg3 eventHeadUrl:(id)arg4 eventNickname:(id)arg5 byPassInfoString:(id)arg6 relayIndex:(id)arg7;
- (void)shareToTextStateFromVC:(id)arg1;
- (void)shareToFriendWithParams:(id)arg1;
- (id)shareMessageWrapWithLiveShareSceneIfLive:(long long)arg1;
- (id)shareMessageWrap;
- (void)shareToMomentInMainWindow;
- (void)shareToMomentFromVC:(id)arg1 liveShareSceneIfLive:(long long)arg2;
- (void)shareToMoment;
- (void)updateDataItemWarningFlag:(unsigned long long)arg1 warnWording:(id)arg2;
- (id)makeShareItemToMoment:(_Bool)arg1;
- (void)updateFeedLikeStateActionWithScene:(unsigned long long)arg1 reportScene:(int)arg2 likeFlag:(int)arg3 sourceType:(int)arg4 cgiSuccessBlock:(CDUnknownBlockType)arg5;
- (void)doubleClickLikeFeedActionWithScene:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)clickLikeFeedActionWithScene:(unsigned long long)arg1 reportScene:(int)arg2 isPrivateLike:(_Bool)arg3;
- (_Bool)pauseState;
- (void)updateMediaPauseState:(_Bool)arg1;
- (void)clickRecFullTextAction:(_Bool)arg1;
- (void)clickFullTextAction:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic) NSString *sortID;
@property(readonly, nonatomic) NSString *sessionBuffer;
@property(readonly, nonatomic) NSString *finderUsername;
@property(readonly, nonatomic) NSString *contentTid;
- (id)getContentVMDeleteTips;
- (id)currentDisplayMediaInfo;
- (id)linkText;
- (_Bool)hasExtReadingLink;
- (_Bool)isVideoMedia;
- (_Bool)isFeedContainVideo;
- (_Bool)isFeedContainPhoto;
- (_Bool)existMediaContent;
- (_Bool)isItemUploadingOrFail;
- (_Bool)isDisplayHotCommentReady;
- (_Bool)isFeedContainText;
- (void)_onFinderContactChanged:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)setSilentPlayState:(_Bool)arg1;
- (_Bool)isNeedSilentPlay;
- (void)dealloc;
- (unsigned long long)rowForContent;
- (id)friendLikeTailStringWithLikeCount:(long long)arg1;
- (id)localTailStringForLikeCount:(long long)arg1;
- (id)likeIconThickSvgName;
- (void)processLimitModeDataItemUpdate;
- (unsigned long long)currentContentUILayoutID;
- (_Bool)isOnFreezeState;
- (id)initWithLayoutID:(unsigned long long)arg1 withContentStyle:(unsigned long long)arg2;
- (void)updateTempProperty;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 dataScene:(id)arg3;
- (_Bool)shouldShowJumpInfoPanelOnPosition:(int)arg1;
- (_Bool)canShowInLandscapeWithCellIndex:(unsigned long long)arg1 needCheckScaleingInfo:(_Bool)arg2;
- (_Bool)canShowInLandscapeWithCellIndex:(unsigned long long)arg1;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 dataScene:(id)arg3 sessionExtraKey:(id)arg4;
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 dataScene:(id)arg3 isFinderIdentity:(_Bool)arg4;
- (void)resetExposeSession;
- (void)setAutoPlayTime:(unsigned int)arg1;
- (unsigned int)getAutoPlayTime;
- (void)setAutoPlayStartTs:(unsigned long long)arg1;
- (unsigned long long)getAutoPlayStartTs;
- (void)setExposeStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeStartTs;
- (struct WCFinderDynamicIcon)finderLikeIconWithViewerScene:(unsigned long long)arg1;
- (struct WCFinderDynamicIcon)finderLikeIconWithViewerScene:(unsigned long long)arg1 iconSize:(struct CGSize)arg2 customColor:(id)arg3 useNormalIcon:(_Bool)arg4;
- (void)searchHighToNormalTransform;
- (_Bool)mediaTypeSupportMoreAction;
- (_Bool)canShowPostWithMiaoJianEntry;
- (_Bool)canShowEditFeatureActionWithOptions:(unsigned long long)arg1;
- (void)updateShowHotTreadingTipsSwitch:(_Bool)arg1;
- (_Bool)hotTreadingTipsSwitch;
- (_Bool)canShowHotTreadingTipsOption;
- (_Bool)canShowAddWarningTipsAction;
- (_Bool)enableShowModFeedInfoEntry;
- (id)getScrollActionSecondRowConfigOptions:(unsigned long long)arg1;
- (_Bool)canShowDislike;
- (_Bool)enableShowHotTrendingSwitch;
- (id)getScrollActionFirstRowConfigOptions:(unsigned long long)arg1;
- (id)getScrollActionConfigOptions:(unsigned long long)arg1;
- (_Bool)canShowLiveInternalSummaryPage;
- (_Bool)canShowFinderHandOff;
- (_Bool)canShowFavCollectionEntry;
- (_Bool)canShowShareMomentsEntry;
- (_Bool)canShowSetToSnsCoverEntry;
- (_Bool)canShowForwardEntry;
- (_Bool)canShowForwardSeeLater;
- (id)getAuthorScrollActionConfig:(_Bool)arg1;
- (id)getNormalScrollActionConfig;
- (id)getNoIdentityActionConfigWithOptions:(unsigned long long)arg1;
- (id)getLimitModelScrollActionConfigIsAuthor:(_Bool)arg1 collectionFlag:(_Bool)arg2;
- (_Bool)isCommentBulletAnimationEnable;
- (_Bool)isMediaLinkClickEnable;
- (id)mediaDisplayLinkBGColor;
- (id)mediaDisplayLinkColor;
- (id)mediaDispalyTitle;
- (_Bool)canShowCarousel;
- (void)clearLayoutCache;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmViewError:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (_Bool)hasMentioned;
@property(nonatomic) _Bool mentionListSelected;
- (id)getViewController;
- (void)finderLiveNoticeInfoUpdate;
- (void)finderLiveNoticeStatusChange;
- (void)markLiveNoticeHideInFeed:(id)arg1;
- (_Bool)couldShare;
- (_Bool)isOpenLiveQuickShare;
- (_Bool)isFastForward;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(id)arg2;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(id)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (_Bool)isLiveFeedDisLikeOpen;
- (_Bool)isOpenFinderQuickShare;
- (_Bool)canShowRotateControl;
- (_Bool)canShowBulletControl;
- (_Bool)canShowLeadToOtherTabCard;
- (_Bool)isLeadToOtherTabCardType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

