//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString, SendShareCoverMsgResp;

@protocol WCRedEnvelopesSendRedCoverAppMsgCgiDelegate <NSObject>
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiResponseOK:(SendShareCoverMsgResp *)arg1;
@end

