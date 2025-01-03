//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, MMTableView, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, NewContactsSearchPanelView, UIBarButtonItem, UIButton, UIView;
@protocol WCRedEnvelopesMultiSelectContactsViewControllerDelegate;

@interface WCRedEnvelopesMultiSelectContactsViewController
{
    id <WCRedEnvelopesMultiSelectContactsViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    NSDictionary *m_dicExistContact;
    NSDictionary *m_dicIgnoreContact;
    _Bool m_bShowHistoryGroup;
    _Bool m_bShowRadarCreateRoom;
    _Bool m_bDidBack;
    NSMutableDictionary *m_dicMultiSelect;
    NSIndexPath *m_indexPathToBeDeleted;
    NewContactsSearchPanelView *m_panelView;
    UIButton *m_panelBtn;
    UIBarButtonItem *m_panelBtnItem;
    NSMutableArray *m_selectIndexPaths;
    ContactsDataLogic *m_contactsDataLogic;
    unsigned int m_uiGroupScene;
    NSArray *m_arrTagContacts;
    NSString *m_nsTagName;
    unsigned long long m_memberCountLimit;
    UIView *_tableFooterView;
    NSString *nsCurrentSearchText;
    _Bool _m_bShowAllTags;
    unsigned int m_uiMaxCountSelect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bShowAllTags; // @synthesize m_bShowAllTags=_m_bShowAllTags;
@property(nonatomic) unsigned int m_uiMaxCountSelect; // @synthesize m_uiMaxCountSelect;
@property(nonatomic) unsigned long long m_memberCountLimit; // @synthesize m_memberCountLimit;
@property(retain, nonatomic) UIBarButtonItem *m_panelBtnItem; // @synthesize m_panelBtnItem;
@property(retain, nonatomic) UIButton *m_panelBtn; // @synthesize m_panelBtn;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property(nonatomic) _Bool m_bShowRadarCreateRoom; // @synthesize m_bShowRadarCreateRoom;
@property(nonatomic) _Bool m_bShowHistoryGroup; // @synthesize m_bShowHistoryGroup;
@property(retain, nonatomic) NSDictionary *m_dicIgnoreContact; // @synthesize m_dicIgnoreContact;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(nonatomic) __weak id <WCRedEnvelopesMultiSelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onSelectDoneWithContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (unsigned long long)getSectionIndexOfTag;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)getTotalSelectCount;
- (void)handleSelectRadarCreateRoom;
- (void)handleSelectHistoryGroup;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeTagCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeHistoryGroupCell:(id)arg1;
- (void)makeRadarCreateRoomCell:(id)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)showAlertForOverMax;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTitleArea;
- (void)initData;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (_Bool)updateMultiSelect:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (void)updatePanelView:(id)arg1;
- (void)updatePanelBtn;
- (void)addSelect:(id)arg1;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (_Bool)isIgnore:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (void)UpdateForChatGroup:(id)arg1;
- (void)removeSelect:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

