//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString, PacketFilterRequest;

@protocol WXGBackupDataMgrDelegate <NSObject>
- (void)onDataMgrFilterOneMedia:(unsigned long long)arg1 withMsgDataId:(NSString *)arg2;
- (void)onDataMgrRequiredFilterRequest:(PacketFilterRequest *)arg1;
@end

