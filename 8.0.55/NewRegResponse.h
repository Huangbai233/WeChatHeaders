//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BuiltinIPList, CDNDnsInfo, HostList, NSString, NetworkControl, PluginKeyList, SKBuiltinBuffer_t, SecAuthRegKeySect, ShowStyleKey, XAgreementDmSetting, XAgreementWordingSetting;

@interface NewRegResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CDNDnsInfo *appDnsInfo; // @dynamic appDnsInfo;
@property(retain, nonatomic) NSString *authKey; // @dynamic authKey;
@property(retain, nonatomic) NSString *autoAuthTicket; // @dynamic autoAuthTicket;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindEmail; // @dynamic bindEmail;
@property(retain, nonatomic) BuiltinIPList *builtinIplist; // @dynamic builtinIplist;
@property(retain, nonatomic) CDNDnsInfo *dnsInfo; // @dynamic dnsInfo;
@property(retain, nonatomic) NSString *fsurl; // @dynamic fsurl;
@property(nonatomic) unsigned int mmtlsControlBitFlag; // @dynamic mmtlsControlBitFlag;
@property(retain, nonatomic) NetworkControl *networkControl; // @dynamic networkControl;
@property(retain, nonatomic) HostList *newHostList; // @dynamic newHostList;
@property(retain, nonatomic) NSString *officialNickName; // @dynamic officialNickName;
@property(retain, nonatomic) NSString *officialUserName; // @dynamic officialUserName;
@property(retain, nonatomic) NSString *password; // @dynamic password;
@property(retain, nonatomic) PluginKeyList *pluginKeyList; // @dynamic pluginKeyList;
@property(nonatomic) unsigned int profileFlag; // @dynamic profileFlag;
@property(retain, nonatomic) NSString *pushMailSettingTicket; // @dynamic pushMailSettingTicket;
@property(nonatomic) unsigned int pushMailStatus; // @dynamic pushMailStatus;
@property(retain, nonatomic) NSString *qqmicroBlogUserName; // @dynamic qqmicroBlogUserName;
@property(nonatomic) unsigned int regType; // @dynamic regType;
@property(nonatomic) unsigned int returnFlag; // @dynamic returnFlag;
@property(retain, nonatomic) SecAuthRegKeySect *secAuthRegKeySect; // @dynamic secAuthRegKeySect;
@property(nonatomic) unsigned int sendCardBitFlag; // @dynamic sendCardBitFlag;
@property(nonatomic) unsigned int serverTime; // @dynamic serverTime;
@property(retain, nonatomic) NSString *sessionKey; // @dynamic sessionKey;
@property(retain, nonatomic) ShowStyleKey *showStyle; // @dynamic showStyle;
@property(retain, nonatomic) CDNDnsInfo *snsDnsInfo; // @dynamic snsDnsInfo;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *stepTicket; // @dynamic stepTicket;
@property(nonatomic) unsigned int uin; // @dynamic uin;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int userXagreementId; // @dynamic userXagreementId;
@property(retain, nonatomic) SKBuiltinBuffer_t *verifyBuff; // @dynamic verifyBuff;
@property(retain, nonatomic) NSString *verifySignature; // @dynamic verifySignature;
@property(retain, nonatomic) XAgreementDmSetting *xagreementDmSetting; // @dynamic xagreementDmSetting;
@property(retain, nonatomic) XAgreementWordingSetting *xagreementWordingSetting; // @dynamic xagreementWordingSetting;

@end

