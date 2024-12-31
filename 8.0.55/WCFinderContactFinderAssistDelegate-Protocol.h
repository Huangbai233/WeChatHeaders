//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol WCFinderContactFinderAssistDelegate <NSObject>
- (UIViewController *)currentViewController;
- (void)finderAssistDidUpdate;

@optional
- (void)onFinderAssistClickFinder;
@end
