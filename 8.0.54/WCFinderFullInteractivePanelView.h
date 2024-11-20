//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UIView.h>

@class InteractionLabel, MMFinderFeedNoticeLogic, MMTimer, MMUIButton, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, UIImageView, UILabel, UILongPressGestureRecognizer, WCFinderCommonBottomSuspendView, WCFinderFeedBubbleView, WCFinderFeedContentTextView, WCFinderFeedMembershipInfo, WCFinderFeedWarningTipsView, WCFinderFriendLikeToolbarView, WCFinderFullScrollTextView, WCFinderFullToolbarView, WCFinderImageTextContainerView, WCFinderInteractiveCarouselView, WCFinderInteractivePanelConfigParamsModel, WCFinderLiveAudienceNoticeReporter, WCFinderOperateEntranceTipsView, WCFinderPanelJumpInfoCarouselView, WCFinderPanelThumbEnhanceBubbleView, WCFinderShadowBubbleView, WCFinderShadowTipsView;
@protocol WCFinderFullInteractivePanelViewDelegate, WCFinderHeadInfoViewProtocol><WCFinderJumpInfoViewProtocol;

@interface WCFinderFullInteractivePanelView : UIView
{
    _Bool _hasAdGuideFollowBtnAppear;
    _Bool _isJumpInfoAnimating;
    _Bool _carouselAnimating;
    _Bool _needGlobalUpdate;
    _Bool _shootingAnimating;
    _Bool _liveFeedHideAllWidgets;
    id <WCFinderFullInteractivePanelViewDelegate> _delegate;
    WCFinderFullScrollTextView *_textView;
    WCFinderFeedContentTextView *_innerRecommendReasonTextView;
    WCFinderFullToolbarView *_toolBarView;
    NSMutableDictionary *_jumpInfoPanelDict;
    InteractionLabel *_eventTitleLabel;
    WCFinderImageTextContainerView *_poiView;
    UIView<WCFinderHeadInfoViewProtocol><WCFinderJumpInfoViewProtocol> *_headerView;
    WCFinderFriendLikeToolbarView *_friendLikeToolbarView;
    WCFinderCommonBottomSuspendView *_commonBottomSuspendView;
    UIView *_hardAdCornerView;
    UILabel *_createTimeLabel;
    UILabel *_topicLabel;
    UIImageView *_eventIconView;
    InteractionLabel *_eventCountLabel;
    WCFinderFeedWarningTipsView *_warningView;
    UIImageView *_redPacketLinkIconView;
    UILabel *_redPacketLinkLabel;
    MMUIButton *_moreActionButton;
    WCFinderShadowBubbleView *_eduShadowBubbleView;
    WCFinderPanelThumbEnhanceBubbleView *_thumbEnhanceBubbleView;
    WCFinderLiveAudienceNoticeReporter *_liveNoticeReporter;
    MMFinderFeedNoticeLogic *_feedNoticeLogic;
    NSMutableSet *_tempHiddenViewSet;
    UIView *_cnyAdCornerView;
    WCFinderFeedBubbleView *_ringtoneBubbleView;
    double _startCarouselInterval;
    WCFinderInteractiveCarouselView *_carouselView;
    WCFinderInteractivePanelConfigParamsModel *_paramsModel;
    WCFinderFeedMembershipInfo *_membershipInfo;
    UIView *_shootingAvatarView;
    double _shootingAniamtionBeginTime;
    CDUnknownBlockType _shootingAnimationCompletion;
    MMTimer *_carouselTimer;
    NSHashTable *_carouselViewSet;
    WCFinderShadowTipsView *_feedSourceTipsView;
    MMUIButton *_memberFlagButton;
    WCFinderOperateEntranceTipsView *_creatorEntraceDataTips;
    UILongPressGestureRecognizer *_longPressGes;
}

+ (id)dateFormatter;
+ (id)buildMemberFlagButton;
- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGes; // @synthesize longPressGes=_longPressGes;
@property(retain, nonatomic) WCFinderOperateEntranceTipsView *creatorEntraceDataTips; // @synthesize creatorEntraceDataTips=_creatorEntraceDataTips;
@property(nonatomic) _Bool liveFeedHideAllWidgets; // @synthesize liveFeedHideAllWidgets=_liveFeedHideAllWidgets;
@property(retain, nonatomic) MMUIButton *memberFlagButton; // @synthesize memberFlagButton=_memberFlagButton;
@property(retain, nonatomic) WCFinderShadowTipsView *feedSourceTipsView; // @synthesize feedSourceTipsView=_feedSourceTipsView;
@property(retain, nonatomic) NSHashTable *carouselViewSet; // @synthesize carouselViewSet=_carouselViewSet;
@property(retain, nonatomic) MMTimer *carouselTimer; // @synthesize carouselTimer=_carouselTimer;
@property(copy, nonatomic) CDUnknownBlockType shootingAnimationCompletion; // @synthesize shootingAnimationCompletion=_shootingAnimationCompletion;
@property(nonatomic) _Bool shootingAnimating; // @synthesize shootingAnimating=_shootingAnimating;
@property(nonatomic) double shootingAniamtionBeginTime; // @synthesize shootingAniamtionBeginTime=_shootingAniamtionBeginTime;
@property(retain, nonatomic) UIView *shootingAvatarView; // @synthesize shootingAvatarView=_shootingAvatarView;
@property(retain, nonatomic) WCFinderFeedMembershipInfo *membershipInfo; // @synthesize membershipInfo=_membershipInfo;
@property(nonatomic) __weak WCFinderInteractivePanelConfigParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(nonatomic) _Bool needGlobalUpdate; // @synthesize needGlobalUpdate=_needGlobalUpdate;
@property(nonatomic) _Bool carouselAnimating; // @synthesize carouselAnimating=_carouselAnimating;
@property(nonatomic) _Bool isJumpInfoAnimating; // @synthesize isJumpInfoAnimating=_isJumpInfoAnimating;
@property(retain, nonatomic) WCFinderInteractiveCarouselView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic) double startCarouselInterval; // @synthesize startCarouselInterval=_startCarouselInterval;
@property(retain, nonatomic) WCFinderFeedBubbleView *ringtoneBubbleView; // @synthesize ringtoneBubbleView=_ringtoneBubbleView;
@property(retain, nonatomic) UIView *cnyAdCornerView; // @synthesize cnyAdCornerView=_cnyAdCornerView;
@property(retain, nonatomic) NSMutableSet *tempHiddenViewSet; // @synthesize tempHiddenViewSet=_tempHiddenViewSet;
@property(retain, nonatomic) MMFinderFeedNoticeLogic *feedNoticeLogic; // @synthesize feedNoticeLogic=_feedNoticeLogic;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveNoticeReporter; // @synthesize liveNoticeReporter=_liveNoticeReporter;
@property(retain, nonatomic) WCFinderPanelThumbEnhanceBubbleView *thumbEnhanceBubbleView; // @synthesize thumbEnhanceBubbleView=_thumbEnhanceBubbleView;
@property(retain, nonatomic) WCFinderShadowBubbleView *eduShadowBubbleView; // @synthesize eduShadowBubbleView=_eduShadowBubbleView;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) UILabel *redPacketLinkLabel; // @synthesize redPacketLinkLabel=_redPacketLinkLabel;
@property(retain, nonatomic) UIImageView *redPacketLinkIconView; // @synthesize redPacketLinkIconView=_redPacketLinkIconView;
@property(retain, nonatomic) WCFinderFeedWarningTipsView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) InteractionLabel *eventCountLabel; // @synthesize eventCountLabel=_eventCountLabel;
@property(retain, nonatomic) UIImageView *eventIconView; // @synthesize eventIconView=_eventIconView;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(retain, nonatomic) UIView *hardAdCornerView; // @synthesize hardAdCornerView=_hardAdCornerView;
@property(retain, nonatomic) WCFinderCommonBottomSuspendView *commonBottomSuspendView; // @synthesize commonBottomSuspendView=_commonBottomSuspendView;
@property(retain, nonatomic) WCFinderFriendLikeToolbarView *friendLikeToolbarView; // @synthesize friendLikeToolbarView=_friendLikeToolbarView;
@property(nonatomic) _Bool hasAdGuideFollowBtnAppear; // @synthesize hasAdGuideFollowBtnAppear=_hasAdGuideFollowBtnAppear;
@property(retain, nonatomic) UIView<WCFinderHeadInfoViewProtocol><WCFinderJumpInfoViewProtocol> *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCFinderImageTextContainerView *poiView; // @synthesize poiView=_poiView;
@property(retain, nonatomic) InteractionLabel *eventTitleLabel; // @synthesize eventTitleLabel=_eventTitleLabel;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoPanelDict; // @synthesize jumpInfoPanelDict=_jumpInfoPanelDict;
@property(retain, nonatomic) WCFinderFullToolbarView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) WCFinderFeedContentTextView *innerRecommendReasonTextView; // @synthesize innerRecommendReasonTextView=_innerRecommendReasonTextView;
@property(retain, nonatomic) WCFinderFullScrollTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WCFinderFullInteractivePanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLongPress:(id)arg1;
- (id)dataCarouselOnShowPosition:(int)arg1 width:(double)arg2;
- (void)onCarouselJumpCarouselViewWillShow;
- (double)dataCarouselPanelViewMaxWidthOnPosition:(int)arg1;
- (_Bool)dataCarouselIsContentTruncated;
- (long long)dataCarouselCurrentTextLines;
- (void)onCarouselClickBannerJumpInfo:(id)arg1;
- (void)onCarouselView:(id)arg1 hidden:(_Bool)arg2;
- (void)onCarouselClickButtonJumpInfo:(id)arg1 style:(id)arg2;
- (void)onCarouselClickBannerJumpInfo:(id)arg1 style:(id)arg2;
- (void)onCarouselClickHotComment:(id)arg1;
- (void)onCarouselClickSetRingToneButton;
- (void)onFinderFeedInteractionResponse:(id)arg1;
- (id)dynamicFontOfSize:(double)arg1;
- (id)fontOfSize:(double)arg1;
- (id)forbidClickColor;
- (struct CGPoint)getToolbarFavButtonCenter;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)onClickPanelRingtoneBubbleViewSetRingtoneButton;
- (void)updateCarouselJumpWithContentVM:(id)arg1;
- (id)showingHotComment;
- (void)updateCarouselHotCommentWithContentVM:(id)arg1;
- (void)pauseCarouselTimer;
- (_Bool)carouselTimerRunning;
- (void)startCarouselTimer;
- (void)cleanCurrentFeedCarouselState;
- (void)endExposeAction;
- (void)resetBootomSuspendView;
- (void)startExposeAction;
- (id)userAvatarSnapshot;
- (void)onClickImageTextView:(long long)arg1;
- (void)onFeedWarningTipsChange:(id)arg1;
- (void)onFeedContentShowPromoteTips:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)updateRingtoneBubbleView:(id)arg1;
- (void)onFeedOriginalSoundInfoChanged:(id)arg1;
- (void)removeShootingAvatarViewIfNeeded;
- (void)bottomScrollUpAndShowMutexFeatureView:(unsigned long long)arg1;
- (void)onFeedHotCommentChanged:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLastestLiveInfoUpdate:(id)arg1;
- (void)onFeedContentWarnWordingChanged:(id)arg1;
- (void)onJumpInfoPanelViewClickCollectionBubble:(id)arg1;
- (void)onClickIsTemplateVideoAndEnterEdit;
- (void)onClickIsLIvingAndEnterAction;
- (void)onFeedNoticeLogicHideLiveAppointment:(id)arg1;
- (void)preLoadConcertPageSheet:(id)arg1;
- (void)onFinderJumpInfoView:(id)arg1 finderUsername:(id)arg2 didClickLiveNoticeInfo:(id)arg3 isShowDetail:(_Bool)arg4;
- (id)getFeedNoticeLogicModel;
- (void)hiddenBigFollowBtnInJumpInfoPanelView:(id)arg1;
- (void)onShowBigFollowBtnInJumpInfoPanelView:(id)arg1;
- (void)expandCarouselView:(id)arg1 toPhase:(unsigned long long)arg2;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 needChangeToPhase:(unsigned long long)arg3;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 needChangeToJumpInfoStyleWithIndex:(unsigned long long)arg3;
- (void)jumpInfoView:(id)arg1 animateToShow:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 changeToShow:(_Bool)arg3 animated:(_Bool)arg4;
- (void)onFinderJumpInfoPanelViewHeightChanged:(id)arg1;
- (void)onFinderJumpInfoViewCollectionNextDidClick:(id)arg1;
- (void)onFinderJumpInfoViewCollectionNextExposure:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (id)videoTid;
- (_Bool)videoPauseState;
- (id)interactivePanelConfigParamsModel;
- (void)updateLastestLiveInfoWithContentVM:(id)arg1;
- (_Bool)hideHeaderViewWithToolBarStyle:(unsigned long long)arg1;
- (void)completePlayAction;
- (void)changeJumpInfoViewArrayToShow:(id)arg1 animateDuration:(double)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)emitCarouselWithTrigger:(unsigned long long)arg1;
- (void)tryShowLongVideoLaterListenEduTips;
- (void)tryShowMoreActionEduTips;
- (void)onVideoPlayStateChanged:(_Bool)arg1;
- (_Bool)shouldHiddenHeadInfoViewFollowBtn;
- (_Bool)needHighlightAdGuideButton:(id)arg1;
- (void)updateAdGuideBtnWithParams:(id)arg1;
- (void)onLiveFeedSatisfactionQuestVisibleStateChange:(_Bool)arg1;
- (void)liveNoticeViewHiddenWithContentVM:(id)arg1 showPosition:(int)arg2;
- (void)updateLiveNoticeViewWithParamsModel:(id)arg1 showPosition:(int)arg2;
- (_Bool)textViewContentLabelEnableResponseReadMoreAction;
- (void)textViewDismissHighLightText;
- (void)updateToolbarContentWithContentVM:(id)arg1 toolbarDisableConfig:(unsigned long long)arg2;
- (void)_updateHeaderViewWithContact:(id)arg1 showLiveState:(_Bool)arg2;
- (void)updateFriendLikeToolbarViewWithContentVM:(id)arg1 hideFriendLikeInfo:(_Bool)arg2;
- (void)tryShowFriendLikeViewFollowLikeBtnWithParams:(id)arg1;
- (_Bool)shouldShowHeaderViewFollowBtnWithParams:(id)arg1;
- (void)tryShowHeaderViewFollowAuthorBtnWithParams:(id)arg1;
- (_Bool)shouldShowAdEntryViewWithAdItem:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (_Bool)shouldShowNoticeViewWithContentVM:(id)arg1 hiddenLiveNoticeTableView:(_Bool)arg2;
- (_Bool)shouldShowFriendLikeToolbarViewWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (void)updateHeaderViewStateWithHiddenAuthorAppendDescLabelWithParamsModel:(id)arg1;
- (id)descriptionAreaViewList;
- (void)setDescriptionAreaTransparent:(_Bool)arg1;
- (id)_getDisplayContentWithContentVM:(id)arg1;
- (double)_layoutTextAreaFromOffset:(double)arg1;
- (double)_layoutHotTopicLabelFromOffset:(double)arg1;
- (double)_layoutInnerRecommendReasonFromOffset:(double)arg1;
- (double)_layoutCNYAdCornerViewFromOffset:(double)arg1;
- (double)_layoutFriendLikeViewFromOffset:(double)arg1;
- (double)_layoutFeedSourceTipsView:(double)arg1;
- (double)_layoutWarningViewFromOffset:(double)arg1;
- (double)_layoutThumbLikeRecommendBubbleViewFromOffset:(double)arg1;
- (double)_layoutPanelRingtoneBubbleViewFromOffset:(double)arg1;
- (double)_layoutJumpInfoViewAboveDescriptionFromOffset:(double)arg1 showPosition:(int)arg2;
- (double)_layoutJumpInfoViewInCenterAboveDescriptionFromOffset:(double)arg1;
- (double)_layoutRedPacketViewFromOffset:(double)arg1;
- (void)setupDiagnosisDataEntranceTips:(_Bool)arg1;
- (void)didEndHalfScreenShow;
- (void)willBeginHalfScreenShow;
- (void)onCellDidEndDisplay;
- (void)onCellDidDisplay;
- (void)onCellBeginDisplay;
- (double)_layoutHeaderViewAndToolbarFromOffset:(double)arg1;
- (double)_layoutJumpInfoViewOnFeedBottomFromOffset:(double)arg1;
- (void)_changeTextViewHiddenStateIfNeeded;
- (void)updateRelatedJumpInfoPanelViewFrame;
- (void)_layoutRelativePosJumpInfoView;
- (void)_layoutJumpInfoViewOnFeedTopLeft;
- (double)_layoutJumpInfoViewBelowDescriptionFromOffset:(double)arg1;
- (double)_layoutJumpInfoBelowCarouselDescFromOffset:(double)arg1;
- (double)_layoutCarouselViewFromOffset:(double)arg1;
- (void)tryPlayToCarouselNextView:(id)arg1;
- (void)timerPlayToCarouseAction;
- (void)cancelCarouseTimerPlay;
- (void)startCarouseTimerPlayWithDelay:(double)arg1;
- (void)setCarouselView:(id)arg1 hidden:(_Bool)arg2;
- (void)showGuideCommentSuspendViewByContent:(id)arg1 scene:(int)arg2 duration:(double)arg3 leftImage:(id)arg4 leftWording:(id)arg5 rightTips:(id)arg6 rightTipsBtnBkColor:(id)arg7 rightTipsBtnFontColor:(id)arg8 detailBtnClickBlock:(CDUnknownBlockType)arg9 reportParams:(id)arg10;
- (void)showGuideEmotionSuspendViewByContent:(id)arg1 scene:(int)arg2 duration:(double)arg3;
- (void)showGuideRedPacketCreateSuspendViewByContent:(id)arg1 scene:(int)arg2 duration:(double)arg3;
- (void)showGuideCommentSuspendViewByContent:(id)arg1 scene:(int)arg2 duration:(double)arg3;
- (void)showTemplateCommentWordingWithDataItem:(id)arg1 nickname:(id)arg2 scene:(int)arg3 duration:(double)arg4 confirmBlock:(CDUnknownBlockType)arg5;
- (_Bool)checkCarouselState;
- (void)reportCarouselExpt;
- (void)setupCarouselAction;
- (void)resetCarouselState;
- (void)pureLayoutSubviews;
- (double)cnyAdCornerViewBottom;
- (double)_layoutMembershipTagViewFromOffset:(double)arg1;
- (void)globalUpdateViewWithModel:(id)arg1;
- (void)updateSubviewsStyle;
- (double)calcuateToolBarViewWidth;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 longPressedText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onFeedContent:(id)arg1 commentOpenStateChanged:(_Bool)arg2;
- (void)finderFinderFriendLikeToolbarViewClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(_Bool)arg3;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onClickWeChatFriendDetail:(id)arg1;
- (_Bool)canShowTriangleShadowViewWithSourceType:(unsigned long long)arg1;
- (void)onClickToolbarFeedAllViewedAction:(id)arg1;
- (void)onClickToolbarFeedAllFavAction:(id)arg1;
- (void)onClickToolbarFeedAllLikeAction:(id)arg1;
- (void)onClickToolbarShareAction:(id)arg1 shareButton:(id)arg2;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)onWillClickToolbarCollectionAction:(id)arg1;
- (void)clickRecommendUrl:(id)arg1;
- (void)markHasShownBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (_Bool)checkShouldShowBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (void)reportBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (double)getButtonCenterXWithBubbleType:(unsigned int)arg1;
- (void)updateShadowBubbleViewWithContentVM:(id)arg1 bubbleType:(unsigned int)arg2 customTitle:(id)arg3;
- (void)updateShadowBubbleViewWithContentVM:(id)arg1 bubbleType:(unsigned int)arg2;
- (void)displayLinkAction:(id)arg1;
- (void)tryPerformAvatarShootingAnimation;
- (void)updateAsyncRecommendReason;
- (void)onDidClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)updateToolbarContentWithContentVM:(id)arg1 privateStateChange:(_Bool)arg2;
- (void)tryPerformAvatarShootingAnimationAndDelayCarouselWithCompletion:(CDUnknownBlockType)arg1;
- (void)onWillClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)onClickRealNameAction;
- (void)onRefreshToolbarUpdateFavDataFinished:(id)arg1;
- (void)onRefreshFriendLikeUI:(id)arg1;
- (void)onRefreshToolbarUI:(id)arg1;
- (void)onClickToolbarCancelUploading:(id)arg1;
- (void)onClickToolbarRetryUploading:(id)arg1;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (id)currentContentVM;
- (void)onHeaderFollowClickAction:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)showSpamTipsWithString:(id)arg1;
- (void)clickNicknameWithContact:(id)arg1;
- (void)clickAvatar:(id)arg1;
- (void)onClickRedPacketLinkAction;
- (void)onClickExtLinkAction;
- (void)onClickPOILabelAction;
- (void)onClickEventAction;
- (_Bool)showCollectionContentPrefix;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)cellIconSize;
@property(readonly, nonatomic) WCFinderPanelJumpInfoCarouselView *jumpInfoCarouselView;
- (double)jumpInfoPanelViewMaxWidthOnShowPosition:(int)arg1;
- (id)genJumpInfoPanelViewOnShowPosition:(int)arg1 width:(double)arg2;
- (id)jumpInfoPanelViewOnShowPosition:(int)arg1;
- (id)jumpInfoViewList;
- (id)createTopicLabel;
- (_Bool)shouldShowAdCorner;
- (id)cnyAnimationView;
- (id)contentTopView;
- (double)toolBarViewTopY;
- (double)contentTopViewY;
- (double)contentTopInView:(id)arg1;
- (void)resetEduShadowBubbleView;
- (unsigned long long)toolBarStyle;
- (id)contentVM;
- (unsigned long long)carouselIndex;
- (id)accessibilityElements;
- (void)resetUIViewState;
- (void)layoutSubviews;
- (void)setupGesture;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

