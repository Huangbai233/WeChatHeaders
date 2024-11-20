//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRedPacketItem;

@protocol MMFinderLiveRedPacketItemObserver <NSObject>

@optional
- (void)redPacketItem:(MMFinderLiveRedPacketItem *)arg1 statusDidChange:(long long)arg2;
- (void)redPacketItem:(MMFinderLiveRedPacketItem *)arg1 remainingTimeDidChange:(unsigned int)arg2;
@end

