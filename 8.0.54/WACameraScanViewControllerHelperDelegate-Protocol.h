//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol WACameraScanViewControllerHelperDelegate <NSObject>
- (void)onCameraScanViewControllerDidBePoped;

@optional
- (void)onScanItemResult:(NSDictionary *)arg1;
- (void)onScanCodeResult:(NSDictionary *)arg1;
@end

