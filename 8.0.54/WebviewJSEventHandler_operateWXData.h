//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class JSApiScopeConfirmWindow, NSData, NSString;

@interface WebviewJSEventHandler_operateWXData
{
    _Bool _isRunning;
    NSString *_appID;
    NSData *_data;
    JSApiScopeConfirmWindow *_confirmWindow;
}

- (void).cxx_destruct;
- (void)onScopeWindowCancel:(id)arg1;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onConfirmViewCancel;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)closeConfirmWindow;
- (void)continueShowConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponseConfirm:(id)arg1;
- (void)requestConfirmWithAppID:(id)arg1 data:(id)arg2 scope:(id)arg3;
- (void)onResponseData:(id)arg1;
- (void)requestDataWithAppID:(id)arg1 data:(id)arg2;
- (void)endCancel;
- (void)endOKWithData:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endErrorWithMessage:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

