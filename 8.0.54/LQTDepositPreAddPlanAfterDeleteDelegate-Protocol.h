//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString, PreAddPlanResp;

@protocol LQTDepositPreAddPlanAfterDeleteDelegate <NSObject>
- (void)onLQTDepositPreAddPlanAfterDeleteError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPreAddPlanAfterDeleteReponseOK:(PreAddPlanResp *)arg1;
@end

