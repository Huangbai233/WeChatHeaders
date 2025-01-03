//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPayAuthenRequestRetryInfo;

@interface WCPayAuthenticationPayVerifySMSStruct : NSObject
{
    unsigned int m_flag;
    unsigned int m_payScene;
    unsigned int m_payChannel;
    NSString *m_payPassword;
    NSString *m_payKey;
    NSString *m_payToken;
    NSString *m_uuid;
    NSString *m_verifySMS;
    NSString *m_nsBankType;
    NSString *m_nsBindSerial;
    NSString *m_appId;
    NSString *m_appName;
    NSString *m_appSource;
    _Bool isAutoDeduct;
    _Bool m_bIsAutoDeduct;
    _Bool _m_bUseTouchID;
    _Bool _bIsLQTPay;
    NSString *_m_arriveType;
    NSString *_autoDeductBankType;
    NSString *_autoDeductBankSerial;
    NSString *_orderReqKey;
    NSString *_currentPayCardBankType;
    WCPayAuthenRequestRetryInfo *_m_retryInfo;
    NSString *_cre_tail;
    NSString *_cre_type;
    long long _messageVerifyType;
}

- (void).cxx_destruct;
@property(nonatomic) long long messageVerifyType; // @synthesize messageVerifyType=_messageVerifyType;
@property(retain, nonatomic) NSString *cre_type; // @synthesize cre_type=_cre_type;
@property(retain, nonatomic) NSString *cre_tail; // @synthesize cre_tail=_cre_tail;
@property(retain, nonatomic) WCPayAuthenRequestRetryInfo *m_retryInfo; // @synthesize m_retryInfo=_m_retryInfo;
@property(retain, nonatomic) NSString *currentPayCardBankType; // @synthesize currentPayCardBankType=_currentPayCardBankType;
@property(nonatomic) _Bool bIsLQTPay; // @synthesize bIsLQTPay=_bIsLQTPay;
@property(retain, nonatomic) NSString *orderReqKey; // @synthesize orderReqKey=_orderReqKey;
@property(copy, nonatomic) NSString *autoDeductBankSerial; // @synthesize autoDeductBankSerial=_autoDeductBankSerial;
@property(copy, nonatomic) NSString *autoDeductBankType; // @synthesize autoDeductBankType=_autoDeductBankType;
@property(nonatomic) _Bool m_bUseTouchID; // @synthesize m_bUseTouchID=_m_bUseTouchID;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType=_m_arriveType;
@property(nonatomic) _Bool m_bIsAutoDeduct; // @synthesize m_bIsAutoDeduct;
@property(retain, nonatomic) NSString *m_nsBindSerial; // @synthesize m_nsBindSerial;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_appSource; // @synthesize m_appSource;
@property(retain, nonatomic) NSString *m_appName; // @synthesize m_appName;
@property(retain, nonatomic) NSString *m_appId; // @synthesize m_appId;
@property(retain, nonatomic) NSString *m_verifySMS; // @synthesize m_verifySMS;
@property(retain, nonatomic) NSString *m_payPassword; // @synthesize m_payPassword;
@property(retain, nonatomic) NSString *m_uuid; // @synthesize m_uuid;
@property(retain, nonatomic) NSString *m_payToken; // @synthesize m_payToken;
@property(retain, nonatomic) NSString *m_payKey; // @synthesize m_payKey;
@property(nonatomic) unsigned int m_payChannel; // @synthesize m_payChannel;
@property(nonatomic) unsigned int m_payScene; // @synthesize m_payScene;
@property(nonatomic) unsigned int m_flag; // @synthesize m_flag;

@end

