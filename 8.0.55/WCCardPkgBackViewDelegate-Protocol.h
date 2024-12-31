//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCCardPkgBackViewDelegate <NSObject>
- (double)wcCardPkgBackViewMaxHeight;

@optional
- (void)wcIsHaveAvailabledCard:(_Bool)arg1;
- (void)wcCardSureButtonDidSelected;
@end
