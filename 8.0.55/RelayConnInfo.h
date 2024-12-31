//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, VoipAddrSet;

@interface RelayConnInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int connId; // @dynamic connId;
@property(nonatomic) int localNetType; // @dynamic localNetType;
@property(retain, nonatomic) NSString *localNicDeviceId; // @dynamic localNicDeviceId;
@property(nonatomic) int localNicType; // @dynamic localNicType;
@property(retain, nonatomic) VoipAddrSet *relaySvr; // @dynamic relaySvr;
@property(retain, nonatomic) VoipAddrSet *relayTcpSvr; // @dynamic relayTcpSvr;
@property(nonatomic) int remoteNetType; // @dynamic remoteNetType;
@property(retain, nonatomic) NSString *remoteNicDeviceId; // @dynamic remoteNicDeviceId;
@property(nonatomic) int remoteNicType; // @dynamic remoteNicType;
@property(nonatomic) int statInterval; // @dynamic statInterval;

@end

