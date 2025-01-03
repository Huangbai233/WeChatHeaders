//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TVHttpProxyManager : NSObject
{
}

+ (id)getInstance;
- (void)TVHttpProxyHandlerMemoryWarning;
- (void)TVHttpProxySetPlayerState:(int)arg1;
- (void)TVHttpProxySetNetWorkState:(int)arg1;
- (void)TVHttpProxyStopPlay:(int)arg1;
- (void)TVHttpProxySetRemainTime:(int)arg1 withRemainTime:(int)arg2;
- (id)TVHttpProxyBuildPlayURLMP4:(int)arg1;
- (int)TVHttpProxyPreLoad:(int)arg1 withDuration:(int)arg2;
- (int)TVHttpProxyStartPlay:(id)arg1 withFileType:(int)arg2 withFileID:(id)arg3 withFileSize:(long long)arg4 withFileDuration:(int)arg5;
- (id)TVHttpProxyGetVersion;
- (void)TVHttpProxyDeinit;
- (int)TVHttpProxyGetLocalServerPort;
- (int)TVHttpProxyInit:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)deinitModule;
- (int)initModule:(CDUnknownFunctionPointerType)arg1 withReportFunc:(CDUnknownFunctionPointerType)arg2 withIDKeyReportFunc:(CDUnknownFunctionPointerType)arg3 withKVReportFunc:(CDUnknownFunctionPointerType)arg4;
- (void)deinitLog;
- (void)initLog;
- (id)init;

@end

