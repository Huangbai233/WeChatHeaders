//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MttWkMachinceInfo
{
    _Bool jcev2_p_1_o_is64os;
    NSString *jcev2_p_0_r_phoneID;
    NSString *jcev2_p_2_o_segName;
    NSString *jcev2_p_3_o_sectionName;
    long long jcev2_p_4_o_offset;
    NSString *jcev2_p_5_o_rootMemory;
    long long jcev2_p_6_o_checkOffset;
    NSString *jcev2_p_7_o_checkClass;
    NSString *jcev2_p_8_o_checkMethod;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=checkMethod, setter=setCheckMethod:) NSString *jcev2_p_8_o_checkMethod; // @synthesize jcev2_p_8_o_checkMethod;
@property(retain, nonatomic, getter=checkClass, setter=setCheckClass:) NSString *jcev2_p_7_o_checkClass; // @synthesize jcev2_p_7_o_checkClass;
@property(nonatomic, getter=checkOffset, setter=setCheckOffset:) long long jcev2_p_6_o_checkOffset; // @synthesize jcev2_p_6_o_checkOffset;
@property(retain, nonatomic, getter=rootMemory, setter=setRootMemory:) NSString *jcev2_p_5_o_rootMemory; // @synthesize jcev2_p_5_o_rootMemory;
@property(nonatomic, getter=offset, setter=setOffset:) long long jcev2_p_4_o_offset; // @synthesize jcev2_p_4_o_offset;
@property(retain, nonatomic, getter=sectionName, setter=setSectionName:) NSString *jcev2_p_3_o_sectionName; // @synthesize jcev2_p_3_o_sectionName;
@property(retain, nonatomic, getter=segName, setter=setSegName:) NSString *jcev2_p_2_o_segName; // @synthesize jcev2_p_2_o_segName;
@property(nonatomic, getter=is64os, setter=setIs64os:) _Bool jcev2_p_1_o_is64os; // @synthesize jcev2_p_1_o_is64os;
@property(retain, nonatomic, getter=phoneID, setter=setPhoneID:) NSString *jcev2_p_0_r_phoneID; // @synthesize jcev2_p_0_r_phoneID;
- (void).cxx_destruct;
- (id)init;

@end

