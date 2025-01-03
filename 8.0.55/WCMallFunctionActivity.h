//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCMallFunctionActivity : NSObject
{
    unsigned int m_uiFunctionActivityId;
    NSString *m_nsFunctionActivityName;
    NSString *m_nsFunctionActivityIconLink;
    NSString *m_nsFunctionActivityHDIconLink;
    NSString *m_nsFunctionActivityInfoIconLick;
    NSString *m_nsFunctionActivityNativeLink;
    NSString *m_nsFunctionActivityH5Link;
    _Bool m_bNeedGetLatestInfo;
    NSMutableArray *m_arrFunctionActivityInfo;
    NSMutableArray *m_arrFunctionActivityRemarkInfo;
    NSMutableArray *m_arrFunctionActivityAttributeInfo;
    NSMutableArray *m_arrFunctionActivityResponseRemarkInfo;
    NSMutableArray *m_arrFunctionActivityResponseAttributeInfo;
    unsigned int m_uiType;
    NSString *m_nsThirdPartyName;
    NSString *m_nsThirdPartyDisclaimer;
    _Bool m_hasDownloadRestrict;
    _Bool _m_hasRedDot;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_hasRedDot; // @synthesize m_hasRedDot=_m_hasRedDot;
@property(nonatomic) _Bool m_hasDownloadRestrict; // @synthesize m_hasDownloadRestrict;
@property(retain, nonatomic) NSString *m_nsThirdPartyDisclaimer; // @synthesize m_nsThirdPartyDisclaimer;
@property(retain, nonatomic) NSString *m_nsThirdPartyName; // @synthesize m_nsThirdPartyName;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType;
@property(retain, nonatomic) NSString *m_nsFunctionActivityInfoIconLick; // @synthesize m_nsFunctionActivityInfoIconLick;
@property(retain, nonatomic) NSString *m_nsFunctionActivityHDIconLink; // @synthesize m_nsFunctionActivityHDIconLink;
@property(retain, nonatomic) NSString *m_nsFunctionActivityNativeLink; // @synthesize m_nsFunctionActivityNativeLink;
@property(retain, nonatomic) NSString *m_nsFunctionActivityName; // @synthesize m_nsFunctionActivityName;
@property(retain, nonatomic) NSString *m_nsFunctionActivityIconLink; // @synthesize m_nsFunctionActivityIconLink;
@property(nonatomic) _Bool m_bNeedGetLatestInfo; // @synthesize m_bNeedGetLatestInfo;
@property(retain, nonatomic) NSMutableArray *m_arrFunctionActivityResponseRemarkInfo; // @synthesize m_arrFunctionActivityResponseRemarkInfo;
@property(retain, nonatomic) NSMutableArray *m_arrFunctionActivityResponseAttributeInfo; // @synthesize m_arrFunctionActivityResponseAttributeInfo;
@property(retain, nonatomic) NSMutableArray *m_arrFunctionActivityRemarkInfo; // @synthesize m_arrFunctionActivityRemarkInfo;
@property(retain, nonatomic) NSMutableArray *m_arrFunctionActivityInfo; // @synthesize m_arrFunctionActivityInfo;
@property(retain, nonatomic) NSMutableArray *m_arrFunctionActivityAttributeInfo; // @synthesize m_arrFunctionActivityAttributeInfo;
@property(retain, nonatomic) NSString *m_nsFunctionActivityH5Link; // @synthesize m_nsFunctionActivityH5Link;
@property(nonatomic) unsigned int m_uiFunctionActivityId; // @synthesize m_uiFunctionActivityId;
- (id)debugDescription;
- (id)description;

@end

