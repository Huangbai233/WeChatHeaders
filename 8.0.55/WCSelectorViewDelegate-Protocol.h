//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCSelectorViewDelegate <NSObject>

@optional
- (void)onClickWholeView;
- (void)onDeleteViewAtIndex:(unsigned long long)arg1;
- (void)onAddViews:(id)arg1;
@end
