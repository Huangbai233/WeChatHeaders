//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactSelectDropDownHalfScreenView, CreateChatLogic, MMTipsViewController, MultiSelectContactsInChatRoomReport, MultiSelectContactsViewController, NSDictionary, NSMutableArray, NSObject, NSString, NewContactsSearchPanelView, SessionSelectView, UIColor, UIView;
@protocol SessionSelectControllerDelegate;

@interface SessionSelectController
{
    long long m_iSessionType;
    id <SessionSelectControllerDelegate> m_delegate;
    NSMutableArray *m_selectedContacts;
    unsigned long long m_confirmType;
    unsigned long long m_barTitleType;
    CreateChatLogic *m_createChatLogic;
    NSObject *_userData;
    MMTipsViewController *selectAlertController;
    unsigned long long m_commonSearchScene;
    NewContactsSearchPanelView *m_panelView;
    _Bool m_bMultiSelect;
    struct UIEdgeInsets m_UIEdgeInsets;
    CContact *m_fastCreatedGroupContact;
    _Bool m_updatingView;
    _Bool m_needToFixPanelViewLayout;
    UIView *m_searchResultHeaderView;
    _Bool m_hadFirstLoadView;
    ContactSelectDropDownHalfScreenView *m_contactSelectDropDownView;
    MultiSelectContactsInChatRoomReport *m_multiSelectContactsInChatRoomReport;
    NSString *nsCurrentSearchText;
    NSMutableArray *m_hadSeleteContactBeforSearch;
    SessionSelectView *m_selectView;
    _Bool m_bShowEnterpriseChat;
    _Bool m_bShowNewSession;
    _Bool m_bFilterMyContact;
    _Bool m_bAllowsMultiSelectEmpty;
    _Bool m_onlySelectSingleWeixChat;
    _Bool m_showsChatroomMembers;
    _Bool _bShowForwardToEnterpriseChat;
    _Bool _disableForwardToLocalWeWork;
    _Bool _m_alignsFilterRulesInSearchResult;
    _Bool _m_bKeepCurViewAfterSelect;
    _Bool _m_bShowMultiSelectRightBtn;
    _Bool _m_hidesMultiSelectedCount;
    _Bool _m_showsMultiSelectedRatio;
    _Bool _m_showsAlertMessageByFadingSubtitle;
    _Bool _m_onlyChatRoom;
    _Bool _m_bContainOpenIM;
    _Bool _m_bIgnoreChatRoom;
    _Bool _m_ignoresChatBox;
    _Bool _m_ignoresFileTransfer;
    _Bool _m_bHasCreateNewSession;
    _Bool _m_recentForwardHidden;
    _Bool _m_showsChatroomFriendsOnly;
    _Bool _shouldInSearchStatus;
    _Bool _shouldSelfClose;
    _Bool _ignoreMaxSelectionLimit;
    _Bool _disableSingleSelect;
    _Bool _isInPageSheetMode;
    _Bool _useNewSearchBar;
    _Bool _isDismissingForClose;
    NSDictionary *_m_ignoredContacts;
    NSString *_currentChatName;
    NSString *_customTitle;
    NSString *_m_directSearchText;
    UIColor *_brandColor;
    long long _userInterfaceStyle;
    unsigned long long _maxSelectionCount;
    unsigned long long _overrideOrientationMask;
    unsigned long long _m_specificLogicScene;
    MultiSelectContactsViewController *_multiSelectContactsVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDismissingForClose; // @synthesize isDismissingForClose=_isDismissingForClose;
@property(nonatomic) __weak MultiSelectContactsViewController *multiSelectContactsVC; // @synthesize multiSelectContactsVC=_multiSelectContactsVC;
@property(nonatomic) unsigned long long m_specificLogicScene; // @synthesize m_specificLogicScene=_m_specificLogicScene;
@property(nonatomic) _Bool useNewSearchBar; // @synthesize useNewSearchBar=_useNewSearchBar;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(nonatomic) _Bool isInPageSheetMode; // @synthesize isInPageSheetMode=_isInPageSheetMode;
@property(nonatomic) _Bool disableSingleSelect; // @synthesize disableSingleSelect=_disableSingleSelect;
@property(nonatomic) _Bool ignoreMaxSelectionLimit; // @synthesize ignoreMaxSelectionLimit=_ignoreMaxSelectionLimit;
@property(nonatomic) unsigned long long maxSelectionCount; // @synthesize maxSelectionCount=_maxSelectionCount;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(retain, nonatomic) UIColor *brandColor; // @synthesize brandColor=_brandColor;
@property(nonatomic) _Bool shouldSelfClose; // @synthesize shouldSelfClose=_shouldSelfClose;
@property(retain, nonatomic) NSString *m_directSearchText; // @synthesize m_directSearchText=_m_directSearchText;
@property(nonatomic) _Bool shouldInSearchStatus; // @synthesize shouldInSearchStatus=_shouldInSearchStatus;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(retain, nonatomic) NSString *currentChatName; // @synthesize currentChatName=_currentChatName;
@property(copy, nonatomic) NSDictionary *m_ignoredContacts; // @synthesize m_ignoredContacts=_m_ignoredContacts;
@property(nonatomic) _Bool m_showsChatroomFriendsOnly; // @synthesize m_showsChatroomFriendsOnly=_m_showsChatroomFriendsOnly;
@property(nonatomic) _Bool m_recentForwardHidden; // @synthesize m_recentForwardHidden=_m_recentForwardHidden;
@property(nonatomic) _Bool m_bHasCreateNewSession; // @synthesize m_bHasCreateNewSession=_m_bHasCreateNewSession;
@property(nonatomic) _Bool m_ignoresFileTransfer; // @synthesize m_ignoresFileTransfer=_m_ignoresFileTransfer;
@property(nonatomic) _Bool m_ignoresChatBox; // @synthesize m_ignoresChatBox=_m_ignoresChatBox;
@property(nonatomic) _Bool m_bIgnoreChatRoom; // @synthesize m_bIgnoreChatRoom=_m_bIgnoreChatRoom;
@property(nonatomic) _Bool m_bContainOpenIM; // @synthesize m_bContainOpenIM=_m_bContainOpenIM;
@property(nonatomic) _Bool m_onlyChatRoom; // @synthesize m_onlyChatRoom=_m_onlyChatRoom;
@property(nonatomic) _Bool m_showsAlertMessageByFadingSubtitle; // @synthesize m_showsAlertMessageByFadingSubtitle=_m_showsAlertMessageByFadingSubtitle;
@property(nonatomic) _Bool m_showsMultiSelectedRatio; // @synthesize m_showsMultiSelectedRatio=_m_showsMultiSelectedRatio;
@property(nonatomic) _Bool m_hidesMultiSelectedCount; // @synthesize m_hidesMultiSelectedCount=_m_hidesMultiSelectedCount;
@property(nonatomic) _Bool m_bShowMultiSelectRightBtn; // @synthesize m_bShowMultiSelectRightBtn=_m_bShowMultiSelectRightBtn;
@property(nonatomic) _Bool m_bKeepCurViewAfterSelect; // @synthesize m_bKeepCurViewAfterSelect=_m_bKeepCurViewAfterSelect;
@property(nonatomic) _Bool m_alignsFilterRulesInSearchResult; // @synthesize m_alignsFilterRulesInSearchResult=_m_alignsFilterRulesInSearchResult;
@property(nonatomic) _Bool disableForwardToLocalWeWork; // @synthesize disableForwardToLocalWeWork=_disableForwardToLocalWeWork;
@property(nonatomic) _Bool bShowForwardToEnterpriseChat; // @synthesize bShowForwardToEnterpriseChat=_bShowForwardToEnterpriseChat;
@property(nonatomic) _Bool m_showsChatroomMembers; // @synthesize m_showsChatroomMembers;
@property(nonatomic) _Bool m_onlySelectSingleWeixChat; // @synthesize m_onlySelectSingleWeixChat;
@property(nonatomic) unsigned long long m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(nonatomic) _Bool m_bAllowsMultiSelectEmpty; // @synthesize m_bAllowsMultiSelectEmpty;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) unsigned long long barTitleType; // @synthesize barTitleType=m_barTitleType;
@property(nonatomic) unsigned long long confirmType; // @synthesize confirmType=m_confirmType;
@property(nonatomic) __weak id <SessionSelectControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_bFilterMyContact; // @synthesize m_bFilterMyContact;
@property(nonatomic) _Bool m_bShowNewSession; // @synthesize m_bShowNewSession;
@property(nonatomic) _Bool m_bShowEnterpriseChat; // @synthesize m_bShowEnterpriseChat;
- (void)contactSelectorViewControllerDidCancel:(id)arg1;
- (void)contactSelectorViewController:(id)arg1 didFinishMultiplySelectingContacts:(id)arg2;
- (void)contactSelectorViewController:(id)arg1 didSelectContact:(id)arg2;
- (_Bool)contactSelectorViewController:(id)arg1 canSelectContact:(id)arg2;
- (void)onDropDownHalfScreenViewHiddenExpandView;
- (void)onDropDownHalfScreenViewContactDidHide:(id)arg1;
- (void)onDropDownHalfScreenViewContactDidSelected:(id)arg1;
- (void)selectChatroomMembers:(id)arg1;
- (_Bool)shouldShowChatroomMembers:(id)arg1;
- (void)didSelectChatBoxContact:(id)arg1;
- (void)didUnMultiSelectChatBoxContact:(id)arg1;
- (void)didMultiSelectChatBoxContact:(id)arg1;
- (void)showSubSessionSelection:(id)arg1 pageSheetProvider:(id)arg2;
- (void)onSelectCancel;
- (void)onCreateChatRoom:(id)arg1;
- (void)onSelectChatRoomWithArrKeywords:(id)arg1;
- (void)onMultiCancel:(id)arg1;
- (void)onSelectDoneWithContacts:(id)arg1;
- (_Bool)isCurrentSession:(id)arg1;
- (void)contactInBizChatSessionViewDidSelect:(id)arg1;
- (id)contactInBizChatSessionViewAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSessionView;
- (id)sectionTitleForBizChatSessionView;
- (id)sectionTitleForCurrentSessionView;
- (_Bool)showChatRoomOnly;
- (_Bool)selectView:(id)arg1 shouldSelectContact:(id)arg2;
- (void)OnSelectFromContactSelectView:(id)arg1;
- (_Bool)shouldShowTextState;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (id)onSessionSelectGetSearchString;
- (void)onSessionSelectSearchSessions:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (void)onSessionSelectSearch:(id)arg1;
- (double)recentForwardMarginForSelectView:(id)arg1 defaultMargin:(double)arg2;
- (void)onPanelViewTableViewHidden:(_Bool)arg1;
- (_Bool)isCanMultiSelectInDidSelectRow;
- (id)viewForPanelResultFooterInSection:(long long)arg1;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (void)cancelSearch;
- (void)searchTextFieldWillClearText;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)searchTextFieldDidEndEditing;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)recordClkClearAllButtonCnt;
- (void)recordDeleteBackWordsInSearchCnt;
- (void)recordContactSelectionWithContact:(id)arg1;
- (void)resetSearchPanelViewAccessibilityInNewSearchBar;
- (void)recordContactSearchSelectionWithContact:(id)arg1;
- (void)alignSelectViewTableViewToTopNewSearchBar;
- (void)resetSelectViewContentInsetInNewSearchBar;
- (void)doMultiSelectContactsInChatRoomReportWithExitScene:(unsigned int)arg1;
- (_Bool)isMultiSelectInSearchSectionHeaderView;
- (void)onSearchSectionHeaderViewMultiSelectBtnChange;
- (id)getSearchSectionHeaderMultiSelectContactButton;
- (id)getSearchResultHeaderView;
- (void)didClickImageAtIndexInNewSearchBar;
- (void)updateMultiSelectPanelViewResultView;
- (void)alignPanelViewToNewSearchBarView;
- (void)initContactSelectDropDownView;
- (_Bool)checkUseNewSearchBar;
- (void)replaceMultiSelectContacts:(id)arg1 source:(long long)arg2;
- (void)addMultiSelectContacts:(id)arg1 source:(long long)arg2;
- (void)onMultiDone;
- (void)updateMultiSelectRightBtn;
- (void)updateMultiSelectLeftBtn;
- (void)updateSelectViewSize;
- (void)didUpdatePanelViewAnimate:(id)arg1;
- (void)updatePanelView:(id)arg1;
- (_Bool)searchTextFieldShouldBeginEditing;
- (void)alertForExceedingMaxSelectionCount;
- (_Bool)checkAndAllowSelectedContacts:(id)arg1;
- (_Bool)checkAndAllowNewSelect:(id)arg1;
- (void)selectViewWillBeginDragging:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)onSelectRecommendGroupContact:(id)arg1;
- (void)HideSelectAlert;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)endMultiSelect;
- (void)cancelMultiSelect;
- (void)beginMultiSelect;
- (id)createMultiSelectRightBarItem;
- (id)createMultiSelectLeftBarItem;
- (id)createInitRightBarItem;
- (id)createInitLeftBarItem;
- (void)OnSelectForwardToEnterpriseChat:(id)arg1 appType:(long long)arg2;
- (void)onSelectChatroomMembers:(id)arg1;
- (void)onSelectAtWWKFSession;
- (void)onSelectAtChatBoxSession;
- (void)OnSelectCreateRoomSelectView:(id)arg1;
- (void)OnSelectSession:(id)arg1 SelectView:(id)arg2;
- (id)getViewController;
- (void)showDirectSearchText;
- (void)chatRoomEntryOperateKVReport:(_Bool)arg1;
- (void)confirmForword;
- (void)cancelForwording;
- (id)getGroupDispName:(id)arg1;
- (void)onSelect:(id)arg1;
- (void)performCallback;
- (id)getSelectedContacts;
- (void)callbackDelegate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)animateUpdateView;
- (void)updateView;
- (void)finishHeadPanelViewAnimation;
- (void)prepareHeadPanelViewAnimation;
- (void)alignPanelViewToSearchBarView;
- (void)initPanelView;
- (double)getSearchPanelCellSize;
- (double)getSearchPanelInputViewHeight;
- (double)getSearchPanelHeadImagesize;
- (double)getSearchPanelViewHeight;
- (void)initTitle;
- (void)initBarItem;
- (void)onShowMultiSelect:(id)arg1;
- (void)respondsToOnSelectSessionCancel;
- (void)onCancel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)onInteractiveDismissComplete;
- (_Bool)shouldInteractiveDismiss;
- (void)clearSessionSearch;
- (_Bool)onShouldFilterContact:(id)arg1;
@property(readonly, nonatomic) NSDictionary *contactSelectionRecords;
- (id)getColorProxy;
- (id)getRecentForwardDeleteList;
- (unsigned long long)getRecentForwardOneLineCount;
- (long long)getTopSessionCount;
- (long long)sectionTypeForSelectedContact:(id)arg1;
- (long long)indexForContact:(id)arg1 atSection:(long long)arg2;
- (_Bool)showNavigationBarSepLine;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)overrideUserInterfaceStyle;
- (void)dealloc;
- (void)initData;
- (id)initWithSelectedContacts:(id)arg1;
- (id)init;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetWillClose:(id)arg1 closeType:(long long)arg2;
- (void)onMultiCancelInPageSheetMode:(id)arg1;
- (void)onMultiDoneInPageSheetMode;
- (void)onShowMultiSelectInPageSheetMode:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (double)getVisibleHeight;
- (double)getContentViewY;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void)onSearchTextFieldEditStateChange:(_Bool)arg1;
- (void)updateMultiSelectRightBtnInPageSheetModeIfNeeded;
- (void)updateMultiSelectLeftBtnInPageSheetModeIfNeeded;
- (void)initBarItemInPageSheetModeIfNeeded;
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

