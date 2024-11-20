//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMFinderLiveAnniversaryDecorationViewModel, MMFinderLiveClarityHeaderButton, MMFinderLiveFansGroupSignView, MMFinderLiveHeaderFollowButton, MMFinderLiveMusicHeaderButton, MMFinderLiveTask, MMUIButton, MMUIImageView, MMUILabel, MMWebImageView, NSString, PAGView, WCFinderContact, WCFinderHeadImageView, WCLiveBlurButton;

@interface MMFinderLiveHeaderView
{
    _Bool _hideActionButton;
    _Bool _hideCloseButton;
    _Bool _isCurrentInSubScene;
    _Bool _isInLive;
    _Bool _hasDisplayGroupJoin;
    _Bool _isClickFollowingAnimatingFlag;
    _Bool _needShowfollowBtn;
    _Bool _hasShowFollowButton;
    _Bool _hasRegisteredKeyExtensions;
    _Bool _hadShownFollowAnimation;
    _Bool _isFollowState;
    _Bool _isFollowShowIntterupt;
    unsigned int _musicButtonShowStatus;
    WCFinderContact *_anchorContact;
    CDUnknownBlockType _headImageOrLabelCallback;
    CDUnknownBlockType _subtitleLabelCallBack;
    CDUnknownBlockType _closeButtonCallback;
    CDUnknownBlockType _miniWindowButtonCallback;
    CDUnknownBlockType _actionButtonCallback;
    CDUnknownBlockType _followButtonCallback;
    CDUnknownBlockType _followingButtonCallback;
    CDUnknownBlockType _castingButtonCallback;
    CDUnknownBlockType _clarityButtonCallback;
    CDUnknownBlockType _musicButtonCallback;
    CDUnknownBlockType _changeAppSceneButtonCallback;
    CDUnknownBlockType _tapFansGroupIconCallback;
    CDUnknownBlockType _contentRightChangeCallback;
    CDUnknownBlockType _rightControlsLeftChangeCallback;
    WCLiveBlurButton *_actionButton;
    CDUnknownBlockType _redDotQueryBlock;
    WCFinderHeadImageView *_anchorHeadImageView;
    MMUILabel *_anchorNameLabel;
    MMWebImageView *_authIconView;
    unsigned long long _scene;
    WCLiveBlurButton *_closeButton;
    WCLiveBlurButton *_miniWindowButton;
    WCLiveBlurButton *_changeAppSceneButton;
    WCLiveBlurButton *_castingButton;
    long long _lastOrientation;
    WCFinderContact *_contact;
    MMFinderLiveHeaderFollowButton *_followBtn;
    MMUIButton *_followingBtn;
    MMWebImageView *_brandLabelView;
    MMFinderLiveFansGroupSignView *_groupSignView;
    PAGView *_followAnimationView;
    double _lastContentRight;
    double _lastRightControlsLeft;
    MMFinderLiveMusicHeaderButton *_headerMusicButton;
    NSString *_followButtonShowSessionId;
    MMFinderLiveClarityHeaderButton *_headerClarityButton;
    MMUILabel *_subtitleLabel;
    MMUIImageView *_subtitleJumpIcon;
    MMUILabel *_brandLiveMarkFollowTipsLabel;
    MMFinderLiveAnniversaryDecorationViewModel *_anniversaryDecorationViewModel;
    PAGView *_avatarBackgroundView;
    NSString *_currentAvatarBackgroundViewUrl;
    struct CGSize _originAnchorNameLabelSize;
    struct CGSize _groupSignViewSize;
    struct CGSize _originMarkLabelSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentAvatarBackgroundViewUrl; // @synthesize currentAvatarBackgroundViewUrl=_currentAvatarBackgroundViewUrl;
@property(retain, nonatomic) PAGView *avatarBackgroundView; // @synthesize avatarBackgroundView=_avatarBackgroundView;
@property(retain, nonatomic) MMFinderLiveAnniversaryDecorationViewModel *anniversaryDecorationViewModel; // @synthesize anniversaryDecorationViewModel=_anniversaryDecorationViewModel;
@property(nonatomic) _Bool isFollowShowIntterupt; // @synthesize isFollowShowIntterupt=_isFollowShowIntterupt;
@property(nonatomic) _Bool isFollowState; // @synthesize isFollowState=_isFollowState;
@property(nonatomic) _Bool hadShownFollowAnimation; // @synthesize hadShownFollowAnimation=_hadShownFollowAnimation;
@property(nonatomic) struct CGSize originMarkLabelSize; // @synthesize originMarkLabelSize=_originMarkLabelSize;
@property(retain, nonatomic) MMUILabel *brandLiveMarkFollowTipsLabel; // @synthesize brandLiveMarkFollowTipsLabel=_brandLiveMarkFollowTipsLabel;
@property(retain, nonatomic) MMUIImageView *subtitleJumpIcon; // @synthesize subtitleJumpIcon=_subtitleJumpIcon;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) _Bool hasRegisteredKeyExtensions; // @synthesize hasRegisteredKeyExtensions=_hasRegisteredKeyExtensions;
@property(retain, nonatomic) MMFinderLiveClarityHeaderButton *headerClarityButton; // @synthesize headerClarityButton=_headerClarityButton;
@property(retain, nonatomic) NSString *followButtonShowSessionId; // @synthesize followButtonShowSessionId=_followButtonShowSessionId;
@property(nonatomic) _Bool hasShowFollowButton; // @synthesize hasShowFollowButton=_hasShowFollowButton;
@property(nonatomic) _Bool needShowfollowBtn; // @synthesize needShowfollowBtn=_needShowfollowBtn;
@property(retain, nonatomic) MMFinderLiveMusicHeaderButton *headerMusicButton; // @synthesize headerMusicButton=_headerMusicButton;
@property(nonatomic) double lastRightControlsLeft; // @synthesize lastRightControlsLeft=_lastRightControlsLeft;
@property(nonatomic) double lastContentRight; // @synthesize lastContentRight=_lastContentRight;
@property(nonatomic) _Bool isClickFollowingAnimatingFlag; // @synthesize isClickFollowingAnimatingFlag=_isClickFollowingAnimatingFlag;
@property(retain, nonatomic) PAGView *followAnimationView; // @synthesize followAnimationView=_followAnimationView;
@property(nonatomic) _Bool hasDisplayGroupJoin; // @synthesize hasDisplayGroupJoin=_hasDisplayGroupJoin;
@property(nonatomic) struct CGSize groupSignViewSize; // @synthesize groupSignViewSize=_groupSignViewSize;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *groupSignView; // @synthesize groupSignView=_groupSignView;
@property(retain, nonatomic) MMWebImageView *brandLabelView; // @synthesize brandLabelView=_brandLabelView;
@property(retain, nonatomic) MMUIButton *followingBtn; // @synthesize followingBtn=_followingBtn;
@property(retain, nonatomic) MMFinderLiveHeaderFollowButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
@property(nonatomic) _Bool isCurrentInSubScene; // @synthesize isCurrentInSubScene=_isCurrentInSubScene;
@property(retain, nonatomic) WCLiveBlurButton *castingButton; // @synthesize castingButton=_castingButton;
@property(retain, nonatomic) WCLiveBlurButton *changeAppSceneButton; // @synthesize changeAppSceneButton=_changeAppSceneButton;
@property(retain, nonatomic) WCLiveBlurButton *miniWindowButton; // @synthesize miniWindowButton=_miniWindowButton;
@property(retain, nonatomic) WCLiveBlurButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) struct CGSize originAnchorNameLabelSize; // @synthesize originAnchorNameLabelSize=_originAnchorNameLabelSize;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
@property(copy, nonatomic) CDUnknownBlockType redDotQueryBlock; // @synthesize redDotQueryBlock=_redDotQueryBlock;
@property(retain, nonatomic) WCLiveBlurButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) unsigned int musicButtonShowStatus; // @synthesize musicButtonShowStatus=_musicButtonShowStatus;
@property(copy, nonatomic) CDUnknownBlockType rightControlsLeftChangeCallback; // @synthesize rightControlsLeftChangeCallback=_rightControlsLeftChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType contentRightChangeCallback; // @synthesize contentRightChangeCallback=_contentRightChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType tapFansGroupIconCallback; // @synthesize tapFansGroupIconCallback=_tapFansGroupIconCallback;
@property(copy, nonatomic) CDUnknownBlockType changeAppSceneButtonCallback; // @synthesize changeAppSceneButtonCallback=_changeAppSceneButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType musicButtonCallback; // @synthesize musicButtonCallback=_musicButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType clarityButtonCallback; // @synthesize clarityButtonCallback=_clarityButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType castingButtonCallback; // @synthesize castingButtonCallback=_castingButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType followingButtonCallback; // @synthesize followingButtonCallback=_followingButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType followButtonCallback; // @synthesize followButtonCallback=_followButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType actionButtonCallback; // @synthesize actionButtonCallback=_actionButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType miniWindowButtonCallback; // @synthesize miniWindowButtonCallback=_miniWindowButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType closeButtonCallback; // @synthesize closeButtonCallback=_closeButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType subtitleLabelCallBack; // @synthesize subtitleLabelCallBack=_subtitleLabelCallBack;
@property(copy, nonatomic) CDUnknownBlockType headImageOrLabelCallback; // @synthesize headImageOrLabelCallback=_headImageOrLabelCallback;
@property(nonatomic) _Bool hideCloseButton; // @synthesize hideCloseButton=_hideCloseButton;
@property(nonatomic) _Bool hideActionButton; // @synthesize hideActionButton=_hideActionButton;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
- (id)audienceLogReporter;
- (void)onBrandLabelClicked:(id)arg1;
- (_Bool)checkTask:(id)arg1;
@property(readonly, nonatomic) unsigned long long nameStyle;
- (void)onFinderLiveTask:(id)arg1 enableDisplayFollowBtn:(_Bool)arg2;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2;
- (void)onFontSizeChange;
- (void)onSubSceneClosed;
- (void)onFinderLiveHeaderViewClickedWithMusicDataItem:(id)arg1 song:(id)arg2;
- (void)onAnimationEnd:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)reloadActionButtonRedDot;
- (id)getActionButtonRedDotPath;
- (_Bool)actionButtonRedDotHasRedDot;
- (void)showUnfocusViewAnimated:(id)arg1 alpha:(double)arg2;
- (void)showFocusLabelAnimated:(_Bool)arg1 label:(id)arg2 scale:(double)arg3 alpha:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)stopAvatarBackgroundView;
- (void)playAvatarBackgroundView:(id)arg1;
- (void)updateChangeAppSceneButtonForCurrentAppScene;
- (void)updateChangeAppSceneButton;
- (void)updateHeadImageOnEnterLive;
- (void)callSubtitleCallback;
- (void)callHeadImageOrLabelCallback;
- (void)handleNameLabelTapGesture:(id)arg1;
- (void)onFollowingButtonClicked;
- (void)onFollowButtonClicked;
- (void)onMiniWindowButtonClicked;
- (void)onCastingButtonClicked;
- (void)onCloseButtonClicked;
- (void)onActionButtonClicked;
- (void)onChangeAppSceneButtonClicked;
- (void)onGroupSignViewTap;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (double)calculateNameContentWidth;
- (double)anchorLabelViewsMaxWidth;
@property(readonly, nonatomic) _Bool hasShowBoundBizLive;
- (_Bool)isShowEligibilityEntrance;
- (_Bool)hasEligibilityEntrance;
- (_Bool)hasGuideAdsInfo;
- (_Bool)hasGameHonorary;
- (_Bool)needShowSubtitleBrandLiveTips;
- (_Bool)hasSubtitles;
- (id)subtitle;
- (double)anchorNameLabelWidth;
- (double)followStatusWidth;
- (void)onFansGroupNameChanged:(id)arg1;
- (void)onFansGroupStateChanged:(unsigned long long)arg1;
- (_Bool)shouldAuthIconViewHidden;
- (_Bool)shouldFollowingAnimationHidden;
- (_Bool)shouldFollowingBtnHidden;
- (void)__hidefollowingBtn;
- (void)showBrandLiveMarkFollowTipsIfNeed;
- (void)animationFollowing;
- (void)hideFollowingButton;
- (void)showFollowButton;
- (id)getMinimizeIconName;
- (void)updateActionButtonImage;
- (void)followAttentdLottery;
- (void)guideFollow;
- (_Bool)isMiniWindowButtonHidden;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) NSString *anchorHeadImgUrl;
@property(readonly, nonatomic) NSString *anchorDisplayName;
- (void)visibilityChanged:(_Bool)arg1 invokeType:(unsigned long long)arg2;
- (void)reportOnEnterLive;
- (void)onEnterLive;
- (void)refreshWidgetsForFontSizeChange;
- (void)updateViewModel:(id)arg1;
- (_Bool)shouldShowFollowStatus;
- (id)objectCacheSongItemForId:(id)arg1;
- (void)setCacheSongItemForId:(id)arg1 item:(id)arg2;
- (void)updateFollowStateCache:(_Bool)arg1 isFinderBizLive:(_Bool)arg2;
- (_Bool)shouldHideFollowBtn;
- (void)updateFollowBtnLayout;
- (double)followBtnLeft;
- (void)checkRightControlsLeftChange;
- (void)checkContentRightChange;
- (double)rightControlsLeft;
- (double)contentRight;
- (_Bool)updateMusicId:(id)arg1;
- (void)hideMusicButton;
- (void)showMusicButton;
- (_Bool)isCurrentClarityDataItemValid;
- (_Bool)isHeaderClarityButtonDisplay;
- (void)updateCurrentClarityDataItem:(id)arg1;
- (_Bool)hideClarityButton;
- (_Bool)showClarityButtonWithDataItem:(id)arg1;
- (_Bool)hideCastingButton;
- (_Bool)showCastingButton;
- (void)updateAuthInfo;
- (void)hideAnchorInfo;
- (void)showAnchorInfo;
- (id)rightButton;
- (double)getFansGroupSignWidthForLayoutLeft:(_Bool)arg1;
- (_Bool)enableShowFansGroupEntrance;
- (void)updateFansGroupHiddenWithRefresh:(_Bool)arg1;
- (_Bool)isShowJoinFansGroupState;
- (void)foldJoinFansGroupView;
- (void)delayFoldJoinFansGroupView;
- (void)updateFansGroupState;
- (void)layoutUI;
- (void)updateDataWhenLayout;
- (void)setupUI;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andLiveTask:(id)arg2 componentKey:(id)arg3 scene:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3 scene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

