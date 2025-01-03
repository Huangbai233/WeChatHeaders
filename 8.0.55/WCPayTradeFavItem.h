//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayTradeFavItem : NSObject
{
    unsigned int m_uiFavType;
    unsigned int m_uiFavSubType;
    unsigned long long m_uiFavProperty;
    NSString *m_nsFavorTypeDesc;
    NSString *m_nsFavID;
    NSString *m_nsFavName;
    NSString *m_nsFavDesc;
    NSString *m_nsFavUsedManual;
    NSString *m_nsFavUsedRemark;
    _Bool m_bBankFav;
    NSString *m_nsBankType;
    NSString *m_nsBankName;
    NSString *m_nsBankLogoUrl;
    int m_enCurrentItemStatus;
    NSArray *_bind_serial_list;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bind_serial_list; // @synthesize bind_serial_list=_bind_serial_list;
@property(retain, nonatomic) NSString *m_nsBankLogoUrl; // @synthesize m_nsBankLogoUrl;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName;
@property(nonatomic) int m_enCurrentItemStatus; // @synthesize m_enCurrentItemStatus;
@property(retain, nonatomic) NSString *m_nsFavUsedRemark; // @synthesize m_nsFavUsedRemark;
@property(retain, nonatomic) NSString *m_nsFavUsedManual; // @synthesize m_nsFavUsedManual;
@property(retain, nonatomic) NSString *m_nsFavorTypeDesc; // @synthesize m_nsFavorTypeDesc;
@property(retain, nonatomic) NSString *m_nsFavName; // @synthesize m_nsFavName;
@property(retain, nonatomic) NSString *m_nsFavDesc; // @synthesize m_nsFavDesc;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(nonatomic) unsigned int m_uiFavType; // @synthesize m_uiFavType;
@property(nonatomic) unsigned int m_uiFavSubType; // @synthesize m_uiFavSubType;
@property(nonatomic) unsigned long long m_uiFavProperty; // @synthesize m_uiFavProperty;
@property(retain, nonatomic) NSString *m_nsFavID; // @synthesize m_nsFavID;
@property(nonatomic) _Bool m_bBankFav; // @synthesize m_bBankFav;

@end

