//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, ContactsAllSelectPanelView, MMTableView, NSArray, NSDictionary, NSMutableDictionary, NSString, UILabel, UIView;
@protocol SelectTagContactsViewControllerDelegate;

@interface SelectTagContactsViewController
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dicMultiSelect;
    id <SelectTagContactsViewControllerDelegate> m_delegate;
    UIView *m_viewLabel;
    UILabel *m_countLabel;
    _Bool _bNeedReload;
    _Bool _bNeedDismiss;
    unsigned long long m_existContactCountInTag;
    unsigned long long m_currentSelectTimes;
    ContactsAllSelectPanelView *m_allSelectPanel;
    int m_FromWhichScene;
    NSString *tagName;
    NSArray *m_arrTagContacts;
    NSDictionary *m_dicExistContact;
    ContactTagData *m_contactTagData;
    unsigned long long _m_memberCountLimit;
    NSString *_m_rightBarButtonTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_rightBarButtonTitle; // @synthesize m_rightBarButtonTitle=_m_rightBarButtonTitle;
@property(nonatomic) unsigned long long m_memberCountLimit; // @synthesize m_memberCountLimit=_m_memberCountLimit;
@property(retain, nonatomic) ContactTagData *m_contactTagData; // @synthesize m_contactTagData;
@property(nonatomic) int m_FromWhichScene; // @synthesize m_FromWhichScene;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(retain, nonatomic) NSArray *m_arrTagContacts; // @synthesize m_arrTagContacts;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName;
@property(nonatomic) __weak id <SelectTagContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onDeselectAll;
- (void)onSelectAll;
- (_Bool)checkIfAllMemberSelected;
- (void)onDeleteContactTagSuccess:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeTagCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)updateMultiSelect:(id)arg1 contact:(id)arg2 tableView:(id)arg3 allSelectMode:(_Bool)arg4;
- (void)removeSelect:(id)arg1;
- (void)addSelect:(id)arg1;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (void)makeEmptyTipsView;
- (void)initTableView;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onDismiss:(id)arg1;
- (void)onManageTag:(id)arg1;
- (void)updateRightBarBtn;
- (void)initAllSelectPanel;
- (void)tryInitAllSelectPanel;
- (void)initTitleArea;
- (void)initView;
- (void)calculateExistCount;
- (void)initData;
- (void)sortTagContacts;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

