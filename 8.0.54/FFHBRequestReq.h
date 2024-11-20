//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface FFHBRequestReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int hbType; // @dynamic hbType;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) unsigned int perValue; // @dynamic perValue;
@property(nonatomic) unsigned int totalAmount; // @dynamic totalAmount;
@property(nonatomic) unsigned int totalNum; // @dynamic totalNum;

@end

