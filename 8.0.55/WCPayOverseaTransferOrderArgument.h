//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaTransferOrderArgument : NSObject
{
    int _m_currency;
    unsigned long long _m_amount;
    NSString *_m_payNickname;
    NSString *_m_recvUsername;
    NSString *_m_recvNickname;
    NSString *_m_reason;
}

- (void).cxx_destruct;
@property(nonatomic) int m_currency; // @synthesize m_currency=_m_currency;
@property(retain, nonatomic) NSString *m_reason; // @synthesize m_reason=_m_reason;
@property(retain, nonatomic) NSString *m_recvNickname; // @synthesize m_recvNickname=_m_recvNickname;
@property(retain, nonatomic) NSString *m_recvUsername; // @synthesize m_recvUsername=_m_recvUsername;
@property(retain, nonatomic) NSString *m_payNickname; // @synthesize m_payNickname=_m_payNickname;
@property(nonatomic) unsigned long long m_amount; // @synthesize m_amount=_m_amount;
- (id)urlArgumentData;

@end

