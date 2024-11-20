//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@protocol WCDragableSelectorViewDelegate <NSObject>

@optional
- (void)onDragableSelectorViewHeightChanged;
- (_Bool)onEndCollectionViewCellMovement:(long long)arg1;
- (void)onCollectionViewCellMoved:(struct CGPoint)arg1;
@end
