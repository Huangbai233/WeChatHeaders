//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MegaVideoBaseRequest, NSData;

@interface MegaVideoGetFavListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) MegaVideoBaseRequest *megaBasereq; // @dynamic megaBasereq;

@end

