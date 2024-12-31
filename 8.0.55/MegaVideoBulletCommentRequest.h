//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoBulletCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned long long deleteCommentId; // @dynamic deleteCommentId;
@property(retain, nonatomic) MegaVideoBaseRequest *megaBasereq; // @dynamic megaBasereq;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSString *videoNonceId; // @dynamic videoNonceId;
@property(nonatomic) unsigned long long videoObjectId; // @dynamic videoObjectId;
@property(nonatomic) unsigned long long videoTimestamp; // @dynamic videoTimestamp;

@end
