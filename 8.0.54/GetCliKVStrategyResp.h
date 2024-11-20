//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HeavyUserRespInfo, NSMutableArray;

@interface GetCliKVStrategyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int askSvrStrategyInterval; // @dynamic askSvrStrategyInterval;
@property(nonatomic) unsigned int banReportTime; // @dynamic banReportTime;
@property(retain, nonatomic) NSMutableArray *generalStrategies; // @dynamic generalStrategies;
@property(nonatomic) unsigned int generalVersion; // @dynamic generalVersion;
@property(retain, nonatomic) HeavyUserRespInfo *heavyUserInfo; // @dynamic heavyUserInfo;
@property(retain, nonatomic) NSMutableArray *kvgeneralStrategies; // @dynamic kvgeneralStrategies;
@property(nonatomic) unsigned int kvgeneralVersion; // @dynamic kvgeneralVersion;
@property(retain, nonatomic) NSMutableArray *kvspecialStrategies; // @dynamic kvspecialStrategies;
@property(nonatomic) unsigned int kvspecialVersion; // @dynamic kvspecialVersion;
@property(retain, nonatomic) NSMutableArray *kvwhiteOrBlackUinStrategies; // @dynamic kvwhiteOrBlackUinStrategies;
@property(nonatomic) unsigned int kvwhiteOrBlackUinVersion; // @dynamic kvwhiteOrBlackUinVersion;
@property(nonatomic) unsigned int maxValidDataTime; // @dynamic maxValidDataTime;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) NSMutableArray *specialStrategies; // @dynamic specialStrategies;
@property(nonatomic) unsigned int specialVersion; // @dynamic specialVersion;
@property(retain, nonatomic) NSMutableArray *whiteOrBlackUinStrategies; // @dynamic whiteOrBlackUinStrategies;
@property(nonatomic) unsigned int whiteOrBlackUinVersion; // @dynamic whiteOrBlackUinVersion;

@end
