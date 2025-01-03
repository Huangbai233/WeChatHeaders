//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayIAPOrderDetail : NSObject
{
    NSString *m_productName;
    NSString *m_totalMoney;
    unsigned int m_payStatus;
    NSString *m_sellerID;
    NSString *m_sellerName;
    NSString *m_sellerFrom;
    NSString *m_sellerUserName;
    NSString *m_createTime;
    NSString *m_transcationID;
    NSString *m_payStatusName;
    NSString *m_paySituation;
    NSString *m_sellerPhone;
    NSString *nsServiceAppID;
    NSString *nsServiceDetail;
    NSString *nsServiceAppUserName;
    NSString *nsServiceAppLogoUrl;
    NSString *nsServiceAppNickName;
    NSString *nsShareToFriendsURL;
    NSString *nsPaidSuccessDetail;
    int uiServiceSubscribeStrategy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsShareToFriendsURL; // @synthesize nsShareToFriendsURL;
@property(retain, nonatomic) NSString *nsPaidSuccessDetail; // @synthesize nsPaidSuccessDetail;
@property(nonatomic) int uiServiceSubscribeStrategy; // @synthesize uiServiceSubscribeStrategy;
@property(retain, nonatomic) NSString *nsServiceDetail; // @synthesize nsServiceDetail;
@property(retain, nonatomic) NSString *nsServiceAppUserName; // @synthesize nsServiceAppUserName;
@property(retain, nonatomic) NSString *nsServiceAppNickName; // @synthesize nsServiceAppNickName;
@property(retain, nonatomic) NSString *nsServiceAppLogoUrl; // @synthesize nsServiceAppLogoUrl;
@property(retain, nonatomic) NSString *nsServiceAppID; // @synthesize nsServiceAppID;
@property(retain, nonatomic) NSString *m_transcationID; // @synthesize m_transcationID;
@property(retain, nonatomic) NSString *m_totalMoney; // @synthesize m_totalMoney;
@property(retain, nonatomic) NSString *m_sellerUserName; // @synthesize m_sellerUserName;
@property(retain, nonatomic) NSString *m_sellerPhone; // @synthesize m_sellerPhone;
@property(retain, nonatomic) NSString *m_sellerName; // @synthesize m_sellerName;
@property(retain, nonatomic) NSString *m_sellerID; // @synthesize m_sellerID;
@property(retain, nonatomic) NSString *m_sellerFrom; // @synthesize m_sellerFrom;
@property(retain, nonatomic) NSString *m_productName; // @synthesize m_productName;
@property(retain, nonatomic) NSString *m_payStatusName; // @synthesize m_payStatusName;
@property(nonatomic) unsigned int m_payStatus; // @synthesize m_payStatus;
@property(retain, nonatomic) NSString *m_paySituation; // @synthesize m_paySituation;
@property(retain, nonatomic) NSString *m_createTime; // @synthesize m_createTime;

@end

