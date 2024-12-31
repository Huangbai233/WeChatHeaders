//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMLivePreviewRelatedViewModelDelegate <NSObject>

@optional
- (void)fetchNextPageSpecial;
- (void)onBannerInfoUpdate;
- (void)onSpecialCollectionViewScroll;
- (void)onSelectItemAtIndexPath:(unsigned long long)arg1;
@end

