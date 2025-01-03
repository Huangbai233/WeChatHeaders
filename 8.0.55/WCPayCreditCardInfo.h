//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayCreditCardInfo : NSObject
{
    NSString *m_nsCreditState;
    unsigned int m_uiCreditUsed;
    unsigned int m_uiCreditAmount;
    NSString *m_nsCreditDegree;
    long long m_uiBillAmount;
    NSString *m_nsBillTime;
    long long m_uiRepayAmount;
    long long m_uiRepayMininum;
    NSString *m_nsRepayLastTime;
    NSString *m_nsLastUpdateTime;
    _Bool m_bUpgradeAmount;
    unsigned int m_uiUpgradeCount;
    NSString *m_nsBillUrl;
    NSString *m_nsRepayUrl;
    NSString *m_nsLearnMoreUrl;
    NSString *m_nsCreditDetailUrl;
    NSString *m_nsRightsUrl;
    NSString *m_nsAppUserName;
    NSString *m_nsAppNickName;
    NSString *m_nsAppTelephone;
    NSString *m_nsHelpUrl;
    NSArray *m_aryCreditLimitExtList;
    NSString *m_nsExtGroupTitle;
    NSArray *m_aryExtList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_aryExtList; // @synthesize m_aryExtList;
@property(retain, nonatomic) NSString *m_nsExtGroupTitle; // @synthesize m_nsExtGroupTitle;
@property(retain, nonatomic) NSArray *m_aryCreditLimitExtList; // @synthesize m_aryCreditLimitExtList;
@property(retain, nonatomic) NSString *m_nsAppTelephone; // @synthesize m_nsAppTelephone;
@property(retain, nonatomic) NSString *m_nsAppNickName; // @synthesize m_nsAppNickName;
@property(retain, nonatomic) NSString *m_nsAppUserName; // @synthesize m_nsAppUserName;
@property(retain, nonatomic) NSString *m_nsCreditDetailUrl; // @synthesize m_nsCreditDetailUrl;
@property(retain, nonatomic) NSString *m_nsRightsUrl; // @synthesize m_nsRightsUrl;
@property(retain, nonatomic) NSString *m_nsRepayUrl; // @synthesize m_nsRepayUrl;
@property(retain, nonatomic) NSString *m_nsLearnMoreUrl; // @synthesize m_nsLearnMoreUrl;
@property(retain, nonatomic) NSString *m_nsBillUrl; // @synthesize m_nsBillUrl;
@property(nonatomic) long long m_uiRepayMininum; // @synthesize m_uiRepayMininum;
@property(nonatomic) long long m_uiRepayAmount; // @synthesize m_uiRepayAmount;
@property(nonatomic) unsigned int m_uiCreditUsed; // @synthesize m_uiCreditUsed;
@property(nonatomic) unsigned int m_uiUpgradeCount; // @synthesize m_uiUpgradeCount;
@property(nonatomic) unsigned int m_uiCreditAmount; // @synthesize m_uiCreditAmount;
@property(nonatomic) long long m_uiBillAmount; // @synthesize m_uiBillAmount;
@property(retain, nonatomic) NSString *m_nsCreditState; // @synthesize m_nsCreditState;
@property(retain, nonatomic) NSString *m_nsCreditDegree; // @synthesize m_nsCreditDegree;
@property(retain, nonatomic) NSString *m_nsRepayLastTime; // @synthesize m_nsRepayLastTime;
@property(retain, nonatomic) NSString *m_nsLastUpdateTime; // @synthesize m_nsLastUpdateTime;
@property(retain, nonatomic) NSString *m_nsBillTime; // @synthesize m_nsBillTime;
@property(nonatomic) _Bool m_bUpgradeAmount; // @synthesize m_bUpgradeAmount;

@end

