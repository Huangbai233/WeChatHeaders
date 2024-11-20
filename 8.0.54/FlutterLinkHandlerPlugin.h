//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString, WAAppIdToUsernameTransfer;

@interface FlutterLinkHandlerPlugin : NSObject
{
    WAAppIdToUsernameTransfer *_appIdTransfer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppIdToUsernameTransfer *appIdTransfer; // @synthesize appIdTransfer=_appIdTransfer;
- (void)openLocationLinkWrap:(id)arg1 error:(id *)arg2;
- (void)openWeAppLinkLinkWrap:(id)arg1 error:(id *)arg2;
- (void)openLinkUrl:(id)arg1 error:(id *)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
