//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol WXFileLoaderDelegate <NSObject>
- (NSData *)getFileData:(NSString *)arg1;
@end
