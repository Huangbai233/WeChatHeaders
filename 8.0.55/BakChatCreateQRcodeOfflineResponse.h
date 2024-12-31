//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface BakChatCreateQRcodeOfflineResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int encryFlag; // @dynamic encryFlag;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(retain, nonatomic) SKBuiltinBuffer_t *qrcodeBuffer; // @dynamic qrcodeBuffer;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) unsigned int ret; // @dynamic ret;

@end
