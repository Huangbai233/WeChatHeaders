//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCAdFinderTopicReportInfo : NSObject
{
    unsigned int _infoBarClickCount;
    NSMutableArray *_reportItemList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *reportItemList; // @synthesize reportItemList=_reportItemList;
@property(nonatomic) unsigned int infoBarClickCount; // @synthesize infoBarClickCount=_infoBarClickCount;

@end

