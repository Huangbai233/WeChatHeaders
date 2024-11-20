//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@protocol ContactInitLogicExt <NSObject>

@optional
- (void)onContactInitSuccess;
- (void)onContactInitFail;
- (void)onContactInitProcessUpdate:(unsigned int)arg1;
@end

