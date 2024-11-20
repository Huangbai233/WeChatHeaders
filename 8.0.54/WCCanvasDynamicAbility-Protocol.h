//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSMutableArray;

@protocol WCCanvasDynamicAbility <NSObject>
@property(retain, nonatomic) NSMutableArray *dynamicsInfo;

@optional
- (_Bool)updateUsingDynamicInfo:(NSDictionary *)arg1;
@end
