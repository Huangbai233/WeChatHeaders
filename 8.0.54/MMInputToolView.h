//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CBaseContact, CMessageWrap, EmoticonBoardView, MMEmoticonView, MMGrowTextView, MMHeadImageView, MMInputMsgReferView, MMQuickSendEmoticonView, MMTransparentButton, MMUIButton, MsgFullScreenInputAnimationController, MsgFullScreenInputViewController, MsgSendOpEntry, NSSet, NSString, NewEmoticonSearchViewController, RecordAdapterView, RelatedEmoticonHalfScreenViewController, SelectAttachmentView, SelectAttachmentViewController, SolitaireTipsView, TranslateToolView, UIButton, UIImageView, UIImpactFeedbackGenerator, UIView, UIViewPropertyAnimator, WASendSessionMsgView, WCGroupUndoneActionBar, WWKFCustomToolBar;
@protocol MMInputToolViewCustomizationDelegate, MMInputToolViewDelegate;

@interface MMInputToolView
{
    MMUIButton *_inputModeChangeButton;
    UIView *_toolView;
    EmoticonBoardView *_expressionView;
    RelatedEmoticonHalfScreenViewController *_relatedEmoticonViewController;
    MMGrowTextView *_textView;
    MMUIButton *_attachmentButton;
    UIButton *_expressionDoneButton;
    UIView *_recordingTipsView;
    MMTransparentButton *_recordButton;
    MMUIButton *_expressionButton;
    UIButton *_sendCaptrueView;
    WASendSessionMsgView *_sendWeAppSessionMsgView;
    UIButton *m_quickSendEmoticonBackView;
    UIView *m_quickSendEmoticonView;
    MMEmoticonView *m_emoticonView;
    double _keyboardHeight;
    unsigned long long _inputMode;
    unsigned long long _positionMode;
    unsigned long long _contentMode;
    _Bool _reqRemoteEmotionRecommendation;
    id <MMInputToolViewDelegate> _delegate;
    long long iMuteCount;
    unsigned long long _recordStatus;
    id <MMInputToolViewCustomizationDelegate> _uiDelegate;
    UIView *_parentView;
    _Bool m_bPositioning;
    unsigned long long _preSightInputMode;
    unsigned long long _preSightPositionMode;
    unsigned long long _preSightContentMode;
    double _bizInputBtnWidth;
    _Bool _showToolViewAfterAnimation;
    double _keyboardTop;
    _Bool _isWeAppSessionMsgBtnHidding;
    _Bool _hasReceiveTextBeginEditing;
    UIView *m_keyboardBackgroundView;
    UIImpactFeedbackGenerator *m_impactFeedbackGenerator;
    _Bool _isDetectingExternalKeyboard;
    _Bool m_hadAttachmentRedDot;
    SelectAttachmentViewController *m_selectAttachmentViewController;
    SelectAttachmentView *_attachmentView;
    _Bool _weappSessionMsgBtnIgnoreFirstTextEdit;
    _Bool _bNewTextInputHadShowSolitaireTips;
    _Bool _hasShownVideoView;
    _Bool _bEnableTopicSearchInteraction;
    _Bool _presentingFullScreenInput;
    unsigned int _scene;
    SEL mRecordSelector;
    UIView *_toolPanelView;
    CBaseContact *_contact;
    NSString *_lastPastedText;
    UIView *_headImageExtraView;
    RecordAdapterView *_recordAdapterView;
    unsigned long long _fMaxLength;
    MMInputMsgReferView *_msgRefView;
    MMHeadImageView *_headImageView;
    WCGroupUndoneActionBar *_undoneBar;
    MsgFullScreenInputAnimationController *_fullScreenInputTransition;
    MsgFullScreenInputViewController *_fullScreenInputVC;
    unsigned long long _touchBeginTimestamp;
    unsigned long long _requestRecordPermissionCallbackTimestamp;
    NSSet *_originTouches;
    TranslateToolView *_transToolView;
    UIView *_fakeTextBackgroundView;
    CMessageWrap *_replyingMessage;
    UIButton *_sendButton;
    UIViewPropertyAnimator *_sendButtonPresentAnimator;
    UIViewPropertyAnimator *_sendButtonDismissAnimator;
    SolitaireTipsView *_solitaireTipsView;
    MMQuickSendEmoticonView *_quickSendEmoticonView;
    NewEmoticonSearchViewController *_searchEmoticonViewControllerH5;
    NSString *_lastRequestEmoticonDesc;
    UIImageView *_attachmentRedDotImageView;
    MsgSendOpEntry *_entrys;
    WWKFCustomToolBar *_kfCustomToolBar;
    MMUIButton *_fullScreenButton;
    struct CGVector _headImageExtraEdgeVector;
    struct CGPoint _pointInScreen;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool presentingFullScreenInput; // @synthesize presentingFullScreenInput=_presentingFullScreenInput;
@property(retain, nonatomic) MMUIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(nonatomic) _Bool bEnableTopicSearchInteraction; // @synthesize bEnableTopicSearchInteraction=_bEnableTopicSearchInteraction;
@property(retain, nonatomic) WWKFCustomToolBar *kfCustomToolBar; // @synthesize kfCustomToolBar=_kfCustomToolBar;
@property(retain, nonatomic) MsgSendOpEntry *entrys; // @synthesize entrys=_entrys;
@property(retain, nonatomic) UIImageView *attachmentRedDotImageView; // @synthesize attachmentRedDotImageView=_attachmentRedDotImageView;
@property(retain, nonatomic) NSString *lastRequestEmoticonDesc; // @synthesize lastRequestEmoticonDesc=_lastRequestEmoticonDesc;
@property(retain, nonatomic) NewEmoticonSearchViewController *searchEmoticonViewControllerH5; // @synthesize searchEmoticonViewControllerH5=_searchEmoticonViewControllerH5;
@property(retain, nonatomic) MMQuickSendEmoticonView *quickSendEmoticonView; // @synthesize quickSendEmoticonView=_quickSendEmoticonView;
@property(retain, nonatomic) SolitaireTipsView *solitaireTipsView; // @synthesize solitaireTipsView=_solitaireTipsView;
@property(retain, nonatomic) UIViewPropertyAnimator *sendButtonDismissAnimator; // @synthesize sendButtonDismissAnimator=_sendButtonDismissAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *sendButtonPresentAnimator; // @synthesize sendButtonPresentAnimator=_sendButtonPresentAnimator;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) CMessageWrap *replyingMessage; // @synthesize replyingMessage=_replyingMessage;
@property(retain, nonatomic) UIView *fakeTextBackgroundView; // @synthesize fakeTextBackgroundView=_fakeTextBackgroundView;
@property(retain, nonatomic) TranslateToolView *transToolView; // @synthesize transToolView=_transToolView;
@property(retain, nonatomic) NSSet *originTouches; // @synthesize originTouches=_originTouches;
@property(nonatomic) struct CGPoint pointInScreen; // @synthesize pointInScreen=_pointInScreen;
@property(nonatomic) unsigned long long requestRecordPermissionCallbackTimestamp; // @synthesize requestRecordPermissionCallbackTimestamp=_requestRecordPermissionCallbackTimestamp;
@property(nonatomic) unsigned long long touchBeginTimestamp; // @synthesize touchBeginTimestamp=_touchBeginTimestamp;
@property(nonatomic) __weak MsgFullScreenInputViewController *fullScreenInputVC; // @synthesize fullScreenInputVC=_fullScreenInputVC;
@property(retain, nonatomic) MsgFullScreenInputAnimationController *fullScreenInputTransition; // @synthesize fullScreenInputTransition=_fullScreenInputTransition;
@property(retain, nonatomic) WCGroupUndoneActionBar *undoneBar; // @synthesize undoneBar=_undoneBar;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool hasShownVideoView; // @synthesize hasShownVideoView=_hasShownVideoView;
@property(retain, nonatomic) MMInputMsgReferView *msgRefView; // @synthesize msgRefView=_msgRefView;
@property(nonatomic) _Bool bNewTextInputHadShowSolitaireTips; // @synthesize bNewTextInputHadShowSolitaireTips=_bNewTextInputHadShowSolitaireTips;
@property(nonatomic) _Bool weappSessionMsgBtnIgnoreFirstTextEdit; // @synthesize weappSessionMsgBtnIgnoreFirstTextEdit=_weappSessionMsgBtnIgnoreFirstTextEdit;
@property(nonatomic) unsigned long long fMaxLength; // @synthesize fMaxLength=_fMaxLength;
@property(retain, nonatomic) RecordAdapterView *recordAdapterView; // @synthesize recordAdapterView=_recordAdapterView;
@property(nonatomic) struct CGVector headImageExtraEdgeVector; // @synthesize headImageExtraEdgeVector=_headImageExtraEdgeVector;
@property(retain, nonatomic) UIView *headImageExtraView; // @synthesize headImageExtraView=_headImageExtraView;
@property(retain, nonatomic) NSString *lastPastedText; // @synthesize lastPastedText=_lastPastedText;
@property(retain, nonatomic) CBaseContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIView *toolPanelView; // @synthesize toolPanelView=_toolPanelView;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) SEL mRecordSelector; // @synthesize mRecordSelector;
@property(nonatomic) __weak id <MMInputToolViewCustomizationDelegate> _uiDelegate; // @synthesize _uiDelegate;
@property(nonatomic) _Bool m_bPositioning; // @synthesize m_bPositioning;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) unsigned long long positionMode; // @synthesize positionMode=_positionMode;
@property(nonatomic) unsigned long long inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic) __weak id <MMInputToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMTransparentButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UIView *recordingTipsView; // @synthesize recordingTipsView=_recordingTipsView;
@property(retain, nonatomic) UIButton *expressionDoneButton; // @synthesize expressionDoneButton=_expressionDoneButton;
@property(retain, nonatomic) MMUIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) MMUIButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) RelatedEmoticonHalfScreenViewController *relatedEmoticonViewController; // @synthesize relatedEmoticonViewController=_relatedEmoticonViewController;
@property(retain, nonatomic) EmoticonBoardView *expressionView; // @synthesize expressionView=_expressionView;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) MMUIButton *inputModeChangeButton; // @synthesize inputModeChangeButton=_inputModeChangeButton;
- (double)toolViewHeight;
- (long long)referMsgSvrId;
- (id)inputText;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)onExitWithAttributedText:(id)arg1 selectedRange:(struct _NSRange)arg2 showKeyboard:(_Bool)arg3 showEmoticon:(_Bool)arg4;
- (void)jumpToFullScreenVC;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onBecomeActive:(id)arg1;
- (void)onRevokeGroupUndoneItem:(id)arg1;
- (void)onCompleteGroupUndoneItem:(id)arg1 isLastItem:(_Bool)arg2;
- (void)onCloseGroupUndoneItem:(id)arg1 isLastItem:(_Bool)arg2;
- (void)onClickGroupUndoneItem:(id)arg1 isLastItem:(_Bool)arg2;
- (void)addHeadImageClickActionWithTarget:(id)arg1 action:(SEL)arg2;
- (void)hideUndoneBarAnimated:(_Bool)arg1;
- (void)showUndoneBarAnimated:(_Bool)arg1;
- (void)removeUndoneItem:(id)arg1;
- (void)updateUndoneItem:(id)arg1;
- (void)updateGroupUndoneList:(id)arg1 animated:(_Bool)arg2;
- (void)hideLastUndoneView;
- (double)getTransToolHeight;
- (double)getGroupUndoneBarHeight;
- (_Bool)hasUndoneItems;
- (void)initGroupUndoneView;
- (id)getChatUsername;
- (void)onClearInputMsgRefer;
- (void)setReplyingString:(id)arg1;
- (void)resetReplyMessage;
- (double)getMsgReplyViewHeight;
- (void)replyMessage:(id)arg1 becomeFirstResponder:(_Bool)arg2 showDisplayName:(_Bool)arg3;
- (void)replyMessage:(id)arg1;
- (void)onClickSendSessionMsgBtn;
- (void)layoutWeAppSessionMsgBtn;
- (void)initWeAppSessionMsgBtn;
- (void)hideWeAppSessionMsgBtn;
- (void)showWeAppSessionMsgBtn;
- (void)updateWeAppSessionMsgScene:(unsigned int)arg1;
- (void)updateWeAppSessionMsgImageURL:(id)arg1 imageData:(id)arg2 hintTitle:(id)arg3;
- (void)updateWeAppSessionMsgImageURL:(id)arg1 imageData:(id)arg2;
- (void)dealloc;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)BeginInterruption;
- (void)InputIsAvailableChanged:(_Bool)arg1;
- (void)resetText;
- (void)deleteBackward;
- (void)insertString:(id)arg1;
- (_Bool)isTracking;
- (void)setContentMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)NotifyViewControllerPostionChanged:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)disvisibleContentTool;
- (void)setPoisitionMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)didMoveToWindow;
- (float)getContentViewHeight:(unsigned long long)arg1;
- (void)onPositionAnimationEnd;
- (void)setInputMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)onFullScreenButtonClicked;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onSendCaptrueButtonClicked:(id)arg1;
- (void)onAttachmentModeChangeButtonClicked:(id)arg1;
- (void)showCaptrueButton;
- (void)tryShowCaptrueButton;
- (void)onInputModeChangeButtonClicked:(id)arg1;
- (void)notifyToolViewDisappear;
- (void)notifyToolViewAppear;
- (void)onViewDidBePoped;
- (void)onViewWillDisappear;
- (void)onViewDidInit;
- (void)onWillAppear;
- (void)onWillDisappear;
@property(nonatomic) __weak NSString *text;
- (void)hideToolView:(_Bool)arg1;
- (void)Reset;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2;
- (void)layoutSubviews;
- (void)initSubView;
- (void)tryTransInputTextOnTextChange:(id)arg1;
- (void)tryDoAnimationOnTextChange;
- (void)onInputTextChange:(id)arg1;
- (void)updateCustomToolView;
- (void)UpdateTabBarSendButtonState;
- (void)updateHeadImageRelatedViews;
- (void)updateToolViewHeight:(_Bool)arg1 withAnimationBlock:(CDUnknownBlockType)arg2;
- (void)updateToolViewHeight:(_Bool)arg1;
- (void)updateContentSize;
- (void)SetButtonHighlighted:(_Bool)arg1;
- (void)showSendCaptrueViewAnimated:(_Bool)arg1;
- (void)hideSendCaptrueView;
- (void)hideSendCaptrueViewAnimated:(_Bool)arg1;
- (id)GetCurrentText;
- (_Bool)isInPageSheetMode;
@property(nonatomic) long long iKeyboardAnimationCurve;
@property(nonatomic) double fKeyboardAnimationDuration;
- (void)fixBtnY;
- (double)parentViewWidth;
- (id)hlSvgName:(id)arg1 Size:(struct CGSize)arg2;
- (id)svgName:(id)arg1 Size:(struct CGSize)arg2;
- (void)initHeadImageRelatedViews;
- (void)initInputModeChangeButton;
- (void)initSendCaptrueView;
- (void)initFullScreenButton;
- (void)initExpressionButton;
- (void)initAttachmentButton;
- (void)initToolPanelView;
- (void)initToolView;
- (void)combineToolView;
- (void)resetSelectAttachmentView;
- (void)initAttachmentView;
- (void)resetAttachmentButtonRedDot;
- (void)updateAttachmentView;
- (_Bool)isEnableVoiceVoipFromPlugin;
- (void)logSightCameraEntranceWithCameraButton:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowAttachViewWithPageIndex:(unsigned long long)arg1 items:(id)arg2;
- (void)onShowLiveEntrance;
- (void)onShowInputToolWeAppAr:(id)arg1;
- (void)onInputToolWeAppButtonClicked:(id)arg1;
- (void)onCardPkgButtonClicked:(id)arg1;
- (void)realStartMultiTalk;
- (void)onFinderButtonClicked:(id)arg1;
- (void)onMultiTalkButtonClicked:(id)arg1;
- (void)onLiveButtonClicked:(id)arg1;
- (void)onChatRoomToolButtonClick:(id)arg1;
- (void)onSolitaireButtonClicked:(id)arg1;
- (void)onGiftButtonClicked:(id)arg1;
- (void)onMusicButtonClicked:(id)arg1;
- (void)onEnterpriseBrandEntryButtonClicked:(id)arg1;
- (void)on3rdServiceButtonClicked:(id)arg1;
- (void)onFileBrowserClicked:(id)arg1;
- (void)onShareCardButtonClicked:(id)arg1;
- (void)onMyFavoritesButtonClicked:(id)arg1;
- (void)voiceInputBtnRealClicked;
- (void)onVoiceInputButtonClicked:(id)arg1;
- (void)onTransferButtonClicked:(id)arg1;
- (void)onRedEnvelopesClicked:(id)arg1;
- (void)onLocationButtonClicked:(id)arg1;
- (void)videoVoipBtnRealClicked;
- (void)onVideoVoipButtonClicked:(id)arg1;
- (void)voiceVoipBtnRealClicked;
- (void)onVoiceVoipButtonClicked:(id)arg1;
- (void)onCameraControllerClicked:(id)arg1;
- (void)onMediaBrowserClicked:(id)arg1;
- (int)_hasReddot:(id)arg1;
- (id)getServiceAppList;
- (id)getMsgSendOpEntry;
- (id)getInputToolWeAppOpEntryAr;
- (long long)getInputToolWeAppNotShowIndex;
- (void)didSelectAttachmentAtIndex:(unsigned long long)arg1;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (_Bool)checkRemoteRecommendEmoticonCanSend:(id)arg1;
- (_Bool)checkEmoticonCanSend:(id *)arg1;
- (void)onMMQuickSendEmoticonViewClickSearchMoreWithWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)onMergeRecommendEmoticon:(id)arg1 emoticonWrapList:(id)arg2 sessionId:(id)arg3 recSessionId:(id)arg4 remoteWordListMeta:(id)arg5;
- (void)onSearchEmoticonViewControllerDidClose;
- (id)getMsgTableView;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (_Bool)shouldInterceptHideExpressionPanelOnKeyboardChanged;
- (void)showSearchEmoticonViewController:(_Bool)arg1;
- (void)showRelativeEmoticonViewControllerWithEmoticonWrap:(id)arg1 andMessageWrap:(id)arg2;
- (void)onRelatedEmoticonViewControllerSendEmoticon:(id)arg1;
- (id)getRecommendMessageContexts;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPage:(id)arg1 contentTopChanged:(double)arg2;
- (void)deleteEmoticon;
- (id)GetCurrentViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (id)getSnapShotForMerge;
- (double)tipsViewHeightForBoardExpand;
- (double)toolViewHeightForBoardExpand;
- (void)onEmoticonBoardHeightChanged;
- (void)onEmoticonSearchIconClicked;
- (void)changeTextViewColorForEmoticonState:(_Bool)arg1;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (void)onSendButtonClicked;
- (void)initQuickSendEmoticonView;
- (id)configEmoticonView;
- (void)onExposureCustomToolBarItem:(id)arg1;
- (void)onClickCustomToolBarItem:(id)arg1;
- (void)handleKFCustomToolBarInViewDidAppear;
- (void)hideKFCustomToolBarAnimated:(_Bool)arg1;
- (void)showKFCustomToolBarAnimated:(_Bool)arg1;
- (void)updateKFCustomToolBarItemList:(id)arg1 animated:(_Bool)arg2;
- (double)getKFCustomToolBarHeight;
- (_Bool)hasKFCustomToolBarItems;
- (void)initKFCustomToolBarView;
- (void)toRecordStautsIdle;
- (void)toRecordStautsTooShortTips;
- (void)toRecordStautsTooLongTips;
- (void)toRecordStautsRecordCancelTips;
- (void)toRecordStautsRecording;
- (void)toRecordStautsPerparing;
- (void)sendMsgWithText:(id)arg1;
- (void)updateRecordButtonDisabled;
- (void)backSetRecordTransMsg:(id)arg1;
- (void)setVoiceEnabled:(_Bool)arg1;
- (void)resetRecordView;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)SetPeakPower:(float)arg1;
- (_Bool)onRecordCountRemain:(long long)arg1;
- (_Bool)VoiceRecordNeedPopUpViewController;
- (void)HideRecordTips;
- (void)ShowStartFailTips:(id)arg1;
- (void)ShowTooShortTips;
- (void)ShowTooLongTips;
- (void)ShowRecording;
- (void)ShowPreparing;
- (void)showCancel:(id)arg1;
- (_Bool)onRecordWillStopWhenAppWillTerminate;
- (double)getRecordButtonResponseY;
- (id)getChatCellWithMsg:(id)arg1;
- (id)cancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (void)cancelRecording;
- (void)stopRecording;
- (void)realStartRecordingAfterImpactOccurred;
- (void)realStartRecording;
- (void)startRecording:(id)arg1;
- (id)createRecordAdapterView;
- (void)initRecordButton;
- (void)notifyAudioSessionInterruptForRecord;
- (void)onTapSolitaireTipsView:(id)arg1;
- (void)analysisSolitaireWithContent:(id)arg1;
- (id)createSolitaireTipsView;
- (void)showSolirateTipsWithObj:(id)arg1;
- (void)tryAnalysisSolitaireOnTextChange:(id)arg1;
- (void)TextViewDidEnter_Solitaire:(id)arg1;
- (void)onTapSendButton;
- (void)initSendButton;
- (id)getContact;
- (void)sendMessage:(id)arg1;
- (id)supportMessageTypes;
- (void)onConfirmedWithLanguageType:(id)arg1;
- (void)cleanPlaceHolder;
- (id)getGrowTextView;
- (id)getViewController;
- (void)onClickCloseTranslateTool;
- (void)onClickUseTranslateResult:(id)arg1;
- (void)showTranslateTool;
- (void)textView:(id)arg1 didShowMenuTypes:(id)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onClickTranslateToolCloseMenu;
- (void)onClickTranslateToolOpenMenu;
- (void)onOpenTopicSearch;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(id)arg2;
- (void)onDeleteMsgReplyView:(id)arg1;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextView:(id)arg1 willPastedText:(id)arg2;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (_Bool)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)TextViewDidDeleteToNil;
- (_Bool)TextViewDidDelete;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onClickTextViewSendText:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (_Bool)isViewControllerTop;
- (void)setTextKeyboardHeight:(double)arg1;
- (double)getDefaultTextViewHeight;
- (void)resetGrowTextView;
- (void)updateGrowTextViewProperty;
- (id)getGrowTextViewExtConfig;
- (void)initTextView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

