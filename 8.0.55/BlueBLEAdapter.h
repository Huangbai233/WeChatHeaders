//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBCentralManager, NSMutableArray, NSString;

@interface BlueBLEAdapter
{
    CBCentralManager *m_bleAdapter;
    NSMutableArray *m_data;
    NSMutableArray *m_retainDevices;
    _Bool m_isScanForWDevice;
    _Bool m_isScanning;
}

- (void).cxx_destruct;
- (id)__hexToString:(id)arg1;
- (void)__closeConnectionForSupport3rdApp:(id)arg1;
- (void)__onConnectedPeripheral:(id)arg1;
- (void)cleanup:(id)arg1;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (void)peripheralDidUpdateName:(id)arg1;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (_Bool)__parseTarget:(id)arg1 Step:(int *)arg2;
- (_Bool)__parsePedometerInfo:(id)arg1 Info:(id)arg2;
- (_Bool)__readInt32:(const char **)arg1 Length:(int *)arg2 Value:(int *)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)__didRetrieveConnectedPeripherals:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)onBlueToothPowerOff;
- (void)sendRemainDataToDevice:(id)arg1;
- (void)writeSession:(long long)arg1:(const char *)arg2:(int)arg3;
- (int)readSession:(long long)arg1:(char *)arg2:(int)arg3;
- (void)closeSession:(long long)arg1;
- (int)connectSession:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (id)getDeviceProtocols:(long long)arg1;
- (void)stopScan;
- (_Bool)scanAll;
- (_Bool)scanForWDevice;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (void)closeProfile:(long long)arg1;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (_Bool)scan;
- (void)dealloc;
- (void)cleanUpAllDevices;
- (id)initWithDelegate:(id)arg1 withQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

