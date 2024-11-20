//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSString, WARedEnvelopesOpenLogic;

@interface WAJSEventHandler_openRedPacket
{
    WARedEnvelopesOpenLogic *m_openLogic;
}

- (void).cxx_destruct;
- (void)onWARedEnvelopesOpenLogicComplete;
- (void)onWARedEnvelopesOpenLogicError:(id)arg1 errCode:(long long)arg2;
- (void)onWARedEnvelopesOpenLogicBack;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

