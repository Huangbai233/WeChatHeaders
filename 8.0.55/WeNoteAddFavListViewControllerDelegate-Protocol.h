//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WNContentStorage;

@protocol WeNoteAddFavListViewControllerDelegate <NSObject>
- (void)onReturnSelectedFavDataList:(NSArray *)arg1;
- (WNContentStorage *)generateContentStorageWithAttributes:(NSArray *)arg1;
- (void)insertContentStroage:(WNContentStorage *)arg1;
@end

