//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface UploadVoiceRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cancelFlag; // @dynamic cancelFlag;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) SKBuiltinBuffer_t *data; // @dynamic data;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int forwardFlag; // @dynamic forwardFlag;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int length; // @dynamic length;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int reqTime; // @dynamic reqTime;
@property(retain, nonatomic) NSString *sendMsgTicket; // @dynamic sendMsgTicket;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int uicreateTime; // @dynamic uicreateTime;
@property(nonatomic) unsigned int voiceFormat; // @dynamic voiceFormat;
@property(retain, nonatomic) SKBuiltinBuffer_t *voiceId; // @dynamic voiceId;
@property(nonatomic) unsigned int voiceLength; // @dynamic voiceLength;
@property(retain, nonatomic) NSString *voiceUrl; // @dynamic voiceUrl;

@end

