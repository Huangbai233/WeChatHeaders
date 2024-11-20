//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, LiveInfo, NSString;

@interface CreateLiveResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isVerified; // @dynamic isVerified;
@property(retain, nonatomic) LiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) NSString *verifyUrl; // @dynamic verifyUrl;

@end
