//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface MMListenRedDotByPassInfo_Item : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *bypassBuffer; // @dynamic bypassBuffer;
@property(nonatomic) unsigned int clientInsertionType; // @dynamic clientInsertionType;
@property(nonatomic) int cmdId; // @dynamic cmdId;
@property(nonatomic) int intCmdId; // @dynamic intCmdId;

@end

