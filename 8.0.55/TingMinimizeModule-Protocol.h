//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class TingPlayTaskPlayingInfo;

@protocol TingMinimizeModule <NSObject, UnitRCBaseProtocol>
- (void)onPlayingInfoUpdate:(TingPlayTaskPlayingInfo *)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
@end

