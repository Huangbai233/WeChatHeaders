//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface QBBeaconWupResponsePackage
{
    BOOL _jcev2_p_0_r_result;
    BOOL _jcev2_p_4_r_encryType;
    BOOL _jcev2_p_5_r_zipType;
    int _jcev2_p_1_r_cmd;
    NSData *_jcev2_p_2_o_sBuffer;
    NSString *_jcev2_p_3_o_srcGatewayIp;
    long long _jcev2_p_6_r_serverTime;
    NSString *_jcev2_p_7_o_encryKey;
    NSString *_jcev2_p_8_o_encryPublicKey;
}

+ (id)jceType;
@property(retain, nonatomic, getter=encryPublicKey, setter=setEncryPublicKey:) NSString *jcev2_p_8_o_encryPublicKey; // @synthesize jcev2_p_8_o_encryPublicKey=_jcev2_p_8_o_encryPublicKey;
@property(retain, nonatomic, getter=encryKey, setter=setEncryKey:) NSString *jcev2_p_7_o_encryKey; // @synthesize jcev2_p_7_o_encryKey=_jcev2_p_7_o_encryKey;
@property(nonatomic, getter=serverTime, setter=setServerTime:) long long jcev2_p_6_r_serverTime; // @synthesize jcev2_p_6_r_serverTime=_jcev2_p_6_r_serverTime;
@property(nonatomic, getter=zipType, setter=setZipType:) BOOL jcev2_p_5_r_zipType; // @synthesize jcev2_p_5_r_zipType=_jcev2_p_5_r_zipType;
@property(nonatomic, getter=encryType, setter=setEncryType:) BOOL jcev2_p_4_r_encryType; // @synthesize jcev2_p_4_r_encryType=_jcev2_p_4_r_encryType;
@property(retain, nonatomic, getter=srcGatewayIp, setter=setSrcGatewayIp:) NSString *jcev2_p_3_o_srcGatewayIp; // @synthesize jcev2_p_3_o_srcGatewayIp=_jcev2_p_3_o_srcGatewayIp;
@property(retain, nonatomic, getter=sBuffer, setter=setSBuffer:) NSData *jcev2_p_2_o_sBuffer; // @synthesize jcev2_p_2_o_sBuffer=_jcev2_p_2_o_sBuffer;
@property(nonatomic, getter=cmd, setter=setCmd:) int jcev2_p_1_r_cmd; // @synthesize jcev2_p_1_r_cmd=_jcev2_p_1_r_cmd;
@property(nonatomic, getter=result, setter=setResult:) BOOL jcev2_p_0_r_result; // @synthesize jcev2_p_0_r_result=_jcev2_p_0_r_result;
- (void).cxx_destruct;
- (id)init;

@end

