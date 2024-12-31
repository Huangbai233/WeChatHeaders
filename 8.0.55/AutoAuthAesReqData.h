//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseAuthReqInfo, BaseRequest, NSString, PubKeyInfo, SKBuiltinBuffer_t;

@interface AutoAuthAesReqData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *androidPackageName; // @dynamic androidPackageName;
@property(retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey; // @dynamic autoAuthKey;
@property(retain, nonatomic) BaseAuthReqInfo *baseReqInfo; // @dynamic baseReqInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int builtinIpseq; // @dynamic builtinIpseq;
@property(retain, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(nonatomic) int channel; // @dynamic channel;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(retain, nonatomic) NSString *clientSeqId; // @dynamic clientSeqId;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) PubKeyInfo *pubKey; // @dynamic pubKey;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *softType; // @dynamic softType;
@property(retain, nonatomic) NSString *timeZone; // @dynamic timeZone;

@end
