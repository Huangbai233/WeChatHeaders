//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSRecursiveLock, NSString, WCTDatabase;

@interface EnterpriseMsgDB
{
    WCTDatabase *_db;
    NSMutableSet *_setCreatedTable;
    NSRecursiveLock *_lock;
    NSString *_path;
}

- (void).cxx_destruct;
- (void)clearFileOfMsg:(id)arg1;
- (id)internalGetMsgDBItem:(id)arg1 uiLocalID:(unsigned int)arg2;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (unsigned int)GetImgOrVideoOrAppMsgMinCreateTime:(id)arg1;
- (void)deleteDB;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (_Bool)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (_Bool)ModMsgStatus:(id)arg1 LocalId:(unsigned int)arg2 MsgStatus:(unsigned int)arg3 SvrId:(unsigned long long)arg4;
- (_Bool)ModMsgStatus:(id)arg1 LocalID:(unsigned int)arg2 MsgStatus:(unsigned int)arg3;
- (_Bool)MergeImgStatus:(id)arg1 LocalID:(unsigned int)arg2 ImgStatus:(unsigned int)arg3 MsgStatus:(unsigned int)arg4;
- (_Bool)MergeImgStatus:(id)arg1 LocalID:(unsigned int)arg2 ImgStatus:(unsigned int)arg3;
- (_Bool)ClearUnReadForSync:(id)arg1;
- (_Bool)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (unsigned int)GetUnReadCountInChat:(id)arg1 Since:(unsigned int)arg2;
- (unsigned int)GetUnReadCountInChat:(id)arg1;
- (id)GetFirstUnreadMsg:(id)arg1;
- (unsigned int)GetLastMsgCreateTime:(id)arg1;
- (id)GetLastMsg:(id)arg1;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetMsg:(id)arg1 uiLocalID:(unsigned int)arg2;
- (id)GetMsg:(id)arg1 cliMsgId:(id)arg2;
- (_Bool)addMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)clearCreatedTableCache;
- (void)removeCreatedTableCache:(id)arg1;
- (void)addCreatedTableCache:(id)arg1;
- (_Bool)isTableCreated:(id)arg1;
- (void)setupCreatedTableCache;
- (void)dropTable:(id)arg1;
- (_Bool)createTable:(id)arg1;
- (id)getChatTable:(id)arg1;
- (id)getChatTableName:(id)arg1;
- (void)closeDB;
- (void)dealloc;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (id)initWithPath:(id)arg1;

@end

