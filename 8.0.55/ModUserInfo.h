//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DisturbSetting, GmailList, NSData, NSString, SKBuiltinString_t;

@interface ModUserInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumBgimgId; // @dynamic albumBgimgId;
@property(nonatomic) int albumFlag; // @dynamic albumFlag;
@property(nonatomic) int albumStyle; // @dynamic albumStyle;
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) SKBuiltinString_t *bindEmail; // @dynamic bindEmail;
@property(retain, nonatomic) SKBuiltinString_t *bindMobile; // @dynamic bindMobile;
@property(nonatomic) unsigned int bindUin; // @dynamic bindUin;
@property(nonatomic) unsigned int bitFlag; // @dynamic bitFlag;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) DisturbSetting *disturbSetting; // @dynamic disturbSetting;
@property(nonatomic) int experience; // @dynamic experience;
@property(nonatomic) unsigned int faceBookFlag; // @dynamic faceBookFlag;
@property(retain, nonatomic) NSString *fbtoken; // @dynamic fbtoken;
@property(nonatomic) unsigned long long fbuserId; // @dynamic fbuserId;
@property(retain, nonatomic) NSString *fbuserName; // @dynamic fbuserName;
@property(retain, nonatomic) GmailList *gmailList; // @dynamic gmailList;
@property(retain, nonatomic) NSData *imgBuf; // @dynamic imgBuf;
@property(nonatomic) unsigned int imgLen; // @dynamic imgLen;
@property(nonatomic) int level; // @dynamic level;
@property(nonatomic) int levelHighExp; // @dynamic levelHighExp;
@property(nonatomic) int levelLowExp; // @dynamic levelLowExp;
@property(retain, nonatomic) SKBuiltinString_t *nickName; // @dynamic nickName;
@property(nonatomic) unsigned int personalCard; // @dynamic personalCard;
@property(nonatomic) unsigned int pluginFlag; // @dynamic pluginFlag;
@property(nonatomic) unsigned int pluginSwitch; // @dynamic pluginSwitch;
@property(nonatomic) int point; // @dynamic point;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(nonatomic) int sex; // @dynamic sex;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int txnewsCategory; // @dynamic txnewsCategory;
@property(retain, nonatomic) SKBuiltinString_t *userName; // @dynamic userName;
@property(nonatomic) unsigned int verifyFlag; // @dynamic verifyFlag;
@property(retain, nonatomic) NSString *verifyInfo; // @dynamic verifyInfo;
@property(retain, nonatomic) NSString *weibo; // @dynamic weibo;
@property(nonatomic) unsigned int weiboFlag; // @dynamic weiboFlag;
@property(retain, nonatomic) NSString *weiboNickname; // @dynamic weiboNickname;

@end

