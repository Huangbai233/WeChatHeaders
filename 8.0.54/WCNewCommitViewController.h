//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class ContactsSelectorController, EmoticonBoardView, ImageSelectorController, MMAsset, MMGrowTextView, MMLoadingView, MMTimer, MMTipsViewController, MMUIButton, MMUILabel, NSArray, NSString, SightDraft, SightIconView, SightView, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UIView, WCCommitPrivacySetting, WCDataItem, WCDragDeleteBarView, WCDragTipView, WCInputController, WCLocationInfo, WCMomentsAnimatedFireworksView, WCMomentsPostReportSession, WCMomentsSpringTextContainerView, WCMusicInfo, WCPOIStarView, WCPasteTextLengthLogic, WCSelectorView, WCTableViewManager, WCTimelineEnhanceDraftController, WCTimelineExtBean, WCTimelinePOIPickerViewController, WCTimelineTrashReportData;
@protocol WCCommitViewAnimationDelegate;

@interface WCNewCommitViewController
{
    WCTableViewManager *m_tableViewManager;
    UIView *_headView;
    UIView *_mediaContainerView;
    WCSelectorView *_withImageView;
    WCSelectorView *_withContactView;
    UIView *_footerView;
    UILabel *_privacyTipsLabel;
    MMUIButton *_qzoneButton;
    UIImage *_sightThumbImage;
    UIImageView *_sightThumbImageView;
    UIActivityIndicatorView *_sightLoadingView;
    SightIconView *_progressView;
    WCInputController *_inputController;
    UIView *_backgroundView;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    unsigned int _iInputSection;
    id <WCCommitViewAnimationDelegate> _delegate;
    WCDataItem *_cacheDateItem;
    MMLoadingView *_loadingView;
    MMTimer *_fireTimer;
    WCLocationInfo *_poiInfo;
    WCMusicInfo *_musicInfo;
    _Bool _bNeedAnimation;
    _Bool _bShowLocation;
    _Bool _bHideAddView;
    WCPasteTextLengthLogic *pastelogic;
    WCTimelinePOIPickerViewController *_poiPickerViewController;
    NSString *_loadingOKStr;
    WCMomentsPostReportSession *_postReportSession;
    WCTimelineExtBean *_extBean;
    WCDragTipView *_dragTipView;
    _Bool m_isUseMMAsset;
    _Bool m_hasConfirmReturn;
    _Bool m_bFromWCList;
    _Bool _togetherEnabled;
    _Bool _hasShowDragTip;
    _Bool _canShowLastSelectTagCell;
    _Bool _isClickedLastSelectTagCell;
    _Bool _hasClickDone;
    _Bool _hasShownErrorTips;
    _Bool _dynamicTagEnabled;
    EmoticonBoardView *m_emoticonBoardView;
    MMGrowTextView *_textView;
    WCMomentsSpringTextContainerView *_springTextContainerView;
    ContactsSelectorController *_contactsSelectorController;
    unsigned long long _type;
    NSString *_poiReportStr4Commit;
    SightDraft *_sightDraft;
    MMAsset *_sightAsset;
    NSArray *_tempSelectContacts;
    WCTimelineEnhanceDraftController *_enhanceDraftSaveController;
    WCTimelineTrashReportData *_trashReportData;
    ImageSelectorController *_imageSelectorController;
    SightView *_m_sightFullScreenPreviewView;
    WCDragDeleteBarView *_deleteBarView;
    WCPOIStarView *_poiStarView;
    WCCommitPrivacySetting *_lastPostPrivacySetting;
    MMTipsViewController *_savingAlertView;
    MMUILabel *_remainWordCountLabel;
    long long _lastRemainWordCount;
    MMLoadingView *_tigerToastView;
    WCMomentsAnimatedFireworksView *_animatedFireworksView;
    long long _springContentStyle;
    long long _springPostScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long springPostScene; // @synthesize springPostScene=_springPostScene;
@property(nonatomic) long long springContentStyle; // @synthesize springContentStyle=_springContentStyle;
@property(retain, nonatomic) WCMomentsAnimatedFireworksView *animatedFireworksView; // @synthesize animatedFireworksView=_animatedFireworksView;
@property(retain, nonatomic) MMLoadingView *tigerToastView; // @synthesize tigerToastView=_tigerToastView;
@property(nonatomic) long long lastRemainWordCount; // @synthesize lastRemainWordCount=_lastRemainWordCount;
@property(retain, nonatomic) MMUILabel *remainWordCountLabel; // @synthesize remainWordCountLabel=_remainWordCountLabel;
@property(nonatomic) _Bool dynamicTagEnabled; // @synthesize dynamicTagEnabled=_dynamicTagEnabled;
@property(nonatomic) _Bool hasShownErrorTips; // @synthesize hasShownErrorTips=_hasShownErrorTips;
@property(retain, nonatomic) MMTipsViewController *savingAlertView; // @synthesize savingAlertView=_savingAlertView;
@property(nonatomic) _Bool hasClickDone; // @synthesize hasClickDone=_hasClickDone;
@property(retain, nonatomic) WCCommitPrivacySetting *lastPostPrivacySetting; // @synthesize lastPostPrivacySetting=_lastPostPrivacySetting;
@property(nonatomic) _Bool isClickedLastSelectTagCell; // @synthesize isClickedLastSelectTagCell=_isClickedLastSelectTagCell;
@property(nonatomic) _Bool canShowLastSelectTagCell; // @synthesize canShowLastSelectTagCell=_canShowLastSelectTagCell;
@property(retain, nonatomic) WCPOIStarView *poiStarView; // @synthesize poiStarView=_poiStarView;
@property(nonatomic) _Bool hasShowDragTip; // @synthesize hasShowDragTip=_hasShowDragTip;
@property(retain, nonatomic) WCDragDeleteBarView *deleteBarView; // @synthesize deleteBarView=_deleteBarView;
@property(retain, nonatomic) SightView *m_sightFullScreenPreviewView; // @synthesize m_sightFullScreenPreviewView=_m_sightFullScreenPreviewView;
@property(retain, nonatomic) ImageSelectorController *imageSelectorController; // @synthesize imageSelectorController=_imageSelectorController;
@property(readonly, nonatomic) _Bool togetherEnabled; // @synthesize togetherEnabled=_togetherEnabled;
@property(retain, nonatomic) WCTimelineTrashReportData *trashReportData; // @synthesize trashReportData=_trashReportData;
@property(retain, nonatomic) WCTimelineEnhanceDraftController *enhanceDraftSaveController; // @synthesize enhanceDraftSaveController=_enhanceDraftSaveController;
@property(retain, nonatomic) NSArray *tempSelectContacts; // @synthesize tempSelectContacts=_tempSelectContacts;
@property(retain, nonatomic) MMAsset *sightAsset; // @synthesize sightAsset=_sightAsset;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(retain, nonatomic) NSString *poiReportStr4Commit; // @synthesize poiReportStr4Commit=_poiReportStr4Commit;
@property(nonatomic) _Bool bHideAddView; // @synthesize bHideAddView=_bHideAddView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) ContactsSelectorController *contactsSelectorController; // @synthesize contactsSelectorController=_contactsSelectorController;
@property(retain, nonatomic) WCMomentsSpringTextContainerView *springTextContainerView; // @synthesize springTextContainerView=_springTextContainerView;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool m_bFromWCList; // @synthesize m_bFromWCList;
@property(nonatomic) _Bool m_hasConfirmReturn; // @synthesize m_hasConfirmReturn;
@property(retain, nonatomic) EmoticonBoardView *m_emoticonBoardView; // @synthesize m_emoticonBoardView;
@property(nonatomic) _Bool m_isUseMMAsset; // @synthesize m_isUseMMAsset;
@property(retain, nonatomic) NSString *loadingOKStr; // @synthesize loadingOKStr=_loadingOKStr;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) _Bool bShowLocation; // @synthesize bShowLocation=_bShowLocation;
@property(nonatomic) _Bool bNeedAnimation; // @synthesize bNeedAnimation=_bNeedAnimation;
@property(nonatomic) __weak id <WCCommitViewAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(_Bool)arg2 withSightDraft:(id)arg3;
- (void)_removeAllCompositeTaskDataForSightDraft:(id)arg1;
- (void)_removeCompositeTaskListenerForSightDraft:(id)arg1;
- (void)_checkCompositeTaskForSightDraft:(id)arg1;
- (void)onClickCell:(unsigned long long)arg1;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(_Bool)arg5;
- (_Bool)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (_Bool)canSelectPrivacySetting:(long long)arg1;
- (void)_privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (_Bool)_canSelectPrivacySetting:(long long)arg1;
- (void)clearExtBean;
- (void)addBeanIntoUploadTask:(id)arg1;
- (void)loadBeanIfNeeded;
@property(retain, nonatomic) WCTimelineExtBean *extBean; // @synthesize extBean=_extBean;
- (void)updateSpringStyleRightBarEnabledState;
- (void)addSpringInfoIntoUploadTask:(id)arg1;
- (void)recordReportStr;
- (void)dealloc;
- (void)onPOIReportStr4CommitChanged:(id)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (_Bool)couldSelectContacts;
- (void)hideInputController;
- (_Bool)showAddView;
- (void)ImageSelectorControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)ImageSelectorControllerStartExportingWithAssetId:(id)arg1;
- (void)ImageSelectorControllerDidPresentAssetPicker;
- (void)ImageSelectorControllerDidTakeMedia;
- (void)ImageSelectorControllerDidShowActionSheet;
- (void)ImageSelectorControllerStartPreview;
- (void)ImageSelectorControllerStartEditing;
- (void)ImageSelectorControllerDidPresentCamera;
- (void)onImageOrderChange;
- (void)onRemindContactSelected:(id)arg1;
- (void)updateSelectorView;
- (_Bool)shouldJustReturnMMAsset;
- (void)onClickDownloadFailImage:(id)arg1;
- (void)imagesUpdated;
- (void)ImageSelectorController:(id)arg1 didSelectSightDraft:(id)arg2;
- (void)ImageSelectorController:(id)arg1 didDeleteAllImagesFromType:(unsigned long long)arg2 deletedImagesCount:(long long)arg3;
- (void)ImageSelectorController:(id)arg1 willDeleteAllImagesFromType:(unsigned long long)arg2;
- (void)ImageSelectorController:(id)arg1 didDeleteImageAtIndex:(unsigned long long)arg2;
- (void)ImageSelectorController:(id)arg1 willDeleteImageAtIndex:(unsigned long long)arg2;
- (void)ImageSelectorController:(id)arg1 willSelectAssetOfType:(unsigned long long)arg2;
- (void)onWCPostPrivacyChanged;
- (void)didCancelCommiting;
- (void)didFinishCommiting;
- (void)processUploadTask:(id)arg1;
- (void)setupPrivacyForUploadTask:(id)arg1;
- (void)_onPostNewItemForSightFailed;
- (void)postNewItemForSight;
- (int)currentFeedType;
- (void)onConfirmPostingImages;
- (void)OnDone;
- (void)addPoiInfoForTask:(id)arg1;
- (_Bool)checkTogetherWithGroupConflicts;
- (id)geTempSelectContactUsernames;
- (id)getUsernamesByTagNames:(id)arg1;
- (void)postImages;
- (void)removeInvalidImages:(id)arg1 tag:(id)arg2;
- (void)validateImagesBeforePosting;
- (void)reportImageExifExceptionWithAsset:(id)arg1 error:(id)arg2;
- (void)clearErrorTipsState;
- (void)markErrorTipsShown;
- (void)showErrorTipsIfNeeded;
- (long long)errorTipsForMMImage:(id)arg1;
- (void)setErrorTips:(long long)arg1 forMMImage:(id)arg2;
- (_Bool)checkImageState;
- (void)afterProcessSingleImage;
- (_Bool)processImage;
- (void)doExit;
- (void)showSaveOrNotAlert:(long long)arg1;
- (void)onCancelSaveBtnClickedWithTag:(long long)arg1;
- (void)onSaveBtnClickedWithTag:(long long)arg1;
- (_Bool)shouldShowAlert:(long long)arg1;
- (void)OnReturn;
- (void)onLocationCellClicked;
- (void)onWithContactCellClicked;
- (void)onPrivacyCellClicked;
- (void)onQZoneClicked:(id)arg1;
- (void)onTogetherAlertViewConfirm;
- (void)onPrivacyAlertViewConfirm;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showTogetherAlertViewWithMessage:(id)arg1;
- (void)showTogetherAlertView;
- (void)showPrivacyAlertView;
- (void)protectNavbarIsVisiable;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupEnhanceDraftSaveController;
- (void)setPostPrivacy:(long long)arg1;
- (void)resetEditBehaviorReporter;
- (void)viewDidLoad;
- (void)viewDidBePresented:(_Bool)arg1;
- (id)stringByTrimmingWhitespaceNewlineAttachment:(id)arg1;
- (void)initTextViewContent;
- (void)initView;
- (void)reloadType;
- (double)thumbnailSettingMargin;
- (void)reloadHeadViewSubviewsY;
- (void)adjustTigerTextContainerView;
- (void)reloadData;
- (id)createContentLabelForPrivacyCellWithTitle:(id)arg1;
- (id)createTitleLabelForPrivacyCellWithTitle:(id)arg1 color:(id)arg2;
- (void)makePrivacyCell:(id)arg1 andNormalCellManger:(id)arg2;
- (void)makeContactCell:(id)arg1 andNormalCellManger:(id)arg2;
- (id)getShowAddress;
- (void)setDeleteBarHidden:(_Bool)arg1;
- (void)reloadFooterView;
- (id)createQzoneButton;
- (id)createPrivacyTipsLabel;
- (void)stopPlayRandomFireworksIfNeeded;
- (void)startPlayRandomFireworksIfNeeded;
- (id)fireworksDisplayRectList;
- (void)_layoutFireworksPlayerView;
- (void)_initFireworksPlayerViewIfNeeded;
- (void)addMediaView;
- (void)createSubviews;
@property(readonly, nonatomic) UIView *textContainerView;
- (id)navigationBarBackgroundColor;
- (_Bool)shouldShowEvaluatePOI;
- (void)makeEvaluatePOICell:(id)arg1;
- (_Bool)isStringArr:(id)arg1 equalTo:(id)arg2;
- (void)saveLastPostPrivacySetting;
- (void)onLastSelectTagCellClick;
- (void)makeLastSelectTagCell:(id)arg1;
- (id)createCustomFooterViewForContactList;
- (void)setupInputAreaReportInfo:(unsigned long long)arg1;
- (unsigned long long)mediaTakenCountFromMediaArray:(id)arg1;
- (void)postReportSessionWillFinish;
- (void)postReportSessionDidClickPost;
- (void)postReportSessionWillStart;
@property(retain, nonatomic) WCMomentsPostReportSession *postReportSession; // @synthesize postReportSession=_postReportSession;
@property(readonly, nonatomic) WCDataItem *postingDataItem;
- (struct CGSize)thumbnailSizeForType:(unsigned long long)arg1;
- (struct CGSize)thumbnailSize;
- (id)getViewController;
- (id)initWithTextType;
- (id)initWithSightDraft:(id)arg1;
- (id)initWithImages:(id)arg1 contacts:(id)arg2;
- (id)init;
- (void)commonInit;
- (_Bool)isForbidPageSheet;
- (void)onDragableSelectorViewHeightChanged;
- (_Bool)onEndCollectionViewCellMovement:(long long)arg1;
- (void)onCollectionViewCellMoved:(struct CGPoint)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reportTopicTagInputMenuItemAction:(long long)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (void)onTextChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)showToastForCroppingTigerText;
- (void)textViewTextDidChange;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)resignInput;
- (void)becomeInput;
- (void)updateContentOffset;
- (void)asyncUpdateContentOffset;
- (void)initInputController;
- (void)initEmoticonView;
- (void)initBackgroundView;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)updateRemainWordCountLabelWithRemain:(long long)arg1;
- (void)initRemainWordCountLabel;
- (void)initInputToolView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)beginAnimationStepTwoWithCustomView:(id)arg1;
- (void)beginAnimationStepTwo;
- (void)beginAnimationStepOne;
- (void)onLoadingShowOK:(id)arg1;
- (void)showLoadingView;
@property(readonly, nonatomic) _Bool isSpringStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

