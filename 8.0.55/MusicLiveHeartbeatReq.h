//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface MusicLiveHeartbeatReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *cookie; // @dynamic cookie;
@property(nonatomic) _Bool offline; // @dynamic offline;
@property(retain, nonatomic) NSString *songid; // @dynamic songid;

@end

