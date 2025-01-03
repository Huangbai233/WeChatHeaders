//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMTableView, NSArray, NSString;

@interface BraceletRankLikeListViewController
{
    MMTableView *_tableView;
    NSArray *_aryLikeUserList;
    _Bool _bFromMsg;
    _Bool _bHasLikeUser;
}

- (void).cxx_destruct;
- (void)onLatestRank;
- (void)makeCell:(id)arg1 AtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithRankLikeList:(id)arg1 FromMsg:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

