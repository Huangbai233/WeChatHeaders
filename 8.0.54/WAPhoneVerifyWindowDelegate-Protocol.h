//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAPhoneVerifyWindowDelegate <NSObject>
- (void)onClose;
- (void)onRetry;
- (void)onComplete:(NSString *)arg1;
@end

