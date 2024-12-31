//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CEmoticonWrap, EmoticonBoardView, MMCPLabel, MMGrowTextView, MMHeadImageView, MMTableView, MMUIButton, MMUILabel, MMURLHandler, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, RichTextView, SharePreConfirmSheetView, SharePreConfirmView, SnsAlbumFeedBehaviour, TextStateItemView, UIButton, UILabel, UIView, UrlLabel, WCADPageWrap, WCAdActionLinkDetailView, WCAdBreakFrameTagView, WCAdBreakFrameView, WCAdCommonBarContainerView, WCAdContinuousLikeBannerAnimationView, WCAdContinuousLikeTagView, WCAdHeadStateView, WCAdHighlightTagView, WCAdInteractionLabelView, WCAdInteractionTagView, WCAdPreviewMaskView, WCAdRandomPickCardView, WCAdSocialLikeCheerPlayerView, WCAdSocialLikeView, WCAdStateSettingBarView, WCAdTagButton, WCAdWeGameGiftTagView, WCAdvertiseActionFloatView, WCAdvertiseFeedbackBaseView, WCAlbumForwardFinderUtil, WCCommentItem, WCCommentReport, WCCommentView, WCContentItem, WCContentItemBaseView, WCDataItem, WCHeaderGridView, WCInputController, WCMomentsAnimatedFireworksView, WCMomentsClickHandler, WCMomentsFinderShareViewModel, WCMomentsInputAreaReportInfo, WCMomentsInvisibleTipsView, WCMomentsNewLifeShareViewModel, WCMomentsPageContext, WCMomentsPostSessionController, WCMomentsPostShareButton, WCMomentsShareScopeMgr, WCMomentsSpringTextContainerView, WCMomentsStarGuideButton, WCMomentsStarGuideViewModel, WCMomentsTigerReporter, WCMomentsWeAppLogoNameView, WCOperateFloatView, WCPasteTextLengthLogic, WCSnsCommentDetailRewardView, WCTimelineCommentEmotionReport, WCTimelineExtBean, WCTogetherHistoryReportSession, WCTogetherTailReporter, WCUserComment;
@protocol WCCommentDetailViewControllerFBDelegate;

@interface WCCommentDetailViewControllerFB
{
    MMTableView *_tableView;
    NSMutableArray *_contentViews;
    UIView *_likeListView;
    WCHeaderGridView *_headerGridView;
    UIView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    MMGrowTextView *_growTextView;
    WCOperateFloatView *_floatOperateView;
    WCAdvertiseActionFloatView *_advertiseActionFloatView;
    WCInputController *_inputController;
    _Bool _bStranger;
    NSString *_nsStrangerUsrName;
    _Bool _bForbideComment;
    MMURLHandler *_urlHandler;
    WCMomentsClickHandler *_clickHandler;
    _Bool _bIsShow;
    WCUserComment *_refComment;
    WCUserComment *_defaultRefComment;
    double _defaultRefCommentContentOffset;
    _Bool _hasFoundDefaultRefComment;
    _Bool _hasJumpDefaultRefCommentOnce;
    NSObject<WCCommentDetailViewControllerFBDelegate> *m_delegate;
    NSString *_copyedText;
    RichTextView *_contentDescView;
    WCMomentsSpringTextContainerView *_springTextContainerView;
    RichTextView *m_translateView;
    UIButton *m_translateStatusView;
    UIView *m_translateLineView;
    int eTranslateStatus;
    double fTranslateViewHeight;
    WCUserComment *curLongPressedComment;
    WCUserComment *curTranslateComment;
    UIView *_errTipsView;
    MMHeadImageView *_headImageView;
    UrlLabel *_nickLabel;
    WCContentItemBaseView *_mediaCellView;
    RichTextView *_togetherTextView;
    UILabel *_locationLabel;
    MMUIButton *_privacyBtn;
    UILabel *_timeLabel;
    MMUIButton *_operateBtn;
    MMUIButton *_deleteBtn;
    UIButton *_advertiseLogo;
    WCAdTagButton *_adTagButton;
    WCCommentView *_commentViewForDelete;
    WCADPageWrap *_floatViewPageWrap;
    int m_commentWordLimit;
    _Bool m_bHasClickFloat;
    _Bool m_bHaveActionSheet;
    UILabel *_rewardTipLabel;
    WCSnsCommentDetailRewardView *_rewardDetailView;
    WCHeaderGridView *_headImageRewardView;
    UILabel *_adPOILabel;
    UILabel *_adChainStrengthenLabel;
    UILabel *_adAtAdvertiserLabel;
    _Bool _isActionAtAd;
    NSString *_inputSessionId;
    NSMutableDictionary *m_dicUserCommentsUICache;
    UIView *_adCardTopMaskView;
    CContact *_atContact;
    UIButton *_atButton;
    WCPasteTextLengthLogic *pastelogic;
    MMCPLabel *m_openIMDescLabel;
    WCTimelineExtBean *_extBean;
    _Bool m_forbidsReloadTableView;
    _Bool _bJustShowContent;
    _Bool _bMusicSearchScene;
    _Bool _bFromAtFriend;
    _Bool _canShowInvisibleTipsView;
    _Bool _isInvisible;
    _Bool _isStarModificationEnabled;
    _Bool _isStarBrowsingEnabled;
    _Bool _dynamicTagEnabled;
    _Bool _isViewAppear;
    _Bool _isEnhanceInteractionEnabled;
    _Bool _hasActionRecordForShowingStarGuideButton;
    _Bool _isModifyingStarStatus;
    _Bool _hasModifiedStarStatus;
    _Bool _hasActionRecordForShowingFinderShareButton;
    _Bool _hasActionRecordForShowingNewLifeShareButton;
    _Bool _actionAreaWrapEnabled;
    _Bool _didShowModifyShareScopeInActionSheet;
    NSString *_nsUsrName;
    long long _uiSource;
    WCTogetherTailReporter *_togetherTailReporter;
    WCMomentsTigerReporter *_tigerReporter;
    WCDataItem *_dataItem;
    WCContentItem *_contentItem;
    NSMutableArray *_arrMediaList;
    NSMutableArray *_arrCommentList;
    NSMutableArray *_arrLikeList;
    WCCommentItem *_failedComment;
    long long _tipType;
    WCCommentReport *_commentReport;
    WCAlbumForwardFinderUtil *_albumForwardFlow;
    long long _enterScene;
    long long _homepageType;
    WCMomentsPageContext *_pageContext;
    WCTogetherHistoryReportSession *_togetherHistoryReportSession;
    long long _lastRemainWordCount;
    WCMomentsNewLifeShareViewModel *_newlifeShareViewModel;
    CEmoticonWrap *_emoticonWrap;
    SharePreConfirmView *_sharePreConfirmView;
    SharePreConfirmSheetView *_sharePreConfirmSheetView;
    WCTimelineCommentEmotionReport *_emotionReporter;
    UrlLabel *_sourceLabel;
    WCAdvertiseFeedbackBaseView *_adFeedbackView;
    WCMomentsWeAppLogoNameView *_weAppView;
    WCAdActionLinkDetailView *_adDetailView;
    WCAdBreakFrameView *_adBreakFrameView;
    WCAdBreakFrameTagView *_adBreakFrameTagView;
    WCAdInteractionLabelView *_adInteractionLabelView;
    WCAdSocialLikeView *_adSocialLikeView;
    WCAdSocialLikeCheerPlayerView *_adSocialLikeCheerPlayerView;
    WCAdContinuousLikeBannerAnimationView *_adContinuousLikeBannerAnimationView;
    WCAdWeGameGiftTagView *_adWeGameGiftTagView;
    WCAdContinuousLikeTagView *_adContinuousLikeTagView;
    WCAdStateSettingBarView *_adStateSettingBarView;
    WCAdRandomPickCardView *_adRandomPickCardView;
    WCAdPreviewMaskView *_adPreviewMaskView;
    WCAdInteractionTagView *_adInteractionTagView;
    WCAdHeadStateView *_adHeadStateView;
    WCAdHighlightTagView *_adHighlightTagView;
    WCAdCommonBarContainerView *_adBarContainerView;
    WCMomentsPostSessionController *_postSessionController;
    WCMomentsShareScopeMgr *_shareScopeMgr;
    WCMomentsInvisibleTipsView *_invisibleTipsView;
    TextStateItemView *_textStateView;
    MMUIButton *_starIconButton;
    WCMomentsStarGuideViewModel *_starGuideViewModel;
    WCMomentsStarGuideButton *_starGuideButton;
    WCMomentsFinderShareViewModel *_finderShareViewModel;
    WCMomentsPostShareButton *_postShareButton;
    WCMomentsInputAreaReportInfo *_inputAreaReportInfo;
    unsigned long long _actionAreaRowCount;
    WCMomentsAnimatedFireworksView *_animatedFireworksView;
    NSArray *_actionItems;
}

+ (id)makeDataWrapForWCTranslate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool didShowModifyShareScopeInActionSheet; // @synthesize didShowModifyShareScopeInActionSheet=_didShowModifyShareScopeInActionSheet;
@property(copy, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(retain, nonatomic) WCMomentsAnimatedFireworksView *animatedFireworksView; // @synthesize animatedFireworksView=_animatedFireworksView;
@property(nonatomic) unsigned long long actionAreaRowCount; // @synthesize actionAreaRowCount=_actionAreaRowCount;
@property(nonatomic) _Bool actionAreaWrapEnabled; // @synthesize actionAreaWrapEnabled=_actionAreaWrapEnabled;
@property(retain, nonatomic) WCMomentsInputAreaReportInfo *inputAreaReportInfo; // @synthesize inputAreaReportInfo=_inputAreaReportInfo;
@property(retain, nonatomic) WCMomentsPostShareButton *postShareButton; // @synthesize postShareButton=_postShareButton;
@property(nonatomic) _Bool hasActionRecordForShowingNewLifeShareButton; // @synthesize hasActionRecordForShowingNewLifeShareButton=_hasActionRecordForShowingNewLifeShareButton;
@property(nonatomic) _Bool hasActionRecordForShowingFinderShareButton; // @synthesize hasActionRecordForShowingFinderShareButton=_hasActionRecordForShowingFinderShareButton;
@property(retain, nonatomic) WCMomentsFinderShareViewModel *finderShareViewModel; // @synthesize finderShareViewModel=_finderShareViewModel;
@property(nonatomic) _Bool hasModifiedStarStatus; // @synthesize hasModifiedStarStatus=_hasModifiedStarStatus;
@property(nonatomic) _Bool isModifyingStarStatus; // @synthesize isModifyingStarStatus=_isModifyingStarStatus;
@property(retain, nonatomic) WCMomentsStarGuideButton *starGuideButton; // @synthesize starGuideButton=_starGuideButton;
@property(retain, nonatomic) WCMomentsStarGuideViewModel *starGuideViewModel; // @synthesize starGuideViewModel=_starGuideViewModel;
@property(nonatomic) _Bool hasActionRecordForShowingStarGuideButton; // @synthesize hasActionRecordForShowingStarGuideButton=_hasActionRecordForShowingStarGuideButton;
@property(retain, nonatomic) MMUIButton *starIconButton; // @synthesize starIconButton=_starIconButton;
@property(retain, nonatomic) TextStateItemView *textStateView; // @synthesize textStateView=_textStateView;
@property(retain, nonatomic) WCMomentsInvisibleTipsView *invisibleTipsView; // @synthesize invisibleTipsView=_invisibleTipsView;
@property(retain, nonatomic) WCMomentsShareScopeMgr *shareScopeMgr; // @synthesize shareScopeMgr=_shareScopeMgr;
@property(retain, nonatomic) WCMomentsPostSessionController *postSessionController; // @synthesize postSessionController=_postSessionController;
@property(retain, nonatomic) WCAdCommonBarContainerView *adBarContainerView; // @synthesize adBarContainerView=_adBarContainerView;
@property(retain, nonatomic) WCAdHighlightTagView *adHighlightTagView; // @synthesize adHighlightTagView=_adHighlightTagView;
@property(retain, nonatomic) WCAdHeadStateView *adHeadStateView; // @synthesize adHeadStateView=_adHeadStateView;
@property(retain, nonatomic) WCAdInteractionTagView *adInteractionTagView; // @synthesize adInteractionTagView=_adInteractionTagView;
@property(retain, nonatomic) WCAdPreviewMaskView *adPreviewMaskView; // @synthesize adPreviewMaskView=_adPreviewMaskView;
@property(retain, nonatomic) WCAdRandomPickCardView *adRandomPickCardView; // @synthesize adRandomPickCardView=_adRandomPickCardView;
@property(retain, nonatomic) WCAdStateSettingBarView *adStateSettingBarView; // @synthesize adStateSettingBarView=_adStateSettingBarView;
@property(retain, nonatomic) WCAdContinuousLikeTagView *adContinuousLikeTagView; // @synthesize adContinuousLikeTagView=_adContinuousLikeTagView;
@property(retain, nonatomic) WCAdWeGameGiftTagView *adWeGameGiftTagView; // @synthesize adWeGameGiftTagView=_adWeGameGiftTagView;
@property(retain, nonatomic) WCAdContinuousLikeBannerAnimationView *adContinuousLikeBannerAnimationView; // @synthesize adContinuousLikeBannerAnimationView=_adContinuousLikeBannerAnimationView;
@property(retain, nonatomic) WCAdSocialLikeCheerPlayerView *adSocialLikeCheerPlayerView; // @synthesize adSocialLikeCheerPlayerView=_adSocialLikeCheerPlayerView;
@property(retain, nonatomic) WCAdSocialLikeView *adSocialLikeView; // @synthesize adSocialLikeView=_adSocialLikeView;
@property(retain, nonatomic) WCAdInteractionLabelView *adInteractionLabelView; // @synthesize adInteractionLabelView=_adInteractionLabelView;
@property(retain, nonatomic) WCAdBreakFrameTagView *adBreakFrameTagView; // @synthesize adBreakFrameTagView=_adBreakFrameTagView;
@property(retain, nonatomic) WCAdBreakFrameView *adBreakFrameView; // @synthesize adBreakFrameView=_adBreakFrameView;
@property(retain, nonatomic) WCAdActionLinkDetailView *adDetailView; // @synthesize adDetailView=_adDetailView;
@property(retain, nonatomic) WCMomentsWeAppLogoNameView *weAppView; // @synthesize weAppView=_weAppView;
@property(retain, nonatomic) WCAdvertiseFeedbackBaseView *adFeedbackView; // @synthesize adFeedbackView=_adFeedbackView;
@property(retain, nonatomic) UrlLabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(nonatomic) _Bool isEnhanceInteractionEnabled; // @synthesize isEnhanceInteractionEnabled=_isEnhanceInteractionEnabled;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) WCTimelineCommentEmotionReport *emotionReporter; // @synthesize emotionReporter=_emotionReporter;
@property(retain, nonatomic) SharePreConfirmSheetView *sharePreConfirmSheetView; // @synthesize sharePreConfirmSheetView=_sharePreConfirmSheetView;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) WCMomentsNewLifeShareViewModel *newlifeShareViewModel; // @synthesize newlifeShareViewModel=_newlifeShareViewModel;
@property(nonatomic) _Bool dynamicTagEnabled; // @synthesize dynamicTagEnabled=_dynamicTagEnabled;
@property(readonly, nonatomic) _Bool isStarBrowsingEnabled; // @synthesize isStarBrowsingEnabled=_isStarBrowsingEnabled;
@property(readonly, nonatomic) _Bool isStarModificationEnabled; // @synthesize isStarModificationEnabled=_isStarModificationEnabled;
@property(nonatomic) long long lastRemainWordCount; // @synthesize lastRemainWordCount=_lastRemainWordCount;
@property(retain, nonatomic) WCTogetherHistoryReportSession *togetherHistoryReportSession; // @synthesize togetherHistoryReportSession=_togetherHistoryReportSession;
@property(readonly, nonatomic) _Bool isInvisible; // @synthesize isInvisible=_isInvisible;
@property(nonatomic) _Bool canShowInvisibleTipsView; // @synthesize canShowInvisibleTipsView=_canShowInvisibleTipsView;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) WCAlbumForwardFinderUtil *albumForwardFlow; // @synthesize albumForwardFlow=_albumForwardFlow;
@property(retain, nonatomic) WCCommentReport *commentReport; // @synthesize commentReport=_commentReport;
@property(nonatomic) _Bool bFromAtFriend; // @synthesize bFromAtFriend=_bFromAtFriend;
@property(nonatomic) long long tipType; // @synthesize tipType=_tipType;
@property(retain, nonatomic) WCCommentItem *failedComment; // @synthesize failedComment=_failedComment;
@property(nonatomic) _Bool bMusicSearchScene; // @synthesize bMusicSearchScene=_bMusicSearchScene;
@property(retain, nonatomic) NSMutableArray *arrLikeList; // @synthesize arrLikeList=_arrLikeList;
@property(retain, nonatomic) NSMutableArray *arrCommentList; // @synthesize arrCommentList=_arrCommentList;
@property(retain, nonatomic) NSMutableArray *arrMediaList; // @synthesize arrMediaList=_arrMediaList;
@property(retain, nonatomic) WCContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) _Bool bJustShowContent; // @synthesize bJustShowContent=_bJustShowContent;
@property(retain, nonatomic) WCUserComment *defaultRefComment; // @synthesize defaultRefComment=_defaultRefComment;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment=_refComment;
@property(nonatomic) __weak NSObject<WCCommentDetailViewControllerFBDelegate> *m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool bForbideComment; // @synthesize bForbideComment=_bForbideComment;
@property(nonatomic) _Bool bStranger; // @synthesize bStranger=_bStranger;
@property(nonatomic) long long uiSource; // @synthesize uiSource=_uiSource;
@property(retain, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName=_nsUsrName;
@property(retain, nonatomic) NSString *nsStrangerUsrName; // @synthesize nsStrangerUsrName=_nsStrangerUsrName;
- (void)stopPlayRandomFireworksIfNeeded;
- (void)startPlayRandomFireworksIfNeeded;
- (id)commentViewBackgroundColor;
- (_Bool)isAdFireworkCheerCommentStyle;
- (id)liveShareViewViewWithTid:(id)arg1;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (id)getFinderLiveDismissTarget;
- (id)getCurrentViewControllerForContentItemView:(id)arg1;
- (id)generatePostReportSessionForEntrance:(long long)arg1;
- (_Bool)handleClickedOnAdFirstLikeForContact:(id)arg1;
- (void)resizeAdContinuousLikeBannerAnimationView;
- (void)initAdContinuousLikeBannerAnimationView;
- (void)resizeAdSocialLikeCheerPlayerView;
- (void)initAdSocialLikeCheerPlayerView;
- (void)initAdSocialLikeView;
- (void)clearExtBean;
@property(retain, nonatomic) WCTimelineExtBean *extBean; // @synthesize extBean=_extBean;
- (void)resizeAdPreviewMaskView;
- (void)initAdPreviewMaskView;
- (void)resizeAdBreakFrameView;
- (void)initAdBreakFrameView;
- (void)updateAdRelievedBuyVisibility:(id)arg1;
- (void)tryUpdateAdContent:(id)arg1;
- (void)onSecurityVerificationFinished:(_Bool)arg1 type:(unsigned long long)arg2 dataItem:(id)arg3;
- (void)onCommentErrTipsViewLinkClicked:(id)arg1 nsUrl:(id)arg2;
- (void)onCommentErrTipsViewCustomButtonClicked:(id)arg1;
- (void)showSecurityVerificationAlert;
- (void)onRemoveAd:(id)arg1;
- (void)onRemoveAd;
- (struct CGPoint)genButtonClickPoint:(id)arg1 isBaseFullScreen:(_Bool)arg2;
- (void)onClickNegativeReasonBtn:(id)arg1 dataItem:(id)arg2;
- (void)onClickNegativeBtn:(_Bool)arg1 dataItem:(id)arg2;
- (void)onClickPositiveBtn:(id)arg1;
- (void)onClickGuideAdManageBtn:(id)arg1 dataItem:(id)arg2;
- (void)onClickComplainBtn:(id)arg1 dataItem:(id)arg2;
- (void)onAdFeedbackDisappear:(id)arg1;
- (void)reportTigerIfNeeded;
@property(readonly, nonatomic) WCMomentsTigerReporter *tigerReporter; // @synthesize tigerReporter=_tigerReporter;
- (void)reportTogetherTailIfNeeded;
@property(readonly, nonatomic) WCTogetherTailReporter *togetherTailReporter; // @synthesize togetherTailReporter=_togetherTailReporter;
- (void)reportTopicTagInputMenuItemAction:(long long)arg1;
- (void)reportMenuAction:(long long)arg1 isComment:(_Bool)arg2;
- (void)endAlbumFeedBehaviourSessionIfNeeded;
@property(readonly, nonatomic) SnsAlbumFeedBehaviour *albumFeedBehaviourSession;
- (int)behaviourInfoPageType;
- (id)behaviourInfoSession;
- (void)reportOnViewDisappear;
- (void)reportOnViewApper;
- (void)momentsClickHandler:(id)arg1 willClickUserProfileWithContext:(id)arg2;
- (void)asyncRecordMicroMerchantInteractionIfNeeded:(unsigned long long)arg1;
- (void)floatViewHiddenWrap;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2 andReferView:(id)arg3;
- (void)makeTranslateShowAnimation;
- (double)initContentTranslateView:(id)arg1 andSuperView:(id)arg2;
- (void)modifyShareScope;
- (void)onTranslateComment:(id)arg1;
- (void)onTranslateCommentOrigin:(id)arg1;
- (void)onTranslateCommentText:(id)arg1;
- (void)onChangeTranslateLanguageForComment:(id)arg1;
- (void)onChangeTranslateLanguageForContent:(id)arg1;
- (void)onTranslateAction:(id)arg1;
- (void)onCancelTranslateFeedInTranslatedArea:(id)arg1;
- (void)onCancelTranslateFeed:(id)arg1;
- (void)onTranslateFeed:(id)arg1;
- (id)GetMyTranslateSnsKeyID;
- (void)willDisshow;
- (void)willShow;
- (void)adjustTableViewRect;
- (id)findCommentViewWithComment:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleDetailBtnClick;
- (void)handleResendBtnClick;
- (void)onViewAnimationWillHide;
- (void)newlifeShareButtonClicked:(id)arg1;
- (void)clearNewLifeShareButtonIfNeeded;
- (void)shareToNewLifeWithScene:(long long)arg1;
- (void)clearFinderShareButtonIfNeeded;
- (void)finderShareButtonClicked:(id)arg1;
- (void)hideStarIconButtonAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)showStarIconButtonAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)doStarReportWithDataItem:(id)arg1 isStarred:(_Bool)arg2 isFromBanner:(_Bool)arg3;
- (void)starGuideButtonClicked:(id)arg1;
- (void)handleModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)_modifyStarStatus:(_Bool)arg1;
- (void)modifyStarStatus:(_Bool)arg1;
- (void)onCommentPhoto:(id)arg1;
- (void)onClickLikeBtnOnFloatView;
- (void)onClickCommentBtnOnFloatView;
- (void)showConfirmDeleteAlert:(long long)arg1;
- (id)generateInputSessionID;
- (void)onClickFriendsComment:(id)arg1 comment:(id)arg2 index:(long long)arg3 replay:(_Bool)arg4;
- (void)onClickSelfComment:(id)arg1 comment:(id)arg2 index:(long long)arg3 confirmDelete:(_Bool)arg4;
- (void)onClickContent:(id)arg1 way:(long long)arg2;
- (void)onClickStarIconButton:(id)arg1;
- (void)onShowGroup;
- (void)onDeletePhoto:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateHeaderGridView;
- (id)FormCommentTipsView:(id)arg1;
- (id)getCommentsUICacheKey:(id)arg1;
- (void)tryResumeReloadTableView;
- (void)forbidsReloadTableView;
- (void)reloadTableView;
- (void)initTableView;
- (id)privateFooterTipsForContentType:(long long)arg1;
- (void)initTableFooterView;
- (int)getInputViewHeight;
- (int)getDefaultInputViewHeight;
- (double)maxSourceContentWidth;
- (void)layoutWeAppSource;
- (_Bool)layoutSourceLabel;
- (id)actionAreaSubViewWithType:(unsigned long long)arg1;
- (double)maxActionAreaWidth;
- (double)layoutActionArea;
- (_Bool)canShowPirvacyButton;
- (_Bool)canShowDeleteButton;
- (_Bool)canShowStarIconWithDataItem:(id)arg1;
- (_Bool)canShowStarIcon;
- (_Bool)canShowWeAppView;
- (_Bool)canShowSourceLabel;
- (double)layoutHeadInnerView;
- (double)getOperateBtnRightMargin;
- (double)getCommentViewWidth;
- (double)getCommentViewLeftMargin;
- (double)getHeadImageViewLeftMargin;
- (id)getContactDisplayName;
- (void)onResumeScrollToTop;
- (void)onForbidScrollToTop;
- (void)onAdActionLinkDetailClicked;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)templateFullScreenViewController:(id)arg1 didClickShareButton:(id)arg2;
- (_Bool)isShareButtonVisibleInPlayerViewController:(id)arg1;
- (void)playerViewController:(id)arg1 requireToPostWithShareInfo:(id)arg2;
- (void)layoutInvisibleTipsView;
- (void)showInvisibleTipsView;
- (void)resetFailedCommentText;
- (void)rewardDetailViewTapped;
- (void)initRewardDetailView:(id)arg1;
- (_Bool)shouldShowRewardDetailView;
- (_Bool)shouldShowRewardTip;
- (id)fetchContentItem;
- (void)tryToSetAdVideoPlayingState:(_Bool)arg1 forItemView:(id)arg2;
- (id)fireworksDisplayRectList;
- (void)layoutFireworksPlayerViewInTableHeaderView:(id)arg1;
- (void)tryToAutoPlayAdVideo;
- (void)_layoutSubviewsInTableHeaderView:(id)arg1;
- (void)_layoutTableHeaderView:(id)arg1;
- (void)_recreateExtensionViewsInTableHeaderView:(id)arg1;
- (void)_cleanExtensionViewsInTableHeaderView:(id)arg1;
- (void)_recreateMainViewsInTableHeaderView:(id)arg1;
- (void)_cleanMainViewsInTableHeaderView:(id)arg1;
- (void)initExtensionViewsInTableHeader;
- (void)initTableHeaderView;
- (double)calAdevertiseLabelMaxWidthToShowWithHeadImageSize:(struct CGSize)arg1 operateImageSize:(struct CGSize)arg2 timeLabelWidth:(double)arg3;
- (id)createOperateFloatView;
- (id)createDeleteButton;
- (id)createAdAtAdvertiserLabel:(double)arg1;
- (void)updateAdChainStrengthenContent;
- (id)createAdChainStrengthenLabel:(double)arg1;
- (id)createOperateBtn:(struct CGRect)arg1 operateImage:(id)arg2 operateImageHL:(id)arg3;
- (id)createRewardTipLabel;
- (id)createPrivacyBtn;
- (id)createWithTextLabel:(id)arg1;
- (id)createTogetherTextView;
- (id)createAdBarContainerView;
- (id)createAdHighlightTagView;
- (id)createAdInteractionTagView;
- (id)createAdStateSettingBarView;
- (id)createAdContinuousLikeTagView;
- (id)createAdWeGameGiftTagView;
- (id)createAdTagButtonWithInfo:(id)arg1;
- (id)createAdBreakFrameTagView;
- (id)createAdRandomPickCardViewWithInfo:(id)arg1;
- (id)createAdInteractionLabelViewWithInfo:(id)arg1;
- (void)createOperateImage:(id *)arg1 operateImageHL:(id *)arg2;
- (id)createDefaultADLocationLabel;
- (id)createInteractionADLocationLabel;
- (id)createDefaultLocationLabel;
- (id)createInteractionLocationLabel;
- (id)createADDetailView;
- (id)createMediaView:(id)arg1;
- (id)createContentDescView:(id)arg1 contentDescPattern:(id)arg2;
- (id)createOpenIMDescLabel:(id)arg1 maxWidth:(double)arg2;
- (id)createAdvertiseLogo:(double)arg1;
- (id)createNickNameLabel;
- (id)createHeadImageView;
- (double)getInfoMaxWidth;
- (double)getContentWidth;
- (_Bool)shouldShowInnerReSendBtn;
- (_Bool)shouldShowErrTipsView;
- (void)updateTimeLabelText;
- (void)onActionAdChainStrengthen:(id)arg1;
- (void)onActionAtAd:(id)arg1;
- (void)onActionAdPOI:(id)arg1;
- (void)navigateToOriginPOI;
- (void)onActionLocation:(id)arg1;
- (_Bool)isSpringStyleForDataItem:(id)arg1;
- (_Bool)isSpringStyle;
- (void)initData;
- (void)dealloc;
- (double)getTableViewMarginToBottom;
- (_Bool)shouldForbidComment;
- (void)hideFloatView;
- (id)init;
- (id)getReplyNickNameFromComment:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmViewDidHide:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)commentEmotion;
- (void)hideEmotionConfirmView;
- (void)showEmotionConfirmView;
- (void)onActionSheetCancel;
- (void)doModifyShareScopeExposureReport:(_Bool)arg1;
- (void)onForwardToFinderPost;
- (void)RightBarButton_onModifyTogetherFinished:(long long)arg1 itemID:(id)arg2 dataItem:(id)arg3;
- (void)modifyTogetherList;
- (_Bool)canModifyTogetherList;
- (void)onSetDataItemPublicFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPrivateFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)startSetPrivacy;
- (id)getPrivacyString;
- (_Bool)canSetPrivate;
- (void)onShowMenu:(id)arg1;
- (void)reloadRightBarButtonItems;
- (void)setupInputAreaReportInfo;
- (void)registerYReportSdk;
- (void)momentsContactMgr:(id)arg1 didUpdateContact:(id)arg2;
- (void)onApplicationDidBecomeActive;
- (void)onResignActive;
- (void)onWCCommentEmotionViewSizeChange;
- (void)onWCCommentEmotionViewClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWCContentItemViewWillEnterFullScreen;
- (void)onWCContentItemViewInteractedByUser:(id)arg1 sender:(id)arg2;
- (void)isInAtFriendCommentDetailViewController:(_Bool *)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onWCSightViewWillExitFullScreen:(id)arg1;
- (void)onWCSightViewWillEnterFullScreen:(id)arg1;
- (void)onActionFloatView:(id)arg1 didSelectFeedbackItem:(id)arg2;
- (void)onActionFloatView:(id)arg1 didSelectReason:(id)arg2;
- (void)onAdInviteButtonClick:(id)arg1;
- (void)onAdLikeButtonSizeChanged:(id)arg1;
- (void)onAdCommentButtonClicked:(id)arg1;
- (void)onAdLikeButtonClicked:(id)arg1;
- (void)onAdLikeButtonTouched:(id)arg1;
- (id)fetchAdOriginView;
- (id)fetchAdCommonBarContainerOriginView;
- (id)fetchAdStateSettingBarOriginView;
- (id)fetchAdContinuousLikeTagOriginView;
- (id)fetchAdWeGameGiftTagOriginView;
- (id)fetchAdTagButtonOriginView;
- (void)onAdDynamicFeedViewActionClickWithExtraClickType:(long long)arg1 jumpInfo:(id)arg2;
- (void)onAdDynamicFeedViewActionClickWithSource:(long long)arg1;
- (void)onAdCardActionButtonClick;
- (void)onCommentSend:(id)arg1 comment:(id)arg2;
- (void)onModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)onModifyTogetherFinished:(long long)arg1 itemID:(id)arg2 dataItem:(id)arg3;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onUnInterestOpenIMTimeLine;
- (void)onAdActoin:(id)arg1;
- (void)onOpenIMTimeLineAction:(id)arg1;
- (void)onDoAdvertiseAction:(id)arg1;
- (void)resetAdFeedbackView;
- (void)onAdFeedbackBtnClick:(id)arg1;
- (void)onAdvertiseDetailWithSource:(long long)arg1;
- (void)onAdvertiseDetail;
- (_Bool)shouldInteractivePop;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)updateRewardTip;
- (void)updateRewardView;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onAtableAdClicked:(id)arg1;
- (void)onRestoreCommentCellView:(id)arg1;
- (void)setInputToolView:(_Bool)arg1;
- (void)delayReloadTableView;
- (void)onReloadCommentCellView:(id)arg1;
- (_Bool)isTouchEnableOnCommentView;
- (void)onCommentViewLongPressed:(id)arg1 withText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onCommentViewClicked:(id)arg1;
- (void)openTopicWithQuery:(id)arg1 userComment:(id)arg2;
- (void)onCommentViewTopicTagClicked:(id)arg1 query:(id)arg2;
- (void)onSearchTopicClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)showMenuItemForComment:(id)arg1 withRect:(struct CGRect)arg2 withComment:(id)arg3;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 isWord:(_Bool)arg3 andView:(id)arg4 isCommentText:(_Bool)arg5;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 isWord:(_Bool)arg3 andView:(id)arg4;
- (void)showEmoitionMenuItemWithRect:(struct CGRect)arg1 userComment:(id)arg2;
- (void)onWebSearch:(id)arg1;
- (void)onWebSearchComment:(id)arg1;
- (void)onWebSearchText:(id)arg1;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onDeleteComment:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onCopyComment:(id)arg1;
- (void)onCopyText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (_Bool)shouldRespondToKeyBoardEvent;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (void)textViewTextDidChange;
- (void)didCommitText:(id)arg1;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)onTextChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)updateTableViewHeight;
- (void)updateTableLayout;
- (double)getTableViewVisibleHeight;
- (id)subAtContactString:(id)arg1;
- (_Bool)hasAtFriend:(id)arg1;
- (double)maxGrowTextViewHeight;
- (void)updateGrowTextViewMaxHeight;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)updateWordCnt:(long long)arg1;
- (void)reloadData:(id)arg1;
- (void)updateInputView;
- (void)updateContentOffset;
- (void)updatePlaceholderImage;
- (void)initInputController;
- (void)initEmoticonView;
- (void)setInputAtButtonImage;
- (void)initInputToolView;
- (void)onSingleTapOnInputView;
- (void)mmTableViewDidFinishedLoading:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (id)expressionButtonImageColor;
- (id)getDefaultInputPlaceHolder;
- (void)resignInput;
- (void)becomeInputWithAtAdvertise;
- (void)becomeInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

