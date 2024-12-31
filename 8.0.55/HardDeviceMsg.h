//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinBuffer_t;

@interface HardDeviceMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int type; // @dynamic type;

@end
