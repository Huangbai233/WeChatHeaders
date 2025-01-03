//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCDeviceNetworkLogicMgrDelegate;

@interface WCDeviceNetworkLogicMgr
{
    id <WCDeviceNetworkLogicMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCDeviceNetworkLogicMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetSportDeviceListResponse:(id)arg1;
- (void)handleSearchBLEHardDeviceResponse:(id)arg1;
- (void)handleSearchWifiHardDeviceResponse:(id)arg1;
- (void)handleBatchSearchHardDeviceResponse:(id)arg1;
- (void)handleWCDeviceSearchResponse:(id)arg1;
- (void)handleWCDeviceGetBoundDevicesResponse:(id)arg1;
- (void)handleWCDeviceUnbindResponse:(id)arg1;
- (void)onBatchSearchHardDeviceResponse:(id)arg1 Request:(id)arg2;
- (void)onSearchDeviceResponse:(id)arg1 Request:(id)arg2;
- (void)onSendWCDeviceGetBoundDevicesResponse:(id)arg1 Request:(id)arg2;
- (void)onSendWCDeviceUnbindResponse:(id)arg1 Request:(id)arg2 HardDevice:(id)arg3 UserData:(id)arg4;
- (void)handleUploadActivityResponse:(id)arg1;
- (void)handleUploadDeviceStepResponse:(id)arg1;
- (void)handleWCDeviceBindResponse:(id)arg1;
- (void)handleGetHardDeviceOperTicketResponse:(id)arg1;
- (void)handleUpdateMyDeviceAttrResponse:(id)arg1;
- (void)sendSummaryActivityReqWithGoal:(id)arg1;
- (void)sendWorkoutActivityReqWithRecord:(id)arg1;
- (void)sendGetSportDeviceListReq;
- (void)sendSearchBLEHardDevice:(id)arg1;
- (void)sendSearchWifiHardDeviceReq:(id)arg1;
- (void)sendDeviceStepReq:(id)arg1 stepObject:(id)arg2;
- (void)sendUploadDeviceStepReq:(id)arg1 stepCount:(unsigned int)arg2 fromTime:(unsigned int)arg3 toTime:(unsigned int)arg4 hkSourceList:(id)arg5;
- (void)sendUpdateMyDeviceAttrRequest:(id)arg1 alias:(id)arg2 isMain:(unsigned int)arg3;
- (void)sendWCDevicesGetOperTicketRequest:(id)arg1 Filter:(id)arg2;
- (void)batchSearchWCDeviceByMac:(id)arg1 Filter:(id)arg2 Secene:(int)arg3;
- (void)searchWCDeviceForQRCode:(id)arg1;
- (void)sendWCDeviceGetBoundDevicesRequest;
- (void)sendWCDeviceUnbindSingleDeviceRequest:(id)arg1 deviceId:(id)arg2;
- (void)sendWCDeviceUnbindRequest:(id)arg1;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2 SubscribeFlag:(unsigned int)arg3;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)dealloc;

@end

