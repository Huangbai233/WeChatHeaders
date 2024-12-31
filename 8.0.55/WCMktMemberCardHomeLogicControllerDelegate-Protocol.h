//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSIndexPath;

@protocol WCMktMemberCardHomeLogicControllerDelegate <NSObject>
- (_Bool)isVCFromJsapiScene;
- (void)onTableViewNeedUpdateSortContent;
- (void)onTableViewNeedShowLoading;
- (void)onTableViewNeedDeleteWithIndexPath:(NSIndexPath *)arg1;
- (void)onTableViewNeedRefresh;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (MMUIViewController *)getViewController;
@end

