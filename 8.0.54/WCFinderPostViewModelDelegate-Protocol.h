//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderPostViewModelDelegate <NSObject>

@optional
- (NSString *)onPostViewModelFetchTextBy:(unsigned long long)arg1;
- (void)onPostViewModelCoverInfoChanged;
- (void)onPostViewModelWarningFlag:(unsigned long long)arg1;
- (void)onPostViewModelStickerListChanged;
- (void)onPostViewModelReloadSettingView;
- (void)onPostViewModelParseExtLinkRefreshParseBoard;
- (void)onPostViewModelParseExtLinkFailIsFromPasteBoard:(_Bool)arg1 errMsg:(NSString *)arg2;
- (void)onPostViewModelParseExtLinkSuc;
- (void)onPostViewModelParseExtLinkStart;
- (void)onPostViewModelUpdateAppendInfoView;
@end
