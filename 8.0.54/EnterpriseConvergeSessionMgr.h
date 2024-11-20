//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSMutableDictionary, NSString;

@interface EnterpriseConvergeSessionMgr
{
    NSMutableDictionary *_dicMainUserName2ConvergedSessionList;
}

- (void).cxx_destruct;
- (void)updateAndConvergeMainSession:(id)arg1;
- (id)sortAndConvergeSessionList:(id)arg1 chatSessionList:(id)arg2;
- (void)updateConvergeSessionList:(id)arg1;
- (void)onEnterpriseChatSessionChanged:(id)arg1;
- (void)onEnterpriseBrandSessionsChanged:(id)arg1;
- (unsigned int)sessionCountForMainBrand:(id)arg1;
- (id)getAllSessionInfoList:(id)arg1;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

