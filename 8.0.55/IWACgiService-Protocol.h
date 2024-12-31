//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WACgiRequest;

@protocol IWACgiService <NSObject>
+ (void)invalidateAllRequest;
+ (void)cancelCgiRequest:(unsigned int)arg1;
+ (unsigned int)sendCgi:(WACgiRequest *)arg1 completion:(void (^)(WACgiResponse *, unsigned int))arg2;
@end

