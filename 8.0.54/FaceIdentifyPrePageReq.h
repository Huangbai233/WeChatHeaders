//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface FaceIdentifyPrePageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int checkAliveType; // @dynamic checkAliveType;
@property(retain, nonatomic) NSData *extSpamInfo; // @dynamic extSpamInfo;
@property(retain, nonatomic) NSString *jsonStr; // @dynamic jsonStr;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

