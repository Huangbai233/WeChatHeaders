//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TingPAGCoverController, UIImage;

@protocol TingPAGCoverControllerDelegate <NSObject>

@optional
- (void)pagController:(TingPAGCoverController *)arg1 didLoadImage:(UIImage *)arg2 index:(unsigned long long)arg3;
@end
