//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderProfileMJTempPageModel;

@protocol WCFinderProfileMJTempPageModelDelegate <NSObject>
- (void)onMJTempModelFetchStateChanged:(WCFinderProfileMJTempPageModel *)arg1;
- (void)onMJTempDataAppendFromRange:(struct _NSRange)arg1;
@end

