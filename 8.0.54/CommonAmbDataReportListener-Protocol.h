//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSArray, NSString;

@protocol CommonAmbDataReportListener <NSObject, UnitRCBaseProtocol>
- (void)onNativeAction:(NSString *)arg1 paramsKeys:(NSArray *)arg2 paramsValues:(NSArray *)arg3;
@end

