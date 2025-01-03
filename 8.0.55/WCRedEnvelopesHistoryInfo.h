//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface WCRedEnvelopesHistoryInfo : NSObject
{
    long long m_lRecTotalNum;
    long long m_lRecTotalAmount;
    long long m_lSendTotalNum;
    long long m_lSendTotalAmount;
    long long m_lTotalGameCount;
    NSMutableArray *m_arrRecList;
    NSMutableArray *m_arrSendList;
    _Bool m_bHasMoreValue;
    NSString *m_nsCurrentYear;
    NSArray *m_arrAllowSelectYear;
    NSString *m_nsHeaderImageClickedUrl;
    NSString *m_nsProcessContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsProcessContent; // @synthesize m_nsProcessContent;
@property(retain, nonatomic) NSString *m_nsHeaderImageClickedUrl; // @synthesize m_nsHeaderImageClickedUrl;
@property(retain, nonatomic) NSString *m_nsCurrentYear; // @synthesize m_nsCurrentYear;
@property(retain, nonatomic) NSArray *m_arrAllowSelectYear; // @synthesize m_arrAllowSelectYear;
@property(nonatomic) _Bool m_bHasMoreValue; // @synthesize m_bHasMoreValue;
@property(nonatomic) long long m_lTotalGameCount; // @synthesize m_lTotalGameCount;
@property(nonatomic) long long m_lSendTotalNum; // @synthesize m_lSendTotalNum;
@property(nonatomic) long long m_lSendTotalAmount; // @synthesize m_lSendTotalAmount;
@property(nonatomic) long long m_lRecTotalNum; // @synthesize m_lRecTotalNum;
@property(nonatomic) long long m_lRecTotalAmount; // @synthesize m_lRecTotalAmount;
@property(retain, nonatomic) NSMutableArray *m_arrSendList; // @synthesize m_arrSendList;
@property(retain, nonatomic) NSMutableArray *m_arrRecList; // @synthesize m_arrRecList;

@end

