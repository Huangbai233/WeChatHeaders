//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface OnClickRedDotRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

