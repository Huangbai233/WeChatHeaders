//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BizChatUser, FullBizChat, NSString, QyBaseResponse;

@interface InitiateBizChatResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int bizchatType; // @dynamic bizchatType;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;
@property(retain, nonatomic) FullBizChat *groupChat; // @dynamic groupChat;
@property(retain, nonatomic) QyBaseResponse *qyBaseResp; // @dynamic qyBaseResp;
@property(retain, nonatomic) NSString *qychatId; // @dynamic qychatId;
@property(retain, nonatomic) NSString *qychatType; // @dynamic qychatType;
@property(retain, nonatomic) BizChatUser *singleChat; // @dynamic singleChat;

@end

