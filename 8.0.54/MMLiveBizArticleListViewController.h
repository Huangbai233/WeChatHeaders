//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMLiveBizArticleListViewModel, MMLiveBizArticleMoreView, MMTableView, NSString, WCSearchBar;
@protocol MMLiveBizArticleListViewControllerDelegate;

@interface MMLiveBizArticleListViewController
{
    id <MMLiveBizArticleListViewControllerDelegate> _delegate;
    MMLiveBizArticleListViewModel *_viewModel;
    MMTableView *_tableView;
    MMLiveBizArticleMoreView *_moreView;
    WCSearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MMLiveBizArticleMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMLiveBizArticleListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MMLiveBizArticleListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)brandArticleSearchViewController:(id)arg1 didSelectWithArticle:(id)arg2;
- (void)liveBrandArticleListViewModelDidUpdateLoadStatus:(id)arg1;
- (void)liveBrandArticleListViewModelDidUpdateArticleList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestNextPageIfNeeded;
- (void)requestFirstPage;
- (void)loadSearchBar;
- (void)loadTableView;
- (void)leftBarButtonItemDidClick:(id)arg1;
- (void)loadNavigationItems;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

