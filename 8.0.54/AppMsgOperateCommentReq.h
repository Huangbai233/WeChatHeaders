//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface AppMsgOperateCommentReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long clientId; // @dynamic clientId;
@property(nonatomic) unsigned long long commentTopicId; // @dynamic commentTopicId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int enterId; // @dynamic enterId;
@property(nonatomic) unsigned int itemShowType; // @dynamic itemShowType;
@property(nonatomic) unsigned int personalCommentId; // @dynamic personalCommentId;
@property(nonatomic) unsigned int replyId; // @dynamic replyId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int subscene; // @dynamic subscene;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

