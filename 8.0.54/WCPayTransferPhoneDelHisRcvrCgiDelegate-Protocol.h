//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString, TransferPhoneDelHisRcvrResp;

@protocol WCPayTransferPhoneDelHisRcvrCgiDelegate <NSObject>
- (void)onWCPayTransferPhoneDelHisRcvrCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneDelHisRcvrCgiResp:(TransferPhoneDelHisRcvrResp *)arg1;
@end

