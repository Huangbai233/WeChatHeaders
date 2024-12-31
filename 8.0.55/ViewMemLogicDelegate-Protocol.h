//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CContact;

@protocol ViewMemLogicDelegate <MMUIViewControllerDelegate>
- (void)onViewMemLogicStop:(_Bool)arg1;

@optional
- (void)newMessageFromContactInfo:(CContact *)arg1;
@end
