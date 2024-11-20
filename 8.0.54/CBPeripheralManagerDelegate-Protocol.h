//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class CBATTRequest, CBCentral, CBCharacteristic, CBL2CAPChannel, CBPeripheralManager, CBService, NSArray, NSDictionary, NSError;

@protocol CBPeripheralManagerDelegate <NSObject>
- (void)peripheralManagerDidUpdateState:(CBPeripheralManager *)arg1;

@optional
- (void)peripheralManager:(CBPeripheralManager *)arg1 didOpenL2CAPChannel:(CBL2CAPChannel *)arg2 error:(NSError *)arg3;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(NSError *)arg3;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(NSError *)arg3;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(CBPeripheralManager *)arg1;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didReceiveWriteRequests:(NSArray *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didReceiveReadRequest:(CBATTRequest *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 central:(CBCentral *)arg2 didUnsubscribeFromCharacteristic:(CBCharacteristic *)arg3;
- (void)peripheralManager:(CBPeripheralManager *)arg1 central:(CBCentral *)arg2 didSubscribeToCharacteristic:(CBCharacteristic *)arg3;
- (void)peripheralManager:(CBPeripheralManager *)arg1 didAddService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheralManagerDidStartAdvertising:(CBPeripheralManager *)arg1 error:(NSError *)arg2;
- (void)peripheralManager:(CBPeripheralManager *)arg1 willRestoreState:(NSDictionary *)arg2;
@end

