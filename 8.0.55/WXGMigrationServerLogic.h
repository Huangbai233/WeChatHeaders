//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatMigrationHeartBeatMonitor, MMTimer, NSMutableArray, NSMutableDictionary, NSString, WXGBackupDataInfo, WXGBackupDataMgr, WXGChatLogProtoHandler, WXGLocalAreaCommunicationServer;
@protocol OS_dispatch_queue, WXGMigrationServerLogicDelegate;

@interface WXGMigrationServerLogic : NSObject
{
    NSObject<OS_dispatch_queue> *m_processLogicQueue;
    NSObject<OS_dispatch_queue> *m_getDataLogicQueue;
    _Bool m_bServerStop;
    _Bool m_bStartTransfer;
    int m_chatMigrationType;
    int m_otherSideChatMigrationVersion;
    long long m_otherSideSupportExt;
    ChatMigrationHeartBeatMonitor *m_heartBeatMonitor;
    MMTimer *m_sendHeartBeatTimer;
    double m_heartTimerCheckInterval;
    double m_transferDataStartTime;
    NSMutableArray *m_sendingArray;
    NSMutableDictionary *m_sessionNickDictionary;
    WXGBackupDataInfo *m_backupDataInfo;
    NSString *m_lastBackupSesionName;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    _Bool m_bFirstTag;
    WXGLocalAreaCommunicationServer *m_networkHandler;
    WXGChatLogProtoHandler *m_protoHandler;
    WXGBackupDataMgr *m_dataMgr;
    _Bool m_sendFinish;
    id <WXGMigrationServerLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WXGMigrationServerLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)p_notifyOnMainThreadCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)p_alertOnMainthread:(unsigned long long)arg1;
- (void)p_notifyOnMainthread:(unsigned long long)arg1;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatLate;
- (void)onHeartBeatOK;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)p_sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeat;
- (void)restSendHeartBeatTimer;
- (void)onServerTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (void)onServerDisconnect;
- (void)onServerConnected;
- (void)onServerReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_sendFinishRequest;
- (void)p_processDataInfoAndSendTag:(id)arg1;
- (void)p_sendBackupOutputToRemote:(id)arg1;
- (void)p_sendNextDataPushWithResponseID:(id)arg1;
- (void)p_sendLotOfDataPush;
- (void)p_sendRequestSession;
- (_Bool)sendData:(id)arg1;
- (id)p_resortSessionArray:(id)arg1;
- (void)p_inputDataAndStartDataMgrProduce;
- (_Bool)isSupportQuickMigration;
- (_Bool)isSupportTimeSelect;
- (_Bool)isSupportWXAM;
- (_Bool)isSupportBackupNewFeature;
- (void)p_processCancelRequestData:(id)arg1;
- (void)p_processHeartBeatResponseData:(id)arg1;
- (void)p_processHeartBeatRequestData:(id)arg1;
- (void)p_processBackupDataTagResponseData:(id)arg1;
- (void)p_processDataPushResponseData:(id)arg1;
- (void)p_processRequestSessionResponseData:(id)arg1;
- (void)p_processStartRequestData:(id)arg1;
- (void)p_processAuthenticateRequestData:(id)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
- (void)stopServerLogic;
- (void)startPeerServer;
- (void)startNetworkServer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

