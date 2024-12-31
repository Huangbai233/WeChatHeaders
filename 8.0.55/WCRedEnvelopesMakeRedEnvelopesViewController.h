//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, EmoticonBoardView, EmoticonCustomAddLogicController, MMBadgeView, MMEmoticonView, MMTextView, MMUIButton, NSString, RichTextView, SequenceAnimationObject, UIButton, UILabel, UIView, WCBaseKeyboardToolBar, WCPayDecimalKeyboardView, WCPayNoticeItemView, WCPayWebImageView, WCPayWebPagView, WCRedEnvelopesMakeRedEnvelopesViewLayout, WCRedEnvelopesSelectSkinRedDotInfo, WCRedEnvelopesSpringFestivalActivtyEntryView, WCUITextField;
@protocol WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate;

@interface WCRedEnvelopesMakeRedEnvelopesViewController
{
    id <WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate> m_delegate;
    int m_enMakeRedEnvelopesScene;
    WCUITextField *m_oSelectCountTextField;
    unsigned int m_uiSelectCount;
    UILabel *moneyLabel;
    UILabel *nsDefaultWishingLabel;
    WCUITextField *m_oMoneyTextField;
    MMTextView *m_textView;
    UIButton *normalRedEnvelopesButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    _Bool m_bDidBack;
    _Bool m_bCanHandleScrollViewDidChangedEvent;
    _Bool m_bNomalMoney;
    RichTextView *richTextView;
    UIView *m_oErrorView;
    UILabel *m_oErrorLabel;
    _Bool m_bError;
    _Bool m_bWaitFiveMintes;
    UIView *oCountSelectView;
    UIView *oSimpleMoneyView;
    UIView *oRedEnvelopeSkinSelectView;
    WCRedEnvelopesSpringFestivalActivtyEntryView *oSpringFestivalActivityView;
    long long m_inputErrorType;
    NSString *m_foreignHongbaoName;
    MMBadgeView *selectSkinBadgeView;
    _Bool _m_leftBarButtonClose;
    _Bool _bIsEmoticonBoardViewShow;
    _Bool _hasUseDefaultMode;
    _Bool _hasManaulChangeDefaultMode;
    _Bool _m_isRedEnvelopesButtonEnabled;
    _Bool _exclusiveBottomTipsHasShown;
    _Bool _isReddotExposureHasCount;
    unsigned int _groupMemCount;
    WCPayNoticeItemView *_banner;
    WCRedEnvelopesMakeRedEnvelopesViewLayout *_m_layout;
    UILabel *_m_unitLabel;
    MMUIButton *_addEmoticonBtn;
    MMEmoticonView *_emoticonView;
    EmoticonBoardView *_emoticonBoardView;
    EmoticonCustomAddLogicController *_emoticonCustomAddLogic;
    CEmoticonWrap *_emoticonWrap;
    long long _currentMode;
    UIView *_exclusiveHbSelectView;
    SequenceAnimationObject *_animationObject;
    WCPayDecimalKeyboardView *_moneyKeyboard;
    WCPayDecimalKeyboardView *_selectCountKeyboard;
    UILabel *_moneyTextFiledLeftLabel;
    WCPayWebImageView *_corpLogo;
    WCPayWebPagView *_corpPagView;
    WCRedEnvelopesSelectSkinRedDotInfo *_selectSkinPlazaNewRedDotInfo;
    UIView *_redDotInfoView;
    UILabel *_redDotWordingLabel;
    WCPayWebImageView *_redDotIconView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReddotExposureHasCount; // @synthesize isReddotExposureHasCount=_isReddotExposureHasCount;
@property(retain, nonatomic) WCPayWebImageView *redDotIconView; // @synthesize redDotIconView=_redDotIconView;
@property(retain, nonatomic) UILabel *redDotWordingLabel; // @synthesize redDotWordingLabel=_redDotWordingLabel;
@property(retain, nonatomic) UIView *redDotInfoView; // @synthesize redDotInfoView=_redDotInfoView;
@property(retain, nonatomic) WCRedEnvelopesSelectSkinRedDotInfo *selectSkinPlazaNewRedDotInfo; // @synthesize selectSkinPlazaNewRedDotInfo=_selectSkinPlazaNewRedDotInfo;
@property(retain, nonatomic) WCPayWebPagView *corpPagView; // @synthesize corpPagView=_corpPagView;
@property(nonatomic) _Bool exclusiveBottomTipsHasShown; // @synthesize exclusiveBottomTipsHasShown=_exclusiveBottomTipsHasShown;
@property(retain, nonatomic) WCPayWebImageView *corpLogo; // @synthesize corpLogo=_corpLogo;
@property(nonatomic) unsigned int groupMemCount; // @synthesize groupMemCount=_groupMemCount;
@property(retain, nonatomic) UILabel *moneyTextFiledLeftLabel; // @synthesize moneyTextFiledLeftLabel=_moneyTextFiledLeftLabel;
@property(retain, nonatomic) WCPayDecimalKeyboardView *selectCountKeyboard; // @synthesize selectCountKeyboard=_selectCountKeyboard;
@property(retain, nonatomic) WCPayDecimalKeyboardView *moneyKeyboard; // @synthesize moneyKeyboard=_moneyKeyboard;
@property(nonatomic) _Bool m_isRedEnvelopesButtonEnabled; // @synthesize m_isRedEnvelopesButtonEnabled=_m_isRedEnvelopesButtonEnabled;
@property(retain, nonatomic) SequenceAnimationObject *animationObject; // @synthesize animationObject=_animationObject;
@property(nonatomic) _Bool hasManaulChangeDefaultMode; // @synthesize hasManaulChangeDefaultMode=_hasManaulChangeDefaultMode;
@property(nonatomic) _Bool hasUseDefaultMode; // @synthesize hasUseDefaultMode=_hasUseDefaultMode;
@property(retain, nonatomic) UIView *exclusiveHbSelectView; // @synthesize exclusiveHbSelectView=_exclusiveHbSelectView;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
@property(nonatomic) _Bool bIsEmoticonBoardViewShow; // @synthesize bIsEmoticonBoardViewShow=_bIsEmoticonBoardViewShow;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonCustomAddLogic; // @synthesize emoticonCustomAddLogic=_emoticonCustomAddLogic;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) MMUIButton *addEmoticonBtn; // @synthesize addEmoticonBtn=_addEmoticonBtn;
@property(nonatomic) _Bool m_leftBarButtonClose; // @synthesize m_leftBarButtonClose=_m_leftBarButtonClose;
@property(retain, nonatomic) UILabel *m_unitLabel; // @synthesize m_unitLabel=_m_unitLabel;
@property(retain, nonatomic) WCRedEnvelopesMakeRedEnvelopesViewLayout *m_layout; // @synthesize m_layout=_m_layout;
@property(retain, nonatomic) WCPayNoticeItemView *banner; // @synthesize banner=_banner;
@property(nonatomic) int m_enMakeRedEnvelopesScene; // @synthesize m_enMakeRedEnvelopesScene;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (_Bool)isUsingNewSkin;
- (id)resizeImage:(id)arg1 toFill:(id)arg2;
- (_Bool)useBlackStatusbar;
- (void)onClickSpringFestivalActivtyEntryView:(id)arg1;
- (void)selectMemberViewClick;
- (id)setupExclusiveHbSelectViewWithFrame:(struct CGRect)arg1;
- (void)reportModeChange;
- (void)refreshModeWithButtonTitle:(id)arg1;
- (void)modeChangeButtonClick;
- (id)setupModeChangeButton;
- (id)getCurrentMoneyModeTitle;
- (_Bool)isExclusiveHbMode;
- (_Bool)isRandomLuckyMoneyMode;
- (_Bool)isNormalLuckyMoneyMode;
- (_Bool)shouldRevertCellOrder;
- (_Bool)isMultiRedEnvelopesScene;
- (_Bool)isOnlySignleRedEnvelopsScene;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onTakePhotoCancelled;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)onEmoticonBoardHeightChanged;
- (_Bool)boardViewShouldReloadForReuse;
- (id)GetCurrentViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (_Bool)handleAddCameraEmoji;
- (void)onSendButtonClicked;
- (void)makeSelfieEmoitcon;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (void)handleGetEmoticonWrap;
- (void)handleEmoticonDelete;
- (void)tapEmoticonView:(id)arg1;
- (void)onAddEmoticonBtnClick;
- (void)saveLastSelectEmoticonPid:(id)arg1;
- (id)getLastSelectEmoticonPid;
- (_Bool)enableMakeSelfie;
- (long long)totalAmount;
- (long long)perMinValue;
- (long long)perPersonMaxValue;
- (long long)perGroupMaxValue;
- (unsigned int)totalNum;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)hidekeyboard;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)refreshButtonFiveMintes;
- (void)setButtonWaitFiveMin;
- (void)OnClickTailActivity;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)SetErrorTips;
- (void)SetLeftBarButtonClose;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)resetToCanHandleScrollViewChangedEnvent;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)OnMakeWCRedEnvelopesButtonClick;
- (void)adjustMoneyLabel;
- (id)checkDataError;
- (void)checkNextButtonStatus;
- (unsigned int)keyboardReportRedEnvMode;
- (void)viewDidLoad;
- (void)reportClickHbRecordPage;
- (void)reportHbModeSelectExclusiveMode;
- (void)reportHbModeSelectNormalMode;
- (void)reportHbModeSelectRandomLuckyMode;
- (void)reportHbModeSelectMode:(id)arg1;
- (void)reportClickHbMode;
- (void)reportClickSendHb;
- (void)reportClickRedEnvelopesSkin;
- (void)reportClickAddEmotionIcon;
- (void)reportClickLuckyWord;
- (unsigned int)getCurrentReportTargetType;
- (unsigned int)getCurrentReportHBMode;
- (void)reportExposure;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideErrorViewWithAnimation;
- (void)hideErrorView;
- (void)showErrorView:(id)arg1 ErrorType:(long long)arg2;
- (void)initErrorView;
- (void)refreshViewWithData:(id)arg1;
- (void)onSelectSkinCellClick;
- (id)getShortChatRoomDisplayName:(id)arg1;
- (void)updateBizAuthTitleWithFlag:(unsigned int)arg1;
- (_Bool)shouldShowForeignHongBaoName;
- (double)setupExclusiveSelectContentViewWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)onAnimationEnd:(id)arg1;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (double)setupChooseSkinCellWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (id)reportSkinId;
- (id)reportRedDotText;
- (unsigned int)reportRedDotType;
- (_Bool)shouldShowNewSelectSkinEntryRedDot;
- (_Bool)shouldShowSelectSkinEntryPlazaNewRedDot;
- (void)saveSelectSkinEntryRedDotInfo;
- (double)setupMoneyInputContentViewWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (double)setupCountSelectContentViewWithHeaderView:(id)arg1 nextViewY:(double)arg2;
- (void)reloadContentView;
- (void)initData;
- (long long)setupCurrentMode;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)back;
- (void)OnViewHongBaoFaq;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnRightBarButtonClick;
- (void)OnLeftBarButtonDone;
- (void)onViewHBHistory;
- (void)updateNavigationBackgroundWithFlag:(unsigned int)arg1;
- (void)initNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

