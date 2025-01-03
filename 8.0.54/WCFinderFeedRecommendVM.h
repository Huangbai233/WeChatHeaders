//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class FinderCommByPass, FinderRelatedRecommendTips, FinderStreamLayoutInfo, MMTimer, NSArray, NSData, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderAbstractTask, WCFinderFeedLayoutContentVM, WCFinderOpenTimelineParams, WCFinderRedDotCtrlInfo;
@protocol WCFinderFeedRecommendVMDelegate;

@interface WCFinderFeedRecommendVM
{
    _Bool _stopFetchNextPage;
    _Bool _hasProcessLocalData;
    _Bool _hasFetchEnterData;
    _Bool _hasDisplayRedDotObject;
    _Bool _isFetchingLocalFeed;
    _Bool _isRequesting;
    _Bool _showPrivateMSGTips;
    _Bool _showFriendCommentSpread;
    _Bool _isByFindPage;
    _Bool _shouldFetchHistory;
    _Bool _pullEnterIsEmpty;
    _Bool _needCleanData;
    _Bool _shouldRecordEnterIndexPath;
    _Bool _isFetchLivingStream;
    _Bool _enterFeedByAppend;
    WCFinderFeedLayoutContentVM *_livingLayout;
    NSArray *_commentFailTidArray;
    NSArray *_unreadCacheContentVMs;
    unsigned long long _preFetchNextPageIndex;
    NSString *_enterDataReportID;
    unsigned long long _refreshTime;
    NSIndexPath *_enterIndexPath;
    long long _partialExposeSection;
    long long _partialHotAreaSection;
    NSMutableDictionary *_loadingReportDict;
    NSString *_requestReportSceneKey;
    NSString *_uiReportSceneKey;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTimelineParams;
    NSMutableArray *_topObjects;
    FinderCommByPass *_commByPass;
    unsigned long long _newFeedIndex;
    NSString *_lastStayFeedTidBeforeTopRefresh;
    NSString *_lastStayFeedTidBeforeReload;
    unsigned long long _commentFailTidCount;
    NSMutableArray *_serverFetchTasks;
    WCFinderAbstractTask *_currentServerFetchTask;
    NSString *_historyLabelText;
    NSArray *_streamDataArray;
    unsigned long long _historyType;
    long long _friendLikeSplitIndex;
    FinderStreamLayoutInfo *_streamLayoutInfo;
    WCFinderFeedLayoutContentVM *_displayContentColumnCard;
    WCFinderFeedLayoutContentVM *_preloadContentColumnCard;
    NSMutableSet *_fetchNextPageStreamCards;
    NSMutableArray *_preloadArray;
    NSMutableArray *_previewJumpArray;
    NSData *_cardBuffer;
    NSArray *_feedCacheArray;
    MMTimer *_detectionValidityTimer;
    NSData *_lastCheckBuffer;
    unsigned long long _lastdetectionValidityTimestamp;
    WCFinderRedDotCtrlInfo *_appendRedDotCtrlInfo;
    FinderRelatedRecommendTips *_relatedRecommendTips;
    unsigned long long _topRefreshCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long topRefreshCount; // @synthesize topRefreshCount=_topRefreshCount;
@property(retain, nonatomic) FinderRelatedRecommendTips *relatedRecommendTips; // @synthesize relatedRecommendTips=_relatedRecommendTips;
@property(nonatomic) _Bool enterFeedByAppend; // @synthesize enterFeedByAppend=_enterFeedByAppend;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *appendRedDotCtrlInfo; // @synthesize appendRedDotCtrlInfo=_appendRedDotCtrlInfo;
@property(nonatomic) unsigned long long lastdetectionValidityTimestamp; // @synthesize lastdetectionValidityTimestamp=_lastdetectionValidityTimestamp;
@property(retain, nonatomic) NSData *lastCheckBuffer; // @synthesize lastCheckBuffer=_lastCheckBuffer;
@property(retain, nonatomic) MMTimer *detectionValidityTimer; // @synthesize detectionValidityTimer=_detectionValidityTimer;
@property(copy, nonatomic) NSArray *feedCacheArray; // @synthesize feedCacheArray=_feedCacheArray;
@property(retain, nonatomic) NSData *cardBuffer; // @synthesize cardBuffer=_cardBuffer;
@property(retain, nonatomic) NSMutableArray *previewJumpArray; // @synthesize previewJumpArray=_previewJumpArray;
@property(retain, nonatomic) NSMutableArray *preloadArray; // @synthesize preloadArray=_preloadArray;
@property(nonatomic) _Bool isFetchLivingStream; // @synthesize isFetchLivingStream=_isFetchLivingStream;
@property(retain, nonatomic) NSMutableSet *fetchNextPageStreamCards; // @synthesize fetchNextPageStreamCards=_fetchNextPageStreamCards;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *preloadContentColumnCard; // @synthesize preloadContentColumnCard=_preloadContentColumnCard;
@property(nonatomic) __weak WCFinderFeedLayoutContentVM *displayContentColumnCard; // @synthesize displayContentColumnCard=_displayContentColumnCard;
@property(retain, nonatomic) FinderStreamLayoutInfo *streamLayoutInfo; // @synthesize streamLayoutInfo=_streamLayoutInfo;
@property(nonatomic) long long friendLikeSplitIndex; // @synthesize friendLikeSplitIndex=_friendLikeSplitIndex;
@property(nonatomic) _Bool shouldRecordEnterIndexPath; // @synthesize shouldRecordEnterIndexPath=_shouldRecordEnterIndexPath;
@property(nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(nonatomic) _Bool needCleanData; // @synthesize needCleanData=_needCleanData;
@property(copy, nonatomic) NSArray *streamDataArray; // @synthesize streamDataArray=_streamDataArray;
@property(nonatomic) _Bool pullEnterIsEmpty; // @synthesize pullEnterIsEmpty=_pullEnterIsEmpty;
@property(copy, nonatomic) NSString *historyLabelText; // @synthesize historyLabelText=_historyLabelText;
@property(nonatomic) _Bool shouldFetchHistory; // @synthesize shouldFetchHistory=_shouldFetchHistory;
@property(retain, nonatomic) WCFinderAbstractTask *currentServerFetchTask; // @synthesize currentServerFetchTask=_currentServerFetchTask;
@property(retain, nonatomic) NSMutableArray *serverFetchTasks; // @synthesize serverFetchTasks=_serverFetchTasks;
@property(nonatomic) unsigned long long commentFailTidCount; // @synthesize commentFailTidCount=_commentFailTidCount;
@property(copy, nonatomic) NSString *lastStayFeedTidBeforeReload; // @synthesize lastStayFeedTidBeforeReload=_lastStayFeedTidBeforeReload;
@property(copy, nonatomic) NSString *lastStayFeedTidBeforeTopRefresh; // @synthesize lastStayFeedTidBeforeTopRefresh=_lastStayFeedTidBeforeTopRefresh;
@property(nonatomic) unsigned long long newFeedIndex; // @synthesize newFeedIndex=_newFeedIndex;
@property(nonatomic) _Bool isByFindPage; // @synthesize isByFindPage=_isByFindPage;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @synthesize commByPass=_commByPass;
@property(retain, nonatomic) NSMutableArray *topObjects; // @synthesize topObjects=_topObjects;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTimelineParams; // @synthesize openTimelineParams=_openTimelineParams;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(readonly, nonatomic) _Bool showFriendCommentSpread; // @synthesize showFriendCommentSpread=_showFriendCommentSpread;
@property(copy, nonatomic) NSString *uiReportSceneKey; // @synthesize uiReportSceneKey=_uiReportSceneKey;
@property(copy, nonatomic) NSString *requestReportSceneKey; // @synthesize requestReportSceneKey=_requestReportSceneKey;
@property(retain, nonatomic) NSMutableDictionary *loadingReportDict; // @synthesize loadingReportDict=_loadingReportDict;
@property(readonly, nonatomic) _Bool showPrivateMSGTips; // @synthesize showPrivateMSGTips=_showPrivateMSGTips;
@property(nonatomic) long long partialHotAreaSection; // @synthesize partialHotAreaSection=_partialHotAreaSection;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) _Bool isFetchingLocalFeed; // @synthesize isFetchingLocalFeed=_isFetchingLocalFeed;
@property(nonatomic) long long partialExposeSection; // @synthesize partialExposeSection=_partialExposeSection;
@property(retain, nonatomic) NSIndexPath *enterIndexPath; // @synthesize enterIndexPath=_enterIndexPath;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *enterDataReportID; // @synthesize enterDataReportID=_enterDataReportID;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool hasDisplayRedDotObject; // @synthesize hasDisplayRedDotObject=_hasDisplayRedDotObject;
@property(retain, nonatomic) NSArray *unreadCacheContentVMs; // @synthesize unreadCacheContentVMs=_unreadCacheContentVMs;
@property(nonatomic) _Bool hasFetchEnterData; // @synthesize hasFetchEnterData=_hasFetchEnterData;
@property(nonatomic) _Bool hasProcessLocalData; // @synthesize hasProcessLocalData=_hasProcessLocalData;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(retain, nonatomic) NSArray *commentFailTidArray; // @synthesize commentFailTidArray=_commentFailTidArray;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *livingLayout; // @synthesize livingLayout=_livingLayout;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (void)reportTopRefreshActionWithLastStayFeedID:(id)arg1 mode:(unsigned long long)arg2 progress:(unsigned long long)arg3;
- (void)resetRecommendTips;
- (id)getRecommendTips;
- (_Bool)shouldShowGuideNextBubbleCurProgress:(double)arg1;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (void)detectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)startDetectionFeedsValidity;
- (void)finishLoadCardFirstScreenContent:(id)arg1;
- (void)loadCardFirstScreenContent:(id)arg1;
- (void)finishFetchNextCardForVM:(id)arg1 newCardVM:(id)arg2;
- (void)preloadLayoutContentVMNextColumn:(id)arg1;
- (void)replaceStreamCard:(id)arg1 withNewCard:(id)arg2;
- (void)onFinderContactRefuseListAdded:(id)arg1 wxUsernames:(id)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFeedContentFoldInfoChange:(id)arg1 scene:(int)arg2;
- (void)finderStreamPrefetchFinishedWithTabType:(int)arg1;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (int)feedViewControllerScene;
- (void)onFinderDataItemPostingCommentCountUpdate;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (long long)convertToFluencyStartScene:(unsigned long long)arg1;
- (void)finishFetchDataSuccessful:(_Bool)arg1;
@property(readonly, nonatomic) _Bool noMoreData;
@property(readonly, nonatomic) NSString *partialExposedObjectId;
- (void)reloadErrorPageWithPullType:(unsigned long long)arg1;
- (void)reloadNoMoreDataWithPullType:(unsigned long long)arg1;
- (void)clearUnreadCacheContentVMs;
- (void)deleteAndCollectAllUnreadItems;
- (void)insertFinderEnhanceContentVM:(id)arg1 location:(unsigned long long)arg2;
- (void)removeFinderContentVMWithTid:(id)arg1;
- (void)updateTimelineCachePageWithTid:(id)arg1;
- (void)fetchMoreLivingList;
- (void)addFavRelateActionWithContentVM:(id)arg1 relateActionType:(unsigned long long)arg2;
- (id)streamLoadingInfoByExitVC;
- (void)stopAllPreloadVideoItems;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)startPreloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (void)contentUnlikeFeedback:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1 isHistoryData:(_Bool)arg2;
- (_Bool)checkLivingStreamLayoutInfo:(id)arg1;
- (void)addDividerWithStreamLayoutInfo:(id)arg1 contentVMArray:(id)arg2;
- (void)bindJumpFeedWidgetInfoWithStreamLayoutInfo:(id)arg1 dataItemArray:(id)arg2;
- (void)bindFeedWidgetInfoWithStreamLayoutInfo:(id)arg1 dataItemArray:(id)arg2;
- (void)insertContentVM:(id)arg1 toIndex:(long long)arg2;
- (void)appendFinderContentVM:(id)arg1;
- (void)appendEnterContentVM:(id)arg1 dataItems:(id)arg2 cardBuffer:(id)arg3 appendRedDotCtrlInfo:(id)arg4;
- (id)allLiveDataSource;
- (void)changeFirstItemToMuteBeforeRefresh;
- (void)clearAllContentVMLayoutCache;
- (id)vaildTopIndexPath;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1 contentVM:(id)arg2;
- (int)tabType;
- (long long)firstFeedNum;
- (_Bool)shouldShowMoreHotContentCell;
- (id)allPreviewJumpArray;
- (void)fetchFirstPageData;
- (void)refreshLatestDataByEnter:(_Bool)arg1;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1;
- (void)_fetchHistoryWithPullType:(unsigned long long)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)checkServerFetchTasks;
- (void)preformNextServerFetchTasks;
- (void)resetFirstItemSilentToNo:(unsigned long long)arg1;
- (_Bool)preserveLocalContentVMs:(unsigned long long)arg1;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1;
- (id)fetchTopFetchStreamCGIParamsAsReadOnly:(_Bool)arg1;
- (_Bool)hotTabNeedTopRefresh;
- (id)getHotTabLastBuff;
- (id)firstPrefetchDataItem;
- (void)loadingNextStreamFeedPage;
- (_Bool)shouldStopFetchNextPageByFooter;
- (void)loadingNextPagePageData;
- (void)loadingFirstPageData;
- (void)updateFluencyReportInfoForGetCommentDetail:(id)arg1;
- (id)getRedDotDataItem:(id)arg1;
- (id)getLocalCacheContentVMs;
- (void)checkCacheDataIsValid:(id)arg1;
- (void)loadingLocalData;
- (id)addStatsFeedArray;
- (id)getUnreadDataItems;
- (void)clearDataByServerRequestWithHasNewFeed:(_Bool)arg1;
- (id)processServerData:(id)arg1;
- (id)filterDataItemArray:(id)arg1;
- (unsigned long long)sectionNums;
- (id)getCurCommentFailTidArray;
- (void)updateFailPostComment;
- (void)recordEnterIndexPathIfNeeded;
- (void)markShouldRecordEnterIndexPath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WCFinderFeedRecommendVMDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSData *lastBuff;
@property(readonly) Class superclass;

@end

