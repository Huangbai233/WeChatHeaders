//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderLiveSyncExtraInfoResponse_SyncResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cmdId; // @dynamic cmdId;
@property(nonatomic) _Bool disable; // @dynamic disable;
@property(nonatomic) unsigned int requestIntervalSec; // @dynamic requestIntervalSec;
@property(retain, nonatomic) NSData *respBuffer; // @dynamic respBuffer;
@property(nonatomic) unsigned int ret; // @dynamic ret;

@end
