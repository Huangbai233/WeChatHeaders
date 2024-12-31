//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface PstnInviteResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
@property(retain, nonatomic) NSMutableArray *addrListTcp; // @dynamic addrListTcp;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int callFlag; // @dynamic callFlag;
@property(nonatomic) unsigned long long callSeq; // @dynamic callSeq;
@property(nonatomic) int checkPeerCnt; // @dynamic checkPeerCnt;
@property(nonatomic) int checkPeerInterval; // @dynamic checkPeerInterval;
@property(retain, nonatomic) NSData *clientHeadSigns; // @dynamic clientHeadSigns;
@property(retain, nonatomic) NSData *encryptKeyBuf; // @dynamic encryptKeyBuf;
@property(nonatomic) int encryptStrategy; // @dynamic encryptStrategy;
@property(nonatomic) unsigned int errLevel; // @dynamic errLevel;
@property(retain, nonatomic) NSString *errTitle; // @dynamic errTitle;
@property(nonatomic) unsigned int nextInvite; // @dynamic nextInvite;
@property(nonatomic) unsigned int protoEncryptLength; // @dynamic protoEncryptLength;
@property(nonatomic) int pstnSyncInterval; // @dynamic pstnSyncInterval;
@property(retain, nonatomic) NSString *retPhoneNumber; // @dynamic retPhoneNumber;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;
@property(nonatomic) int roomMemberId; // @dynamic roomMemberId;
@property(nonatomic) int switchTcpPktCnt; // @dynamic switchTcpPktCnt;

@end
