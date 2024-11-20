//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface WeVisEffectConfigRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceModelName; // @dynamic deviceModelName;
@property(nonatomic) unsigned int resolution; // @dynamic resolution;
@property(nonatomic) unsigned int sdkVersion; // @dynamic sdkVersion;
@property(nonatomic) unsigned int wechatArch; // @dynamic wechatArch;

@end
