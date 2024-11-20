//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface FaceVideoBindBioIdRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long bioid; // @dynamic bioid;
@property(retain, nonatomic) NSString *cdnAesKey; // @dynamic cdnAesKey;
@property(retain, nonatomic) NSString *videoCdnId; // @dynamic videoCdnId;

@end

