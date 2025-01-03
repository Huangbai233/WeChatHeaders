//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AddMemLogic, CBaseContact, CContact, DelMemLogic, MMPageSheetAdapter, MMTableView, MMTableViewInfo, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NewContactsSearchPanelView, OrderedDictionary, SearchHelpDataItem, UILabel, WCColorProxy, WCSearcher;
@protocol RoomContactSelectDelegate;

@interface RoomContactSelectViewController
{
    MMTableView *m_tableView;
    NSMutableArray *m_arrRoomMembers;
    NSMutableArray *m_arrKeys;
    NSMutableDictionary *m_dicRoomMembers;
    CBaseContact *m_roomContact;
    NSMutableArray *m_arrFilterdFriends;
    NSMutableSet *m_setFilteredFriends;
    NSMutableDictionary *m_dicMatchTips;
    id <RoomContactSelectDelegate> m_delegate;
    NewContactsSearchPanelView *m_panelView;
    unsigned long long m_commonSearchScene;
    unsigned int m_scene;
    NSArray *m_customMemberList;
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_chatRoomContact;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    NSArray *m_arrMemberList;
    _Bool m_bDeleteStatus;
    AddMemLogic *m_addMemLogic;
    DelMemLogic *m_delMemLogic;
    NSIndexPath *m_oSelectIndexPath;
    SearchHelpDataItem *m_searchHelpDataItem;
    UILabel *m_groupTipLabel;
    OrderedDictionary *m_extraCustomMemberInfoDic;
    _Bool m_bShowWithGrid;
    _Bool _m_bHideSearchBar;
    _Bool _m_bShowSelf;
    _Bool _m_bHideOpenIM;
    _Bool _m_bHideBlack;
    _Bool _m_bShowAtAll;
    _Bool _m_bSortByTime;
    _Bool _m_bSortByNameWithoutIndex;
    _Bool _m_bCustomMakeCell;
    _Bool _m_bEnableEdit;
    _Bool _m_bMultiSelect;
    _Bool _m_bShowIsFriend;
    _Bool _m_bIsFromContactTag;
    _Bool _useBarButtonStyleBack;
    _Bool _m_bShowTitleViewWithMember;
    _Bool _m_bShowImporGroupMemberInfo;
    _Bool _hasClickSearch;
    int _contactInfoFromScene;
    WCSearcher *_searcher;
    NSString *_customHeaderTitle;
    WCColorProxy *_colorProxy;
    MMPageSheetAdapter *_pageSheetAdapter;
    struct CGPoint m_bContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(nonatomic) _Bool hasClickSearch; // @synthesize hasClickSearch=_hasClickSearch;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(retain, nonatomic) NSString *customHeaderTitle; // @synthesize customHeaderTitle=_customHeaderTitle;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) int contactInfoFromScene; // @synthesize contactInfoFromScene=_contactInfoFromScene;
@property(nonatomic) _Bool m_bShowImporGroupMemberInfo; // @synthesize m_bShowImporGroupMemberInfo=_m_bShowImporGroupMemberInfo;
@property(nonatomic) _Bool m_bShowTitleViewWithMember; // @synthesize m_bShowTitleViewWithMember=_m_bShowTitleViewWithMember;
@property(nonatomic) _Bool useBarButtonStyleBack; // @synthesize useBarButtonStyleBack=_useBarButtonStyleBack;
@property(nonatomic) _Bool m_bIsFromContactTag; // @synthesize m_bIsFromContactTag=_m_bIsFromContactTag;
@property(nonatomic) _Bool m_bShowIsFriend; // @synthesize m_bShowIsFriend=_m_bShowIsFriend;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect=_m_bMultiSelect;
@property(nonatomic) _Bool m_bEnableEdit; // @synthesize m_bEnableEdit=_m_bEnableEdit;
@property(nonatomic) _Bool m_bCustomMakeCell; // @synthesize m_bCustomMakeCell=_m_bCustomMakeCell;
@property(nonatomic) _Bool m_bSortByNameWithoutIndex; // @synthesize m_bSortByNameWithoutIndex=_m_bSortByNameWithoutIndex;
@property(nonatomic) _Bool m_bSortByTime; // @synthesize m_bSortByTime=_m_bSortByTime;
@property(nonatomic) _Bool m_bShowAtAll; // @synthesize m_bShowAtAll=_m_bShowAtAll;
@property(nonatomic) _Bool m_bHideBlack; // @synthesize m_bHideBlack=_m_bHideBlack;
@property(nonatomic) _Bool m_bHideOpenIM; // @synthesize m_bHideOpenIM=_m_bHideOpenIM;
@property(nonatomic) _Bool m_bShowSelf; // @synthesize m_bShowSelf=_m_bShowSelf;
@property(nonatomic) _Bool m_bHideSearchBar; // @synthesize m_bHideSearchBar=_m_bHideSearchBar;
@property(retain, nonatomic) OrderedDictionary *extraCustomMemberInfoDic; // @synthesize extraCustomMemberInfoDic=m_extraCustomMemberInfoDic;
@property(retain, nonatomic) NSArray *m_customMemberList; // @synthesize m_customMemberList;
@property(nonatomic) unsigned int m_scene; // @synthesize m_scene;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
@property(nonatomic) struct CGPoint m_bContentOffset; // @synthesize m_bContentOffset;
@property(nonatomic) _Bool m_bShowWithGrid; // @synthesize m_bShowWithGrid;
@property(nonatomic) unsigned long long m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(retain, nonatomic) NewContactsSearchPanelView *m_panelView; // @synthesize m_panelView;
@property(nonatomic) __weak id <RoomContactSelectDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CBaseContact *m_roomContact; // @synthesize m_roomContact;
- (void)onPanelViewTableViewHidden:(_Bool)arg1;
- (id)viewForPanelResultFooterInSection:(long long)arg1;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)cancelSearch;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onDelMemLogicStop:(_Bool)arg1;
- (void)showDelMemView;
- (void)setShowRemoveMember;
- (void)onAddMemLogicStop:(_Bool)arg1;
- (void)addMember;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned int)getNormalSectionType:(long long)arg1;
- (void)_openContactInfo:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (id)getViewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDone;
- (void)onCancel:(id)arg1;
- (void)OnDataChange;
- (long long)preferredStatusBarStyle;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (id)getDicMatchTips;
- (id)getArrKeys;
- (id)getTableView;
- (double)getContentViewY;
- (_Bool)useTransparentNavibar;
- (_Bool)hasNoSearchResult;
- (id)getCachedSearchHelpDataItem;
- (id)getSearchMatchTip:(id)arg1;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (Class)getNewContactsSearchPanelViewClass;
- (void)initSearchBar;
- (void)initGroupTipLabel;
- (void)initTableView;
- (id)getMemberList;
- (void)reloadMemberListAndView;
- (void)reloadView;
- (void)initData;
- (id)getContactWith:(id)arg1;
- (void)addContact:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (id)GetCompareStrByContact:(id)arg1;
- (void)updateTitleView;
- (void)onModifyContact:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (id)filterFriends:(id)arg1;
- (void)loadMemberList;
- (void)resortMemList;
- (void)reloadProfileGridTableData;
- (void)makeMemListSection:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)updateMemberView;
- (void)updateToNormalStatusEx;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

