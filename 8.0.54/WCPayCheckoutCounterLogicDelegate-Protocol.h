//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCPayCheckoutCounterLogicDelegate <NSObject>
- (void)onWCPayCheckoutFail:(NSString *)arg1 dicResult:(NSDictionary *)arg2;
- (void)onWCPayCheckoutSuccess:(NSDictionary *)arg1;
- (NSDictionary *)getWCPayCheckoutParam;
@end

