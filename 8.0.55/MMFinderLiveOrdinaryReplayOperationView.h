//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicFocusedVideoHeaderView, MMFinderLiveHeaderView, MMFinderLivePaymentRetryViewBar, MMFinderLiveReplayBarrageView, MMFinderLiveReplayCommentView, MMFinderLiveReplayMessageSource, MMFinderLiveRewardRecievingLogic, MMLiveAudioOnlyIndicatorView, MMLiveLoadingEllipsisLabel, MMLiveRewardGiftRecievingAnimationView, MMUIActivityIndicatorView, MMUIButton, MMUILabel, NSString, UIImageView, UILabel, UIView, WCFinderLiveNowView, WCFinderLiveRateAutoIncreaseTipView, WCFinderLiveReplayMomentsLogic, WCFinderLiveReplayMomentsView, WCFinderLiveReplayRateOperationView;
@protocol MMFinderLiveOrdinaryReplayOperationViewDelegate;

@interface MMFinderLiveOrdinaryReplayOperationView
{
    _Bool _supressMessageUpdate;
    _Bool _isClickFirst;
    _Bool _isLongPressing;
    _Bool _isPlayerControlWidgetsEnableDisplay;
    id <MMFinderLiveOrdinaryReplayOperationViewDelegate> _ordinaryReplayOperationDelegate;
    unsigned long long _lastPurchaseInitiateTime;
    MMFinderLiveHeaderView *_liveHeaderView;
    MMUILabel *_onlineStateLabel;
    MMFinderLiveConnectMicFocusedVideoHeaderView *_focusedVideoAudienceHeaderView;
    MMFinderLiveReplayCommentView *_commentView;
    MMUIButton *_replayMomentsButton;
    WCFinderLiveReplayMomentsView *_replayMomentsView;
    WCFinderLiveReplayMomentsLogic *_replayMomentsLogic;
    MMUIButton *_replayRateButton;
    WCFinderLiveReplayRateOperationView *_replayRateOperationView;
    double _currentRate;
    WCFinderLiveRateAutoIncreaseTipView *_rateAutoIncreaseTipView;
    MMFinderLivePaymentRetryViewBar *_tryViewLiveBar;
    UIView *_trialTimeOutMaskView;
    UIImageView *_trialTimeoutCoverView;
    UIView *_trialTimeoutCoverMaskView;
    UILabel *_trialTimeoutPromptLabel;
    MMUIButton *_orientationButton;
    MMFinderLiveReplayMessageSource *_messageSource;
    unsigned long long _lastMessageUpdateTime;
    MMLiveRewardGiftRecievingAnimationView *_giftRecievingAnimationView;
    MMFinderLiveRewardRecievingLogic *_rewardRecievingLogic;
    WCFinderLiveNowView *_waterMarkView;
    MMLiveAudioOnlyIndicatorView *_audioOnlyIndicatorView;
    UILabel *_audioOnlyIndicatorLabel;
    MMFinderLiveReplayBarrageView *_barrageView;
    UIView *_stopgapIndicatorView;
    MMLiveLoadingEllipsisLabel *_stopgapIndicatorLabel;
    MMUIActivityIndicatorView *_loadingRing;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlayerControlWidgetsEnableDisplay; // @synthesize isPlayerControlWidgetsEnableDisplay=_isPlayerControlWidgetsEnableDisplay;
@property(nonatomic) _Bool isLongPressing; // @synthesize isLongPressing=_isLongPressing;
@property(nonatomic) _Bool isClickFirst; // @synthesize isClickFirst=_isClickFirst;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingRing; // @synthesize loadingRing=_loadingRing;
@property(retain, nonatomic) MMLiveLoadingEllipsisLabel *stopgapIndicatorLabel; // @synthesize stopgapIndicatorLabel=_stopgapIndicatorLabel;
@property(retain, nonatomic) UIView *stopgapIndicatorView; // @synthesize stopgapIndicatorView=_stopgapIndicatorView;
@property(retain, nonatomic) MMFinderLiveReplayBarrageView *barrageView; // @synthesize barrageView=_barrageView;
@property(retain, nonatomic) UILabel *audioOnlyIndicatorLabel; // @synthesize audioOnlyIndicatorLabel=_audioOnlyIndicatorLabel;
@property(retain, nonatomic) MMLiveAudioOnlyIndicatorView *audioOnlyIndicatorView; // @synthesize audioOnlyIndicatorView=_audioOnlyIndicatorView;
@property(retain, nonatomic) WCFinderLiveNowView *waterMarkView; // @synthesize waterMarkView=_waterMarkView;
@property(retain, nonatomic) MMFinderLiveRewardRecievingLogic *rewardRecievingLogic; // @synthesize rewardRecievingLogic=_rewardRecievingLogic;
@property(retain, nonatomic) MMLiveRewardGiftRecievingAnimationView *giftRecievingAnimationView; // @synthesize giftRecievingAnimationView=_giftRecievingAnimationView;
@property(nonatomic) _Bool supressMessageUpdate; // @synthesize supressMessageUpdate=_supressMessageUpdate;
@property(nonatomic) unsigned long long lastMessageUpdateTime; // @synthesize lastMessageUpdateTime=_lastMessageUpdateTime;
@property(retain, nonatomic) MMFinderLiveReplayMessageSource *messageSource; // @synthesize messageSource=_messageSource;
@property(retain, nonatomic) MMUIButton *orientationButton; // @synthesize orientationButton=_orientationButton;
@property(retain, nonatomic) UILabel *trialTimeoutPromptLabel; // @synthesize trialTimeoutPromptLabel=_trialTimeoutPromptLabel;
@property(retain, nonatomic) UIView *trialTimeoutCoverMaskView; // @synthesize trialTimeoutCoverMaskView=_trialTimeoutCoverMaskView;
@property(retain, nonatomic) UIImageView *trialTimeoutCoverView; // @synthesize trialTimeoutCoverView=_trialTimeoutCoverView;
@property(retain, nonatomic) UIView *trialTimeOutMaskView; // @synthesize trialTimeOutMaskView=_trialTimeOutMaskView;
@property(retain, nonatomic) MMFinderLivePaymentRetryViewBar *tryViewLiveBar; // @synthesize tryViewLiveBar=_tryViewLiveBar;
@property(retain, nonatomic) WCFinderLiveRateAutoIncreaseTipView *rateAutoIncreaseTipView; // @synthesize rateAutoIncreaseTipView=_rateAutoIncreaseTipView;
@property(nonatomic) double currentRate; // @synthesize currentRate=_currentRate;
@property(retain, nonatomic) WCFinderLiveReplayRateOperationView *replayRateOperationView; // @synthesize replayRateOperationView=_replayRateOperationView;
@property(retain, nonatomic) MMUIButton *replayRateButton; // @synthesize replayRateButton=_replayRateButton;
@property(retain, nonatomic) WCFinderLiveReplayMomentsLogic *replayMomentsLogic; // @synthesize replayMomentsLogic=_replayMomentsLogic;
@property(retain, nonatomic) WCFinderLiveReplayMomentsView *replayMomentsView; // @synthesize replayMomentsView=_replayMomentsView;
@property(retain, nonatomic) MMUIButton *replayMomentsButton; // @synthesize replayMomentsButton=_replayMomentsButton;
@property(retain, nonatomic) MMFinderLiveReplayCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) MMFinderLiveConnectMicFocusedVideoHeaderView *focusedVideoAudienceHeaderView; // @synthesize focusedVideoAudienceHeaderView=_focusedVideoAudienceHeaderView;
@property(retain, nonatomic) MMUILabel *onlineStateLabel; // @synthesize onlineStateLabel=_onlineStateLabel;
@property(retain, nonatomic) MMFinderLiveHeaderView *liveHeaderView; // @synthesize liveHeaderView=_liveHeaderView;
@property(nonatomic) unsigned long long lastPurchaseInitiateTime; // @synthesize lastPurchaseInitiateTime=_lastPurchaseInitiateTime;
@property(nonatomic) __weak id <MMFinderLiveOrdinaryReplayOperationViewDelegate> ordinaryReplayOperationDelegate; // @synthesize ordinaryReplayOperationDelegate=_ordinaryReplayOperationDelegate;
- (void)reportForReplayRateBtnExposeIfNeeded;
- (void)reportForReplayMomentsBtnExposeIfNeeded;
- (_Bool)isLandscape;
- (void)updateRateAutoIncreaseTipViewOrigin;
- (void)createRateAutoIncreaseTipView;
- (void)hideRateAutoIncreaseTipView;
- (void)showRateAutoIncreaseTipView;
- (void)createReplayRateOperationView;
- (void)handleAnchorInfoSeiMessage:(id)arg1;
- (void)updateLiveMessageAtTime:(unsigned int)arg1;
- (void)onPurchaseButtonFirstClick;
- (void)onPurchaseInitiating;
- (void)onReplayInvalidated;
- (void)onPreviewContainerDisplayChange:(_Bool)arg1;
- (void)onPlayerControlWidgetsDisplay;
- (void)checkOperateButtonCenterYChanged:(double)arg1;
- (double)getOperateButtonCenterY;
- (void)checkProgressBarRightChanged:(double)arg1;
- (double)getProgrressBarRight;
- (double)getProgrressBarLeft;
- (struct CGRect)getHLSPlayerViewFrame;
- (double)viewAboveProgressBarBottom;
- (void)onVideoFrameBufferRefresh:(id)arg1;
- (double)toolViewBottom;
- (void)onLoopPlayToEnd;
- (void)onGetSeiMessage:(id)arg1;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onSliderSeekToTime:(float)arg1 isAtGreateTime:(_Bool)arg2;
- (void)onSliderSeekBegin;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (_Bool)isDisplayOperationWidgetsForAudience;
- (double)getCommentTableTop;
- (_Bool)getIsShoppingAvailable;
- (double)getBottomWidgetsBottom;
- (double)allWidgetBottom;
- (double)getTopWidgetsBottom;
- (double)getVisibleHeight;
- (void)onCommentViewDidTaped:(struct CGPoint)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewCancelButtonClicked;
- (void)showStopgapIndicator:(_Bool)arg1;
- (void)configureStopgapState:(unsigned long long)arg1;
- (void)showLoading:(_Bool)arg1;
- (void)displayTryViewLiveBarAnimated;
- (void)createTrialTimeOutMaskView;
- (void)updateTrialTimeoutStatus;
- (unsigned int)getCurrentRemainTime;
- (void)startDisplayTryViewLiveBar;
- (void)updateUIForReplayPaymentType;
- (void)barrageView:(id)arg1 reportCommentItem:(id)arg2;
- (void)barrageViewDidHideOperationMenu:(id)arg1;
- (void)barrageViewDidShowOperationMenu:(id)arg1;
- (void)onReplayMomentsViewCellClicked:(id)arg1;
- (void)onReplayMomentsViewClosed:(_Bool)arg1;
- (void)onReplayMomentsViewOpened:(_Bool)arg1;
- (void)updateReplayRateBtnAlpha:(double)arg1;
- (void)updateReplayRateBtnHidden:(_Bool)arg1;
- (void)updateReplayMomentsBtnAlpha:(double)arg1;
- (void)updateReplayMomentsBtnHidden;
- (void)updateCommentViewHidden;
- (void)layoutBarrageView;
- (void)onReplayRateButtonClicked;
- (void)onReplayMomentsButtonClicked;
- (void)onOrientationButtonClicked;
- (void)updateOrientationButtonForCurrentOrientation;
- (void)updateOrientationButton;
- (void)resetRewardGiftRecievingAnimationView;
- (void)layoutStopgapIndicatorView;
- (void)layoutAudioOnlyIndicator;
- (void)layoutWaterMark;
- (void)layoutRewardGiftRecievingAnimationView;
- (void)layoutOrientationButton;
- (void)layoutReplayMomentsButton;
- (void)layoutReplayRateButton;
- (void)layoutReplayMomentsView;
- (void)createReplayMomentsView;
- (void)layoutCommentView;
- (void)layoutTryViewLiveBar;
- (void)layoutFocusedVideoAudienceHeader;
- (void)layoutOnlineStateLabel;
- (void)layoutHeaderView;
- (_Bool)handleForFullScreenSingleTap;
- (void)onFullScreenGestureCancelEvents;
- (void)autoIncreaseRate;
- (void)onFullScreenLongPressEnd;
- (_Bool)shouldHideTopMaskWhenCLeanScreen;
- (_Bool)isFullScreenPanGestureShouldReceiveTouch:(id)arg1;
- (_Bool)isFullScreenGestureShouldReceiveTouch:(id)arg1;
- (void)configureOperationViewWithConnectMicState:(id)arg1 connectMicStateValid:(_Bool)arg2 anchorInAudioMode:(_Bool)arg3 isScreenSharing:(_Bool)arg4;
- (struct UIEdgeInsets)realSafeAreaInsets;
- (_Bool)shouldAllowProgressManipulationByPanning;
- (void)hideContents;
- (void)showContents;
- (void)createReplayControlView;
- (void)layoutUI;
- (void)onGetDetailDataItem;
- (void)updateReplayMomentsGreatTimeList:(id)arg1;
- (void)onReplayLiveInfoUpdate;
- (void)onGetLiveInfo;
- (void)onEnterLive;
- (void)dealloc;
- (void)unRegisterExtensions;
- (void)registerExtensions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

