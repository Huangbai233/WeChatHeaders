//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol EmoticonLensListCgiDelegate <NSObject>
- (void)onRequestLensListSuccessWithLens:(NSArray *)arg1 isFirstPage:(_Bool)arg2;
- (void)onRequestLensListFail;
@end

