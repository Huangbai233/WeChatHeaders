//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class JSEvent, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, WCDeviceJSApiBatchSearchLogicHelp;
@protocol WXCustomWebViewControllerProtocol;

@interface WCDeviceJSApiMgr
{
    _Bool m_hasInit;
    _Bool m_hasInitLan;
    _Bool m_hasStartScan;
    _Bool m_hasStartScanLan;
    int m_enterScence;
    MMUIViewController<WXCustomWebViewControllerProtocol> *m_currWebViewController;
    NSString *m_brandUserName;
    NSMutableArray *m_deviceSearchedList;
    WCDeviceJSApiBatchSearchLogicHelp *m_batchSearchDeviceLogicHelp;
    NSMutableArray *m_deviceTicketList;
    NSMutableArray *m_deviceConnectStateList;
    long long m_sendDataJsTaskId;
    JSEvent *m_sendDataJsEvent;
    NSMutableDictionary *m_directions;
    NSMutableDictionary *m_taskEventPair;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_taskEventPair; // @synthesize m_taskEventPair;
@property(nonatomic) int m_enterScence; // @synthesize m_enterScence;
@property(retain, nonatomic) NSMutableDictionary *m_directions; // @synthesize m_directions;
@property(retain, nonatomic) JSEvent *m_sendDataJsEvent; // @synthesize m_sendDataJsEvent;
@property(nonatomic) long long m_sendDataJsTaskId; // @synthesize m_sendDataJsTaskId;
@property(retain, nonatomic) NSMutableArray *m_deviceConnectStateList; // @synthesize m_deviceConnectStateList;
@property(retain, nonatomic) NSMutableArray *m_deviceTicketList; // @synthesize m_deviceTicketList;
@property(retain, nonatomic) WCDeviceJSApiBatchSearchLogicHelp *m_batchSearchDeviceLogicHelp; // @synthesize m_batchSearchDeviceLogicHelp;
@property(retain, nonatomic) NSMutableArray *m_deviceSearchedList; // @synthesize m_deviceSearchedList;
@property(nonatomic) _Bool m_hasStartScanLan; // @synthesize m_hasStartScanLan;
@property(nonatomic) _Bool m_hasStartScan; // @synthesize m_hasStartScan;
@property(nonatomic) _Bool m_hasInitLan; // @synthesize m_hasInitLan;
@property(nonatomic) _Bool m_hasInit; // @synthesize m_hasInit;
@property(retain, nonatomic) NSString *m_brandUserName; // @synthesize m_brandUserName;
@property(nonatomic) __weak MMUIViewController<WXCustomWebViewControllerProtocol> *m_currWebViewController; // @synthesize m_currWebViewController;
- (void)onWCDeviceAccountBound:(id)arg1;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (void)onWCLanDeviceReceiveNotify:(id)arg1 DeviceId:(id)arg2 Dictionary:(id)arg3;
- (void)onWCLanDeviceConnectStateNotify:(id)arg1 DeviceId:(id)arg2 StateCode:(int)arg3;
- (void)onSendDataToWCLanDevice:(long long)arg1 ErrCode:(int)arg2;
- (void)onTaskPerformed:(long long)arg1 ErrCode:(int)arg2;
- (void)onReceiveWCLanDeviceDisc:(id)arg1;
- (void)onWifiHardDeviceSearch:(id)arg1 respData:(id)arg2 ExtData:(id)arg3;
- (void)onWCDeviceSendDataToWebView:(id)arg1 data:(id)arg2;
- (void)onSendWCDevicesGetOperTicketResponse:(id)arg1 reqTicketList:(id)arg2 ErrorCode:(int)arg3;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)onWCDeviceInitEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceChannelStateChanged:(long long)arg1:(int)arg2:(int)arg3;
- (void)onWCDeviceLost:(long long)arg1;
- (void)handleWCDeviceConnectStateChanged:(long long)arg1 newConnectState:(int)arg2;
- (void)onWCDeviceFoundAddExtData:(long long)arg1 extData:(id)arg2;
- (void)onWCDeviceFoundForJSAPI:(long long)arg1;
- (void)onWCDeviceSendDataEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (void)notifyWebViewScanResultForLan:(id)arg1;
- (void)notifyWebViewScanResult:(id)arg1;
- (void)onWCDeviceJSApiBatchSearchResp:(id)arg1;
- (void)addNewSearchDeviceWithDid:(long long)arg1 extData:(id)arg2;
- (_Bool)canHdSendData:(id)arg1;
- (_Bool)canOpenWXDeviceLib:(id)arg1;
- (id)getExtraInfoUserName:(id)arg1;
- (_Bool)isSendDataDirectionToServer:(id)arg1;
- (_Bool)isSendDataDirectionToH5:(id)arg1;
- (_Bool)isSendDataDirectionSet:(id)arg1;
- (void)setSendDataDirection:(unsigned int)arg1 ForDevice:(id)arg2;
- (void)sendData:(id)arg1 ToDevice:(id)arg2 CallBack:(id)arg3;
- (void)getDeviceInfos:(id)arg1;
- (void)getDeviceTicket:(id)arg1 operType:(unsigned int)arg2 CallBack:(id)arg3;
- (void)disConnectDevice:(id)arg1 CallBack:(id)arg2;
- (void)connectDevice:(id)arg1 CallBack:(id)arg2;
- (void)stopScanDevice:(id)arg1;
- (void)startScanDevice:(id)arg1;
- (void)closeWXDeviceLib:(id)arg1;
- (void)openWXDeviceLib:(id)arg1 CallBack:(id)arg2;
- (void)sendDataToBlue:(id)arg1 ToDevice:(id)arg2 CallBack:(id)arg3;
- (void)sendDataToLan:(id)arg1 ToDevice:(id)arg2 CallBack:(id)arg3;
- (void)getDeviceInfosForBlue:(id)arg1;
- (void)getDeviceInfosForLan:(id)arg1;
- (void)disConnectDeviceForBlue:(id)arg1 CallBack:(id)arg2;
- (void)disConnectDeviceForLan:(id)arg1 CallBack:(id)arg2;
- (void)connectDeviceForBlue:(id)arg1 CallBack:(id)arg2;
- (void)connectDeviceForLan:(id)arg1 CallBack:(id)arg2;
- (void)stopScanDeviceForBlue:(id)arg1;
- (void)stopScanDeviceForLan:(id)arg1;
- (void)startScanDeviceForBlue:(id)arg1;
- (void)startScanDeviceForLan:(id)arg1;
- (void)closeWXDeviceLibResource;
- (void)closeWXDeviceLibForLan;
- (void)closeWXDeviceLibForBlue;
- (id)exchangeDeviceState2Str:(int)arg1;
- (void)notifyWebViewBindStateChange:(id)arg1 bindState:(_Bool)arg2;
- (void)notifyWebViewConnectStateChange:(id)arg1 connectState:(int)arg2;
- (int)getDeviceState:(long long)arg1;
- (void)initWCDeviceLibResource;
- (void)__resetHdJsSession;
- (_Bool)isLanType:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

