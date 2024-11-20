//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BankcardElem, BaseResponse, NSString;

@interface AppointBankRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BankcardElem *bankElem; // @dynamic bankElem;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *encryptData; // @dynamic encryptData;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

