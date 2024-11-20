//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface WxaRuntimeNonLoginTransferReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int cmdId; // @dynamic cmdId;
@property(retain, nonatomic) NSString *deviceToken; // @dynamic deviceToken;
@property(retain, nonatomic) NSString *deviceUsername; // @dynamic deviceUsername;
@property(retain, nonatomic) NSString *hostAppid; // @dynamic hostAppid;
@property(retain, nonatomic) NSData *reqData; // @dynamic reqData;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *wxaAppid; // @dynamic wxaAppid;

@end

