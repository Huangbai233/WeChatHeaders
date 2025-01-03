//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMultiSelectedContactDisplayView, MMNewMultiSelectContactsLogicController, MMTableView, MMUILabel, MMUIView, MultiTalkJumpAppInfo, NSString, UIButton, UIImage, UIImageView, UITextField;
@protocol MMNewMultiSelectContactsViewControllerDelegate;

@interface MMNewMultiSelectContactsViewController
{
    _Bool _isSearching;
    _Bool _isAllowMultiSelect;
    _Bool _isShowSelectResult;
    _Bool _m_hasReachLimit;
    unsigned int _m_clickCount;
    id <MMNewMultiSelectContactsViewControllerDelegate> _delegate;
    NSString *_m_rightButtonTitle;
    MMUIView *_headerContainerView;
    MMMultiSelectedContactDisplayView *_selectedDisplayView;
    MMUIView *_searchBar;
    UITextField *_searchTextField;
    MMUIView *_searchHintBkgView;
    UIImageView *_searchIconImgView;
    MMUILabel *_searchBarHintLabel;
    UIButton *_searchCancelBtn;
    MMTableView *_displayTableView;
    UIImage *_backgroundImage;
    unsigned long long _dataMode;
    NSString *_limitTipsContent;
    MMNewMultiSelectContactsLogicController *_logicController;
    MultiTalkJumpAppInfo *_jumpAppInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiTalkJumpAppInfo *jumpAppInfo; // @synthesize jumpAppInfo=_jumpAppInfo;
@property(nonatomic) unsigned int m_clickCount; // @synthesize m_clickCount=_m_clickCount;
@property(nonatomic) _Bool m_hasReachLimit; // @synthesize m_hasReachLimit=_m_hasReachLimit;
@property(retain, nonatomic) MMNewMultiSelectContactsLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) NSString *limitTipsContent; // @synthesize limitTipsContent=_limitTipsContent;
@property(nonatomic) unsigned long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) _Bool isShowSelectResult; // @synthesize isShowSelectResult=_isShowSelectResult;
@property(nonatomic) _Bool isAllowMultiSelect; // @synthesize isAllowMultiSelect=_isAllowMultiSelect;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) MMTableView *displayTableView; // @synthesize displayTableView=_displayTableView;
@property(retain, nonatomic) UIButton *searchCancelBtn; // @synthesize searchCancelBtn=_searchCancelBtn;
@property(retain, nonatomic) MMUILabel *searchBarHintLabel; // @synthesize searchBarHintLabel=_searchBarHintLabel;
@property(retain, nonatomic) UIImageView *searchIconImgView; // @synthesize searchIconImgView=_searchIconImgView;
@property(retain, nonatomic) MMUIView *searchHintBkgView; // @synthesize searchHintBkgView=_searchHintBkgView;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) MMUIView *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MMMultiSelectedContactDisplayView *selectedDisplayView; // @synthesize selectedDisplayView=_selectedDisplayView;
@property(retain, nonatomic) MMUIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) NSString *m_rightButtonTitle; // @synthesize m_rightButtonTitle=_m_rightButtonTitle;
@property(nonatomic) __weak id <MMNewMultiSelectContactsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setRightBarButtonItem;
- (void)setLeftBarButtonItem;
- (void)setTitleBar;
- (void)updateRightBarButtonItemEnable;
- (void)updateRightBarButtonItemTitle;
- (void)showLimitTipsView;
- (void)addExistContact2DisplayView;
- (_Bool)isNeedShowSection;
- (void)searchFieldResignFirstResponder;
- (void)cancelSearch:(id)arg1;
- (void)onTextFieldTextChange;
- (void)onFinishBarButtonPress:(id)arg1;
- (void)onCloseBarButtonPress:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (_Bool)isContactCanBeRemove:(id)arg1;
- (void)onSelectedContactDisplayViewDelete:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onSelectCountOutOfLimit;
- (void)onResultTableViewNeedReload;
- (void)onHandleCotnactTableViewSelected:(id)arg1 atIndexPath:(id)arg2 isSelected:(_Bool)arg3;
- (void)onGetContactSearchResult:(id)arg1;
- (_Bool)isJumpAppCellForSection:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setBackGroundImage:(id)arg1;
- (void)setMultiSelectLimitCount:(unsigned long long)arg1 andShowTips:(id)arg2;
- (void)setExistContactArray:(id)arg1;
- (void)setNeedShowSelectResultView:(_Bool)arg1;
- (void)setAllowMultiSelect:(_Bool)arg1;
- (_Bool)shouldInteractiveDismiss;
- (_Bool)useTransparentNavibar;
- (void)initView;
- (void)makeBackgroundBlurView;
- (void)adjustSubviewRects;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithChatRoomContact:(id)arg1;
- (id)initWithAllFriendContacts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

