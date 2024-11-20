//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEmoticonBrowsePageCreator : NSObject
{
}

- (id)getNativeVCFor:(id)arg1;
- (_Bool)allowsFallBackNative;
- (void)onGetLiteAppViewControllerFailedForContext:(id)arg1;
- (void)onStartTryGetLiteAppViewControllerForContext:(id)arg1;
- (void)onGetLiteAppViewController:(id)arg1 context:(id)arg2;
- (_Bool)isLiteAppEnabledFor:(id)arg1;
- (id)page;
- (id)appid;
- (id)getQueryStringFor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

