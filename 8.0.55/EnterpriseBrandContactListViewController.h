//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, EnterpriseBrandContactHelper, ForwardMessageLogicController, MMScrollView, MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface EnterpriseBrandContactListViewController
{
    ForwardMessageLogicController *m_forwardLogic;
    NSMutableArray *_sectionKeyArray;
    NSMutableDictionary *_allContactsDic;
    CContact *_mainBrandContact;
    NSArray *_arySubBrandContact;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
    unsigned int _fromScene;
    unsigned int _statContactCount;
    unsigned int _enterTime;
    EnterpriseBrandContactHelper *_helper;
}

- (void).cxx_destruct;
- (void)registerYReportSdk;
- (void)onBizShareInfoResult:(int)arg1 errorMsg:(id)arg2 shareInfo:(id)arg3 mainBrandUserName:(id)arg4;
- (void)onCleanUpEnterpriseChat:(id)arg1;
- (void)makeChatBrandCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)openMainBrandInfo:(id)arg1;
- (void)openEnterpriseChat;
- (void)openDisabledBrandList:(id)arg1;
- (id)getCurrentViewController;
- (void)openInviteColleages;
- (void)shareToFriend:(id)arg1;
- (void)menuItemClick:(id)arg1;
- (void)showRightTopMenuBtn:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (id)getViewController;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reportQuit;
- (void)reportSubBrandEnter:(id)arg1 SubType:(int)arg2;
- (void)reportEnter;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateEmptyView;
- (void)initEmptyView;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (id)initWithMainContact:(id)arg1 fromScene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

