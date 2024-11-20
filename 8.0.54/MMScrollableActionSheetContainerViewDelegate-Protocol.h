//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class MMScrollableActionSheetHorizontalItemInfo;

@protocol MMScrollableActionSheetContainerViewDelegate <NSObject>
- (void)onTappedCancel;
- (void)onTappedItemInfo:(MMScrollableActionSheetHorizontalItemInfo *)arg1;
@end
