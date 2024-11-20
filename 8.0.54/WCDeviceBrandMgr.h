//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class BlueManager, NSMutableArray, NSMutableDictionary, NSObject, NSString, WCDeviceAuthLogic, WCDeviceM7Logic, WCDeviceNetworkLogicMgr, WCDeviceSendDataToManufacturSvrLogic, WCDeviceWifiStateLogic, WCHKActivitySummaryLogic, WCHKWorkoutLogic;
@protocol OS_dispatch_queue;

@interface WCDeviceBrandMgr
{
    WCDeviceAuthLogic *_authLogic;
    WCDeviceSendDataToManufacturSvrLogic *_sendDataLogic;
    WCDeviceNetworkLogicMgr *_networkLogic;
    WCDeviceWifiStateLogic *_wifiStateLogic;
    unsigned int _scanMode;
    unsigned int _lastSyncModeScanTime;
    unsigned int _canTimingSyncTime;
    unsigned int _lastUploadStepCount;
    unsigned int _lastUploadHKStepCount;
    unsigned int _lastUploadM7StepCount;
    unsigned int _uploadingHKStepCount;
    unsigned int _uploadingM7StepCount;
    NSMutableDictionary *_devMaxSeqDic;
    long long _lastReportBTStateTime;
    _Bool _m_isScanning;
    int _m_appState;
    unsigned int _m_lastGetBoundDevTime;
    int _m_uploadStepScene;
    BlueManager *m_blueMgr;
    NSMutableDictionary *m_devices;
    NSMutableArray *m_tasks;
    NSMutableArray *m_bindingDevices;
    NSObject<OS_dispatch_queue> *_dataQueue;
    WCHKWorkoutLogic *_mWorkoutLogic;
    WCDeviceM7Logic *_m7Logic;
    WCHKActivitySummaryLogic *_mActivitySummaryLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCHKActivitySummaryLogic *mActivitySummaryLogic; // @synthesize mActivitySummaryLogic=_mActivitySummaryLogic;
@property(retain, nonatomic) WCDeviceM7Logic *m7Logic; // @synthesize m7Logic=_m7Logic;
@property(retain, nonatomic) WCHKWorkoutLogic *mWorkoutLogic; // @synthesize mWorkoutLogic=_mWorkoutLogic;
@property(nonatomic) int m_uploadStepScene; // @synthesize m_uploadStepScene=_m_uploadStepScene;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property(nonatomic) unsigned int m_lastGetBoundDevTime; // @synthesize m_lastGetBoundDevTime=_m_lastGetBoundDevTime;
@property(nonatomic) _Bool m_isScanning; // @synthesize m_isScanning=_m_isScanning;
@property(nonatomic) int m_appState; // @synthesize m_appState=_m_appState;
@property(retain, nonatomic) NSMutableArray *m_bindingDevices; // @synthesize m_bindingDevices;
@property(retain, nonatomic) NSMutableArray *m_tasks; // @synthesize m_tasks;
@property(retain, nonatomic) NSMutableDictionary *m_devices; // @synthesize m_devices;
@property(retain, nonatomic) BlueManager *m_blueMgr; // @synthesize m_blueMgr;
- (void)onQuerySummaryActivityWithObjects:(id)arg1;
- (void)onQueryWorkoutActivityWithObjects:(id)arg1;
- (_Bool)canUploadWatchData;
- (_Bool)getHKWorkoutAuthorizationStatus;
- (_Bool)getHKAuthorizationStatus;
- (void)startSync:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)onWCDeviceAccountBound:(id)arg1;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (void)onUploadSportRecordReponse:(id)arg1 success:(int)arg2;
- (void)onGetSportDeviceListResponse:(id)arg1 dataSourceFaqURL:(id)arg2 watchDataSourceFaqURL:(id)arg3 ErrorCode:(int)arg4;
- (void)onSendWCDevicesGetOperTicketResponse:(id)arg1 reqTicketList:(id)arg2 ErrorCode:(int)arg3;
- (void)onBatchSearchWCDeviceResponse:(id)arg1 Scene:(int)arg2 ErrorCode:(int)arg3;
- (void)onSendSearchBLEHardDevice:(id)arg1 device:(id)arg2;
- (void)onSendSearchWifiHardDevice:(id)arg1 extData:(id)arg2;
- (void)onSearchWCDeviceResponse:(id)arg1;
- (void)onWCDeviceGetBoundDevicesResponse:(id)arg1;
- (void)onSendWCDeviceUnbindResponse:(id)arg1 deviceId:(id)arg2 bAllUnbind:(_Bool)arg3 Error:(id)arg4;
- (void)onSendWCDeviceBindResponse:(id)arg1 Ticket:(id)arg2 Error:(id)arg3;
- (void)onUpdateMyDeviceAttrResponse:(id)arg1 Error:(int)arg2;
- (void)onUploadDeviceStepReponse:(id)arg1 stepCount:(unsigned int)arg2 HKStepCount:(unsigned int)arg3 M7StepCount:(unsigned int)arg4 sourceWhiteList:(id)arg5 ErrorCode:(int)arg6;
- (unsigned int)getLastHealthkitStep;
- (unsigned int)getLastM7Step;
- (void)onGotDeviceStepObject:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onhandleWifiStateUpdateMsgEnd:(id)arg1 Status:(unsigned int)arg2;
- (void)onHandleMsgEnd:(id)arg1 ErrCode:(int)arg2;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 RespTask:(id)arg3 SessionKey:(id)arg4;
- (void)willSuspend;
- (void)willEnterForeground;
- (void)willResignActive;
- (_Bool)isSendTo3rdServer:(id)arg1 ForType:(int)arg2;
- (_Bool)isSendToH5:(id)arg1 ForType:(int)arg2;
- (long long)getBleDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (long long)getEaDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (long long)getDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (long long)sendPushData:(id)arg1 ToDevice:(id)arg2 andDeviceType:(id)arg3 withType:(int)arg4;
- (void)sendPushDataToDevice:(id)arg1;
- (id)__getTimeString;
- (int)__channelConnectStateToChannelState:(int)arg1;
- (id)__findChannelByChannelId:(long long)arg1;
- (id)__findDeviceByDeviceId:(long long)arg1;
- (long long)__findDisconnectingDeviceIdByChannelId:(long long)arg1;
- (long long)__findDeviceIdByChannelId:(long long)arg1;
- (void *)__unpackPbData:(unsigned short)arg1:(const struct AutoBuffer *)arg2;
- (void)__stopChannel:(long long)arg1:(long long)arg2;
- (void)__onSessionCreated:(long long)arg1:(long long)arg2:(long long)arg3;
- (_Bool)c2objc_accessoryResp2Buf:(long long)arg1:(struct AutoBuffer *)arg2;
- (_Bool)c2objc_accessoryPushReq2Buf:(long long)arg1:(struct AutoBuffer *)arg2;
- (void)c2objc_onAccessoryRecvPack:(long long)arg1:(unsigned short)arg2:(unsigned short)arg3:(const struct AutoBuffer *)arg4:(int)arg5;
- (void)c2objc_onAccessoryChannelConnectStateChanged:(long long)arg1:(int)arg2:(int)arg3:(int)arg4;
- (void)c2objc_onAccessoryCmdEnd:(long long)arg1:(int)arg2:(int)arg3:(const char *)arg4;
- (_Bool)c2objc_sendData:(const struct AutoBuffer *)arg1 toBluetooth:(long long)arg2;
- (_Bool)c2objc_closeBluetoothSession:(long long)arg1;
- (_Bool)c2objc_connectBluetoothSession:(long long)arg1;
- (_Bool)c2objc_createBluetoothSessionByDeviceId:(long long)arg1 andChannelId:(long long)arg2;
- (void)onBlueProfilePedometerTargetWrote:(long long)arg1;
- (void)onBlueProfilePedometerTargetUpdated:(long long)arg1 Step:(int)arg2;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onStateChange:(int)arg1;
- (void)onSessionClosed:(long long)arg1;
- (void)onSessionDataAvailable:(long long)arg1;
- (void)onSessionWrote:(long long)arg1;
- (void)onSessionError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionConnectError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionConnected:(long long)arg1;
- (void)onDeviceLost:(long long)arg1;
- (void)onDeviceFound:(long long)arg1 WithExtData:(id)arg2;
- (void)onDeviceFound:(long long)arg1;
- (void)handleWCDeviceReq:(long long)arg1 Seq:(unsigned short)arg2 CmdID:(unsigned short)arg3 Req:(const void *)arg4;
- (_Bool)checkDeviceReqValidity:(long long)arg1 Seq:(unsigned short)arg2;
- (void)sendDecodeErrorToDevice:(long long)arg1;
- (void)sendSwitchBackgroundPushWithOpToDevice:(int)arg1;
- (id)genInitRespTask:(int)arg1 DID:(unsigned long long)arg2 Seq:(unsigned short)arg3:(struct _MmBp__InitRequest *)arg4:(struct AutoBuffer *)arg5;
- (void)handleWCDeviceCmdEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (void)uploadM7OrHealthKitStepCount:(_Bool)arg1 scene:(int)arg2;
- (void)p_tryUploadM7OrHealthKitStepCount:(_Bool)arg1 scene:(int)arg2;
- (void)showAuthIfNeeded:(_Bool)arg1 scene:(int)arg2;
- (void)tryUploadM7OrHealthKitStepCount:(_Bool)arg1 scene:(int)arg2;
- (void)tryUploadStepOnSourceChange;
- (void)tryUploadStepOnObserver;
- (int)getWCDeviceWifiState:(id)arg1;
- (void)subscribeWifiStateUpdateFor:(id)arg1 ReqType:(unsigned int)arg2;
- (void)sendGetSportDeviceListReq;
- (void)sendSearchBLEHardDevice:(id)arg1;
- (void)sendSearchWifiHardDeviceReq:(id)arg1;
- (void)sendUpdateMyDeviceAttrReq:(id)arg1 alias:(id)arg2 isMain:(unsigned int)arg3;
- (void)sendUploadBlueProfileStepReq:(id)arg1 stepCount:(unsigned int)arg2;
- (void)sendWCDevicesGetOperTicketRequest:(id)arg1 Filter:(id)arg2;
- (void)batchSearchWCDeviceByDevice:(id)arg1 Filter:(id)arg2 Secene:(int)arg3;
- (void)sendWCDeviceGetBoundDevicesRequest;
- (void)sendWCDeviceUnbindRequestWithDeviceType:(id)arg1 deviceId:(id)arg2;
- (void)sendWCDeviceUnbindRequest:(id)arg1;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2 SubscribeFlag:(unsigned int)arg3;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2;
- (void)stopTask:(long long)arg1;
- (int)startTask:(id)arg1;
- (void)switchDeviceMode:(_Bool)arg1 DID:(long long)arg2 EnterOrExitChatView:(_Bool)arg3;
- (_Bool)isDeviceAuthed:(long long)arg1;
- (_Bool)isMyMobileSupportBLE;
- (void)enableBluetooth;
- (int)getBlueToothState;
- (int)getChannelState:(long long)arg1;
- (id)getDeviceMac:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (void)stopChannel:(long long)arg1;
- (int)startChannel:(long long)arg1;
- (void)stopSyncModeDevice:(id)arg1;
- (void)stopScan;
- (void)stopAutoSyncModeScan;
- (void)autoSyncUploadStepOnLaunch;
- (void)startAutoSyncModeScan;
- (void)uploadStepOnLaunch;
- (_Bool)canStartAutoSync;
- (void)stopTimingSyncModeScan;
- (void)startTimingSync;
- (_Bool)canStartTimingSync;
- (unsigned int)getTimingSyncCurrentTime;
- (_Bool)canScanBlueToothDevice;
- (_Bool)needScanBlueToothDevice;
- (_Bool)hasM7Device;
- (_Bool)hasBlueToothDevice;
- (int)scan:(id)arg1;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (void)closeProfile:(long long)arg1;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (int)scanProfile;
- (void)tryReportBlueState;
- (id)getBlueMgr;
- (void)exchange:(id)arg1;
- (void)dealloc;
- (void)delayInit;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

