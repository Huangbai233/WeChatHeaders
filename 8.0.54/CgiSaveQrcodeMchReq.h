//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface CgiSaveQrcodeMchReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *fee; // @dynamic fee;
@property(retain, nonatomic) NSString *feeType; // @dynamic feeType;
@property(retain, nonatomic) NSString *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *locationTimestamp; // @dynamic locationTimestamp;
@property(retain, nonatomic) NSString *longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *payerDescPlaceholder; // @dynamic payerDescPlaceholder;
@property(nonatomic) _Bool payerDescRequired; // @dynamic payerDescRequired;
@property(retain, nonatomic) NSData *saveNotifyInfo; // @dynamic saveNotifyInfo;
@property(retain, nonatomic) NSString *usage; // @dynamic usage;

@end

