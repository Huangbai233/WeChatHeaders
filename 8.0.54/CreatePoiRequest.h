//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, LbsLocation, NSMutableArray, NSString;

@interface CreatePoiRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *categories; // @dynamic categories;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSString *district; // @dynamic district;
@property(retain, nonatomic) LbsLocation *loc; // @dynamic loc;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *photoUrl; // @dynamic photoUrl;
@property(retain, nonatomic) NSString *street; // @dynamic street;
@property(retain, nonatomic) NSString *telephone; // @dynamic telephone;

@end

