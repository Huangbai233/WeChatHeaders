//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAScreenshotHasShownGuideBubbleMsgSvrIdListWrap : NSObject
{
    NSMutableArray *_msgSvrIdList;
}

+ (void)initialize;
+ (void)PBArrayAdd_msgSvrIdList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *msgSvrIdList; // @synthesize msgSvrIdList=_msgSvrIdList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
