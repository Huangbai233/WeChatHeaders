//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGoodsCell, MMFinderLiveGoodsViewModel, NSDictionary;

@protocol MMFinderLiveGoodsCellBaseDelegate <NSObject>

@optional
- (void)onLiveGoodsCellLimitDiscountArriveTime:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2;
- (void)onActionButtonClicked:(MMFinderLiveGoodsCell *)arg1 goodsViewModel:(MMFinderLiveGoodsViewModel *)arg2 info:(NSDictionary *)arg3;
@end
