//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <Foundation/NSOperation.h>

@interface NSOperation (MMContextSwizzle)
+ (void)initialize;
- (id)mmContext;
@end

