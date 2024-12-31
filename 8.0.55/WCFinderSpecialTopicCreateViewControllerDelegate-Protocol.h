//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderHighlightTopicCreateViewController;

@protocol WCFinderSpecialTopicCreateViewControllerDelegate <NSObject>

@optional
- (void)specialTopicCreateViewController:(WCFinderHighlightTopicCreateViewController *)arg1 didClickCreateBtnWithTopicName:(NSString *)arg2;
@end
