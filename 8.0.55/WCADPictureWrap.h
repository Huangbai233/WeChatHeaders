//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCADPictureWrap : NSObject
{
    unsigned int _index;
    unsigned int _totalCount;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _totalTime;
}

@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int index; // @synthesize index=_index;

@end

