//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSString;

@interface BrandTimelineExposeInfo
{
    _Bool _isValidExpose;
    _Bool _isAutoPlay;
    _Bool _hasReportRealTimeExposed;
    _Bool _hasReportRealTimeValidExposed;
    unsigned int _bizUin;
    unsigned int _mid;
    unsigned int _idx;
    unsigned int _itemIndex;
    unsigned int _exposePos;
    unsigned int _exposeCount;
    unsigned int _exposeBrowseState;
    unsigned int _expandState;
    unsigned int _isExpandDafault;
    unsigned int _exposeRatio;
    unsigned int _createTime;
    unsigned int _exposeTimeStamp;
    unsigned int _isStar;
    unsigned int _isNewMsg;
    unsigned int _msgType;
    unsigned int _isClick;
    unsigned int _isLargeCover;
    unsigned int _isOftenReadBiz;
    unsigned int _isPayContent;
    unsigned int _itemShowType;
    unsigned int _cardType;
    unsigned int _recRk;
    unsigned int _recStyle;
    unsigned int _subPos;
    unsigned int _weight;
    unsigned int _autoPlayTime;
    unsigned int _actType;
    unsigned int _cardSequenceIdx;
    unsigned int _styleInfo;
    unsigned int _showFinder;
    NSString *_bizUsername;
    unsigned long long _exposeTimeStampInMs;
    NSString *_itemInfoStr;
    unsigned long long _recId;
    NSString *_recReason;
    NSString *_exptType;
    NSString *_event;
    NSString *_cardId;
    NSString *_recInfo;
    NSString *_recExtraData;
    NSString *_aggregationTitle;
    NSString *_aggregationUrl;
    NSString *_cardTitle;
    NSString *_videoId;
    NSString *_wordingReportInfo;
    NSString *_rankSessionId;
    NSString *_resortBuffer;
    NSString *_title;
    NSString *_finderFeedObjectId;
    NSString *_contentId;
    NSString *_finderId;
    NSString *_aid;
    NSString *_traceId;
}

+ (id)genInfoKeyForCanvasAdMsg:(id)arg1;
+ (id)genInfoKeyForCanvasRecMsg:(id)arg1;
+ (id)genInfoKeyWithMPInterestCard:(id)arg1 interestData:(id)arg2 index:(long long)arg3;
+ (id)genInfoKeyWithFinderScrollableCellViewModel:(id)arg1 index:(long long)arg2;
+ (id)genInfoKeyWithFinderFixedCellViewModel:(id)arg1 index:(long long)arg2;
+ (id)genInfoKeyWithRecAppMsgViewModel:(id)arg1;
+ (id)genInfoKeyForReaderItemCell:(id)arg1 itemIndex:(unsigned int)arg2;
+ (void)fillData:(id)arg1 withinterestData:(id)arg2 index:(long long)arg3;
+ (void)fillData:(id)arg1 withFinderScrollableCellViewModel:(id)arg2 index:(long long)arg3;
+ (void)fillData:(id)arg1 withFinderFixedCellViewModel:(id)arg2 index:(long long)arg3;
+ (id)genKeyForBaseItemViewModel:(id)arg1;
+ (id)readerKeyPrefix;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasReportRealTimeValidExposed; // @synthesize hasReportRealTimeValidExposed=_hasReportRealTimeValidExposed;
@property(nonatomic) _Bool hasReportRealTimeExposed; // @synthesize hasReportRealTimeExposed=_hasReportRealTimeExposed;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) unsigned int showFinder; // @synthesize showFinder=_showFinder;
@property(nonatomic) unsigned int styleInfo; // @synthesize styleInfo=_styleInfo;
@property(nonatomic) unsigned int cardSequenceIdx; // @synthesize cardSequenceIdx=_cardSequenceIdx;
@property(copy, nonatomic) NSString *finderId; // @synthesize finderId=_finderId;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *finderFeedObjectId; // @synthesize finderFeedObjectId=_finderFeedObjectId;
@property(nonatomic) unsigned int actType; // @synthesize actType=_actType;
@property(nonatomic) unsigned int autoPlayTime; // @synthesize autoPlayTime=_autoPlayTime;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *resortBuffer; // @synthesize resortBuffer=_resortBuffer;
@property(copy, nonatomic) NSString *rankSessionId; // @synthesize rankSessionId=_rankSessionId;
@property(nonatomic) unsigned int weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSString *wordingReportInfo; // @synthesize wordingReportInfo=_wordingReportInfo;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) unsigned int subPos; // @synthesize subPos=_subPos;
@property(copy, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(copy, nonatomic) NSString *aggregationUrl; // @synthesize aggregationUrl=_aggregationUrl;
@property(copy, nonatomic) NSString *aggregationTitle; // @synthesize aggregationTitle=_aggregationTitle;
@property(copy, nonatomic) NSString *recExtraData; // @synthesize recExtraData=_recExtraData;
@property(copy, nonatomic) NSString *recInfo; // @synthesize recInfo=_recInfo;
@property(nonatomic) unsigned int recStyle; // @synthesize recStyle=_recStyle;
@property(nonatomic) unsigned int recRk; // @synthesize recRk=_recRk;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(copy, nonatomic) NSString *exptType; // @synthesize exptType=_exptType;
@property(copy, nonatomic) NSString *recReason; // @synthesize recReason=_recReason;
@property(nonatomic) unsigned long long recId; // @synthesize recId=_recId;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) unsigned int isPayContent; // @synthesize isPayContent=_isPayContent;
@property(nonatomic) unsigned int isOftenReadBiz; // @synthesize isOftenReadBiz=_isOftenReadBiz;
@property(nonatomic) unsigned int isLargeCover; // @synthesize isLargeCover=_isLargeCover;
@property(nonatomic) unsigned int isClick; // @synthesize isClick=_isClick;
@property(copy, nonatomic) NSString *itemInfoStr; // @synthesize itemInfoStr=_itemInfoStr;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int isNewMsg; // @synthesize isNewMsg=_isNewMsg;
@property(nonatomic) unsigned int isStar; // @synthesize isStar=_isStar;
@property(nonatomic) unsigned long long exposeTimeStampInMs; // @synthesize exposeTimeStampInMs=_exposeTimeStampInMs;
@property(nonatomic) unsigned int exposeTimeStamp; // @synthesize exposeTimeStamp=_exposeTimeStamp;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int exposeRatio; // @synthesize exposeRatio=_exposeRatio;
@property(nonatomic) _Bool isValidExpose; // @synthesize isValidExpose=_isValidExpose;
@property(nonatomic) unsigned int isExpandDafault; // @synthesize isExpandDafault=_isExpandDafault;
@property(nonatomic) unsigned int expandState; // @synthesize expandState=_expandState;
@property(nonatomic) unsigned int exposeBrowseState; // @synthesize exposeBrowseState=_exposeBrowseState;
@property(nonatomic) unsigned int exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned int exposePos; // @synthesize exposePos=_exposePos;
@property(nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
@property(nonatomic) unsigned int idx; // @synthesize idx=_idx;
@property(nonatomic) unsigned int mid; // @synthesize mid=_mid;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
- (id)initWithRecommendAppMsgViewModel:(id)arg1 sectionIndex:(unsigned long long)arg2 newMsgSequenceId:(unsigned long long)arg3 curTime:(unsigned int)arg4 curTimeInMs:(unsigned long long)arg5;
- (id)initWithBTCanvasMsgSectionData:(id)arg1 sectionIndex:(unsigned long long)arg2 newMsgSequenceId:(unsigned long long)arg3 curTime:(unsigned int)arg4 curTimeInMs:(unsigned long long)arg5;
- (id)initWithItemViewModel:(id)arg1 sectionIndex:(unsigned long long)arg2 newMsgSequenceId:(unsigned long long)arg3 curTime:(unsigned int)arg4 curTimeInMs:(unsigned long long)arg5 isStar:(_Bool)arg6;

@end

