//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol EditVideoOptionsDelegate <NSObject>
- (float)getMaxDuration;
- (float)getMinDuration;
- (NSArray *)getButtonOptions;
- (NSArray *)getToolBars;
- (_Bool)inToolBars:(NSString *)arg1;
- (_Bool)directToolBars;
@end

