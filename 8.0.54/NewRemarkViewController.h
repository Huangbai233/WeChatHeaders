//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CContact, ContactProfileRecommendInfo, ContactRemarkLogic, CustomDescTableViewCell, MMTableView, MMTableViewInfo, MMTextView, MMUILabel, MMUITextField, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, RichTextView, UILabel, UIView, WCTableViewSectionManager;

@interface NewRemarkViewController
{
    MMTableViewInfo *m_tableViewInfo;
    WCTableViewSectionManager *m_phoneSection;
    WCTableViewSectionManager *m_descSection;
    NSMutableArray *m_arrPhoneItem;
    ContactRemarkLogic *m_logic;
    CContact *m_contact;
    MMTextView *m_descView;
    UILabel *m_descHint;
    UIView *m_tagView;
    NSMutableDictionary *m_phoneEdit;
    long long m_firstResponderIndex;
    _Bool m_downloadingImg;
    _Bool m_isDownloadFail;
    _Bool m_hasEditImg;
    _Bool m_needEditState;
    NSString *m_recommandRemark;
    _Bool m_bNeedReloadSubviews;
    _Bool m_bIsRemarkEdit;
    NSMutableArray *m_tagItemList;
    NSArray *m_originalArrSelectedTagId;
    NSArray *m_handleOriginalArrSelectedTagId;
    unsigned int m_startTime;
    NSArray *m_originalArrTotalTag;
    MMUILabel *m_tagNameLabel;
    MMTableView *m_tableView;
    CustomDescTableViewCell *m_descTableViewCell;
    long long m_currentSessionNumber;
    RichTextView *m_richTextView;
    MMUITextField *m_nameView;
    ContactProfileRecommendInfo *m_profileRecommendInfo;
    unsigned int _logpressDeleteDescPicCnt;
    unsigned int _detailpageDeleteDescPicCnt;
    long long _contactInfoViewSource;
    NSString *_remarkReportSessionId;
    NSMutableArray *_cardImgList;
    NSArray *_imageViewList;
    long long _longPressedImageIndex;
    unsigned long long _cardImgAddSource;
    NSString *_descPicSourceReportString;
    NSMutableSet *_editViewNewlyCreatedTags;
    NSMutableSet *_editViewAddedTags;
    NSMutableSet *_tableViewNewlyCreatedTags;
    NSMutableSet *_tableViewAddedTags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tableViewAddedTags; // @synthesize tableViewAddedTags=_tableViewAddedTags;
@property(retain, nonatomic) NSMutableSet *tableViewNewlyCreatedTags; // @synthesize tableViewNewlyCreatedTags=_tableViewNewlyCreatedTags;
@property(retain, nonatomic) NSMutableSet *editViewAddedTags; // @synthesize editViewAddedTags=_editViewAddedTags;
@property(retain, nonatomic) NSMutableSet *editViewNewlyCreatedTags; // @synthesize editViewNewlyCreatedTags=_editViewNewlyCreatedTags;
@property(nonatomic) unsigned int detailpageDeleteDescPicCnt; // @synthesize detailpageDeleteDescPicCnt=_detailpageDeleteDescPicCnt;
@property(nonatomic) unsigned int logpressDeleteDescPicCnt; // @synthesize logpressDeleteDescPicCnt=_logpressDeleteDescPicCnt;
@property(retain, nonatomic) NSString *descPicSourceReportString; // @synthesize descPicSourceReportString=_descPicSourceReportString;
@property(nonatomic) unsigned long long cardImgAddSource; // @synthesize cardImgAddSource=_cardImgAddSource;
@property(nonatomic) long long longPressedImageIndex; // @synthesize longPressedImageIndex=_longPressedImageIndex;
@property(retain, nonatomic) NSArray *imageViewList; // @synthesize imageViewList=_imageViewList;
@property(retain, nonatomic) NSMutableArray *cardImgList; // @synthesize cardImgList=_cardImgList;
@property(retain, nonatomic) NSString *remarkReportSessionId; // @synthesize remarkReportSessionId=_remarkReportSessionId;
@property(nonatomic) long long contactInfoViewSource; // @synthesize contactInfoViewSource=_contactInfoViewSource;
@property(retain, nonatomic) NSString *recommandRemark; // @synthesize recommandRemark=m_recommandRemark;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) _Bool needEditState; // @synthesize needEditState=m_needEditState;
- (void)onModifyContactTagList:(id)arg1 reResult:(_Bool)arg2;
- (id)navigationBarBackgroundColor;
- (void)onTagVCDismissWithEditViewNewlyCreatedTags:(id)arg1 addedTags:(id)arg2 tableViewNewlyCreatedTags:(id)arg3 addedTags:(id)arg4;
- (void)reportRemarkContactTagWithOpResult:(_Bool)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollRectToVisibleForView:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)adjustDescTextView;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (id)getContactTagNameList;
- (id)getAllTagNameList;
- (void)doExecuteOpLog;
- (void)executeOpLog;
- (void)onDownloadCardImg:(id)arg1 success:(_Bool)arg2;
- (void)onUploadCardImgFinish:(id)arg1 success:(_Bool)arg2;
- (void)uploadCardImg;
- (void)onPerformEdit;
- (_Bool)checkEdit;
- (id)checkEditPhone;
- (void)onMsgImgPickerViewControllerDidFinishSelectWithImageList:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteImage;
- (void)deleteImageAtIndex:(long long)arg1;
- (struct CGRect)cardImgViewFrameAtIndex:(unsigned int)arg1;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onLongPressCardImg:(id)arg1;
- (void)onTapAddImage;
- (void)onTapCardImg:(id)arg1;
- (void)showTagEdit;
- (void)useRecommandRemark;
- (void)hideKeyboard;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)handleTextFieldText:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)useProfileRecommendPhone;
- (void)useProfileRecommendRemark;
- (void)onClickDeletePhone:(id)arg1;
- (void)onClickAddPhone;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)getNumberSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)setCellCornerPath:(id)arg1 cornerPath:(id)arg2;
- (unsigned int)getSectionType:(long long)arg1;
- (void)reloadTagListData;
- (void)onDismissRemarkView:(id)arg1;
- (void)reflashImageCell;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (id)makeSlideTextDescriptionBtnView;
- (_Bool)needSlideTextDescriptionBtn;
- (id)makeLocalRecommPhoneView;
- (_Bool)needLocalRecommPhone;
- (id)makeLocalRecommRemarkView;
- (_Bool)needLocalRecommRemark;
- (id)makeRecommBtnView;
- (_Bool)needRecommBtn;
- (void)onModifyContact:(id)arg1;
- (id)getRemarkText;
- (void)viewDidAppear:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)onRemarkShowKeyBoard;
- (void)makeRemarkCell:(id)arg1;
- (void)makeTagsCell:(id)arg1;
- (void)reloadContactsViewTagListViewData;
- (void)makeDescriptionCell:(id)arg1;
- (long long)getDescTextMaxLength;
- (id)getTableView;
- (id)getDescView;
- (void)makeDescView;
- (double)getDescHeight;
- (void)fixDescViewHeight;
- (void)makeImageCell:(id)arg1;
- (double)getImageViewSize;
- (void)makeImageView;
- (void)makePhoneCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)showPhoneTip;
- (void)onAddPhone;
- (void)commitEditingForRowAtIndexPath:(id)arg1 Cell:(id)arg2;
- (id)getPhoneTextFieldAt:(long long)arg1;
- (long long)phoneIndexForRow:(long long)arg1;
- (id)getPhoneItemInfoAt:(unsigned long long)arg1;
- (void)reloadTableView;
- (id)getTableHeaderView;
- (void)initTableView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)startDownCardImg;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

