//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GeoCoderLocationRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int getPoi; // @dynamic getPoi;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *poiOptions; // @dynamic poiOptions;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sceneLanguage; // @dynamic sceneLanguage;

@end

