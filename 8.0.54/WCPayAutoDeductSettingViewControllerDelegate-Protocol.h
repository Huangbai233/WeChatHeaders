//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayAutoDeductSettingViewControllerDelegate <NSObject>
- (void)OnAutoDeductSettingCancel;
- (void)OnFooterButtonClick:(WCPayControlData *)arg1;
@end

