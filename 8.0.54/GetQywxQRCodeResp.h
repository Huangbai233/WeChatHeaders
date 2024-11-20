//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetQywxQRCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backup; // @dynamic backup;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *componentId; // @dynamic componentId;
@property(retain, nonatomic) NSString *snsAid; // @dynamic snsAid;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end
