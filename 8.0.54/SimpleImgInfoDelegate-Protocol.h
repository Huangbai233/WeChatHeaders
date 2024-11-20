//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SimpleImgInfoDelegate <NSObject>

@optional
- (void)onSightDownloadFail;
- (void)onSightDownloadSuccess:(NSString *)arg1;
- (void)updateImagePath:(NSString *)arg1;
@end
