//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class WCFinderEditFrameBlurView;

@protocol WCFinderEditFrameBlurViewDelegate <NSObject>

@optional
- (void)onfinderEditFrameBlurViewTap;
- (void)onFinderEditFrameBlurViewUpdateBlurButtonFrame:(struct CGRect)arg1;
- (struct CGRect)currentPreviewRect;
- (void)finderEditFrameBlurView:(WCFinderEditFrameBlurView *)arg1 endEditing:(_Bool)arg2;
@end

