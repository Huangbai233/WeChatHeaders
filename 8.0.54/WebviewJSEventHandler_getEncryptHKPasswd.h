//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class JSEvent, NSString;

@interface WebviewJSEventHandler_getEncryptHKPasswd
{
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
- (void)onGetEncryptHKPasswdFail:(_Bool)arg1;
- (void)onGetEncryptHKPasswdSucc:(id)arg1 signature:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

