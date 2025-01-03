//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NEHotspotConfigurationManager, NEHotspotHelperCommand, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WAJSContextPlugin_WiFi
{
    _Bool m_registed;
    _Bool m_hasPreSet;
    NSMutableDictionary *m_wifiInfoMap;
    NEHotspotHelperCommand *m_retainScanListCommand;
    NEHotspotHelperCommand *m_retainEvaluateCommand;
    NEHotspotHelperCommand *m_retainMantainCommand;
    NSMutableArray *m_scanWiFiList;
    NSObject<OS_dispatch_queue> *m_timerQueue;
    NSObject<OS_dispatch_source> *m_deliverTimer;
    NEHotspotConfigurationManager *m_configMgr;
}

+ (long long)convertStringToNEConfidence:(id)arg1;
- (void).cxx_destruct;
- (void)deliverNetworkCommand:(id)arg1;
- (void)onDeliverNetworkCommandWhenTimeout;
- (void)cancelDeliverTimeoutTimer;
- (void)setDeliverTimeoutTimer;
- (void)handleCommandForLogoff:(id)arg1;
- (void)handleCommandForMaintain:(id)arg1;
- (void)handleCommandForPresentUI:(id)arg1;
- (void)handleCommandForAuthenticate:(id)arg1;
- (void)handleCommandForEvaluate:(id)arg1;
- (void)handleCommandForFilterScanList:(id)arg1;
- (void)handleHotspotWiFiCommand:(id)arg1;
- (void)connectToWifiWithSSID:(id)arg1 password:(id)arg2 isWEP:(_Bool)arg3;
- (void)evalueteWiFiWithSSID:(id)arg1 BSSID:(id)arg2 confidence:(id)arg3;
- (id)connectedWiFi;
- (id)wifiInfoWithSSID:(id)arg1 BSSID:(id)arg2;
- (void)preSetWifiListInfo:(id)arg1;
- (_Bool)setWifiListInfo:(id)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (_Bool)canHandleWifiList;
- (void)unregisterWifiHandler;
- (void)registerWifiHandler;
- (id)init;

@end

