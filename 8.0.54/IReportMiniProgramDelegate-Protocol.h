//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IReportMiniProgramDelegate <NSObject>
- (void)onReportFail:(NSString *)arg1;
- (void)onReportSuccess:(long long)arg1;
@end

