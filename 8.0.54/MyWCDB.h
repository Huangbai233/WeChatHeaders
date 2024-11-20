//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MyWCDB : NSObject
{
    WCTDatabase *m_db;
    int m_dataCodingType;
    WCTTable *m_tableDataItem;
    WCTTable *m_tableMessage;
    WCTTable *m_tableStrangerMessage;
    WCTTable *m_tableTimeline;
    WCTTable *m_tableHomePage;
    WCTTable *m_tableCover;
    WCTTable *m_tableBgImgLiked;
    WCTTable *m_tableIdOwner;
    WCTTable *m_tableTimelineGroupHint;
    WCTTable *m_tableTimelineFeedSegment;
    WCTTable *m_tableTimelineMicroMerchantFeed;
    WCTTable *m_tableMicroMerchantFeedRelation;
    WCTTable *m_tableMicroMerchantInteraction;
    WCTTable *m_tableStarGuideRecord;
    WCTTable *m_tableFinderShareRecord;
    WCTTable *m_tableNewLifeShareRecord;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_tableNewLifeShareRecord; // @synthesize m_tableNewLifeShareRecord;
@property(retain, nonatomic) WCTTable *m_tableFinderShareRecord; // @synthesize m_tableFinderShareRecord;
@property(retain, nonatomic) WCTTable *m_tableStarGuideRecord; // @synthesize m_tableStarGuideRecord;
@property(retain, nonatomic) WCTTable *m_tableMicroMerchantInteraction; // @synthesize m_tableMicroMerchantInteraction;
@property(retain, nonatomic) WCTTable *m_tableTimelineMicroMerchantFeed; // @synthesize m_tableTimelineMicroMerchantFeed;
@property(retain, nonatomic) WCTTable *m_tableMicroMerchantFeedRelation; // @synthesize m_tableMicroMerchantFeedRelation;
@property(retain, nonatomic) WCTTable *m_tableTimelineFeedSegment; // @synthesize m_tableTimelineFeedSegment;
@property(retain, nonatomic) WCTTable *m_tableTimelineGroupHint; // @synthesize m_tableTimelineGroupHint;
@property(retain, nonatomic) WCTTable *m_tableIdOwner; // @synthesize m_tableIdOwner;
@property(retain, nonatomic) WCTTable *m_tableBgImgLiked; // @synthesize m_tableBgImgLiked;
@property(retain, nonatomic) WCTTable *m_tableCover; // @synthesize m_tableCover;
@property(retain, nonatomic) WCTTable *m_tableHomePage; // @synthesize m_tableHomePage;
@property(retain, nonatomic) WCTTable *m_tableTimeline; // @synthesize m_tableTimeline;
@property(retain, nonatomic) WCTTable *m_tableStrangerMessage; // @synthesize m_tableStrangerMessage;
@property(retain, nonatomic) WCTTable *m_tableMessage; // @synthesize m_tableMessage;
@property(retain, nonatomic) WCTTable *m_tableDataItem; // @synthesize m_tableDataItem;
@property(nonatomic) int m_dataCodingType; // @synthesize m_dataCodingType;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (id)updateNewLifeShareRecordFromLocalDataItem:(id)arg1 toServerDataItem:(id)arg2;
- (id)updateNewLifeShareRecordForDataItem:(id)arg1 scene:(long long)arg2 action:(long long)arg3;
- (id)getNewLifeShareRecordForDataItem:(id)arg1 scene:(long long)arg2;
- (id)createNewLifeShareRecordTableIfNeeded;
- (id)updateFinderShareRecordFromLocalDataItem:(id)arg1 toServerDataItem:(id)arg2;
- (id)updateFinderShareRecordForDataItem:(id)arg1 scene:(long long)arg2 action:(long long)arg3;
- (id)getFinderShareRecordForDataItem:(id)arg1 scene:(long long)arg2;
- (id)createFinderShareRecordTableIfNeeded;
- (id)updatePostShareRecordWithTable:(id)arg1 fromLocalDataItem:(id)arg2 toServerDataItem:(id)arg3;
- (id)updatePostShareRecordWithTable:(id)arg1 dataItem:(id)arg2 scene:(long long)arg3 action:(long long)arg4;
- (id)getPostShareRecordWithTable:(id)arg1 dataItem:(id)arg2 scene:(long long)arg3;
- (id)updateStarGuideRecordFromLocalDataItem:(id)arg1 toServerDataItem:(id)arg2;
- (id)updateStarGuideRecordForDataItem:(id)arg1 scene:(long long)arg2 action:(long long)arg3;
- (id)getStarGuideRecordForDataItem:(id)arg1 scene:(long long)arg2;
- (id)createStarGuideRecordTableIfNeeded;
- (id)getWSInteractionWithExpression:(struct Expression)arg1;
- (id)getWSInteractionWithType:(unsigned long long)arg1 minTime:(unsigned long long)arg2 maxTime:(unsigned long long)arg3 isFold:(_Bool)arg4;
- (id)getWSInteractionWithType:(unsigned long long)arg1 isFold:(_Bool)arg2;
- (id)getWSInteractionsWithUsername:(id)arg1 interactionType:(unsigned long long)arg2 minTime:(unsigned long long)arg3 maxTime:(unsigned long long)arg4 isFold:(_Bool)arg5;
- (_Bool)clearAllWSInteractions;
- (_Bool)clearWSInteractionWithUsername:(id)arg1 isFold:(_Bool)arg2;
- (_Bool)clearWSInteractionWithUsernames:(id)arg1 isFold:(_Bool)arg2;
- (_Bool)recordWSInteractionType:(unsigned long long)arg1 dataItem:(id)arg2 time:(unsigned long long)arg3 isFold:(_Bool)arg4 scene:(unsigned long long)arg5;
- (id)getIndexInTimeline:(id)arg1;
- (id)getTimelineDataItemsForUsername:(id)arg1 withMaxCount:(long long)arg2;
- (id)getTimelineDBObjectsForUsername:(id)arg1 withMaxCount:(long long)arg2;
- (id)_getTimelineDBObjectsForUsername:(id)arg1 withMaxCount:(long long)arg2;
- (void)updateMsgDelStat:(_Bool)arg1 forAdSnsObj:(id)arg2 timeLimit:(unsigned int)arg3;
- (void)updateMsgDelStat:(_Bool)arg1 forSnsObjID:(unsigned long long)arg2 timeLimit:(unsigned int)arg3;
- (void)updateMsgDelStat:(_Bool)arg1 forMsg:(id)arg2 timeLimit:(unsigned int)arg3;
- (void)updateMsgDelStat:(_Bool)arg1 forAdSns:(id)arg2;
- (void)updateMsgDelStat:(_Bool)arg1 forSns:(id)arg2;
- (void)updateMsgDelStat:(_Bool)arg1 forMsgs:(id)arg2;
- (_Bool)setOwner:(id)arg1 withItemID:(id)arg2;
- (id)getOwnerByItemID:(id)arg1;
- (_Bool)deleteAllTogetherDataItemsForUsername:(id)arg1;
- (_Bool)updateTogetherForUsername:(id)arg1 dataItems:(id)arg2;
- (id)getTogetherDataItemsForUsername:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)internalCreateTogetherTableForUsername:(id)arg1;
- (_Bool)createTogetherTableForUsername:(id)arg1;
- (id)togetherTableWithTableName:(id)arg1;
- (id)togetherTableNameForUsername:(id)arg1;
- (void)setBGImgUnliked:(id)arg1 username:(id)arg2;
- (void)setBGImgLiked:(id)arg1 username:(id)arg2;
- (_Bool)isBGImgLiked:(id)arg1 username:(id)arg2;
- (_Bool)updateCoverWithDataItem:(id)arg1;
- (id)coverDataItemWithUsername:(id)arg1;
- (id)getDataItemsByIds:(id)arg1;
- (id)tryGetDataItemByItemID:(id)arg1;
- (_Bool)tryExecuteUpdateAgain:(const void *)arg1 toObject:(id)arg2 where:(const void *)arg3 afterReCreateTable:(id)arg4 userName:(id)arg5;
- (_Bool)updateAllCacheWithDataItem:(id)arg1 useTransaction:(_Bool)arg2;
- (id)getMaxID;
- (_Bool)deleteRowInWCIndexForUser:(id)arg1 AfterItemID:(id)arg2;
- (_Bool)deleteRowInWCIndexForUser:(id)arg1 ByItemID:(id)arg2;
- (_Bool)deleteRowInTimelineLimitCountWithOrderAsc:(long long)arg1;
- (_Bool)deleteRowInTimelineByItemID:(id)arg1;
- (id)getWCIndexDataItemListForUser:(id)arg1 withItemID:(id)arg2;
- (id)getPreviousDataItemListFromTable:(id)arg1 beforeItemID:(id)arg2 maxItemID:(id)arg3 maxCount:(long long)arg4;
- (id)getNextDataItemListFromTable:(id)arg1 afterItemID:(id)arg2 maxCount:(long long)arg3;
- (id)getWCIndexPreviousDataItemListForUser:(id)arg1 beforeItemID:(id)arg2 maxItemID:(id)arg3 maxCount:(long long)arg4;
- (id)getWCIndexNextDataItemListForUser:(id)arg1 afterItemID:(id)arg2 maxCount:(long long)arg3;
- (id)getWCIndexDataItemListForUser:(id)arg1 AfterItemID:(id)arg2 andMaxCount:(long long)arg3;
- (id)getWCTimeLineDataItemWithItemID:(id)arg1;
- (id)getWCTimeLineDataItemDictionaryByArrayItemID:(id)arg1;
- (id)getDataItemDictionaryFromTable:(id)arg1 arrayItemID:(id)arg2;
- (id)getLatestDataItem:(id)arg1;
- (id)getWCTimeLineDataItemListBefore:(id)arg1 maxItemId:(id)arg2 maxCount:(long long)arg3;
- (unsigned int)getWCTimeLineDataItemCount;
- (unsigned int)getWCTimeLineDataItemCount:(id)arg1 minId:(id)arg2;
- (id)getWCTimeLineDataItemListAfterItemID:(id)arg1 andMaxCount:(long long)arg2;
- (id)getFirstWCTimeLineDataItemAfterItemID:(id)arg1;
- (id)getDataItemListFromTable:(id)arg1 afterItemID:(id)arg2 limit:(int)arg3;
- (id)getFirstDataItemFromTable:(id)arg1 AfterItemID:(id)arg2;
- (_Bool)deleteAllIndexDataForUser:(id)arg1;
- (_Bool)deleteAllTimelineTableData;
- (_Bool)updateWCIndexForUser:(id)arg1 WithDatas:(id)arg2 AfterItemID:(id)arg3 ToItemID:(id)arg4;
- (_Bool)updateWCIndexForUser:(id)arg1 WithDatas:(id)arg2 AfterItemID:(id)arg3;
- (_Bool)updateMainTimelineTableWithDatas:(id)arg1 AfterItemID:(id)arg2 ToItemID:(id)arg3 wsGroups:(id)arg4;
- (_Bool)updateWCTimeLineTableWithDatas:(id)arg1 AfterItemID:(id)arg2 ToItemID:(id)arg3 wsGroups:(id)arg4;
- (_Bool)updateWCTimeLineTableWithDatas:(id)arg1 AfterItemID:(id)arg2 wsGroups:(id)arg3;
- (_Bool)updateTable:(id)arg1 WithDatas:(id)arg2 AfterItemID:(id)arg3 ToItemID:(id)arg4;
- (_Bool)updateTable:(id)arg1 WithDatas:(id)arg2 AfterItemID:(id)arg3;
- (id)getLatestTimelineRowDataInTable:(id)arg1;
- (id)getTimelineRowDataByTtemID:(id)arg1 InTable:(id)arg2;
- (int)getMaxGroupHintInTable:(id)arg1;
- (id)WCIndexTableForUserWithTableName:(id)arg1;
- (id)getStrangerMessagesOfItem:(id)arg1 partner:(id)arg2;
- (_Bool)addStrangerMessage:(id)arg1 toItem:(id)arg2;
- (_Bool)deleteAllMessages;
- (_Bool)deleteMessageByFeedId:(id)arg1;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)setAllWCMessagesRead;
- (_Bool)setWcMessageAllReadBeginWithId:(unsigned int)arg1;
- (_Bool)setWCMessageListRead:(id)arg1;
- (_Bool)setWCMessageRead:(id)arg1;
- (_Bool)addNewRawMessage:(id)arg1 hasRead:(_Bool)arg2;
- (id)getRawWCMessagesForClearLimit:(int)arg1 unReadOnly:(_Bool)arg2;
- (id)getWCMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getUnReadMessagesLimit:(int)arg1;
- (id)getUnreadWCMessages;
- (unsigned int)getUnReadMessageCount;
- (id)getAllWCMessages;
- (id)getLatestReadMessage;
- (id)getLatestMessage;
- (id)WCMessagesFromDBMessages:(id)arg1;
- (id)WCMessageFromDBMessage:(id)arg1;
- (_Bool)deleteWCDataItemByItemID:(id)arg1;
- (_Bool)setWCDataItem:(id)arg1 forItemID:(id)arg2;
- (id)getWCDataItemByItemID:(id)arg1;
- (id)createTable:(Class)arg1 name:(id)arg2;
- (_Bool)CreateMicroMerchantTable;
- (_Bool)CreateIdOwner;
- (_Bool)CreateBgImgLiked;
- (_Bool)CreateCoverTable;
- (_Bool)CreateWCIndexTableForUser:(id)arg1;
- (id)WCIndexTableNameForUser:(id)arg1;
- (id)internalCreateTimelineTable:(id)arg1;
- (_Bool)CreateWCTimeLineTable;
- (_Bool)CreateStrangerMessageTable;
- (_Bool)CreateMyWCMessageTable;
- (_Bool)CreateMyWCAttrTable;
- (_Bool)createTables;
- (void)dropTables:(id)arg1;
- (void)clearAllWCData;
- (void)clearAllTables;
- (void)closeDBBeforeInit;
- (void)closeDB;
- (_Bool)initDB;
- (_Bool)isUsingPBCoding;
- (void)setupExptConfigure;
- (void)dealloc;
- (id)init;
- (id)selectSegmentOfMaxGroupID;
- (id)getAllSegments:(unsigned int)arg1;
- (_Bool)updateSegment:(id)arg1 insertSegments:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (unsigned int)getMaxGroupHintID;
- (id)getMaxGroupHint;
- (_Bool)deleteGroupHint:(id)arg1;
- (id)selectGroupHintWithFeedId:(id)arg1;
- (_Bool)updateGroupHint:(id)arg1;
- (_Bool)insertGroupHint:(id)arg1;
- (_Bool)createGroupHintTable;
- (id)extraAllFeedIds:(id)arg1;
- (_Bool)clearNoUseSegments:(id)arg1;
- (void)clearSoftDeletedMicroMerchantFeeds;
- (_Bool)dropAllSegments;
- (_Bool)dropAllMicroMerchantItems;
- (_Bool)dropAllRelations;
- (id)getDistinctGroupIDWithFeedIds:(id)arg1;
- (id)getDistinctGroupIDFromBottom:(id)arg1 toTop:(id)arg2;
- (id)getMicroMerchantFeedsGroupFromBottom:(id)arg1 toTop:(id)arg2;
- (id)getMicroMerchantFeedsGroupWithPartWsFeedIds:(id)arg1;
- (id)getMicroMerchantDataItemsWithFeedId:(id)arg1;
- (_Bool)deleteMicroMerchantItemsOfGroup:(id)arg1;
- (id)getAllFeedsInRelationTableOfGroupId:(id)arg1 containDel:(_Bool)arg2;
- (id)getMicroMerchantDataItemsWithFeedIds:(id)arg1;
- (_Bool)deleteMicroMerchantDataItemById:(id)arg1;
- (_Bool)modMicroMerchantDataItem:(id)arg1;
- (_Bool)replaceMicroMerchantDataItem:(id)arg1 referenceGroup:(id)arg2;
- (_Bool)replaceMicroMerchantDataItems:(id)arg1 newWSGroup:(id)arg2;
- (id)getMicroMerchantFeedsGroupWithDistinctGroupID:(id)arg1;
- (_Bool)deleteMicroMerchanRelationOfGroup:(id)arg1;
- (_Bool)insertOrReplaceMicroMerchantRelation:(id)arg1 referenceTopDataItem:(id)arg2;
- (_Bool)deleteMicroMerchantRelationWithRangeCondition:(const void *)arg1;
- (_Bool)deleteMicroMerchantRelation:(id)arg1;
- (void)modMicroMerchantDataItemIfNeeded:(id)arg1;
- (void)deleteMicroMerchantFromTableIfNeed:(id)arg1 bottomID:(id)arg2 lastItemID:(id)arg3;
- (void)updateMicroMerchantToTableIfNeed:(id)arg1 wsGroups:(id)arg2;
- (void)createIndexesForTimelineTableWithRowCountLimit:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)runCleanTask:(unsigned int)arg1 maxCleanPerLoop:(unsigned int)arg2 commitThreshold:(unsigned int)arg3;
- (void)cleanupTimelineTableWithBlockOnceOp:(unsigned int)arg1 maxCleanPerLoop:(unsigned int)arg2 commitThreshold:(unsigned int)arg3 block:(CDUnknownBlockType)arg4;

@end

