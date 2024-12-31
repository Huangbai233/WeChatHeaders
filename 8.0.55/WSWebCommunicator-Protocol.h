//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WSWebCommunicator <NSObject>
- (void)sendEvent:(NSString *)arg1 withParams:(NSDictionary *)arg2 sendAfterReady:(_Bool)arg3;
@end
