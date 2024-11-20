//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface MerchantPayCheckPayReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(nonatomic) int payState; // @dynamic payState;
@property(retain, nonatomic) NSString *scanId; // @dynamic scanId;

@end
