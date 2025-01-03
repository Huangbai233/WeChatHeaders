//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface QBBeaconWupRequestPackage
{
    BOOL _jcev2_p_0_r_platformId;
    BOOL _jcev2_p_7_r_encryType;
    BOOL _jcev2_p_8_r_zipType;
    int _jcev2_p_5_r_cmd;
    NSString *_jcev2_p_1_o_appkey;
    NSString *_jcev2_p_2_o_appVersion;
    NSString *_jcev2_p_3_o_sdkId;
    NSString *_jcev2_p_4_o_sdkVersion;
    NSData *_jcev2_p_6_o_sBuffer;
    NSString *_jcev2_p_9_o_model;
    NSString *_jcev2_p_10_o_osVersion;
    NSString *_jcev2_p_11_o_reserved;
}

+ (id)jceType;
@property(retain, nonatomic, getter=reserved, setter=setReserved:) NSString *jcev2_p_11_o_reserved; // @synthesize jcev2_p_11_o_reserved=_jcev2_p_11_o_reserved;
@property(retain, nonatomic, getter=osVersion, setter=setOsVersion:) NSString *jcev2_p_10_o_osVersion; // @synthesize jcev2_p_10_o_osVersion=_jcev2_p_10_o_osVersion;
@property(retain, nonatomic, getter=model, setter=setModel:) NSString *jcev2_p_9_o_model; // @synthesize jcev2_p_9_o_model=_jcev2_p_9_o_model;
@property(nonatomic, getter=zipType, setter=setZipType:) BOOL jcev2_p_8_r_zipType; // @synthesize jcev2_p_8_r_zipType=_jcev2_p_8_r_zipType;
@property(nonatomic, getter=encryType, setter=setEncryType:) BOOL jcev2_p_7_r_encryType; // @synthesize jcev2_p_7_r_encryType=_jcev2_p_7_r_encryType;
@property(retain, nonatomic, getter=sBuffer, setter=setSBuffer:) NSData *jcev2_p_6_o_sBuffer; // @synthesize jcev2_p_6_o_sBuffer=_jcev2_p_6_o_sBuffer;
@property(nonatomic, getter=cmd, setter=setCmd:) int jcev2_p_5_r_cmd; // @synthesize jcev2_p_5_r_cmd=_jcev2_p_5_r_cmd;
@property(retain, nonatomic, getter=sdkVersion, setter=setSdkVersion:) NSString *jcev2_p_4_o_sdkVersion; // @synthesize jcev2_p_4_o_sdkVersion=_jcev2_p_4_o_sdkVersion;
@property(retain, nonatomic, getter=sdkId, setter=setSdkId:) NSString *jcev2_p_3_o_sdkId; // @synthesize jcev2_p_3_o_sdkId=_jcev2_p_3_o_sdkId;
@property(retain, nonatomic, getter=appVersion, setter=setAppVersion:) NSString *jcev2_p_2_o_appVersion; // @synthesize jcev2_p_2_o_appVersion=_jcev2_p_2_o_appVersion;
@property(retain, nonatomic, getter=appkey, setter=setAppkey:) NSString *jcev2_p_1_o_appkey; // @synthesize jcev2_p_1_o_appkey=_jcev2_p_1_o_appkey;
@property(nonatomic, getter=platformId, setter=setPlatformId:) BOOL jcev2_p_0_r_platformId; // @synthesize jcev2_p_0_r_platformId=_jcev2_p_0_r_platformId;
- (void).cxx_destruct;
- (id)init;

@end

