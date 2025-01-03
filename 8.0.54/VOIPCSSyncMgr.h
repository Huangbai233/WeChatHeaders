//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMTimer, NSData, NSMutableArray, NSRecursiveLock, NSString;

@interface VOIPCSSyncMgr
{
    _Bool mIsWeakSessionActive;
    _Bool mIsSessionActive;
    _Bool mIsNeedSync;
    long long mRoomId;
    long long mRoomKey;
    _Bool m_isDoingSync;
    int cancelInviteStatus;
    unsigned int mCSNotifySeq;
    unsigned int m_syncTimerCnt;
    unsigned int m_syncTimerStopValue;
    NSData *mKeyBuf;
    NSMutableArray *mOplogList;
    NSRecursiveLock *mOplogLock;
    MMTimer *m_syncTimer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_syncTimerStopValue; // @synthesize m_syncTimerStopValue;
@property(nonatomic) unsigned int m_syncTimerCnt; // @synthesize m_syncTimerCnt;
@property(retain, nonatomic) MMTimer *m_syncTimer; // @synthesize m_syncTimer;
@property(retain, nonatomic) NSRecursiveLock *mOplogLock; // @synthesize mOplogLock;
@property(retain, nonatomic) NSMutableArray *mOplogList; // @synthesize mOplogList;
@property(retain, nonatomic) NSData *mKeyBuf; // @synthesize mKeyBuf;
- (void)StopSession;
- (void)PushRelayData:(id)arg1;
- (void)PushControlStatus:(unsigned int)arg1;
- (void)SyncByNotifyWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)StartSessionWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)StartWeakSessionWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)forceCheck_next_sync;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)StopSyncTimer;
- (void)dealloc;
- (id)init;
- (int)getSitemStatus;
- (long long)getRoomKey;
- (long long)getRoomId;
- (void)onServiceClearData;
- (void)ClearOplog;
- (void)AddOplog:(unsigned int)arg1 data:(id)arg2;
- (void)SendCSSyncRequestFor:(id)arg1 withSelector:(unsigned int)arg2;
- (void)SendSyncRequestFor:(id)arg1 withSelector:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)retriveKeyFrom:(id)arg1 StatusKey:(unsigned int *)arg2 RelayKey:(unsigned int *)arg3 ConnectingKey:(unsigned int *)arg4;
- (_Bool)isSyncKeyNew:(id)arg1;
- (_Bool)isCSNotifySeqNew:(unsigned int)arg1;
- (void)check_next_sync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

