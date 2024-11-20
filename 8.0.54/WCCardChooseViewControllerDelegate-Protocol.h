//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCCardChooseViewControllerDelegate <NSObject>
- (void)onChooseCancel;
- (void)onChooseSuccess:(NSString *)arg1;
@end

