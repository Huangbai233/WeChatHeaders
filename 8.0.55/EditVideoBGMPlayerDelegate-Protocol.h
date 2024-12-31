//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol EditVideoBGMPlayerDelegate <NSObject>
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
@end

