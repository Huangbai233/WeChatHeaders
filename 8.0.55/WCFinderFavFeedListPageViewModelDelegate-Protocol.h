//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderFavFeedListPageViewModelDelegate <NSObject>

@optional
- (void)WCFinderFavFeedListVMMegaVideoFavStatusChangedRet:(_Bool)arg1 videoId:(NSString *)arg2 isFav:(_Bool)arg3;
- (void)WCFinderFavFeedListVMMegaVideoDelete:(NSString *)arg1;
- (void)WCFinderFavFeedListVMfetchDataFailed;
- (void)WCFinderFavFeedListVMfetchDataSucceesful;
@end
