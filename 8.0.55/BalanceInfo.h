//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BalanceMenuInfo, NSString, PromptInfo;

@interface BalanceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *availBalance; // @dynamic availBalance;
@property(retain, nonatomic) NSString *availFetchWording; // @dynamic availFetchWording;
@property(retain, nonatomic) NSString *balanceBankType; // @dynamic balanceBankType;
@property(retain, nonatomic) NSString *balanceBindSerial; // @dynamic balanceBindSerial;
@property(retain, nonatomic) NSString *balanceForbidId; // @dynamic balanceForbidId;
@property(retain, nonatomic) NSString *balanceForbidWord; // @dynamic balanceForbidWord;
@property(retain, nonatomic) NSString *balanceListUrl; // @dynamic balanceListUrl;
@property(retain, nonatomic) NSString *balanceLogoUrl; // @dynamic balanceLogoUrl;
@property(retain, nonatomic) BalanceMenuInfo *balanceMenuInfo; // @dynamic balanceMenuInfo;
@property(retain, nonatomic) NSString *balanceShowWording; // @dynamic balanceShowWording;
@property(nonatomic) unsigned long long balanceVersion; // @dynamic balanceVersion;
@property(retain, nonatomic) NSString *fetchBalance; // @dynamic fetchBalance;
@property(retain, nonatomic) NSString *forbidTitle; // @dynamic forbidTitle;
@property(retain, nonatomic) NSString *forbidUrl; // @dynamic forbidUrl;
@property(retain, nonatomic) NSString *frozenBalance; // @dynamic frozenBalance;
@property(retain, nonatomic) NSString *maxFetchWording; // @dynamic maxFetchWording;
@property(retain, nonatomic) NSString *mobile; // @dynamic mobile;
@property(retain, nonatomic) PromptInfo *promptInfo; // @dynamic promptInfo;
@property(retain, nonatomic) NSString *supportMicropay; // @dynamic supportMicropay;
@property(nonatomic) unsigned int timeOut; // @dynamic timeOut;
@property(retain, nonatomic) NSString *totalBalance; // @dynamic totalBalance;
@property(retain, nonatomic) NSString *useCftBalance; // @dynamic useCftBalance;

@end

