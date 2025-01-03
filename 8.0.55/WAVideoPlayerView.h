//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel, NSString, NSURLConnection, TPVideoFrameBuffer, UIImage, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UITopTouchView, WAMediaCastingRoutePickerController, WAPlayerHttpMediaWrap, WAScreenBrightnessStateView, WAVideoLayer, WCNetworkMediaSlider, WCPlayerPlayArgs, WCPlayerView;
@protocol WAVideoPlayerViewDelegate;

@interface WAVideoPlayerView
{
    WCPlayerView *_playerView;
    _Bool _disableScroll;
    unsigned int _controlsMask;
    unsigned long long _subIndex;
    _Bool _lockSlider;
    _Bool _touchesProgressMoved;
    _Bool _useCustomDuration;
    double _currentPlay;
    double _currentBuffer;
    double _totalDuration;
    float _playSpeedRate;
    long long _panDirection;
    _Bool _adjustVolume;
    struct CGPoint _panGestureStartPoint;
    double _panGestureStartValue;
    _Bool _systemMuted;
    _Bool _customCache;
    _Bool _showDanmu;
    _Bool _autoPlay;
    _Bool _needUpdateEvent;
    _Bool _enablePageGesture;
    _Bool _enablePageGestureFull;
    _Bool _loop;
    _Bool _obeyMuteSwitch;
    _Bool _autoPauseIfOpenNative;
    _Bool _autoPauseIfNavigate;
    _Bool _thumbFitWidth;
    _Bool _autoRotation;
    _Bool _disableTapGesture;
    _Bool _isDrm;
    _Bool _enableCasting;
    _Bool _needNativeViewTexture;
    _Bool _haveNewNativeViewTexture;
    _Bool _audioOnlyMode;
    _Bool _liveVideo;
    _Bool _videoPlayerValid;
    _Bool _videoDurationValid;
    _Bool _videoSizeValid;
    _Bool _videoHidden;
    _Bool _isAppBackground;
    _Bool _userNeedPlay;
    _Bool _temporaryPause;
    _Bool _isMakeSnapshot;
    _Bool _downloadingThumb;
    _Bool _firstPlayed;
    _Bool _underVoIP;
    _Bool _haveNewFrameBuffer;
    _Bool _pauseBecauseAudioSessionRouteChange;
    unsigned int _videoId;
    unsigned int _appService;
    unsigned int _videoTaskTimeout;
    long long _orientation;
    id <WAVideoPlayerViewDelegate> _videoDelagate;
    WCPlayerPlayArgs *_playerInfo;
    NSString *_userData;
    NSString *_scene;
    long long _videoState;
    NSString *_referrer;
    long long _blockSize;
    NSString *_videoPath;
    NSString *_title;
    WAScreenBrightnessStateView *_bvstatusView;
    long long _controlState;
    WAPlayerHttpMediaWrap *_mediaWrap;
    UITopTouchView *_holdPlayerView;
    UITopTouchView *_holdDanmuView;
    UITopTouchView *_gestureView;
    UITapGestureRecognizer *_playGes;
    UITapGestureRecognizer *_tabGes;
    UIPanGestureRecognizer *_panGes;
    NSString *_thumbUrl;
    UIImageView *_thumbImageView;
    UIImageView *_snapImageView;
    double _initialTime;
    UITopTouchView *_bottomView;
    UIImageView *_bottomBG;
    UIImage *_bottomBGFull;
    UIImage *_bottomBGNotFull;
    MMUILabel *_currentLabel;
    WCNetworkMediaSlider *_progressSlider;
    WCNetworkMediaSlider *_edgeProgressSlider;
    MMUILabel *_durationLabel;
    MMUIButton *_playBtn;
    MMUIButton *_muteBtn;
    MMUIButton *_fullBtn;
    MMUIButton *_danmuBtn;
    MMUILabel *_liveLabel;
    UITopTouchView *_coverView;
    MMUILabel *_centerTime;
    UIImageView *_centerScrubTimeBG;
    MMUILabel *_centerScrubTime;
    MMUIButton *_centerPlayBtn;
    MMUIImageView *_fullBackBG;
    MMUIButton *_fullBackBtn;
    MMUILabel *_fullBackTitle;
    WAVideoLayer *_danmuLayer;
    long long _fitMode;
    long long _isHLS;
    NSURLConnection *_urlConnection;
    double _currOutputVolume;
    TPVideoFrameBuffer *_curFrameBuffer;
    WAMediaCastingRoutePickerController *_mediaCastingRoutePickerController;
    struct CGSize _videoSize;
    struct CGRect _displayRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pauseBecauseAudioSessionRouteChange; // @synthesize pauseBecauseAudioSessionRouteChange=_pauseBecauseAudioSessionRouteChange;
@property(retain, nonatomic) WAMediaCastingRoutePickerController *mediaCastingRoutePickerController; // @synthesize mediaCastingRoutePickerController=_mediaCastingRoutePickerController;
@property(retain, nonatomic) TPVideoFrameBuffer *curFrameBuffer; // @synthesize curFrameBuffer=_curFrameBuffer;
@property(nonatomic) _Bool haveNewFrameBuffer; // @synthesize haveNewFrameBuffer=_haveNewFrameBuffer;
@property(nonatomic) double currOutputVolume; // @synthesize currOutputVolume=_currOutputVolume;
@property(nonatomic) _Bool underVoIP; // @synthesize underVoIP=_underVoIP;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(nonatomic) long long isHLS; // @synthesize isHLS=_isHLS;
@property(nonatomic) _Bool firstPlayed; // @synthesize firstPlayed=_firstPlayed;
@property(nonatomic) _Bool downloadingThumb; // @synthesize downloadingThumb=_downloadingThumb;
@property(nonatomic) long long fitMode; // @synthesize fitMode=_fitMode;
@property(nonatomic) _Bool isMakeSnapshot; // @synthesize isMakeSnapshot=_isMakeSnapshot;
@property(nonatomic) _Bool temporaryPause; // @synthesize temporaryPause=_temporaryPause;
@property(nonatomic) _Bool userNeedPlay; // @synthesize userNeedPlay=_userNeedPlay;
@property(nonatomic) _Bool isAppBackground; // @synthesize isAppBackground=_isAppBackground;
@property(retain, nonatomic) WAVideoLayer *danmuLayer; // @synthesize danmuLayer=_danmuLayer;
@property(retain, nonatomic) MMUILabel *fullBackTitle; // @synthesize fullBackTitle=_fullBackTitle;
@property(retain, nonatomic) MMUIButton *fullBackBtn; // @synthesize fullBackBtn=_fullBackBtn;
@property(retain, nonatomic) MMUIImageView *fullBackBG; // @synthesize fullBackBG=_fullBackBG;
@property(retain, nonatomic) MMUIButton *centerPlayBtn; // @synthesize centerPlayBtn=_centerPlayBtn;
@property(retain, nonatomic) MMUILabel *centerScrubTime; // @synthesize centerScrubTime=_centerScrubTime;
@property(retain, nonatomic) UIImageView *centerScrubTimeBG; // @synthesize centerScrubTimeBG=_centerScrubTimeBG;
@property(retain, nonatomic) MMUILabel *centerTime; // @synthesize centerTime=_centerTime;
@property(retain, nonatomic) UITopTouchView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) MMUILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) MMUIButton *danmuBtn; // @synthesize danmuBtn=_danmuBtn;
@property(retain, nonatomic) MMUIButton *fullBtn; // @synthesize fullBtn=_fullBtn;
@property(retain, nonatomic) MMUIButton *muteBtn; // @synthesize muteBtn=_muteBtn;
@property(retain, nonatomic) MMUIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) WCNetworkMediaSlider *edgeProgressSlider; // @synthesize edgeProgressSlider=_edgeProgressSlider;
@property(retain, nonatomic) WCNetworkMediaSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(retain, nonatomic) UIImage *bottomBGNotFull; // @synthesize bottomBGNotFull=_bottomBGNotFull;
@property(retain, nonatomic) UIImage *bottomBGFull; // @synthesize bottomBGFull=_bottomBGFull;
@property(retain, nonatomic) UIImageView *bottomBG; // @synthesize bottomBG=_bottomBG;
@property(retain, nonatomic) UITopTouchView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) struct CGRect displayRect; // @synthesize displayRect=_displayRect;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) _Bool videoHidden; // @synthesize videoHidden=_videoHidden;
@property(nonatomic) _Bool videoSizeValid; // @synthesize videoSizeValid=_videoSizeValid;
@property(nonatomic) _Bool videoDurationValid; // @synthesize videoDurationValid=_videoDurationValid;
@property(nonatomic) _Bool videoPlayerValid; // @synthesize videoPlayerValid=_videoPlayerValid;
@property(nonatomic) _Bool liveVideo; // @synthesize liveVideo=_liveVideo;
@property(nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(retain, nonatomic) UIImageView *snapImageView; // @synthesize snapImageView=_snapImageView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) UITapGestureRecognizer *tabGes; // @synthesize tabGes=_tabGes;
@property(retain, nonatomic) UITapGestureRecognizer *playGes; // @synthesize playGes=_playGes;
@property(retain, nonatomic) UITopTouchView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) UITopTouchView *holdDanmuView; // @synthesize holdDanmuView=_holdDanmuView;
@property(retain, nonatomic) UITopTouchView *holdPlayerView; // @synthesize holdPlayerView=_holdPlayerView;
@property(retain, nonatomic) WAPlayerHttpMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(nonatomic) long long controlState; // @synthesize controlState=_controlState;
@property(retain, nonatomic) WAScreenBrightnessStateView *bvstatusView; // @synthesize bvstatusView=_bvstatusView;
@property(nonatomic) _Bool audioOnlyMode; // @synthesize audioOnlyMode=_audioOnlyMode;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool haveNewNativeViewTexture; // @synthesize haveNewNativeViewTexture=_haveNewNativeViewTexture;
@property(nonatomic) _Bool needNativeViewTexture; // @synthesize needNativeViewTexture=_needNativeViewTexture;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) _Bool enableCasting; // @synthesize enableCasting=_enableCasting;
@property(nonatomic) _Bool isDrm; // @synthesize isDrm=_isDrm;
@property(nonatomic) _Bool disableTapGesture; // @synthesize disableTapGesture=_disableTapGesture;
@property(nonatomic) long long blockSize; // @synthesize blockSize=_blockSize;
@property(copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(nonatomic) long long videoState; // @synthesize videoState=_videoState;
@property(nonatomic) _Bool autoRotation; // @synthesize autoRotation=_autoRotation;
@property(nonatomic) _Bool thumbFitWidth; // @synthesize thumbFitWidth=_thumbFitWidth;
@property(nonatomic) unsigned int videoTaskTimeout; // @synthesize videoTaskTimeout=_videoTaskTimeout;
@property(nonatomic) _Bool autoPauseIfNavigate; // @synthesize autoPauseIfNavigate=_autoPauseIfNavigate;
@property(nonatomic) _Bool autoPauseIfOpenNative; // @synthesize autoPauseIfOpenNative=_autoPauseIfOpenNative;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int appService; // @synthesize appService=_appService;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool enablePageGestureFull; // @synthesize enablePageGestureFull=_enablePageGestureFull;
@property(nonatomic) _Bool enablePageGesture; // @synthesize enablePageGesture=_enablePageGesture;
@property(nonatomic) _Bool needUpdateEvent; // @synthesize needUpdateEvent=_needUpdateEvent;
@property(copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool showDanmu; // @synthesize showDanmu=_showDanmu;
@property(nonatomic) unsigned int videoId; // @synthesize videoId=_videoId;
@property(nonatomic) _Bool customCache; // @synthesize customCache=_customCache;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(nonatomic) __weak id <WAVideoPlayerViewDelegate> videoDelagate; // @synthesize videoDelagate=_videoDelagate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (id)playerView;
- (id)getCurrentSnaoshot;
- (_Bool)updateAudioOnlyMode:(_Bool)arg1;
- (_Bool)isDisplayedInScreen;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserveOutputVolume;
- (void)startObserveOutputVolume;
- (_Bool)isVideoPlayerInFullScreenModeWithMediaCastingRoutePickerController:(id)arg1;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoDidCast:(_Bool)arg2;
- (void)onMediaCastingRoutePickerController:(id)arg1 userSelected:(id)arg2;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoPlayerPositionInfoChanged:(double)arg2 duration:(double)arg3;
- (id)navigationControllerToShowGuideWebViewWithMediaCastingRoutePickerController:(id)arg1;
- (void)onMediaCastingRoutePickerController:(id)arg1 upnpVideoPlayerStateChanged:(unsigned long long)arg2;
- (long long)getNativeViewContentMode;
- (unsigned long long)getNativeViewTextureRotation;
- (struct __CVBuffer *)getNativeViewTexture;
- (void)initNativeViewTexture;
- (id)mixListForAudioModule:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
@property(nonatomic) _Bool hideCoverMask;
@property(readonly, nonatomic) _Bool isAirPlaying;
@property(readonly, nonatomic) _Bool isDLNACasting;
- (void)muteVideo:(_Bool)arg1;
- (void)resumeVideo;
- (void)pauseVideo;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)onCreateThumbImage:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (id)getNextOutputFrameBufferIfAvailable;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onVideoPause;
- (void)onVideoPlay;
- (double)showCurPlayTime:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)checkVideoReady;
- (void)setBufferDuration:(float)arg1;
- (void)upnp_seek:(double)arg1;
- (void)upnp_pause;
- (void)upnp_play;
- (void)handleVideoDisappear;
- (void)handleVideoAppear;
- (void)exitCasting;
- (void)reconnectCasting;
- (void)switchCasting;
- (void)startCasting:(id)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (_Bool)isForground;
- (void)updateSoundMuted;
- (void)setSystemMuted:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayBackRate:(float)arg1;
- (long long)pauseCount;
- (void)pauseTemp:(_Bool)arg1;
- (void)pausePlayAndLoading;
- (void)setObjectFit:(long long)arg1;
- (void)setDanmuList:(id)arg1;
- (void)sendDanmu:(id)arg1 color:(id)arg2;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(struct CGRect)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)updateVideoHidden;
- (_Bool)isFullScreen;
- (void)disableScroll:(_Bool)arg1;
- (void)setDuration:(double)arg1;
- (struct CGRect)videoFrame;
- (void)relayoutForRotationWhileFullScreen;
- (void)enableFullScreen:(_Bool)arg1;
- (long long)fullscreenOrientation;
- (void)stop;
- (void)pause;
- (_Bool)isLoading;
- (_Bool)isPlaying;
- (void)seek:(double)arg1 accurate:(_Bool)arg2;
- (void)seek:(double)arg1;
@property(nonatomic) _Bool accurateSeek;
- (void)layoutSubviews;
- (void)play:(_Bool)arg1;
- (id)timeFormat:(int)arg1;
- (void)layoutControlView:(struct CGSize)arg1;
- (void)updateSubviews:(struct CGSize)arg1;
- (void)setThumbViewHidden:(_Bool)arg1;
- (void)refreshControl;
- (void)fadeControlNow;
- (void)fadeControl;
- (void)stopControlFade;
- (void)stopControlFadeOnMain:(id)arg1;
- (void)showControl;
- (void)delayControlFade;
- (void)delayControlFadeOnMain:(id)arg1;
- (void)cancelDelayControlFadeOnMain:(id)arg1;
- (void)horizontalMoveEnd:(struct CGPoint)arg1;
- (void)horizontalMoved:(struct CGPoint)arg1;
- (void)horizontalMoveStart:(struct CGPoint)arg1;
- (void)updateCenterScrubTime;
- (void)hideBrightnessStatusView;
- (void)verticalMoved:(double)arg1;
- (void)onGesturePan:(id)arg1;
- (void)onGesture2Tap:(id)arg1;
- (void)onGestureTap:(id)arg1;
- (void)touchesCancelledGesture:(id)arg1 withEvent:(id)arg2;
- (void)touchesEndedGesture:(id)arg1 withEvent:(id)arg2;
- (void)touchesMovedGesture:(id)arg1 withEvent:(id)arg2;
- (void)touchesBeganGesture:(id)arg1 withEvent:(id)arg2;
- (void)updateTransGesture;
- (void)reportVideoAction:(unsigned int)arg1 eventNote:(id)arg2 eventNote1:(id)arg3;
- (void)touchesEndedBottom:(id)arg1 withEvent:(id)arg2;
- (void)touchesBeganBottom:(id)arg1 withEvent:(id)arg2;
- (void)onSliderTouchUp;
- (void)onSliderTouchMove;
- (void)onSliderTouchDown;
- (void)onClickDanmu;
- (void)onClickFull;
- (void)onClickMuteVoice;
- (void)onClickPlay;
- (id)getAVPlayerItemVideoOutput;
- (void)updateSnapshotHidden;
- (void)snapshotVideoEnd;
- (void)snapshotVideoBegin;
- (id)getCurrentSnapshot;
- (void)updateSnapshotImage;
- (_Bool)activeAudioModule:(_Bool)arg1;
- (void)sendVideoJsEvent:(id)arg1 param:(id)arg2;
- (int)updatePlayPause;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)routeChange:(id)arg1;
- (void)didMoveToWindow;
- (void)setHidden:(_Bool)arg1;
- (unsigned int)getControlsMask;
- (void)setControls:(unsigned int)arg1;
- (_Bool)checkControl:(unsigned int)arg1;
- (void)checkContentTypeWithUrlPath:(id)arg1;
- (void)startPlayVideo;
- (void)sendPreloadMetaData;
- (void)setVideoPath:(id)arg1 initialTime:(double)arg2 isHLS:(long long)arg3;
- (void)setVideoThumbImage:(id)arg1;
- (void)downloadDataWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideVideoThumb;
- (void)setVideoThumb:(id)arg1;
- (void)updateDrmCompatible:(_Bool)arg1;
- (void)updateContentKeyUrl:(id)arg1;
- (void)updateCertificateUrl:(id)arg1;
- (void)setPreloadSecTime:(float)arg1;
- (void)dealloc;
- (void)destroyPlayer;
- (id)initWithThumb:(id)arg1 frame:(struct CGRect)arg2 referrer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

