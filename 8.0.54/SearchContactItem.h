//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CustomizedInfo, NSString, SKBuiltinBuffer_t, SKBuiltinString_t, SnsUserInfo;

@interface SearchContactItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumBgimgId; // @dynamic albumBgimgId;
@property(nonatomic) int albumFlag; // @dynamic albumFlag;
@property(nonatomic) int albumStyle; // @dynamic albumStyle;
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) NSString *antispamTicket; // @dynamic antispamTicket;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @dynamic bigHeadImgUrl;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) CustomizedInfo *customizedInfo; // @dynamic customizedInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *imgBuf; // @dynamic imgBuf;
@property(nonatomic) unsigned int matchType; // @dynamic matchType;
@property(retain, nonatomic) NSString *myBrandList; // @dynamic myBrandList;
@property(retain, nonatomic) SKBuiltinString_t *nickName; // @dynamic nickName;
@property(nonatomic) unsigned int personalCard; // @dynamic personalCard;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) SKBuiltinString_t *pyinitial; // @dynamic pyinitial;
@property(retain, nonatomic) SKBuiltinString_t *quanPin; // @dynamic quanPin;
@property(nonatomic) int sex; // @dynamic sex;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @dynamic smallHeadImgUrl;
@property(retain, nonatomic) SnsUserInfo *snsUserInfo; // @dynamic snsUserInfo;
@property(retain, nonatomic) SKBuiltinString_t *userName; // @dynamic userName;
@property(nonatomic) unsigned int verifyFlag; // @dynamic verifyFlag;
@property(retain, nonatomic) NSString *verifyInfo; // @dynamic verifyInfo;
@property(retain, nonatomic) NSString *weibo; // @dynamic weibo;
@property(nonatomic) unsigned int weiboFlag; // @dynamic weiboFlag;
@property(retain, nonatomic) NSString *weiboNickname; // @dynamic weiboNickname;

@end

