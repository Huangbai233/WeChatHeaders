//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class Log_IMOperation, MemoryMappedKV, NSMutableArray, NSString, WCStatTimerHelper;

@interface SessionActionStatMgr
{
    NSMutableArray *_actionList;
    MemoryMappedKV *_actionStorage;
    _Bool _bDidEnterChatRoom;
    unsigned int _uiStayWebViewTime;
    WCStatTimerHelper *_oStatTimerHelper;
    struct map<unsigned long, NSMutableDictionary *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableDictionary *>>> _mapExpourseTypeToDic;
    Log_IMOperation *_Log_IMOperation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(_Bool)arg2;
- (void)reportLogIMOperation:(id)arg1;
- (id)strAppendKeyValue:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)addIMBehaviorContactOp:(id)arg1 contactOpType:(int)arg2;
- (void)addIMBehaviorContactExpose:(id)arg1 scene:(unsigned int)arg2;
- (void)reportMsgOperation:(id)arg1;
- (void)addIMBehaviorMsgOp:(unsigned int)arg1 appMsgInnerType:(unsigned int)arg2 msgOpType:(int)arg3;
- (void)startRecordIMOperation;
- (void)initIMOperation;
- (_Bool)needUploadIMOperationPB;
- (_Bool)needUploadIMOperationKV;
- (void)uploadActionList;
- (void)tryUploadActionList;
- (void)exitChatRoom:(id)arg1 beginTime:(unsigned int)arg2 unreadCount:(unsigned int)arg3;
- (void)recordStayWebViewTimeInMS:(unsigned long long)arg1;
- (void)enterChatRoom;
- (id)getPosterUserNameWithMsgWrap:(id)arg1;
- (id)getFromChatRoomWithMsgWrap:(id)arg1;
- (void)clearExposureMsgIdDic;
- (void)markExposuredWithMessageId:(unsigned long long)arg1 expourseType:(unsigned long long)arg2;
- (_Bool)hadExposuredWithMessageId:(unsigned long long)arg1 expourseType:(unsigned long long)arg2;
- (int)getSessionTypeWithContact:(id)arg1;
- (unsigned int)getMaxCacheLogCount;
- (unsigned int)getMaxCacheTime;
- (_Bool)tryLoadSessionActionCache;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

