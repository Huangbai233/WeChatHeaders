//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol MMMultiSelectedContactDisplayViewDelegate <NSObject>
- (_Bool)isContactCanBeRemove:(CContact *)arg1;
- (void)onSelectedContactDisplayViewDelete:(CContact *)arg1;
@end
