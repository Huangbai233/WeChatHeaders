//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetBizEnterpriseAttrReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int brandType; // @dynamic brandType;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;
@property(nonatomic) unsigned int lang; // @dynamic lang;

@end
