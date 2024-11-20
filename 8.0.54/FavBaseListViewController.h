//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class FavAddressDataController, FavBaseTableDataController, FavSearchBar, FavSearchExtendFilterPanel, FavSearchTopFilterView, MMTableView, MMUIActivityIndicatorView, MMUILabel, MMUIView, MsgFastBrowseView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIColor, UIView, WCFinderBusinessCustomListDetailViewController, WCFinderFeedFlowView;

@interface FavBaseListViewController
{
    unsigned int m_curMinItemUpdateTime;
    NSString *m_searchTaskKey;
    unsigned long long m_cellStyle;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    MMUILabel *m_emptySearchLabel;
    MsgFastBrowseView *m_msgFastBrowseView;
    NSMutableArray *m_arrImgInfo;
    WCFinderFeedFlowView *m_feedFlowView;
    NSMutableArray *m_arrFinderItems;
    unsigned long long m_feedFlowViewState;
    WCFinderBusinessCustomListDetailViewController *m_feedDetailViewController;
    FavBaseTableDataController *m_dataController;
    FavAddressDataController *m_addressDataController;
    _Bool m_bReceiveSearchResult;
    NSMutableArray *m_toCheckTypes;
    NSMutableArray *m_checkedTypes;
    NSDictionary *m_filterTypeToName;
    NSMutableDictionary *m_typeCount;
    NSDictionary *m_filterNameToType;
    NSString *m_checkFilterSearchKey;
    UIView *m_navigationBarBackground;
    UIView *m_navigationSep;
    FavSearchBar *m_searchBar;
    FavSearchTopFilterView *m_topFilter;
    FavSearchExtendFilterPanel *m_filterExtendPanel;
    _Bool m_duringAnimation;
    MMUIView *m_maskView;
    MMUIView *m_containView;
    MMUIActivityIndicatorView *m_searchLoadingView;
    _Bool m_hasItemUpdate;
    int m_preResultCount;
    NSMutableSet *m_searchTagsFromCard;
    unsigned long long showFinderTime;
    _Bool m_hasSelectedTypeSinceInit;
    CDUnknownBlockType m_afterPresectHandler;
    unsigned int _enterPageTimeInS;
    long long _selectedType;
    NSArray *_selectedTags;
    NSString *_searchText;
    NSString *_defaultTitle;
    UIColor *_backgroundColor;
    NSArray *_displayItemTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *displayItemTypes; // @synthesize displayItemTypes=_displayItemTypes;
@property(nonatomic) unsigned int enterPageTimeInS; // @synthesize enterPageTimeInS=_enterPageTimeInS;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(readonly, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, nonatomic) NSArray *selectedTags; // @synthesize selectedTags=_selectedTags;
@property(readonly, nonatomic) long long selectedType; // @synthesize selectedType=_selectedType;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)businessCustomListDetailRemainSection:(long long)arg1;
- (_Bool)enableTingListMode;
- (void)onClickTagButtonWithTagName:(id)arg1;
- (void)deselectTag:(id)arg1 fromFilter:(id)arg2;
- (void)selectTag:(id)arg1 fromFilter:(id)arg2;
- (void)onMsgFastBrowseViewDidScroll:(id)arg1;
- (void)onMsgFastBrowseViewWillBeginDragging:(id)arg1;
- (void)onMsgFastBrowseViewGetMoreMsg:(id)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (int)getIndexOfImage:(id)arg1;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (double)getContentViewY;
- (void)onHideExtendFilterPanel;
- (void)onUpdateTag:(id)arg1 to:(id)arg2 fromFilter:(id)arg3;
- (void)onCancelTagFromExtendPanel:(id)arg1;
- (void)onSelectTagFromExtendPanel:(id)arg1;
- (void)onCancelTypeFromExtendPanel;
- (void)onSelectTypeFromExtendPanel:(id)arg1;
- (void)onClickExtendBtn;
- (void)onSelectTag:(id)arg1;
- (void)onSelectType:(id)arg1;
- (void)realSearch;
- (void)onBeginEditing;
- (void)onStartSearch:(_Bool)arg1;
- (void)onDeleteType:(id)arg1;
- (void)onDeleteTag:(id)arg1;
- (void)onSearchBarMoved:(id)arg1;
- (unsigned long long)getMaxSelectedCount;
- (id)getSelectedDic;
- (unsigned long long)cellStyle;
- (void)onAddressViewDidScroll:(id)arg1;
- (void)onReloadData;
- (void)onLoadMore;
- (id)getCurrentViewController;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnTagListUpdate;
- (void)OnUpdateItems:(id)arg1;
- (_Bool)updateTagSearchResult;
- (id)genFinderDataItemsWith:(id)arg1;
- (id)filterMusicItemBySelectedType:(long long)arg1 resultArr:(id)arg2;
- (void)openFavMusicListProfile:(id)arg1;
- (void)initTingListenListBar;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 IsSuccess:(_Bool)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (long long)getSelectedType;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)onUpdateUnexistItem:(id)arg1;
- (void)onShowEmptyView;
- (_Bool)tryOpenBrandMpVideoWithInfo:(id)arg1 thumbView:(id)arg2;
- (void)initFastBrowserViewFooterView;
- (void)initFastBrowserView;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (id)getArrFinderItems;
- (void)setFeedDetailViewController:(id)arg1;
- (id)convertFeedContentVMsToCustomBusinessFeedIDModels:(id)arg1;
- (void)initFeedFlowView;
- (void)updateRecentData;
- (void)hideLoadingView;
- (void)reloadContent;
- (void)addItemList:(id)arg1;
- (double)getHeightForItem:(id)arg1;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (_Bool)isOnSearch;
- (void)updateTagFilter;
- (void)updateTypeFilterWith:(id)arg1;
- (_Bool)isSearchBarEditing;
- (double)getSearchBarHeight;
- (void)setSearchHeaderHidden:(_Bool)arg1;
- (void)dismissFilterPanelComplete;
- (void)dismissFilterPanelEnd;
- (void)dismissFilterPanelWithAnimation:(_Bool)arg1;
- (void)dismissFilterPanel;
- (void)extendFilter;
- (_Bool)useTransparentNavibar;
- (_Bool)showNavigationBarSepLine;
- (_Bool)useBlackStatusbar;
- (id)getCheckedTypes;
- (void)onCheckTypeWithResultCount:(int)arg1;
- (void)checkFilterData;
- (void)initFilterDataWithFilterTypeDic:(id)arg1;
- (void)setSearchEmpty:(_Bool)arg1;
- (void)initEmptySearchLabel;
- (void)setSearchLoading:(_Bool)arg1;
- (void)showSearchLoading;
- (void)initEmptyView;
- (void)initLoadingView;
- (_Bool)shouldIgnoreTableHeadViewForContentInset;
- (void)updateSearchHeader;
- (void)initSearchHeader;
- (void)initTableView;
- (void)initNavigationBar;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)updateContentFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)clearSearch;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool itemEditable;
- (unsigned int)getTagSearchScene;
- (unsigned int)entranceScene;
- (void)updateReport;
- (void)updateData;
- (void)preSetSelectedType:(id)arg1;
- (id)initWithFilterTypeDic:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

