//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface QRConnectAuthorizeConfirmReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int avatarId; // @dynamic avatarId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *oauthUrl; // @dynamic oauthUrl;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;

@end
