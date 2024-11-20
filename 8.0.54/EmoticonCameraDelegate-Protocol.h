//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class EmoticonCameraViewController, EmoticonUploadInfoObj;

@protocol EmoticonCameraDelegate <NSObject>

@optional
- (void)onEmoticonCameraClose;
- (void)onEmoticonCameraDidTakeImgWithUploadInfo:(EmoticonUploadInfoObj *)arg1 viewController:(EmoticonCameraViewController *)arg2;
@end

