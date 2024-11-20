//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface GetWeChatOutCouponsRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountActivityWordingVersion; // @dynamic accountActivityWordingVersion;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int rechargeWordingVersion; // @dynamic rechargeWordingVersion;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

