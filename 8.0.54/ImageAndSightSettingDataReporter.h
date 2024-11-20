//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@interface ImageAndSightSettingDataReporter : NSObject
{
}

+ (void)reportDataAtOptionChanged:(unsigned long long)arg1 isSwitchOn:(_Bool)arg2;
+ (void)reportDataAtScene:(unsigned long long)arg1;
+ (void)reportDataAtLeaveSettingController;
+ (void)reportDataAtLaunchSuccess;

@end

