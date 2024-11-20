//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface WxaAppGetWxaUseUserInfoRecordListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int lastUpdateTime; // @dynamic lastUpdateTime;
@property(nonatomic) unsigned int recordCount; // @dynamic recordCount;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

