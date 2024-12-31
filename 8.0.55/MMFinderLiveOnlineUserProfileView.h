//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, CContact, FinderAudienceLiveInfo, FinderLiveContact, MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView, MMFinderLiveNormalTextSignView, MMFinderLiveOnlineUserProfileOpenParameter, MMHeadImageView, MMLiveActionSheetScrollView, MMLoadingIndicatorView, MMUIActivityIndicatorView, MMUIButton, MMUILabel, NSArray, NSMutableArray, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView, WCFinderContact, WCFinderProfileAuthView, WCLiveActionSheet;

@interface MMFinderLiveOnlineUserProfileView
{
    _Bool _isOpening;
    _Bool _isFromOnlineStateView;
    _Bool _isAccountBlackList;
    _Bool _isCloseBtnClicked;
    _Bool _ignoreActionSheetCancleCallback;
    _Bool _hasFetchCompleteContact;
    _Bool _clearCallbacksAfterDismiss;
    unsigned int _visibleBadgeCount;
    id _extraInfo;
    NSString *_userName;
    UIView *_contentView;
    UIView *_profileDetailView;
    UIView *_maskView;
    CAShapeLayer *_shapeLayer;
    UIVisualEffectView *_visualEfView;
    MMHeadImageView *_headImageView;
    MMUILabel *_signLabel;
    UIView *_locationAndGenderContainerView;
    MMUILabel *_locationLabel;
    MMUILabel *_genderLabel;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMFinderLiveNormalTextSignView *_buySignView;
    MMFinderLiveNormalTextSignView *_frequentWatchSignView;
    MMFinderLiveNormalTextSignView *_followerSignView;
    RichTextView *_displayNameLabel;
    WCFinderProfileAuthView *_authInfoView;
    UIImageView *_finderIconImageView;
    UIImageView *_chevronView;
    RichTextView *_signatureLabel;
    MMLiveActionSheetScrollView *_actionButtonScrollView;
    MMUIButton *_singleActionButton;
    MMUIButton *_followButton;
    MMUIButton *_sendGiftButton;
    MMUIButton *_switchLiveRoomButton;
    MMLoadingIndicatorView *_loadingIndicatorView;
    NSArray *_profileInfoViewList;
    NSMutableArray *_bottomButtonList;
    WCLiveActionSheet *_actionSheet;
    CContact *_contact;
    FinderAudienceLiveInfo *_audienceLiveInfo;
    UIView *_micSeatInfoView;
    UILabel *_micSeatNameLabel;
    UIImageView *_editMicSeatNameIcon;
    UIButton *_stopConnectMicButton;
    MMUIActivityIndicatorView *_stopConnectMicIndicatorView;
    FinderLiveContact *_fetchedLiveContact;
    MMFinderLiveOnlineUserProfileOpenParameter *_openParameter;
    WCFinderContact *_fetchedFinderContact;
    NSArray *_badgeInfos;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int visibleBadgeCount; // @synthesize visibleBadgeCount=_visibleBadgeCount;
@property(retain, nonatomic) NSArray *badgeInfos; // @synthesize badgeInfos=_badgeInfos;
@property(retain, nonatomic) WCFinderContact *fetchedFinderContact; // @synthesize fetchedFinderContact=_fetchedFinderContact;
@property(retain, nonatomic) MMFinderLiveOnlineUserProfileOpenParameter *openParameter; // @synthesize openParameter=_openParameter;
@property(nonatomic) _Bool clearCallbacksAfterDismiss; // @synthesize clearCallbacksAfterDismiss=_clearCallbacksAfterDismiss;
@property(retain, nonatomic) FinderLiveContact *fetchedLiveContact; // @synthesize fetchedLiveContact=_fetchedLiveContact;
@property(nonatomic) _Bool hasFetchCompleteContact; // @synthesize hasFetchCompleteContact=_hasFetchCompleteContact;
@property(nonatomic) _Bool ignoreActionSheetCancleCallback; // @synthesize ignoreActionSheetCancleCallback=_ignoreActionSheetCancleCallback;
@property(nonatomic) _Bool isCloseBtnClicked; // @synthesize isCloseBtnClicked=_isCloseBtnClicked;
@property(nonatomic) _Bool isAccountBlackList; // @synthesize isAccountBlackList=_isAccountBlackList;
@property(retain, nonatomic) MMUIActivityIndicatorView *stopConnectMicIndicatorView; // @synthesize stopConnectMicIndicatorView=_stopConnectMicIndicatorView;
@property(retain, nonatomic) UIButton *stopConnectMicButton; // @synthesize stopConnectMicButton=_stopConnectMicButton;
@property(retain, nonatomic) UIImageView *editMicSeatNameIcon; // @synthesize editMicSeatNameIcon=_editMicSeatNameIcon;
@property(retain, nonatomic) UILabel *micSeatNameLabel; // @synthesize micSeatNameLabel=_micSeatNameLabel;
@property(retain, nonatomic) UIView *micSeatInfoView; // @synthesize micSeatInfoView=_micSeatInfoView;
@property(retain, nonatomic) FinderAudienceLiveInfo *audienceLiveInfo; // @synthesize audienceLiveInfo=_audienceLiveInfo;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCLiveActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) NSMutableArray *bottomButtonList; // @synthesize bottomButtonList=_bottomButtonList;
@property(retain, nonatomic) NSArray *profileInfoViewList; // @synthesize profileInfoViewList=_profileInfoViewList;
@property(retain, nonatomic) MMLoadingIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) MMUIButton *switchLiveRoomButton; // @synthesize switchLiveRoomButton=_switchLiveRoomButton;
@property(retain, nonatomic) MMUIButton *sendGiftButton; // @synthesize sendGiftButton=_sendGiftButton;
@property(retain, nonatomic) MMUIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) MMUIButton *singleActionButton; // @synthesize singleActionButton=_singleActionButton;
@property(retain, nonatomic) MMLiveActionSheetScrollView *actionButtonScrollView; // @synthesize actionButtonScrollView=_actionButtonScrollView;
@property(retain, nonatomic) RichTextView *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) WCFinderProfileAuthView *authInfoView; // @synthesize authInfoView=_authInfoView;
@property(retain, nonatomic) RichTextView *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView; // @synthesize followerSignView=_followerSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView; // @synthesize frequentWatchSignView=_frequentWatchSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView; // @synthesize buySignView=_buySignView;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMUILabel *genderLabel; // @synthesize genderLabel=_genderLabel;
@property(retain, nonatomic) MMUILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIView *locationAndGenderContainerView; // @synthesize locationAndGenderContainerView=_locationAndGenderContainerView;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *profileDetailView; // @synthesize profileDetailView=_profileDetailView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isFromOnlineStateView; // @synthesize isFromOnlineStateView=_isFromOnlineStateView;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
- (id)audienceLogReporter;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (unsigned long long)getLiveReporterUserIdentity;
- (unsigned long long)getLiveReporterProfileScene;
- (void)reportProfileActionWithType:(unsigned long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSwitchLiveRoomButtonClicked;
- (void)onSingleActionButtonClicked;
- (void)onSendGiftButtonClicked;
- (void)onTapGotoStreamProfile:(id)arg1;
- (id)addTransparencyViewWith:(id)arg1 targetView:(id)arg2;
- (void)showCancelFollowSheetForAnchor;
- (void)onActionsheetCancelButtonClicked;
- (void)onFollowButtonClicked;
- (void)onSendMsgButtonClicked;
- (void)onAddOrRemoveCommentAssistantButtonClicked;
- (void)onBanCommentButtonClicked;
- (_Bool)isNoSenseCommentEnable;
- (void)onNoSenseBanCommentButtonClicked;
- (void)onKickoutButtonClicked;
- (void)onComplaintButtonClicked;
- (_Bool)isAssistant;
- (_Bool)isAnchor;
- (id)finderContact;
- (void)clearMaskHighlightRect;
- (_Bool)isCommentEnable;
- (unsigned long long)getCommentDef;
- (void)openWithAnimation:(_Bool)arg1 refreshContact:(_Bool)arg2;
- (void)openWithAnimation:(_Bool)arg1;
- (void)displayUsrProfileViewWithAnimation:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillDisappear;
- (void)closeWithAnimation:(_Bool)arg1 clearCallbacks:(_Bool)arg2;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)close;
- (void)closeDirectly;
- (void)tapMask;
- (void)updateViewColorInDarkMode:(_Bool)arg1;
- (void)handleMicUsersInfoChanged:(id)arg1;
- (void)updateWithBadgeInfos:(id)arg1;
- (void)reloadProfileInfoViewsWithAudienceLiveInfo:(id)arg1;
- (void)reloadWithIsSendPrivateMsgEnable:(_Bool)arg1 liveContactExtInfo:(id)arg2;
- (void)reloadWithDisableCommentDef:(unsigned long long)arg1;
- (void)reloadWithFinderContact:(id)arg1 hasFetchCompleteContact:(_Bool)arg2;
- (void)reloadWithFinderContact:(id)arg1;
- (void)reloadDataWithParameter;
- (void)reloadPageSheetTopBar;
- (void)openWithParameter:(id)arg1 animation:(_Bool)arg2;
- (id)makeStopConnectMicIndicatorView;
- (void)onTapStopConnectMicButton;
- (id)makeStopConnectMicButton;
- (void)onTapMicSeatInfoView:(id)arg1;
- (void)checkAndCreateMicSeatInfoView;
- (void)updateAuthInfoView;
- (void)updateHeadImageConerRadius:(double)arg1;
- (void)refreshForDisplayNameLabel:(double)arg1;
- (unsigned int)getVisibleButtonCount;
- (struct CGRect)contentViewFrame;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutLocationAndGenderViewsWithOrigin:(struct CGPoint)arg1 andMaxWidth:(double)arg2;
- (void)layoutUI;
- (_Bool)enableProfileLiveInfoView;
- (_Bool)enableDisplayFollowButton;
- (_Bool)enableConnectMicUserSendGift;
- (_Bool)enableConnectMicUserSendMsg;
- (_Bool)enableSendMsg;
- (id)genBigStrongButton;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

