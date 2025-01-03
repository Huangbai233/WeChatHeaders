//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSArray, NSData, NSString;

@interface QBWupUserBase
{
    _Bool jcev2_p_8_o_bSave;
    short jcev2_p_13_o_iMCC;
    short jcev2_p_14_o_iMNC;
    int jcev2_p_7_o_iServerVer;
    int jcev2_p_12_o_iLanguageType;
    NSString *jcev2_p_0_r_sIMEI;
    NSData *jcev2_p_1_r_sGUID;
    NSString *jcev2_p_2_r_sQUA;
    NSString *jcev2_p_3_r_sLC;
    NSString *jcev2_p_4_r_sCellphone;
    NSString *jcev2_p_5_r_sUin;
    NSString *jcev2_p_6_o_sCellid;
    NSString *jcev2_p_9_o_sChannel;
    NSString *jcev2_p_10_o_sLAC;
    NSString *jcev2_p_11_o_sUA;
    NSString *jcev2_p_15_o_sAPN;
    NSString *jcev2_p_16_o_sCellNumber;
    NSData *jcev2_p_17_o_sMac;
    NSArray *jcev2_p_19_o_vWifiMacs__b0x9i_VONSNumber;
    NSData *jcev2_p_20_o_vLBSKeyData;
    NSString *jcev2_p_21_o_sVenderId;
    NSString *jcev2_p_22_o_sAdId;
}

+ (id)commonUserBase;
+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sAdId, setter=setSAdId:) NSString *jcev2_p_22_o_sAdId; // @synthesize jcev2_p_22_o_sAdId;
@property(retain, nonatomic, getter=sVenderId, setter=setSVenderId:) NSString *jcev2_p_21_o_sVenderId; // @synthesize jcev2_p_21_o_sVenderId;
@property(retain, nonatomic, getter=vLBSKeyData, setter=setVLBSKeyData:) NSData *jcev2_p_20_o_vLBSKeyData; // @synthesize jcev2_p_20_o_vLBSKeyData;
@property(retain, nonatomic, getter=vWifiMacs, setter=setVWifiMacs:) NSArray *jcev2_p_19_o_vWifiMacs__b0x9i_VONSNumber; // @synthesize jcev2_p_19_o_vWifiMacs__b0x9i_VONSNumber;
@property(retain, nonatomic, getter=sMac, setter=setSMac:) NSData *jcev2_p_17_o_sMac; // @synthesize jcev2_p_17_o_sMac;
@property(retain, nonatomic, getter=sCellNumber, setter=setSCellNumber:) NSString *jcev2_p_16_o_sCellNumber; // @synthesize jcev2_p_16_o_sCellNumber;
@property(retain, nonatomic, getter=sAPN, setter=setSAPN:) NSString *jcev2_p_15_o_sAPN; // @synthesize jcev2_p_15_o_sAPN;
@property(nonatomic, getter=iMNC, setter=setIMNC:) short jcev2_p_14_o_iMNC; // @synthesize jcev2_p_14_o_iMNC;
@property(nonatomic, getter=iMCC, setter=setIMCC:) short jcev2_p_13_o_iMCC; // @synthesize jcev2_p_13_o_iMCC;
@property(nonatomic, getter=iLanguageType, setter=setILanguageType:) int jcev2_p_12_o_iLanguageType; // @synthesize jcev2_p_12_o_iLanguageType;
@property(retain, nonatomic, getter=sUA, setter=setSUA:) NSString *jcev2_p_11_o_sUA; // @synthesize jcev2_p_11_o_sUA;
@property(retain, nonatomic, getter=sLAC, setter=setSLAC:) NSString *jcev2_p_10_o_sLAC; // @synthesize jcev2_p_10_o_sLAC;
@property(retain, nonatomic, getter=sChannel, setter=setSChannel:) NSString *jcev2_p_9_o_sChannel; // @synthesize jcev2_p_9_o_sChannel;
@property(nonatomic, getter=bSave, setter=setBSave:) _Bool jcev2_p_8_o_bSave; // @synthesize jcev2_p_8_o_bSave;
@property(nonatomic, getter=iServerVer, setter=setIServerVer:) int jcev2_p_7_o_iServerVer; // @synthesize jcev2_p_7_o_iServerVer;
@property(retain, nonatomic, getter=sCellid, setter=setSCellid:) NSString *jcev2_p_6_o_sCellid; // @synthesize jcev2_p_6_o_sCellid;
@property(retain, nonatomic, getter=sUin, setter=setSUin:) NSString *jcev2_p_5_r_sUin; // @synthesize jcev2_p_5_r_sUin;
@property(retain, nonatomic, getter=sCellphone, setter=setSCellphone:) NSString *jcev2_p_4_r_sCellphone; // @synthesize jcev2_p_4_r_sCellphone;
@property(retain, nonatomic, getter=sLC, setter=setSLC:) NSString *jcev2_p_3_r_sLC; // @synthesize jcev2_p_3_r_sLC;
@property(retain, nonatomic, getter=sQUA, setter=setSQUA:) NSString *jcev2_p_2_r_sQUA; // @synthesize jcev2_p_2_r_sQUA;
@property(retain, nonatomic, getter=sGUID, setter=setSGUID:) NSData *jcev2_p_1_r_sGUID; // @synthesize jcev2_p_1_r_sGUID;
@property(retain, nonatomic, getter=sIMEI, setter=setSIMEI:) NSString *jcev2_p_0_r_sIMEI; // @synthesize jcev2_p_0_r_sIMEI;
- (void).cxx_destruct;
- (id)init;

@end

