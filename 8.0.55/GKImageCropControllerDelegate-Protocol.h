//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GKImageCropViewController, UIImage;

@protocol GKImageCropControllerDelegate <NSObject>
- (void)imageCropController:(GKImageCropViewController *)arg1 didFinishWithCroppedImage:(UIImage *)arg2;
@end

