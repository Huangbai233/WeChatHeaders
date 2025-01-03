//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIView, WCTimeLineFooterView;

@interface ShakeMsgListViewController
{
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    UIView *_tableDefaultFooterView;
    NSMutableArray *_arrMessage;
    NSMutableDictionary *_dicCells;
    NSMutableDictionary *_dicCellHeights;
    int _scene;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)onShakeMsgUnreadCountChanged;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getNormalCellContentViewHeightAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)showEdit:(unsigned long long)arg1 show:(_Bool)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genNormalCellContentViewAtIndexPath:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initView;
- (void)updateTableFooterView:(_Bool)arg1;
- (void)initData;
- (void)loadMoreData;
- (void)updateRightBar;
- (void)addMessagesWithArray:(id)arg1;
- (void)didReceiveLocalMemoryWarning:(id)arg1;
- (void)onClearList;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

