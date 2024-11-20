//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CAGradientLayer, ForwardMessageLogicController, MMMsgCommonTipsView, MMMusicDotMVDataSource, MMMusicFavHandler, MMMusicForwardHandler, MMMusicInfo, MMMusicLiveCommentModel, MMMusicLiveCommentView, MMMusicLiveInputView, MMMusicLiveLyricDisplayView, MMMusicLiveMVAuthorInfoView, MMMusicLiveMusicOperationView, MMMusicLiveSendLocationBubbleView, MMMusicLiveVCTopBarView, MMMusicLyricsViewController, MMMusicMVPostingStateView, MMMusicOpenThirdAppHelper, MMMusicSetStatusBubbleView, MMMusicVideoImageDownloader, MMScrollActionSheet, MMUIActivityIndicatorView, MMUIButton, NSString, SendAppMsgHandler, UIButton, UILabel, UIView, WCLocationInfo, WCUIAlertView;
@protocol MMMusicLiveViewControllerDelegate;

@interface MMMusicLiveViewController
{
    unsigned long long _pushedFromType;
    CAGradientLayer *m_topMaskLayer;
    CAGradientLayer *m_bottomMaskLayer;
    MMMusicLiveMVAuthorInfoView *_finderAuthorInfoView;
    MMMusicLyricsViewController *m_lyricsVC;
    _Bool _isDragging;
    _Bool _isClearing;
    _Bool _isOperationNeedToShow;
    _Bool _isOperationClearing;
    _Bool _isAllClearing;
    _Bool _isShowingKeyboard;
    _Bool _isInLyricsVC;
    _Bool _isInHalfInfoVC;
    _Bool _hasShowSetStatusView;
    _Bool _hasSetupLyricService;
    _Bool _viewHasAppear;
    _Bool _sendingLocation;
    _Bool _hasFetchedLBS;
    MMMusicLiveMusicOperationView *_musicOperationView;
    id <MMMusicLiveViewControllerDelegate> _delegate;
    MMMusicDotMVDataSource *_mvDataSource;
    MMMusicLiveCommentView *_commentView;
    MMMusicInfo *_musicInfo;
    MMMusicLiveLyricDisplayView *_lyricView;
    MMMusicLiveVCTopBarView *_topBarView;
    UILabel *_likeNumLabel;
    MMUIButton *_likeBtn;
    UILabel *_commentNumLabel;
    MMUIButton *_commentBtn;
    UILabel *_shareTipsLabel;
    MMUIButton *_shareBtn;
    MMMusicSetStatusBubbleView *_setStatusView;
    MMUIButton *_playBtn;
    MMUIActivityIndicatorView *_loadingView;
    unsigned long long _state;
    SendAppMsgHandler *_sendAppMsgHandler;
    MMMusicLiveCommentModel *_commentModel;
    MMMusicLiveInputView *_inputView;
    UIView *_inputBackgroundView;
    MMUIButton *_hideInputBackgroundBtn;
    UIView *_inputControlView;
    UILabel *_inputControlLabel;
    UIView *_bottomContainerView;
    MMMsgCommonTipsView *_deletedCommonTips;
    UIButton *_nextBtn;
    MMMusicMVPostingStateView *_postingStateView;
    MMMusicVideoImageDownloader *_imageDownLoader;
    MMMusicOpenThirdAppHelper *_openThirdAppHelper;
    MMMusicForwardHandler *_forwardHandler;
    MMMusicFavHandler *_favHandler;
    MMMsgCommonTipsView *_notSupportedMVTipsView;
    WCUIAlertView *_currAlertView;
    double _sendLocationTime;
    WCLocationInfo *_cacheLocationInfo;
    WCLocationInfo *_currentLocationInfo;
    MMMusicLiveSendLocationBubbleView *_sendLocationHintView;
    unsigned long long _geoTag;
    unsigned long long _curShareSource;
    NSString *_jumpToThirdAppItemTitle;
    MMScrollActionSheet *_scrollActionSheet;
    ForwardMessageLogicController *_forwardLogicController;
}

+ (id)logStr:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(retain, nonatomic) NSString *jumpToThirdAppItemTitle; // @synthesize jumpToThirdAppItemTitle=_jumpToThirdAppItemTitle;
@property(nonatomic) unsigned long long curShareSource; // @synthesize curShareSource=_curShareSource;
@property(nonatomic) unsigned long long geoTag; // @synthesize geoTag=_geoTag;
@property(nonatomic) _Bool hasFetchedLBS; // @synthesize hasFetchedLBS=_hasFetchedLBS;
@property(retain, nonatomic) MMMusicLiveSendLocationBubbleView *sendLocationHintView; // @synthesize sendLocationHintView=_sendLocationHintView;
@property(nonatomic) _Bool sendingLocation; // @synthesize sendingLocation=_sendingLocation;
@property(retain, nonatomic) WCLocationInfo *currentLocationInfo; // @synthesize currentLocationInfo=_currentLocationInfo;
@property(retain, nonatomic) WCLocationInfo *cacheLocationInfo; // @synthesize cacheLocationInfo=_cacheLocationInfo;
@property(nonatomic) double sendLocationTime; // @synthesize sendLocationTime=_sendLocationTime;
@property(retain, nonatomic) WCUIAlertView *currAlertView; // @synthesize currAlertView=_currAlertView;
@property(nonatomic) _Bool viewHasAppear; // @synthesize viewHasAppear=_viewHasAppear;
@property(retain, nonatomic) MMMsgCommonTipsView *notSupportedMVTipsView; // @synthesize notSupportedMVTipsView=_notSupportedMVTipsView;
@property(retain, nonatomic) MMMusicFavHandler *favHandler; // @synthesize favHandler=_favHandler;
@property(retain, nonatomic) MMMusicForwardHandler *forwardHandler; // @synthesize forwardHandler=_forwardHandler;
@property(retain, nonatomic) MMMusicOpenThirdAppHelper *openThirdAppHelper; // @synthesize openThirdAppHelper=_openThirdAppHelper;
@property(retain, nonatomic) MMMusicVideoImageDownloader *imageDownLoader; // @synthesize imageDownLoader=_imageDownLoader;
@property(nonatomic) _Bool hasSetupLyricService; // @synthesize hasSetupLyricService=_hasSetupLyricService;
@property(retain, nonatomic) MMMusicMVPostingStateView *postingStateView; // @synthesize postingStateView=_postingStateView;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) MMMsgCommonTipsView *deletedCommonTips; // @synthesize deletedCommonTips=_deletedCommonTips;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UILabel *inputControlLabel; // @synthesize inputControlLabel=_inputControlLabel;
@property(retain, nonatomic) UIView *inputControlView; // @synthesize inputControlView=_inputControlView;
@property(retain, nonatomic) MMUIButton *hideInputBackgroundBtn; // @synthesize hideInputBackgroundBtn=_hideInputBackgroundBtn;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(retain, nonatomic) MMMusicLiveInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) MMMusicLiveCommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) SendAppMsgHandler *sendAppMsgHandler; // @synthesize sendAppMsgHandler=_sendAppMsgHandler;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) _Bool hasShowSetStatusView; // @synthesize hasShowSetStatusView=_hasShowSetStatusView;
@property(retain, nonatomic) MMMusicSetStatusBubbleView *setStatusView; // @synthesize setStatusView=_setStatusView;
@property(retain, nonatomic) MMUIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *shareTipsLabel; // @synthesize shareTipsLabel=_shareTipsLabel;
@property(retain, nonatomic) MMUIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UILabel *commentNumLabel; // @synthesize commentNumLabel=_commentNumLabel;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) MMMusicLiveVCTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) MMMusicLiveLyricDisplayView *lyricView; // @synthesize lyricView=_lyricView;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) _Bool isInHalfInfoVC; // @synthesize isInHalfInfoVC=_isInHalfInfoVC;
@property(nonatomic) _Bool isInLyricsVC; // @synthesize isInLyricsVC=_isInLyricsVC;
@property(nonatomic) _Bool isShowingKeyboard; // @synthesize isShowingKeyboard=_isShowingKeyboard;
@property(nonatomic) _Bool isAllClearing; // @synthesize isAllClearing=_isAllClearing;
@property(nonatomic) _Bool isOperationClearing; // @synthesize isOperationClearing=_isOperationClearing;
@property(nonatomic) _Bool isOperationNeedToShow; // @synthesize isOperationNeedToShow=_isOperationNeedToShow;
@property(nonatomic) _Bool isClearing; // @synthesize isClearing=_isClearing;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) MMMusicLiveCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) MMMusicDotMVDataSource *mvDataSource; // @synthesize mvDataSource=_mvDataSource;
@property(nonatomic) __weak id <MMMusicLiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMMusicLiveMusicOperationView *musicOperationView; // @synthesize musicOperationView=_musicOperationView;
- (void)onTipsViewClick:(id)arg1;
- (void)onTextStatePublished;
- (void)openSetStatusPageWithDelegate:(id)arg1 viewController:(id)arg2 forceFullScreen:(_Bool)arg3 source:(unsigned long long)arg4;
- (void)mmMusicSetStatusBubbleViewDidClick:(id)arg1;
- (void)onMusicLyricDidSeekToTime:(double)arg1;
- (void)onSlideLyricsPanel:(_Bool)arg1;
- (void)onSlideLyricsViewAlbum:(_Bool)arg1;
- (void)onClickLyricsViewAlbum:(_Bool)arg1;
- (void)onSwitchToMMMusicLiveViewController:(_Bool)arg1;
- (void)onWillSwitchToMMMusicLiveViewController:(_Bool)arg1;
- (void)updateLiveVCStateByAction:(unsigned long long)arg1;
- (void)updateCommentLikeEnabled:(_Bool)arg1;
- (void)updateShareButtonEnabled:(_Bool)arg1;
- (void)updateCommentLikeShare:(_Bool)arg1;
- (void)onOpen3rdMusicWebPage;
- (unsigned long long)calcStatusFromAction:(unsigned long long)arg1 andCurStatus:(unsigned long long)arg2;
- (void)onClickOpenMusicAppLabel;
- (void)onAuthorInfoViewClickSwitch;
- (void)onAuthorInfoViewClickFinderHitLabel;
- (void)onAuthorInfoViewClickMVNickName;
- (void)onAuthorInfoViewClickMVAvatar;
- (void)onMusicResume:(double)arg1;
- (void)onMusicPause:(double)arg1;
- (void)runMusicOperationViewAnim;
- (void)onMusicSliderProgressDidClick:(double)arg1;
- (void)onMusicSliderProgressDidSeek:(double)arg1;
- (void)onMusicSliderProgressBeginSeeking;
- (void)onMusicSliderProgressChanged:(double)arg1 isSliding:(_Bool)arg2;
- (void)playLikeAnimationFromGesture:(id)arg1 fromView:(id)arg2;
- (void)didTapLyrics;
- (void)didClickCreateBtn;
- (void)didClickCommentBtn;
- (void)didClickPauseBtn;
- (void)didClickPlayBtn;
- (void)didClickShareBtn;
- (void)showActionSheetOnLongPress;
- (void)layoutLikeBtnAnimated:(_Bool)arg1 isLike:(_Bool)arg2;
- (void)didClickLikeBtn;
- (void)appendCommentWithModel:(id)arg1 isNotice:(_Bool)arg2;
- (void)hideBufferingView;
- (void)showBufferingView;
- (void)updateWhenMusicPlayed;
- (void)updateWhenMusicPaused;
- (void)setCurrentAudienceCount:(unsigned long long)arg1;
- (void)updateInfoBarNickName:(id)arg1 avatarUrl:(id)arg2;
- (void)updateFinderAuthorWithDesc:(id)arg1;
- (double)getSliderMusicTimeInSecondPerPx;
- (unsigned int)updateSliderProgressEnd;
- (void)updateSliderProgress:(double)arg1;
- (void)onLyricService:(id)arg1 curentLyricChangeTo:(id)arg2 timeToNext:(double)arg3 currIndex:(unsigned int)arg4;
- (_Bool)isChannelMusic;
- (void)onTopBarJumpMusician:(id)arg1;
- (void)onTopBarOpenApp;
- (void)onTopBarOpenMusicInfoHalfScreen;
- (id)onMusicLiveTopBarViewRequestSourceViewInfo:(id)arg1;
- (int)currentMusicAudioType;
- (_Bool)isQQMusic;
- (id)requestGetAppName;
- (id)requestGetAppIconImageWithSize:(struct CGSize)arg1;
- (void)onClickAudioTypeButton;
- (void)onTopBarTappedBack;
- (void)onClickOpenMVListBtn;
- (void)onClickCreateMV;
- (void)onClickSetStatus;
- (void)sendNetLocationMsg:(id)arg1;
- (void)stopGeocoder;
- (void)fetchAddressByCurrentLocation;
- (id)evolvePoiAddressFromLbsLife:(id)arg1;
- (void)updateLocationCityInfo:(id)arg1;
- (id)convertLbsLifeToWCLocationInfoWithLbsLife:(id)arg1;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (void)getGPSListAccordingWithLatitude:(double)arg1 andLongitude:(double)arg2;
- (void)getRecommendPOIInfoByUserGPS;
- (void)fetchRecommendGPSInfoByUserGpsCache;
- (_Bool)checkAndFetchRecommendGPSInfo;
- (void)fetchLocation;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)hideSendLocationHintView:(_Bool)arg1;
- (void)showSendLocationHintView;
- (double)getUserStaySecond;
- (_Bool)isOverSendLocationFrequency;
- (void)didSendLocation;
- (id)interactionStatisticsFromDelegate;
- (_Bool)inputToolDisableExpression;
- (void)onInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
- (void)didCommitText:(id)arg1;
- (void)onCommentClicked:(id)arg1;
- (void)onCommentLongPressed:(id)arg1;
- (void)liveCommentView:(id)arg1 didTappedDetailWithModel:(id)arg2;
- (void)onCommentViewContentChanged;
- (void)onClickHideInputBackgroundBtn;
- (void)handlePanInputBackground:(id)arg1;
- (void)closeMessageInputArea;
- (void)handleTapInputBackground;
- (void)showMessageInputArea;
- (void)handleTapInputView;
- (void)resetCommentFrame;
- (void)liveLyricDisplayView:(id)arg1 completeShowLyric:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)onClickOpen3rdMusicAppWithSource:(unsigned long long)arg1;
- (void)layoutCollectionToolItems;
- (double)minTopForBotttomUI;
- (void)layoutLyricView;
- (void)layout;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldInteractivePop;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initPostingStateView;
- (void)initCommentView;
- (void)setPushedFromType:(unsigned long long)arg1;
- (void)reloadMusician:(id)arg1;
- (id)currentLyric;
- (id)singleLineLyricResolver;
- (void)removeLyricLoadingView;
- (void)tryShowListenLyricLoadingViewWithScene:(unsigned long long)arg1;
- (void)setupLyricService;
- (void)reloadSongStatus:(id)arg1;
- (void)reloadTopBar;
- (void)reloadInteractionNumbers;
- (void)reloadData;
- (void)hideSetStatusView:(_Bool)arg1;
- (_Bool)canShare;
- (void)showSetStatusView;
- (double)getSetStatusViewShowTime;
- (void)initView;
- (void)loadView;
- (id)initWithMusicInfo:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (id)getMessageWrap:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getCoverImageDataWithDefault:(id)arg1;
- (void)doAddToFavorites;
- (void)doShareToWcWithSource:(unsigned long long)arg1;
- (void)doShareToFriendsWithSource:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doShareToFriendsWithSource:(unsigned long long)arg1;
- (id)mmMusicFavHandlerGetMusicShareItem:(id)arg1;
- (void)mmMusicFavHandlerOnAddFav:(id)arg1;
- (void)mmMusicFavHandlerOnEndLoading:(id)arg1;
- (void)mmMusicFavHandlerOnStartLoading:(id)arg1;
- (id)mmMusicForwardHandlerGetMusicShareItem:(id)arg1;
- (void)mmMusicForwardHandler:(id)arg1 onShareToWcWithForwardViewController:(id)arg2 andSource:(unsigned long long)arg3;
- (void)mmMusicForwardHandler:(id)arg1 getForwardViewControllerAndPresent:(id)arg2;
- (void)mmMusicForwardHandler:(id)arg1 onShareToFriends:(id)arg2 withSource:(unsigned long long)arg3;
- (void)mmMusicForwardHandlerOnShareActionSuccess:(id)arg1;
- (void)mmMusicForwardHandlerOnEndLoading:(id)arg1;
- (void)mmMusicForwardHandlerOnStartLoading:(id)arg1;
- (id)mmMusicOpenThirdAppHelperGetShareItem:(id)arg1;
- (void)mmMusicOpenThirdAppHelper:(id)arg1 onOpen3rdMusicAppWithType:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (void)onClickOpenMusicAppWithSource:(unsigned long long)arg1;
- (void)showMoreMenuInView:(id)arg1 justShare:(_Bool)arg2;
- (id)getFavHandler;
- (id)getForwardHandler;
- (id)thirdAppHelper;
- (id)getImageDownLoader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
