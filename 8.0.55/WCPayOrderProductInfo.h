//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayOrderProductInfo : NSObject
{
    NSString *m_nsProductId;
    NSString *m_nsProductName;
    NSString *m_nsProductImage;
    unsigned int m_uiProductCount;
    NSString *m_nsProductMoney;
    NSArray *m_arrSKUInfo;
    NSString *m_nsJumpUrl;
    unsigned int m_uiJumpType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsJumpUrl; // @synthesize m_nsJumpUrl;
@property(nonatomic) unsigned int m_uiJumpType; // @synthesize m_uiJumpType;
@property(nonatomic) unsigned int m_uiProductCount; // @synthesize m_uiProductCount;
@property(retain, nonatomic) NSString *m_nsProductName; // @synthesize m_nsProductName;
@property(retain, nonatomic) NSString *m_nsProductImage; // @synthesize m_nsProductImage;
@property(retain, nonatomic) NSString *m_nsProductId; // @synthesize m_nsProductId;
@property(retain, nonatomic) NSString *m_nsProductMoney; // @synthesize m_nsProductMoney;
@property(retain, nonatomic) NSArray *m_arrSKUInfo; // @synthesize m_arrSKUInfo;

@end

