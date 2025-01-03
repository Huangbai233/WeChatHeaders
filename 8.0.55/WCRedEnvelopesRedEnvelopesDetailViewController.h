//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioPlayer, CEmoticonWrap, CMessageWrap, ContactUpdateHelper, EmoticonBoardView, EmoticonCustomAddLogicController, MMEmoticonView, MMTableView, MMUILabel, NSString, RichTextView, SharePreConfirmSheetView, SharePreConfirmView, UIButton, UIImageView, UILabel, UIView, WCActionSheet, WCRedEnvelopesCommentInputToolView, WCRedEnvelopesStoryDargUtil, WCRedEnvelopesStoryViewController, WCUITextField;
@protocol WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate;

@interface WCRedEnvelopesRedEnvelopesDetailViewController
{
    id <WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate> m_delegate;
    _Bool m_loadingMoreOrderList;
    MMTableView *m_tableView;
    _Bool m_bDidBack;
    WCUITextField *m_oWishingTextField;
    UIView *m_oHeaderView;
    WCRedEnvelopesCommentInputToolView *oWCRedEnvelopesCommentInputToolView;
    UIView *oMsgAnimationView;
    UIView *oMoneyAnimationView;
    UIView *oTableAnimationView;
    UIView *oTopHeaderView;
    UIView *oNavigationBarView;
    UIImageView *commentImageView;
    UIButton *commentButton;
    AVAudioPlayer *luckyPlayer;
    AVAudioPlayer *whistlePlayer;
    UIButton *tailBtn;
    UIView *oBottomView;
    _Bool hasChangeBackgroundY;
    UIView *headImageView;
    _Bool m_bEnterpriseRedEnvelopes;
    _Bool _isPreviewMode;
    _Bool _isAnimationMode;
    _Bool _isPanBegin;
    _Bool _bIsEmoticonBoardViewShow;
    _Bool _hasShowGuideAnimate;
    _Bool _isDisappearFromStory;
    _Bool _isRefreshInAnimation;
    _Bool _m_isStoryShowing;
    _Bool _bHasReportExposeBtnShow;
    int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
    unsigned int m_uiStatFromScene;
    unsigned int _enterTimeStamp;
    unsigned int _exitTimeStamp;
    UIView *_m_globalStoryTitleView;
    UIImageView *_globalStoryCoverView;
    UIView *_jumpInfoView;
    UIView *_m_globalSwipeUpView;
    UIButton *_m_showStoryBigBtn;
    ContactUpdateHelper *_m_helperForSenderNickName;
    ContactUpdateHelper *_m_helperForSenderNickNameAnimation;
    UIView *_m_pinImageViewAnimation;
    UIView *_m_pinImageView;
    MMEmoticonView *_emoticonView;
    UIButton *_thxEmoticonBtn;
    UIButton *_thxEmoticonTipsBtn;
    MMEmoticonView *_thxEmoticonView;
    RichTextView *_thxEmoticonTextView;
    UIView *_thxEmoticonBkgView;
    UIButton *_sendThxEmoticonBtn;
    CEmoticonWrap *_thxEmoticonWrap;
    NSString *_thxEmoticonText;
    UIImageView *_changeIconImgView;
    UIImageView *_loadingImgView;
    MMUILabel *_loadingLabel;
    EmoticonBoardView *_emoticonBoardView;
    EmoticonCustomAddLogicController *_emoticonCustomAddLogic;
    double _maskViewBottom;
    UIView *_emoticonBoardViewTopMaskView;
    SharePreConfirmView *_sharePreConfirmView;
    SharePreConfirmSheetView *_sharePreConfirmSheetView;
    CMessageWrap *_thxEmoticonMsgWrap;
    UIButton *_bottomTailBtn;
    UIImageView *_topCoverImgView;
    UIButton *_detailLinkBtn;
    UILabel *_nickNameLabel;
    UILabel *_descLabel;
    UIView *_fightingIcon;
    UIView *_senderEmoticonView;
    UILabel *_moneyLabel;
    UILabel *_feeTypeLabel;
    UIButton *_jumpBalanceBtn;
    UIImageView *_topSkinBottomImageView;
    UIImageView *_m_headerRedSkinMaskCurveView;
    UIImageView *_m_globalRedSkinMaskCurveView;
    WCRedEnvelopesStoryViewController *_m_redSkinStoryVC;
    WCRedEnvelopesStoryDargUtil *_m_storyDragAnimationUtil;
    double _currentTableViewOffSetY;
    UIImageView *_storyMaskLoadingView;
    UIImageView *_m_globalStoryGuideHandImageView;
    UILabel *_m_globalStoryGuideLabel;
    UIButton *_exposeBtn;
    UIView *_emoticonBoardMask;
    UIView *_emoticonBoardBackground;
    UILabel *_finderDesignHBWarningLabel;
    WCActionSheet *_m_actionSheet;
}

- (void).cxx_destruct;
@property(retain) WCActionSheet *m_actionSheet; // @synthesize m_actionSheet=_m_actionSheet;
@property(retain, nonatomic) UILabel *finderDesignHBWarningLabel; // @synthesize finderDesignHBWarningLabel=_finderDesignHBWarningLabel;
@property(retain, nonatomic) UIView *emoticonBoardBackground; // @synthesize emoticonBoardBackground=_emoticonBoardBackground;
@property(retain, nonatomic) UIView *emoticonBoardMask; // @synthesize emoticonBoardMask=_emoticonBoardMask;
@property(nonatomic) _Bool bHasReportExposeBtnShow; // @synthesize bHasReportExposeBtnShow=_bHasReportExposeBtnShow;
@property(retain, nonatomic) UIButton *exposeBtn; // @synthesize exposeBtn=_exposeBtn;
@property(nonatomic) unsigned int exitTimeStamp; // @synthesize exitTimeStamp=_exitTimeStamp;
@property(nonatomic) unsigned int enterTimeStamp; // @synthesize enterTimeStamp=_enterTimeStamp;
@property(nonatomic) _Bool m_isStoryShowing; // @synthesize m_isStoryShowing=_m_isStoryShowing;
@property(retain, nonatomic) UILabel *m_globalStoryGuideLabel; // @synthesize m_globalStoryGuideLabel=_m_globalStoryGuideLabel;
@property(retain, nonatomic) UIImageView *m_globalStoryGuideHandImageView; // @synthesize m_globalStoryGuideHandImageView=_m_globalStoryGuideHandImageView;
@property(retain, nonatomic) UIImageView *storyMaskLoadingView; // @synthesize storyMaskLoadingView=_storyMaskLoadingView;
@property(nonatomic) _Bool isRefreshInAnimation; // @synthesize isRefreshInAnimation=_isRefreshInAnimation;
@property(nonatomic) _Bool isDisappearFromStory; // @synthesize isDisappearFromStory=_isDisappearFromStory;
@property(nonatomic) _Bool hasShowGuideAnimate; // @synthesize hasShowGuideAnimate=_hasShowGuideAnimate;
@property(nonatomic) double currentTableViewOffSetY; // @synthesize currentTableViewOffSetY=_currentTableViewOffSetY;
@property(retain, nonatomic) WCRedEnvelopesStoryDargUtil *m_storyDragAnimationUtil; // @synthesize m_storyDragAnimationUtil=_m_storyDragAnimationUtil;
@property(retain, nonatomic) WCRedEnvelopesStoryViewController *m_redSkinStoryVC; // @synthesize m_redSkinStoryVC=_m_redSkinStoryVC;
@property(retain, nonatomic) UIImageView *m_globalRedSkinMaskCurveView; // @synthesize m_globalRedSkinMaskCurveView=_m_globalRedSkinMaskCurveView;
@property(retain, nonatomic) UIImageView *m_headerRedSkinMaskCurveView; // @synthesize m_headerRedSkinMaskCurveView=_m_headerRedSkinMaskCurveView;
@property(retain, nonatomic) UIImageView *topSkinBottomImageView; // @synthesize topSkinBottomImageView=_topSkinBottomImageView;
@property(retain, nonatomic) UIButton *jumpBalanceBtn; // @synthesize jumpBalanceBtn=_jumpBalanceBtn;
@property(retain, nonatomic) UILabel *feeTypeLabel; // @synthesize feeTypeLabel=_feeTypeLabel;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UIView *senderEmoticonView; // @synthesize senderEmoticonView=_senderEmoticonView;
@property(retain, nonatomic) UIView *fightingIcon; // @synthesize fightingIcon=_fightingIcon;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIButton *detailLinkBtn; // @synthesize detailLinkBtn=_detailLinkBtn;
@property(retain, nonatomic) UIImageView *topCoverImgView; // @synthesize topCoverImgView=_topCoverImgView;
@property(retain, nonatomic) UIButton *bottomTailBtn; // @synthesize bottomTailBtn=_bottomTailBtn;
@property(retain, nonatomic) CMessageWrap *thxEmoticonMsgWrap; // @synthesize thxEmoticonMsgWrap=_thxEmoticonMsgWrap;
@property(retain, nonatomic) SharePreConfirmSheetView *sharePreConfirmSheetView; // @synthesize sharePreConfirmSheetView=_sharePreConfirmSheetView;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) UIView *emoticonBoardViewTopMaskView; // @synthesize emoticonBoardViewTopMaskView=_emoticonBoardViewTopMaskView;
@property(nonatomic) double maskViewBottom; // @synthesize maskViewBottom=_maskViewBottom;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonCustomAddLogic; // @synthesize emoticonCustomAddLogic=_emoticonCustomAddLogic;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) _Bool bIsEmoticonBoardViewShow; // @synthesize bIsEmoticonBoardViewShow=_bIsEmoticonBoardViewShow;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIImageView *loadingImgView; // @synthesize loadingImgView=_loadingImgView;
@property(retain, nonatomic) UIImageView *changeIconImgView; // @synthesize changeIconImgView=_changeIconImgView;
@property(retain, nonatomic) NSString *thxEmoticonText; // @synthesize thxEmoticonText=_thxEmoticonText;
@property(retain, nonatomic) CEmoticonWrap *thxEmoticonWrap; // @synthesize thxEmoticonWrap=_thxEmoticonWrap;
@property(retain, nonatomic) UIButton *sendThxEmoticonBtn; // @synthesize sendThxEmoticonBtn=_sendThxEmoticonBtn;
@property(retain, nonatomic) UIView *thxEmoticonBkgView; // @synthesize thxEmoticonBkgView=_thxEmoticonBkgView;
@property(retain, nonatomic) RichTextView *thxEmoticonTextView; // @synthesize thxEmoticonTextView=_thxEmoticonTextView;
@property(retain, nonatomic) MMEmoticonView *thxEmoticonView; // @synthesize thxEmoticonView=_thxEmoticonView;
@property(retain, nonatomic) UIButton *thxEmoticonTipsBtn; // @synthesize thxEmoticonTipsBtn=_thxEmoticonTipsBtn;
@property(retain, nonatomic) UIButton *thxEmoticonBtn; // @synthesize thxEmoticonBtn=_thxEmoticonBtn;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) UIView *m_pinImageView; // @synthesize m_pinImageView=_m_pinImageView;
@property(retain, nonatomic) UIView *m_pinImageViewAnimation; // @synthesize m_pinImageViewAnimation=_m_pinImageViewAnimation;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickNameAnimation; // @synthesize m_helperForSenderNickNameAnimation=_m_helperForSenderNickNameAnimation;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickName; // @synthesize m_helperForSenderNickName=_m_helperForSenderNickName;
@property(retain, nonatomic) UIButton *m_showStoryBigBtn; // @synthesize m_showStoryBigBtn=_m_showStoryBigBtn;
@property(retain, nonatomic) UIView *m_globalSwipeUpView; // @synthesize m_globalSwipeUpView=_m_globalSwipeUpView;
@property(retain, nonatomic) UIView *jumpInfoView; // @synthesize jumpInfoView=_jumpInfoView;
@property(retain, nonatomic) UIImageView *globalStoryCoverView; // @synthesize globalStoryCoverView=_globalStoryCoverView;
@property(retain, nonatomic) UIView *m_globalStoryTitleView; // @synthesize m_globalStoryTitleView=_m_globalStoryTitleView;
@property(nonatomic) _Bool isPanBegin; // @synthesize isPanBegin=_isPanBegin;
@property(nonatomic) _Bool isAnimationMode; // @synthesize isAnimationMode=_isAnimationMode;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(retain, nonatomic) UIView *headImageView; // @synthesize headImageView;
@property(nonatomic) unsigned int m_uiStatFromScene; // @synthesize m_uiStatFromScene;
@property(nonatomic) _Bool m_bEnterpriseRedEnvelopes; // @synthesize m_bEnterpriseRedEnvelopes;
@property(nonatomic) int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene; // @synthesize enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)onClickJumpInfo:(id)arg1;
- (void)rightBarButtonPress;
- (_Bool)isFinderDesignHB;
- (id)getRecordNickNameAttributedStringWithSuffix:(id)arg1 suffix:(id)arg2;
- (id)getHeaderNickNameAttributedStringWithSuffix:(id)arg1;
- (void)scrollViewDidEndScroll:(struct CGPoint *)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)isNeedShowStoryGuideAnimation;
- (void)onWCRedEnvelopesStoryViewControlleMaskViewDownloadFail;
- (void)onWCRedEnvelopesStoryViewControlleMaskViewDownloadOK;
- (void)panGestureRecognize:(id)arg1;
- (void)onWCRedEnvelopesStoryViewControlleClickJumpAction:(id)arg1 sameReceiveLink:(id)arg2;
- (void)onWCRedEnvelopesStoryViewControlleClickWxAppInfo:(id)arg1;
- (void)resetAllStatus;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onTableViewSwipeUp:(id)arg1;
- (void)reportMakeSameCoverBtnExpose;
- (void)onDragDownImageSwipe:(id)arg1;
- (void)onDragDownImageClick:(id)arg1;
- (void)onWCRedEnvelopesStoryViewControllerClickCloseBtn;
- (void)panFronViewGestureRecognize:(id)arg1;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onTakePhotoCancelled;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)onEmoticonBoardHeightChanged;
- (id)GetCurrentViewController;
- (void)didSelectorEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (_Bool)handleAddCameraEmoji;
- (void)onSendButtonClicked;
- (id)tryGettingEmojiInfoByMd5:(id)arg1 completionIfDownloaded:(CDUnknownBlockType)arg2;
- (void)deleteSelctedEmoticon;
- (void)handleGetEmoticonWrap;
- (void)makeSelfieEmoitcon;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (void)handleEmoticonBoardViewMaskViewTap;
- (void)saveLastSelectEmoticonPid:(id)arg1;
- (id)getLastSelectEmoticonPid;
- (void)forwardEmoticon;
- (void)saveEmoticon;
- (void)emoticonViewLongPress:(id)arg1;
- (void)emotionViewClick;
- (_Bool)isDetailFromMessageScene;
- (void)handleThxEmoticonTap;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)selectThxEmoticonBtnClick;
- (void)selectThxEmoticonTopBtnClick;
- (_Bool)enableAnswerBySelfie;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)dismissDetailViewController;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)showSharePreConfirmView;
- (void)sendThxEmoticonBtnClick;
- (void)saveSendThxEmoticonWrap;
- (id)lastThxEmoticonText;
- (unsigned int)lastThxEmoticonType;
- (id)lastThxEmoticonMd5;
- (_Bool)hasEmoticon;
- (id)addBorderViewBottomAtView:(id)arg1;
- (id)currentViewController;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (id)generateEmitterLayer:(_Bool)arg1 withColors:(id)arg2;
- (void)showLuckyAnimationWithLuckyData:(id)arg1 needWhistle:(_Bool)arg2 withWhistleData:(id)arg3;
- (void)setLeftCloseBarButton;
- (void)animationForLabel;
- (void)startOpenAnimation;
- (void)OnToolViewDissmiss;
- (void)SendTextMessageToolView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)watchMyRedEnvelopesList;
- (void)handleExposeBtnClick;
- (void)handleTailOperation;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)gotoUrl;
- (void)gotoBalanceDetail;
- (void)commentRedEnvelopes;
- (void)showStoryInfoGuideAnimation;
- (id)getTabview;
- (void)refreshViewWithData:(id)arg1;
- (void)onForeignAmountDescInfoBtnClick:(id)arg1;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (id)GetHeaderView:(id)arg1;
- (void)onClickDetailJumpInfoBtn:(id)arg1;
- (_Bool)isNotchScreen;
- (id)generateMaskImage:(id)arg1;
- (id)creatImageWithMaskImage:(id)arg1 andBackimage:(id)arg2;
- (id)cropImage:(id)arg1 toRect:(struct CGRect)arg2;
- (id)GetViewHeader:(id)arg1;
- (id)getHeaderImageViewWithImgSize:(double)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)getAnimationView:(id)arg1;
- (id)getActionJumpView;
- (id)getSameCoverTailView;
- (_Bool)isCanShowBufferingView;
- (id)createPlayerConfig;
- (void)bfs:(id)arg1;
- (void)initTableView;
- (_Bool)hasStoryInfo;
- (_Bool)hasRedSkin;
- (id)getExposeButton;
- (id)getTailButton;
- (id)getNoMoreBottomView;
- (id)getBottomView;
- (void)statExpourseOperation;
- (void)autoPlayStoryIfNeed;
- (void)showNavigationBar;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)loadMoreOrderList;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnRealnameVerfitySuccess:(id)arg1;
- (void)reportWhenDetailViewControllerBePop;
- (void)OnLeftBarButtonDoneLogic;
- (void)OnLeftBarButtonDone;
- (_Bool)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)onTouchDownSplitRedSkinEntryBtn:(id)arg1;
- (void)onTouchCancelSplitRedSkinEntryBtn:(id)arg1;
- (id)splitRedPakcetRightBarButtonCustomView;
- (void)onClickSplitRedSkinEntryBtn:(id)arg1;
- (void)initNavigationBar;
- (_Bool)showSmallShareButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

