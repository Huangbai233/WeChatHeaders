//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetLaunchGameInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizAppId; // @dynamic bizAppId;
@property(retain, nonatomic) NSString *launchAppId; // @dynamic launchAppId;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

