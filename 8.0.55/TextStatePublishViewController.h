//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, EmoticonBoardView, MMGrowTextView, MMUIButton, MMUILabel, NSArray, NSDictionary, NSString, PrivateInfo, TextStateIcon, TextStatePublishConfiguration, TextStatePublishContentBuilder, TextStatePublishEmoticonView, TextStatePublishGuideView, TextStatePublishIconButton, TextStatePublishIconList, TextStatePublishInputBar, TextStatePublishMediaSwitchView, TextStatePublishReportObject, TextStatePublishSourceInfo, TextStatePublishSourceView, TextStatePublishTitleView, TextStateTopicGuideBubbleView, UIBarButtonItem, UIScreenEdgePanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView, UIViewPropertyAnimator, WCInputController, WCLocationInfo, WCMomentsPrivacyParams, WCStatusPrivacySetting;
@protocol TextStatePublishIconPicker, TextStatePublishViewControllerDelegate;

@interface TextStatePublishViewController
{
    _Bool _preserveLastPrivacy;
    _Bool _isBeingLayout;
    _Bool _showingToast;
    unsigned int _enterScene;
    unsigned int _publishScene;
    unsigned int _nearbyExperiment;
    id <TextStatePublishViewControllerDelegate> _delegate;
    NSString *_sessionId;
    TextStatePublishContentBuilder *_builder;
    TextStatePublishConfiguration *_configuration;
    NSDictionary *_attachInfo;
    unsigned long long _emoticonSwitch;
    TextStatePublishTitleView *_customTitleView;
    UIBarButtonItem *_exitBarButton;
    UIView *_backgroundContainerView;
    UIView *_backgroundView;
    TextStatePublishMediaSwitchView *_mediaSwitchView;
    UIScrollView *_containerView;
    UIView *_headerView;
    TextStatePublishIconButton *_headerIconButton;
    TextStatePublishSourceView *_sourceView;
    UIView *_contentView;
    MMGrowTextView *_descriptionTextView;
    MMUILabel *_placeholderLabel;
    MMUIButton *_topicTextButton;
    MMUILabel *_positionLabel;
    UIView *_bottomToolBar;
    NSArray *_bottomToolButtonList;
    MMUIButton *_bottomDoneButton;
    TextStatePublishGuideView *_guideView;
    TextStateTopicGuideBubbleView *_topicGuideBubbleView;
    UIView<TextStatePublishIconPicker> *_iconCollectionView;
    UIViewPropertyAnimator *_iconCollectionShowAnimator;
    UIViewPropertyAnimator *_iconCollectionHideAnimator;
    TextStatePublishIconList *_publishIconList;
    NSString *_customIconDescription;
    TextStateIcon *_iconWrap;
    NSString *_defaultImageId;
    WCLocationInfo *_positionInfo;
    WCMomentsPrivacyParams *_privacyParams;
    long long _privacy;
    NSArray *_privacyContactNameList;
    NSArray *_privacyLabelList;
    NSArray *_privacyContactList;
    TextStatePublishSourceInfo *_sourceInfo;
    EmoticonBoardView *_emoticonBoardView;
    TextStatePublishEmoticonView *_emoticonView;
    CEmoticonWrap *_emoticonWrap;
    WCInputController *_inputController;
    TextStatePublishInputBar *_inputBar;
    UIView *_inputBackgroundView;
    UITapGestureRecognizer *_tapGesture;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGesture;
    WCStatusPrivacySetting *_lastPostPrivacySetting;
    TextStatePublishReportObject *_reportObject;
    CDUnknownBlockType _postNewbieGuideHandler;
    CDUnknownBlockType _postPositionAuthorizationAndAlertHandler;
    PrivateInfo *_privateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PrivateInfo *privateInfo; // @synthesize privateInfo=_privateInfo;
@property(copy, nonatomic) CDUnknownBlockType postPositionAuthorizationAndAlertHandler; // @synthesize postPositionAuthorizationAndAlertHandler=_postPositionAuthorizationAndAlertHandler;
@property(copy, nonatomic) CDUnknownBlockType postNewbieGuideHandler; // @synthesize postNewbieGuideHandler=_postNewbieGuideHandler;
@property(retain, nonatomic) TextStatePublishReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) WCStatusPrivacySetting *lastPostPrivacySetting; // @synthesize lastPostPrivacySetting=_lastPostPrivacySetting;
@property(nonatomic) _Bool showingToast; // @synthesize showingToast=_showingToast;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture; // @synthesize screenEdgePanGesture=_screenEdgePanGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool isBeingLayout; // @synthesize isBeingLayout=_isBeingLayout;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(retain, nonatomic) TextStatePublishInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) TextStatePublishEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) TextStatePublishSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) unsigned int nearbyExperiment; // @synthesize nearbyExperiment=_nearbyExperiment;
@property(nonatomic) _Bool preserveLastPrivacy; // @synthesize preserveLastPrivacy=_preserveLastPrivacy;
@property(retain, nonatomic) NSArray *privacyContactList; // @synthesize privacyContactList=_privacyContactList;
@property(retain, nonatomic) NSArray *privacyLabelList; // @synthesize privacyLabelList=_privacyLabelList;
@property(retain, nonatomic) NSArray *privacyContactNameList; // @synthesize privacyContactNameList=_privacyContactNameList;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
@property(retain, nonatomic) WCMomentsPrivacyParams *privacyParams; // @synthesize privacyParams=_privacyParams;
@property(retain, nonatomic) WCLocationInfo *positionInfo; // @synthesize positionInfo=_positionInfo;
@property(retain, nonatomic) NSString *defaultImageId; // @synthesize defaultImageId=_defaultImageId;
@property(retain, nonatomic) TextStateIcon *iconWrap; // @synthesize iconWrap=_iconWrap;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) TextStatePublishIconList *publishIconList; // @synthesize publishIconList=_publishIconList;
@property(retain, nonatomic) UIViewPropertyAnimator *iconCollectionHideAnimator; // @synthesize iconCollectionHideAnimator=_iconCollectionHideAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *iconCollectionShowAnimator; // @synthesize iconCollectionShowAnimator=_iconCollectionShowAnimator;
@property(retain, nonatomic) UIView<TextStatePublishIconPicker> *iconCollectionView; // @synthesize iconCollectionView=_iconCollectionView;
@property(retain, nonatomic) TextStateTopicGuideBubbleView *topicGuideBubbleView; // @synthesize topicGuideBubbleView=_topicGuideBubbleView;
@property(retain, nonatomic) TextStatePublishGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) MMUIButton *bottomDoneButton; // @synthesize bottomDoneButton=_bottomDoneButton;
@property(retain, nonatomic) NSArray *bottomToolButtonList; // @synthesize bottomToolButtonList=_bottomToolButtonList;
@property(retain, nonatomic) UIView *bottomToolBar; // @synthesize bottomToolBar=_bottomToolBar;
@property(retain, nonatomic) MMUILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) MMUIButton *topicTextButton; // @synthesize topicTextButton=_topicTextButton;
@property(retain, nonatomic) MMUILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) MMGrowTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TextStatePublishSourceView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) TextStatePublishIconButton *headerIconButton; // @synthesize headerIconButton=_headerIconButton;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TextStatePublishMediaSwitchView *mediaSwitchView; // @synthesize mediaSwitchView=_mediaSwitchView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(retain, nonatomic) UIBarButtonItem *exitBarButton; // @synthesize exitBarButton=_exitBarButton;
@property(retain, nonatomic) TextStatePublishTitleView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(nonatomic) unsigned long long emoticonSwitch; // @synthesize emoticonSwitch=_emoticonSwitch;
@property(nonatomic) unsigned int publishScene; // @synthesize publishScene=_publishScene;
@property(retain, nonatomic) NSDictionary *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(retain, nonatomic) TextStatePublishConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) TextStatePublishContentBuilder *builder; // @synthesize builder=_builder;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) __weak id <TextStatePublishViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTextStateIconUpdate;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (id)autoReplacedIconWithDescription:(id)arg1;
- (void)onTextExceedMaxLength:(id)arg1;
- (void)onTapNonexpandedView:(id)arg1;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onInputViewExpressionButtonClicked:(id)arg1;
- (_Bool)shouldRespondToKeyBoardEvent;
- (void)onEmoticonBoardStateDidChanged:(_Bool)arg1;
- (void)onSelectEmoticonSearchItem;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (_Bool)canSelectEmoji:(id)arg1;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)keyboardHiding;
- (void)keyboardShowing;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)textViewTextDidExceedMaxLength;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)onPOIReportStr4CommitChanged:(id)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onClickCell:(unsigned long long)arg1;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(_Bool)arg5;
- (_Bool)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (void)scrollContainerToBottomAnimated:(_Bool)arg1;
- (void)scrollContainerToCursorAnimated:(_Bool)arg1;
- (double)inputViewHeight;
- (_Bool)isGuideViewShowing;
- (_Bool)isIconCollectionViewShowing;
- (id)positionNameFromLocationInfo:(id)arg1;
- (_Bool)isFrom3rdParty;
- (id)privacyButtonTitle;
- (long long)wcPostPrivacy;
- (long long)nonExperimentPrivacy;
- (long long)defaultPrivacy;
- (void)onGetTextStateLivePhoto:(id)arg1 source:(unsigned int)arg2;
- (void)onGetTextStateImage:(id)arg1 source:(unsigned int)arg2;
- (void)onGetTextStateVideo:(id)arg1 reportInfo:(id)arg2;
- (void)endEditing;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onTapView:(id)arg1;
- (void)initPrivateInfo;
- (void)onTapPrivacyButton:(id)arg1;
- (void)jumpToPositionPickerController;
- (void)onTapPositionButton:(id)arg1;
- (id)getFinderPickerExtInfo;
- (void)jumpToFinderFeedPickerController;
- (void)onTapTakeSightButton:(id)arg1;
- (void)onTapTopicIconButton;
- (void)onTapTopicTextButton;
- (void)onTapExitBarButtonItem;
- (void)onDone;
- (void)privatePrivacyChanged:(long long)arg1 tagNameList:(id)arg2 contactList:(id)arg3;
- (_Bool)canSetEmoticon;
- (void)clearMediaSourceInfoIfNeeded;
- (void)buildContentIfNeeded;
- (void)updateRedDot;
- (_Bool)showErrorToastWithText:(id)arg1;
- (void)authorizePositionWithCompletion:(CDUnknownBlockType)arg1;
- (id)iconCollectionAnimatorForShowing:(_Bool)arg1;
- (double)iconCollectionViewY;
- (double)iconCollectionViewYForShowing:(_Bool)arg1;
- (void)hideIconCollectionView;
- (void)showIconCollectionView;
- (void)showPrivacyChangeAlert;
- (void)checkPrivacyChangeAlertWithForceShow:(_Bool)arg1;
- (void)checkPositionAuthorization;
- (void)tryToHideTopicGuideBubble;
- (void)tryToShowTopicGuideBubble;
- (void)checkNewbieGuide;
- (void)layoutToastViewIfNeeded;
- (void)layoutInputView;
- (void)layoutTopicGuideBubbleView;
- (void)layoutBackgroundView;
- (void)layoutBottomView;
- (void)layoutIconCollectionView;
- (void)layoutHeaderView;
- (void)layoutContentViewForBeginY:(double)arg1 maxHeight:(double)arg2;
- (void)layoutContentView;
- (void)layoutSubviewsAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (id)bottomButtonWithType:(long long)arg1;
- (void)initTopicGuideBubbleView;
- (void)initGuideView;
- (void)initIconCollectionView;
- (void)initBottomView;
- (void)initContentView;
- (void)initHeaderView;
- (void)initContainerView;
- (void)initBackgroundView;
- (void)initCustomTitleView;
- (void)refreshDescriptionTextView;
- (void)configureView;
- (_Bool)shouldInteractiveDismiss;
- (_Bool)useTransparentNavibar;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)disableScrollViewBottomInsetAdjustment;
- (void)dealloc;
- (void)initReportObject;
- (void)initData;
- (void)initGesture;
- (void)initInputController;
- (void)initView;
- (void)initNavigationItem;
- (id)init;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)dealImageJump:(id)arg1 source:(unsigned int)arg2 picker:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (_Bool)enableToSelectLive;
- (void)handleDidFinishPickingSightWithInfo:(id)arg1;
- (void)jumpToCameraController;
- (void)jumpToImagePickerController;
- (void)registerYReportSdk;
- (void)setTransitionProgress:(double)arg1;
- (void)forceLayoutSubviewsAnimated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

