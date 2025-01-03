//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableString;

@interface WCNewClickStatReportData
{
    unsigned int seq;
    unsigned int index;
    unsigned int indexCnt;
    unsigned int reverseInt1;
    unsigned int reverseInt2;
    unsigned int reportToLogID;
    NSMutableString *eventIDList;
    NSMutableString *reverseStr;
    NSMutableString *attribute;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int reportToLogID; // @synthesize reportToLogID;
@property(retain, nonatomic) NSMutableString *attribute; // @synthesize attribute;
@property(retain, nonatomic) NSMutableString *reverseStr; // @synthesize reverseStr;
@property(nonatomic) unsigned int reverseInt2; // @synthesize reverseInt2;
@property(nonatomic) unsigned int reverseInt1; // @synthesize reverseInt1;
@property(nonatomic) unsigned int indexCnt; // @synthesize indexCnt;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(nonatomic) unsigned int seq; // @synthesize seq;
@property(retain, nonatomic) NSMutableString *eventIDList; // @synthesize eventIDList;
- (id)description;
- (id)toString;
- (void)replaceSpecialSymbol;
- (void)report;
- (id)init;

@end

