//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface EnterpriseContactMgr
{
    NSMutableDictionary *_dicContactDB;
    NSMutableDictionary *_contactCache;
    NSMutableDictionary *_myContactCache;
    NSMutableDictionary *_dicUserId2BrandName;
    NSMutableDictionary *_dicContactLastInQueueTime;
    NSMutableArray *_aryGetUserContactRunningQueue;
    NSMutableArray *_aryGetUserContactWatingQueue;
    NSMutableArray *_aryGetBizChatInfoRunningQueue;
    NSMutableArray *_aryGetBizChatInfoWatingQueue;
    NSMutableArray *_deleteQueue;
    _Bool _isDeletingContact;
    NSObject<OS_dispatch_queue> *m_dispatchQueue;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onModifyContact:(id)arg1;
- (void)handleChatRoomContact:(id)arg1 needUpdateDB:(_Bool)arg2;
- (void)internalBatchUpdateContactDB:(id)arg1;
- (void)internalUpdateMyContactWithSvrResp:(id)arg1 userName:(id)arg2 chatUser:(id)arg3;
- (void)handleGetFavBizChatListFromSvr:(id)arg1;
- (void)getFavBizChatListFromSvr:(id)arg1;
- (void)handleGetBizChatUserInfoListFromSvr:(id)arg1;
- (void)getBizChatUserInfoListFromSvr:(id)arg1;
- (void)handleGetBizChatInfoListFromSvr:(id)arg1;
- (void)getBizChatInfoListFromSvr:(id)arg1;
- (void)handleGetBizChatMyUserInfoFromSvr:(id)arg1;
- (void)getBizChatMyUserInfoFromSvr:(id)arg1;
- (void)handleSetBrandFlagToSvr:(id)arg1;
- (void)setBrandFlagToSvr:(id)arg1 bitMask:(unsigned int)arg2 bitValue:(unsigned int)arg3;
- (void)clearGetUserContactInfoRunningQueue;
- (void)batchAddGetUserInfoQueue:(id)arg1 brandName:(id)arg2;
- (void)checkGetUserContactInfoWaitingQueue;
- (_Bool)hasInGetUserContactWaitingQueue:(id)arg1;
- (_Bool)hasInGetUserContactRunningQueue:(id)arg1;
- (void)clearGetChatInfoRunningQueue;
- (void)batchAddGetChatInfoQueue:(id)arg1 brandName:(id)arg2;
- (void)addGetChatInfoQueue:(id)arg1 brandUserName:(id)arg2;
- (void)addGetChatInfoQueueWithoutCheck:(id)arg1 brandUserName:(id)arg2;
- (void)checkGetBizChatInfoWaitingQueue;
- (_Bool)hasInGetBizChatInfoWaitingQueue:(id)arg1;
- (_Bool)hasInGetBizChatInfoRunningQueue:(id)arg1;
- (void)doDeleteAllContactsForBrand:(id)arg1;
- (void)checkDeleteQueue;
- (void)addDeleteTask:(id)arg1;
- (void)restoreDeleteQueue;
- (void)saveDeleteQueue;
- (void)onCallModifyContactDraftExtension:(id)arg1;
- (void)onCallModifyBatchContactExtensionWithOneContact:(id)arg1;
- (void)onCallModifyBatchContactExtension:(id)arg1;
- (void)onCallModifyContactExtension:(id)arg1;
- (_Bool)addContact:(id)arg1 AtUser:(id)arg2;
- (_Bool)deleteAtUserList:(id)arg1;
- (void)deleteContact:(id)arg1 brand:(id)arg2;
- (void)deleteAllContactsForBrand:(id)arg1;
- (_Bool)checkContactValid:(id)arg1;
- (_Bool)checkMyContactValid:(id)arg1;
- (void)updateFavBizChatListFromSvr:(id)arg1;
- (void)batchUpdateUserInfoFromSvr:(id)arg1;
- (void)batchUpdateChatInfoFromSvr:(id)arg1;
- (void)updateMyContactFromSvr:(id)arg1;
- (void)updateMyContactUserFlagToSvr:(id)arg1 bitMask:(unsigned int)arg2 bitValue:(unsigned int)arg3;
- (void)updateMyContactFromSvrIfNeed:(id)arg1;
- (_Bool)updateEnterpriseContactFromSvrIfNeed:(id)arg1 brand:(id)arg2 contactVer:(unsigned int)arg3;
- (_Bool)updateEnterpriseContactFromSvrIfNeed:(id)arg1 brand:(id)arg2 contactVer:(unsigned int)arg3 needDelay:(unsigned int)arg4;
- (_Bool)batchUpdateEnterpriseContactFromSvrIfNeed:(id)arg1 brand:(id)arg2;
- (_Bool)updateEnterpriseContactFromSvr:(id)arg1;
- (id)getFavContactListByBrand:(id)arg1;
- (id)getMyContact:(id)arg1;
- (id)getContactByUserName:(id)arg1;
- (id)getContactByUserName:(id)arg1 brand:(id)arg2;
- (id)getOrAddContactByUserName:(id)arg1 brand:(id)arg2 toDB:(_Bool)arg3 inDB:(_Bool *)arg4;
- (id)getOrAddContactByUserName:(id)arg1 displayName:(id)arg2 brand:(id)arg3 toDB:(_Bool)arg4 inDB:(_Bool *)arg5;
- (void)modifyEnterpriseHeadImageUpdateFlag:(id)arg1 isNeedUpdate:(_Bool)arg2;
- (void)updateContactDisplayNameToDB:(id)arg1 brand:(id)arg2 displayName:(id)arg3;
- (void)updateContactUserFlagToDB:(id)arg1 brand:(id)arg2 userFlag:(unsigned int)arg3;
- (void)updateContactUserFlagToCache:(id)arg1 brand:(id)arg2 userFlag:(unsigned int)arg3;
- (void)updateContactToDB:(id)arg1;
- (void)batchUpdateContactToDB:(id)arg1 brand:(id)arg2;
- (_Bool)updateFavContactList:(id)arg1 brand:(id)arg2;
- (_Bool)setContact:(id)arg1 draft:(id)arg2;
- (void)deleteEnterpriseDBWithBrandUserName:(id)arg1;
- (id)getEnterpriseDBWithBrandUserName:(id)arg1;
- (id)dbPathForBrandUserName:(id)arg1;
- (id)getDispatchQueue;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

