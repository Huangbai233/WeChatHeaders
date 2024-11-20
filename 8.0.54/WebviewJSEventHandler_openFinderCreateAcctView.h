//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class JSEvent, NSString, WCFinderCreateCoordinator;

@interface WebviewJSEventHandler_openFinderCreateAcctView
{
    WCFinderCreateCoordinator *_createCoordinator;
    JSEvent *_event;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)returnResult:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

