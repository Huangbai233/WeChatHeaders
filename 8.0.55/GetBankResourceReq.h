//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionLocation, NSMutableArray, NSString;

@interface GetBankResourceReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) NSMutableArray *banktypelist; // @dynamic banktypelist;
@property(retain, nonatomic) NSString *jsapiReqkey; // @dynamic jsapiReqkey;

@end
