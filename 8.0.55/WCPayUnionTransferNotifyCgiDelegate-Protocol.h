//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CgiUnionTransferNotifyResp, NSString;

@protocol WCPayUnionTransferNotifyCgiDelegate <NSObject>
- (void)onWCPayUnionTransferNotifyCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferNotifyCgiResponseOK:(CgiUnionTransferNotifyResp *)arg1;
@end
