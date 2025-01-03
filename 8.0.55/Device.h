//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CBCharacteristic, CBPeripheral, EAAccessory, EASession, NSMutableData, NSStream, NSString;

@interface Device : NSObject
{
    EAAccessory *_accessory;
    EASession *_session;
    CBPeripheral *_peripheral;
    CBCharacteristic *_writeCharacter;
    CBCharacteristic *_notifyCharacter;
    NSMutableData *_receiveData;
    NSMutableData *_sendingData;
    NSString *_MAC;
    _Bool _errorFlag;
    _Bool _isSending;
    _Bool _isConnectedBy3rdApp;
    int _state;
    long long _did;
    long long _sid;
    NSStream *_input;
    NSStream *_output;
    int _profileConnectState;
    int _profileType;
    NSString *_Name;
    CBCharacteristic *_pedometerProfileCurMeasurementCharacter;
    CBCharacteristic *_pedometerProfileTargetCharacter;
}

- (void).cxx_destruct;
@property(retain) CBCharacteristic *pedometerProfileTargetCharacter; // @synthesize pedometerProfileTargetCharacter=_pedometerProfileTargetCharacter;
@property(retain) CBCharacteristic *pedometerProfileCurMeasurementCharacter; // @synthesize pedometerProfileCurMeasurementCharacter=_pedometerProfileCurMeasurementCharacter;
@property int profileType; // @synthesize profileType=_profileType;
@property int profileConnectState; // @synthesize profileConnectState=_profileConnectState;
@property(retain) NSString *Name; // @synthesize Name=_Name;
@property(retain) NSStream *output; // @synthesize output=_output;
@property(retain) NSStream *input; // @synthesize input=_input;
@property long long sid; // @synthesize sid=_sid;
@property long long did; // @synthesize did=_did;
@property int state; // @synthesize state=_state;
@property _Bool isConnectedBy3rdApp; // @synthesize isConnectedBy3rdApp=_isConnectedBy3rdApp;
@property _Bool isSending; // @synthesize isSending=_isSending;
@property _Bool errorFlag; // @synthesize errorFlag=_errorFlag;
@property(retain) NSString *MAC; // @synthesize MAC=_MAC;
@property(retain) NSMutableData *sendingData; // @synthesize sendingData=_sendingData;
@property(retain) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
@property(retain) CBCharacteristic *notifyCharacter; // @synthesize notifyCharacter=_notifyCharacter;
@property(retain) CBCharacteristic *writeCharacter; // @synthesize writeCharacter=_writeCharacter;
@property(retain) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain) EASession *session; // @synthesize session=_session;
@property(retain) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (id)init;

@end

