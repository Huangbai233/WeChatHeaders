//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface EncashResultPageInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *arrivalWording; // @dynamic arrivalWording;
@property(retain, nonatomic) NSMutableArray *detailInfos; // @dynamic detailInfos;
@property(nonatomic) unsigned long long expectedArrivalTime; // @dynamic expectedArrivalTime;

@end

