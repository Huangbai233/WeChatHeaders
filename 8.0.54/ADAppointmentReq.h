//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ADAppointmentReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long appointmentId; // @dynamic appointmentId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int opType; // @dynamic opType;
@property(retain, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

