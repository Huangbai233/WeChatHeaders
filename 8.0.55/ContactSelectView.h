//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, ContactsDataLogic, MMTableView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UILabel, WCColorProxy, WCDataSearcher;
@protocol ContactSelectViewDelegate;

@interface ContactSelectView : UIView
{
    id <ContactSelectViewDelegate> m_delegate;
    MMTableView *m_tableView;
    NSDictionary *m_dicExistContact;
    _Bool m_bShowHistoryGroup;
    _Bool m_bShowContactTag;
    _Bool m_bShowRadarCreateRoom;
    _Bool m_bMultiSelect;
    _Bool m_bMakeTopCell;
    NSMutableDictionary *m_dicMultiSelect;
    ContactsDataLogic *m_contactsDataLogic;
    unsigned int m_uiGroupScene;
    unsigned int m_uiCommonSearchScene;
    UIView *_tableFooterView;
    NSString *nsCurrentSearchText;
    WCDataSearcher *_searcher;
    _Bool m_bShowOpenIMContactGroup;
    unsigned long long m_selectedOpenIMContactNumber;
    NSMutableArray *m_dicHistorySelectedGroupContact;
    _Bool m_bShowRecommendContacts;
    _Bool _isSearchingRecommends;
    _Bool _lastResultHasRecommendGroups;
    NSMutableDictionary *m_dicChatRoomMyFriendCount;
    NSMutableArray *m_arrChatRoomSelectValue;
    _Bool m_bSearchSnsContact;
    _Bool _m_bHideSearchBar;
    _Bool _m_bShowMomentStatus;
    _Bool _m_bShowBlackListBlockFromTL;
    _Bool _m_bShowBlackListHideFromTL;
    _Bool _m_bShowContactRecommend;
    _Bool _bDragToDismissKeyboard;
    _Bool _m_onlyImportChatRoom;
    _Bool _m_bUseSystemIndexBar;
    _Bool _useNewSearchBar;
    NSDictionary *_m_dicDisabledContact;
    NSMutableDictionary *_m_dicMultiOpenIMContactSelect;
    NSMutableArray *_multiSelectOrderKey;
    CContact *_belongingContact;
    WCColorProxy *_colorProxy;
    NSString *_m_selectedUsername;
    NSMutableDictionary *_dicRecommendSelectHelper;
    NSMutableDictionary *_dicUsrSourceHelper;
    UIView *_customFooterView;
    UILabel *_emptyLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIView *customFooterView; // @synthesize customFooterView=_customFooterView;
@property(retain, nonatomic) NSMutableDictionary *dicUsrSourceHelper; // @synthesize dicUsrSourceHelper=_dicUsrSourceHelper;
@property(retain, nonatomic) NSMutableDictionary *dicRecommendSelectHelper; // @synthesize dicRecommendSelectHelper=_dicRecommendSelectHelper;
@property(nonatomic) _Bool useNewSearchBar; // @synthesize useNewSearchBar=_useNewSearchBar;
@property(nonatomic) _Bool m_bUseSystemIndexBar; // @synthesize m_bUseSystemIndexBar=_m_bUseSystemIndexBar;
@property(retain, nonatomic) NSString *m_selectedUsername; // @synthesize m_selectedUsername=_m_selectedUsername;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(nonatomic) _Bool m_onlyImportChatRoom; // @synthesize m_onlyImportChatRoom=_m_onlyImportChatRoom;
@property(nonatomic) _Bool bDragToDismissKeyboard; // @synthesize bDragToDismissKeyboard=_bDragToDismissKeyboard;
@property(retain, nonatomic) CContact *belongingContact; // @synthesize belongingContact=_belongingContact;
@property(retain, nonatomic) NSMutableArray *multiSelectOrderKey; // @synthesize multiSelectOrderKey=_multiSelectOrderKey;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiOpenIMContactSelect; // @synthesize m_dicMultiOpenIMContactSelect=_m_dicMultiOpenIMContactSelect;
@property(nonatomic) _Bool m_bShowContactRecommend; // @synthesize m_bShowContactRecommend=_m_bShowContactRecommend;
@property(nonatomic) _Bool m_bShowBlackListHideFromTL; // @synthesize m_bShowBlackListHideFromTL=_m_bShowBlackListHideFromTL;
@property(nonatomic) _Bool m_bShowBlackListBlockFromTL; // @synthesize m_bShowBlackListBlockFromTL=_m_bShowBlackListBlockFromTL;
@property(nonatomic) _Bool m_bShowMomentStatus; // @synthesize m_bShowMomentStatus=_m_bShowMomentStatus;
@property(nonatomic) _Bool m_bHideSearchBar; // @synthesize m_bHideSearchBar=_m_bHideSearchBar;
@property(retain, nonatomic) NSDictionary *m_dicDisabledContact; // @synthesize m_dicDisabledContact=_m_dicDisabledContact;
@property(nonatomic) unsigned int m_uiCommonSearchScene; // @synthesize m_uiCommonSearchScene;
@property(nonatomic) _Bool m_bMakeTopCell; // @synthesize m_bMakeTopCell;
@property(nonatomic) _Bool m_bSearchSnsContact; // @synthesize m_bSearchSnsContact;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property(nonatomic) _Bool m_bShowRadarCreateRoom; // @synthesize m_bShowRadarCreateRoom;
@property(nonatomic) _Bool m_bShowContactTag; // @synthesize m_bShowContactTag;
@property(nonatomic) _Bool m_bShowHistoryGroup; // @synthesize m_bShowHistoryGroup;
@property(retain, nonatomic) ContactsDataLogic *m_contactsDataLogic; // @synthesize m_contactsDataLogic;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(nonatomic) __weak id <ContactSelectViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (id)getDicSelectedContacts;
- (_Bool)shouldExtraMemberMatchWithGroup;
- (_Bool)shouldExtraMemberMatch;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)searchTextFieldDidBeginEditing;
- (void)cancelSearch;
- (void)updateSearchingState:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)postRecommendScroll;
- (void)onRecommendDataChange:(_Bool)arg1;
- (id)onContactGetDicExistContactsOutOfPickLogic;
- (void)onContactUpdatePickDataSection:(long long)arg1 added:(_Bool)arg2 deleted:(_Bool)arg3 sections:(id)arg4 sectionTitles:(id)arg5 sectionResults:(id)arg6;
- (void)updateSearchResult:(id)arg1;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (_Bool)hideFavourContactCandidate;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataNeedChange;
- (void)onContactsDataChange;
- (unsigned long long)sectionForType:(int)arg1;
- (void)reloadContacts;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmindexViewColor;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getTableView;
- (void)reloadTableView;
- (unsigned long long)getTotalSelectCount;
- (void)handleSelectWhatEverCell;
- (void)handleSelectTopCell;
- (void)handleSelectOpenIMGroup;
- (void)handleSelectRadarCreateRoom;
- (void)handleSelectWowBlackListBlock;
- (void)handleSelectWowBlackListHide;
- (void)handleSelectContactTag;
- (void)handleSelectHistoryGroup;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCreateChatRoomCell:(id)arg1;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeStartOfNormalContactCell:(id)arg1;
- (void)makeContactTagCell:(id)arg1;
- (void)makeHistoryGroupCell:(id)arg1;
- (void)makeImportFromTLBlackListCell:(id)arg1 row:(unsigned long long)arg2;
- (void)updateOpenImGroupSelectedNumber:(unsigned long long)arg1;
- (void)makeOpenIMContactCell:(id)arg1;
- (void)makeSpecialCell:(id)arg1 Title:(id)arg2;
- (void)makeTopCell:(id)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)showInfo:(id)arg1;
- (void)makeWhatEverCell:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(_Bool)arg3 clickable:(_Bool)arg4 indexPath:(id)arg5 multiSelect:(_Bool)arg6;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(_Bool)arg3 clickable:(_Bool)arg4 indexPath:(id)arg5;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(_Bool)arg3 clickable:(_Bool)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(_Bool)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (int)getSectionType:(long long)arg1;
- (long long)getNormalContactSection;
- (id)getNormalContactWithoutLatestHistory:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initView;
- (void)updateEmptyView;
- (void)initTableView;
- (void)initSearchBar;
- (void)setTableFooterLoading;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initData:(unsigned int)arg1;
- (void)mmTableView:(id)arg1 dragTriggerNotifyWithOffset:(double)arg2;
- (void)removeCustomFooterFromContactList;
- (void)setCustomFooterToContactList:(id)arg1;
- (_Bool)isJumpableResultSection:(long long)arg1;
- (_Bool)isRecommendContact:(id)arg1;
- (void)updateRecommendContacts:(id)arg1;
- (id)getRecommendGroups;
- (id)getRecommendContacts;
- (void)panelSearchRecommends:(id)arg1;
- (void)asyncSearchRecommendsUseOnlySeachGroup:(_Bool)arg1 searchGroups:(_Bool)arg2 recUseLastMem:(_Bool)arg3;
- (void)asyncSearchRecommends;
- (void)removeContact:(id)arg1 index:(id)arg2;
- (void)updateMultiSelectView;
- (_Bool)isSelectAll;
- (unsigned int)getContactCount;
- (void)setSelectAll:(_Bool)arg1;
- (_Bool)updateMultiSelect:(id)arg1 fromRecommendSection:(_Bool)arg2 fromInputView:(_Bool)arg3 needReloadTableView:(_Bool)arg4;
- (_Bool)updateMultiSelect:(id)arg1 fromRecommendSection:(_Bool)arg2 fromInputView:(_Bool)arg3;
- (_Bool)updateMultiSelect:(id)arg1 fromInputView:(_Bool)arg2;
- (_Bool)updateMultiSelect:(id)arg1;
- (void)addSelect:(id)arg1;
- (id)getCellImage:(id)arg1;
- (_Bool)canShowContactTagWithoutTagData;
- (_Bool)isHadChatRoomGroup;
- (_Bool)isDisabled:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (void)multiSelectWithSearchResult:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (void)removeSelect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

