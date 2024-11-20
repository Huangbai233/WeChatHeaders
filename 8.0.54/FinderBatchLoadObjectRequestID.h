//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderBatchLoadObjectRequestID : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *exportId; // @dynamic exportId;
@property(retain, nonatomic) NSString *nonce; // @dynamic nonce;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;

@end

