//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLimitedModeVerifyPasswordUtilLogicDelegate <NSObject>

@optional
- (void)onGoToSetLimitedModeViewControllerSuccess;
- (void)onVerifyPasswordSuccessTicket:(NSString *)arg1;
@end
