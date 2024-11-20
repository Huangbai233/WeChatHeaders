//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class WCFinderLiveReplayMomentsViewCell;

@protocol WCFinderLiveReplayMomentsViewDelegate <NSObject>

@optional
- (void)onReplayMomentsViewCellClicked:(WCFinderLiveReplayMomentsViewCell *)arg1;
- (void)onReplayMomentsViewClosed:(_Bool)arg1;
- (void)onReplayMomentsViewOpened:(_Bool)arg1;
@end

