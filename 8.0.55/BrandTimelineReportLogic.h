//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTLNotifyBarReportItem, BTLTopBarReportItem, BrandReportMainSessionInfo, BrandTLExptConfig, KvReportItem29480, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol BrandTimelineReportLogicDelegate;

@interface BrandTimelineReportLogic
{
    unsigned int m_stayTimeStart;
    unsigned int m_listStayTimeStart;
    unsigned int m_listStayTime;
    NSMutableDictionary *m_dicExposeInfo;
    NSMutableDictionary *m_dicRealTimeInfo;
    unsigned int m_enterPos;
    unsigned int m_exitPos;
    unsigned long long m_source;
    NSMutableDictionary *m_dicOftenReadAndLiveBarExposeItem;
    NSMutableDictionary *m_dicOftenReadAndLiveBarClickItem;
    BTLTopBarReportItem *m_channelExposingItem;
    NSMutableArray *m_arrChannelExposedItem;
    NSMutableArray *m_arrChannelClickItem;
    BTLNotifyBarReportItem *m_notifyBarReportItem;
    _Bool _jump2OldBizList;
    _Bool _pushInCache;
    _Bool _didClickRecoFlowUnfold;
    int _exptType;
    unsigned int _msgCntReceiveInBox;
    unsigned int _sepLineType;
    unsigned int _sepLineFirstExposeIndex;
    unsigned int _navNewMsgClickCnt;
    unsigned int _msgExpandMoreCnt;
    BrandTLExptConfig *_exptConfig;
    id <BrandTimelineReportLogicDelegate> _delegate;
    BrandReportMainSessionInfo *_sessionInfo;
    NSMutableDictionary *_dicLiveMsgExposedItem;
    NSMutableSet *_setLiveClickMsgId;
    long long _exposedMsgMaxIndex;
    long long _exposedMsgMinIndex;
    KvReportItem29480 *_personalCenterEntranceExposedItem;
}

+ (void)report27268FinderCardRecycledWithRecCardWrapperArr:(id)arg1;
+ (void)reportRecoFlowHeaderCellRefreshActionType:(unsigned int)arg1 position:(unsigned int)arg2;
+ (void)reportRecoFlowExpandMoreCellActionType:(unsigned int)arg1 position:(unsigned int)arg2;
+ (void)reportRecFlowCardOptype:(unsigned int)arg1 recoFlowSectionData:(id)arg2 cellView:(id)arg3 extInfo:(id)arg4;
+ (unsigned int)genChannelExposeSeqId;
+ (void)report15721RecommendFinderCellOptype:(unsigned int)arg1 sectionData:(id)arg2 index:(long long)arg3;
+ (void)reportRecCardInsertActionRet:(unsigned int)arg1 recCardWrapper:(id)arg2;
+ (void)reportRecCardOptype:(unsigned int)arg1 sectionData:(id)arg2 viewModel:(id)arg3 extInfo:(id)arg4;
+ (void)reportRecCardOptype:(unsigned int)arg1 bizUsrName:(id)arg2 recId:(unsigned long long)arg3 mid:(unsigned int)arg4 idx:(unsigned int)arg5 feedBackReasonArr:(id)arg6;
+ (void)reportRecCardReceiveXMLPush:(id)arg1;
+ (void)reportRecCardIdKeyEvent:(unsigned long long)arg1;
+ (id)generateReddotReportItem:(id)arg1;
+ (unsigned int)msgTypeForMsgWrap:(id)arg1;
+ (void)reportDeleteTooOldTLMsgIdKey;
+ (void)reportEnterTimelineTimeCostIdKey:(unsigned int)arg1;
+ (void)__setExposedSessionId:(unsigned long long)arg1;
+ (unsigned long long)exposedSessionId;
+ (void)__setEnterTimestampMs:(unsigned long long)arg1;
+ (unsigned long long)enterTimestampMs;
+ (void)__setSessionId:(unsigned int)arg1;
+ (unsigned int)sessionId;
- (void).cxx_destruct;
@property(retain, nonatomic) KvReportItem29480 *personalCenterEntranceExposedItem; // @synthesize personalCenterEntranceExposedItem=_personalCenterEntranceExposedItem;
@property(nonatomic) unsigned int msgExpandMoreCnt; // @synthesize msgExpandMoreCnt=_msgExpandMoreCnt;
@property(nonatomic) unsigned int navNewMsgClickCnt; // @synthesize navNewMsgClickCnt=_navNewMsgClickCnt;
@property(nonatomic) _Bool didClickRecoFlowUnfold; // @synthesize didClickRecoFlowUnfold=_didClickRecoFlowUnfold;
@property(nonatomic) unsigned int sepLineFirstExposeIndex; // @synthesize sepLineFirstExposeIndex=_sepLineFirstExposeIndex;
@property(nonatomic) unsigned int sepLineType; // @synthesize sepLineType=_sepLineType;
@property(nonatomic) unsigned int msgCntReceiveInBox; // @synthesize msgCntReceiveInBox=_msgCntReceiveInBox;
@property(nonatomic) long long exposedMsgMinIndex; // @synthesize exposedMsgMinIndex=_exposedMsgMinIndex;
@property(nonatomic) long long exposedMsgMaxIndex; // @synthesize exposedMsgMaxIndex=_exposedMsgMaxIndex;
@property(nonatomic) int exptType; // @synthesize exptType=_exptType;
@property(retain, nonatomic) NSMutableSet *setLiveClickMsgId; // @synthesize setLiveClickMsgId=_setLiveClickMsgId;
@property(retain, nonatomic) NSMutableDictionary *dicLiveMsgExposedItem; // @synthesize dicLiveMsgExposedItem=_dicLiveMsgExposedItem;
@property(nonatomic) _Bool pushInCache; // @synthesize pushInCache=_pushInCache;
@property(retain, nonatomic) BrandReportMainSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) _Bool jump2OldBizList; // @synthesize jump2OldBizList=_jump2OldBizList;
@property(nonatomic) __weak id <BrandTimelineReportLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BrandTLExptConfig *exptConfig; // @synthesize exptConfig=_exptConfig;
- (id)reportKv29480:(int)arg1 redDotCount:(long long)arg2;
- (void)reportExposePersonalCenterEntrance:(long long)arg1;
- (_Bool)checkCGIBaseRespSuccess:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportLiveMsgWhenLeave;
- (void)reportLiveMsgClicked:(id)arg1;
- (void)reportLiveMsgExposed:(id)arg1 viewModel:(id)arg2;
- (void)reportExposedLiveBarItemView:(id)arg1;
- (void)reportClickLiveBarItemView:(id)arg1;
- (void)reportClickCardTitleFinderLive:(id)arg1;
- (void)reportRecoFlowSectionData:(id)arg1 cellView:(id)arg2 optype:(unsigned int)arg3;
- (_Bool)isRecoFlowSectionValidExpose:(id)arg1 cellView:(id)arg2;
- (id)recoFlowItemIdentifierForCell:(id)arg1;
- (_Bool)isRecoContentCellView:(id)arg1;
- (void)reportNotifyItemOnExitTimeline;
- (void)reportClickNotifyItemWithSectionData:(id)arg1;
- (void)reportExposeNotifyItemWithSectionData:(id)arg1;
- (id)getContactFromBrandBarItemView:(id)arg1;
- (void)reportClickOftenReadItemView:(id)arg1;
- (void)reportOftenReadSectionDisappear;
- (void)reportExposeOftenReadItemViewArr:(id)arg1;
- (void)reportBaseVideoItemCellAutoPlayEndWithKey:(id)arg1 itemViewModel:(id)arg2 logTag:(id)arg3;
- (void)reportBaseVideoItemCellAutoPlayStartWithKey:(id)arg1 logTag:(id)arg2;
- (void)reportVideoItemCellAutoPlayEnd:(id)arg1;
- (void)reportVideoItemCellAutoPlayStart:(id)arg1;
- (void)reportRecCardVideoItemCellAutoPlayEnd:(id)arg1;
- (void)reportRecCardVideoItemCellAutoPlayStart:(id)arg1;
- (void)reportRecommendCardValidExposeItem:(id)arg1 withIndex:(long long)arg2;
- (_Bool)isRecommendItemValidExposed:(id)arg1 withIndex:(long long)arg2;
- (_Bool)isRecommendCardValidExposed:(id)arg1;
- (void)updateExposeRecCardRecReason:(id)arg1;
- (void)reportClickMPInterestData:(id)arg1 interestData:(id)arg2 index:(long long)arg3;
- (void)reportClickFinderScrollableCard:(id)arg1 index:(long long)arg2;
- (void)reportClickFinderFixedCard:(id)arg1 index:(long long)arg2;
- (void)reportClickRecCard:(id)arg1;
- (void)reportExposeRecommendItemWithViewModel:(id)arg1 newMsgSequenceId:(unsigned long long)arg2 index:(long long)arg3;
- (void)reportExposeRecCard:(id)arg1;
- (void)reportValidExposeAdCanvasSection:(id)arg1 ratio:(unsigned int)arg2;
- (_Bool)isAdCanvasSectioValidExposed:(id)arg1;
- (id)genRealTimeExposeInfoWithAdCanvasSection:(id)arg1;
- (id)genExposeInfoWithAdCanvasSection:(id)arg1;
- (void)reportExposeAdCanvasSection:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportClickCanvasCardItem:(id)arg1;
- (id)genComExposeInfoForCanvasSection:(id)arg1;
- (id)genRealTimeExposeInfoWithRecCanvasSection:(id)arg1;
- (id)genExposeInfoWithRecCanvasSection:(id)arg1;
- (void)reportValidExposeRecCanvasSection:(id)arg1 ratio:(unsigned int)arg2;
- (_Bool)isRecCanvasSectioValidExposed:(id)arg1;
- (void)reportExposeRecCanvasSection:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeCanvasSection:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (id)genRealTimeExposeInfoWithItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (id)genExposeInfoWithItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportClickItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (_Bool)isExposeWithKey:(id)arg1 isValidExpose:(_Bool)arg2;
- (void)reportValidExposeItem:(id)arg1 ratio:(unsigned int)arg2 newMsgSequenceId:(unsigned long long)arg3;
- (_Bool)isItemValidExpose:(id)arg1;
- (void)reportExposeItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeItemArr:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)sendOftenReadReportReq;
- (void)recordOftenReadAndLiveBarBrandLiveExposed;
- (void)sendListExposeInfoReportReq;
- (id)generateReddotReportItem;
- (void)clearRealTimeReportCache;
- (void)sendListExposeRealTimeInfoReportReq:(_Bool)arg1;
- (void)sendListExposeRealTimeInfoReportReqForClickWithKey:(id)arg1;
- (id)converInfoToReportInfo:(id)arg1;
- (id)getExposeInfoCache;
- (void)reportExitPosWithVisibleItemVewModelArr:(id)arg1;
- (void)reportEnterPosWithVisibleItemVewModelArr:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)endRecordTimelineStayTime;
- (void)abortRecordTimelineStayTime;
- (void)resumeRecordTimelineStayTime;
- (void)pauseRecordTimelineStayTime;
- (void)startRecordTimelineStayTime;
- (void)reportOptype:(unsigned int)arg1 notifySectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 readerSectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 sectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 sectionData:(id)arg2;
- (void)onSeqLineTypeExpose:(unsigned int)arg1 firstExposeIndex:(unsigned int)arg2;
- (_Bool)hasSeqLineExposed;
- (void)onMsgSectionExposeForIndex:(long long)arg1;
- (void)onUnfoldRecoFlow;
- (void)onClickNavMsgBtn;
- (void)onExpandMsg;
- (void)onAddMsgInTL;
- (void)fill28651ReportItemCommField:(id)arg1;
- (void)report28651ExptOnExit;
- (void)updateExposeMinIndexOnAppear;
- (void)report28651ExptOnEnter;
- (int)getCurExptType;
- (void)reportEnterTLLog11404:(id)arg1;
- (void)onTLDidAppear;
- (void)onExitTL;
- (void)onEnterTL:(unsigned long long)arg1 sessionInfo:(id)arg2 pushInCache:(_Bool)arg3;
- (void)dealloc;
- (id)init;

@end

