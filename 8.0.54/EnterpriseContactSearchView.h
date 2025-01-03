//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class AttributeLabel, MMTableView, MMUISearchBar, NSMutableArray, NSString, UIButton, UIImageView, UIView, WCTimeLineFooterView;
@protocol EnterpriseContactSearchViewDelegate;

@interface EnterpriseContactSearchView
{
    NSString *_brandUserName;
    MMUISearchBar *_superSearchBar;
    UIImageView *_searchBarWrap;
    MMUISearchBar *_searchBar;
    UIButton *_backButton;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    UIImageView *_bottomViewShadow;
    AttributeLabel *_tipLabel;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    NSString *_searchText;
    NSString *_searchedText;
    _Bool _isLoading;
    _Bool _isError;
    _Bool _hasMore;
    _Bool _hasMoving;
    double _searchTextFieldNormalWidth;
    NSMutableArray *_aryResult;
    unsigned int _scene;
    id <EnterpriseContactSearchViewDelegate> _delegate;
    UIView *_bottomView;
    NSString *_emptyTipSuffix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *emptyTipSuffix; // @synthesize emptyTipSuffix=_emptyTipSuffix;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (double)getSearchTextFieldWidth;
- (unsigned int)getTipType;
- (id)getSearchTextField;
- (id)getDataController;
- (id)getViewController;
- (id)getMMSearchBar;
- (id)makeTitleCell:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)makeContactCell:(id)arg1 tableView:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)reloadData;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)handleTextChanged:(id)arg1;
- (void)handleTextChangedDelay:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)updateSearchBarPosition;
- (void)cancelMoveSearchBar;
- (void)onRemoteSearchError;
- (void)onRemoteSearchMoreCompleted:(id)arg1 range:(unsigned int)arg2 result:(id)arg3;
- (_Bool)shouldProcessRemoteSearchResp:(id)arg1 range:(unsigned int)arg2;
- (void)enableSearchBarButton:(id)arg1;
- (void)handleRotateEvent;
- (void)onPopCompleted;
- (void)onBackButtonClicked:(id)arg1;
- (void)pop:(_Bool)arg1;
- (void)show;
- (void)initData;
- (void)initView;
- (void)dealloc;
- (id)initWithSuperSearchBar:(id)arg1 scene:(unsigned int)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

