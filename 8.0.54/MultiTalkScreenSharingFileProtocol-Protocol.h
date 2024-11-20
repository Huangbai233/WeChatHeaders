//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MultiTalkScreenSharingFileProtocol <NSObject>
@property(readonly, nonatomic) long long fileEncryptType;
- (NSString *)filePathForScreenSharing;
@end
