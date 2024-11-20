//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class DrawLotteryResponse, NSString;

@protocol WCPayDrawLotteryCgiDelegate <NSObject>
- (void)OnDrawLotteryRepsonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnDrawLotteryRepsonseOK:(DrawLotteryResponse *)arg1;
@end

