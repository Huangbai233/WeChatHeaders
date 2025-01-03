//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayChangeLimitFeeRequestStruct : NSObject
{
    NSString *m_nsPassword;
    NSString *m_nsOptionControl;
    long long m_uiChangeFee;
    NSString *m_nsVerifyCode;
    NSString *m_nsBindSerial;
    NSString *m_nsBankType;
    NSString *m_nsBindCardTail;
    _Bool m_bRepeatSend;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bRepeatSend; // @synthesize m_bRepeatSend;
@property(retain, nonatomic) NSString *m_nsBindSerial; // @synthesize m_nsBindSerial;
@property(retain, nonatomic) NSString *m_nsBindCardTail; // @synthesize m_nsBindCardTail;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_nsVerifyCode; // @synthesize m_nsVerifyCode;
@property(nonatomic) long long m_uiChangeFee; // @synthesize m_uiChangeFee;
@property(retain, nonatomic) NSString *m_nsOptionControl; // @synthesize m_nsOptionControl;
@property(retain, nonatomic) NSString *m_nsPassword; // @synthesize m_nsPassword;
- (id)init;

@end

