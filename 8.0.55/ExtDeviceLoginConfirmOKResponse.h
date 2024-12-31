//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString;

@interface ExtDeviceLoginConfirmOKResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *msgContextPubKey; // @dynamic msgContextPubKey;
@property(retain, nonatomic) NSString *syncRecordCtx; // @dynamic syncRecordCtx;

@end

