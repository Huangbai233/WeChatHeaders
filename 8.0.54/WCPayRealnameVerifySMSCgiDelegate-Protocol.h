//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString, RealNameVerifySmsResp;

@protocol WCPayRealnameVerifySMSCgiDelegate <NSObject>
- (void)onWCPayRealnameVerifySMSCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayRealnameVerifySMSCgiResp:(RealNameVerifySmsResp *)arg1;
@end

