//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMProgressViewEx, MMTimer, MMUILabel, NSString, UIButton, UINavigationController, UIView, WCNetworkMediaCore, WCNetworkMediaInfo, WCNetworkMediaSlider, WCNetworkMediaStreamVideoInfo;
@protocol WCNetworkMediaPlayerDelegate;

@interface WCNetworkMediaPlayer
{
    UINavigationController *_shareToUserNavController;
    UINavigationController *_shareToTimelineNavController;
    _Bool m_bIsFromTimeLine;
    _Bool m_bShouldBeFirstFrame;
    ForwardMessageLogicController *m_forwardLogic;
    int retryCount;
    _Bool m_bForbidFavMenu;
    _Bool m_bForbidMusic;
    _Bool _m_bHideStatusBar;
    _Bool _m_bFromCanvasSight;
    _Bool _initFromAd;
    id <WCNetworkMediaPlayerDelegate> m_delegate;
    NSString *m_url;
    NSString *m_vid;
    WCNetworkMediaInfo *m_info;
    WCNetworkMediaStreamVideoInfo *m_streamVideoInfo;
    WCNetworkMediaCore *m_mediaCore;
    UIView *m_topView;
    UIView *m_bottomView;
    UIButton *m_hideBtn;
    UIButton *m_showDetailBtn;
    MMUILabel *m_durationLabel;
    MMUILabel *m_currentLabel;
    UIButton *m_playBtn;
    UIButton *m_backBtn;
    UIButton *m_moreBtn;
    WCNetworkMediaSlider *m_progressSlider;
    MMProgressViewEx *m_loadingView;
    MMTimer *m_timer;
    id _userInfo;
    struct CGSize m_videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool initFromAd; // @synthesize initFromAd=_initFromAd;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool m_bFromCanvasSight; // @synthesize m_bFromCanvasSight=_m_bFromCanvasSight;
@property(nonatomic) _Bool m_bHideStatusBar; // @synthesize m_bHideStatusBar=_m_bHideStatusBar;
@property(nonatomic) _Bool m_bForbidMusic; // @synthesize m_bForbidMusic;
@property(nonatomic) _Bool m_bForbidFavMenu; // @synthesize m_bForbidFavMenu;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) MMProgressViewEx *m_loadingView; // @synthesize m_loadingView;
@property(retain, nonatomic) WCNetworkMediaSlider *m_progressSlider; // @synthesize m_progressSlider;
@property(retain, nonatomic) UIButton *m_moreBtn; // @synthesize m_moreBtn;
@property(retain, nonatomic) UIButton *m_backBtn; // @synthesize m_backBtn;
@property(retain, nonatomic) UIButton *m_playBtn; // @synthesize m_playBtn;
@property(retain, nonatomic) MMUILabel *m_currentLabel; // @synthesize m_currentLabel;
@property(retain, nonatomic) MMUILabel *m_durationLabel; // @synthesize m_durationLabel;
@property(retain, nonatomic) UIButton *m_showDetailBtn; // @synthesize m_showDetailBtn;
@property(retain, nonatomic) UIButton *m_hideBtn; // @synthesize m_hideBtn;
@property(retain, nonatomic) UIView *m_bottomView; // @synthesize m_bottomView;
@property(retain, nonatomic) UIView *m_topView; // @synthesize m_topView;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize;
@property(retain, nonatomic) WCNetworkMediaCore *m_mediaCore; // @synthesize m_mediaCore;
@property(retain, nonatomic) WCNetworkMediaStreamVideoInfo *m_streamVideoInfo; // @synthesize m_streamVideoInfo;
@property(retain, nonatomic) WCNetworkMediaInfo *m_info; // @synthesize m_info;
@property(retain, nonatomic) NSString *m_vid; // @synthesize m_vid;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(nonatomic) __weak id <WCNetworkMediaPlayerDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)isFromAd;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)shareToTimeline;
- (id)getCurrentViewController;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getStatExtString;
- (void)sendVideoUrlToFriend;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onGotVideoUrl:(id)arg1 Error:(id)arg2;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onShowDetail;
- (_Bool)couldShowDetailBtn;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldInteractivePop;
- (void)refreshCurrentTime;
- (id)stringFromTimeInterval:(double)arg1;
- (_Bool)isCanvasSightScene;
- (void)hideControlViews;
- (void)showControlViewsWithAutoHide;
- (void)showControlViews;
- (_Bool)isControlViewsHidden;
- (void)retryToLoadVideo;
- (void)onSliderChange;
- (void)onHideClick;
- (void)onPlayClick;
- (void)onMoreClick;
- (void)onBackClick;
- (void)updateVideoFrame:(long long)arg1;
- (void)updateSubviewsFrame:(long long)arg1;
- (void)initMediaCore;
- (void)initView;
- (void)initData;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (double)getMediaCurrentPosition;
- (double)getMediaDuration;
- (id)initWithInfo:(id)arg1;
- (id)initWithVid:(id)arg1;
- (id)initWithTimeLineAdVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

