//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JITRuntime;

@protocol JITRuntimeDelegate <NSObject>

@optional
- (void)onTerminate;
- (void)onLoad:(JITRuntime *)arg1;
@end

