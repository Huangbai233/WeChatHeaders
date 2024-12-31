//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SightPlayerView;

@protocol SightPlayerViewDelegate <NSObject>

@optional
- (_Bool)shouldVideoLayerRasterize;
- (void)setThumbImageViewHidden:(_Bool)arg1;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onVideoSizeUpdate:(struct CGSize)arg1;
- (void)onResumeSightPlayerView:(SightPlayerView *)arg1;
- (void)onStack;
- (void)onItemCleared;
- (_Bool)onPlayEnd:(_Bool)arg1;
@end
