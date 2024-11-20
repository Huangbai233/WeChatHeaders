//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TextStateLikeLogicDelegate <NSObject>
- (void)onLike:(_Bool)arg1 success:(_Bool)arg2 textStateId:(NSString *)arg3;
@end

