//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <UIKit/UICollectionViewCell.h>

@class MJClipBundlePresentationView, NSString, UIImage, UIImageView, UILabel, WCFinderFeedContentVM, WCFinderFeedImageView, WCFinderFeedMediaWrap, WCFinderFullNewMultiMediaView, WCFinderMediaInfo, WCFinderMinimizeSilenceMonitor, WCFinderPlayerControlView, WCFinderShortTapGestureRecognizer, WCFinderVideoDragProgressReporter, WCFinderVideoPlayCellParams, WCPlayerView, WCPlayerVolumeObserver, WCWidgetPlayer;
@protocol WCFinderFeedContentMediaActionProtocol, WCFinderHalfScreenListenProtocol;

@interface WCFinderFeedVideoCollectionViewCell : UICollectionViewCell
{
    _Bool _isSubScene;
    _Bool _originalVideoMute;
    _Bool _isCurrentPlaying;
    _Bool _needsRestThumb;
    _Bool _needsUpdateThumb;
    _Bool _hasCallStopCallBack;
    _Bool _isMediaContentReady;
    _Bool _hadInMiniWindow;
    _Bool _isExactingPlayerViewForLandScapeAnimation;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate;
    unsigned long long _currentIndex;
    unsigned long long _scene;
    double _loadingTopOffset;
    UIImageView *_retryImageView;
    WCFinderFullNewMultiMediaView *_mediaView;
    WCWidgetPlayer *_customWidgetPlayer;
    WCPlayerView *_playerView;
    MJClipBundlePresentationView *_mjPlayerView;
    WCFinderFeedImageView *_thumbImageView;
    WCFinderPlayerControlView *_playerConfigControlView;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    UILabel *_retryLabel;
    WCFinderShortTapGestureRecognizer *_likeGes;
    NSString *_currentVideoTid;
    WCFinderFeedContentVM *_feedContentVM;
    long long _updateTag;
    WCFinderVideoPlayCellParams *_extParams;
    WCFinderVideoDragProgressReporter *_progressDragReporter;
    WCPlayerVolumeObserver *_volumeObserver;
    UIImage *_pauseCaputerImage;
    WCFinderMinimizeSilenceMonitor *_silenceMonitor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isExactingPlayerViewForLandScapeAnimation; // @synthesize isExactingPlayerViewForLandScapeAnimation=_isExactingPlayerViewForLandScapeAnimation;
@property(retain, nonatomic) WCFinderMinimizeSilenceMonitor *silenceMonitor; // @synthesize silenceMonitor=_silenceMonitor;
@property(retain, nonatomic) UIImage *pauseCaputerImage; // @synthesize pauseCaputerImage=_pauseCaputerImage;
@property(retain, nonatomic) WCPlayerVolumeObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(retain, nonatomic) WCFinderVideoDragProgressReporter *progressDragReporter; // @synthesize progressDragReporter=_progressDragReporter;
@property(retain, nonatomic) WCFinderVideoPlayCellParams *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) _Bool hadInMiniWindow; // @synthesize hadInMiniWindow=_hadInMiniWindow;
@property(nonatomic) _Bool isMediaContentReady; // @synthesize isMediaContentReady=_isMediaContentReady;
@property(nonatomic) _Bool hasCallStopCallBack; // @synthesize hasCallStopCallBack=_hasCallStopCallBack;
@property(nonatomic) long long updateTag; // @synthesize updateTag=_updateTag;
@property(retain, nonatomic) WCFinderFeedContentVM *feedContentVM; // @synthesize feedContentVM=_feedContentVM;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool needsUpdateThumb; // @synthesize needsUpdateThumb=_needsUpdateThumb;
@property(nonatomic) _Bool needsRestThumb; // @synthesize needsRestThumb=_needsRestThumb;
@property(retain, nonatomic) WCFinderShortTapGestureRecognizer *likeGes; // @synthesize likeGes=_likeGes;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(nonatomic) _Bool isCurrentPlaying; // @synthesize isCurrentPlaying=_isCurrentPlaying;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderPlayerControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(retain, nonatomic) WCFinderFeedImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) MJClipBundlePresentationView *mjPlayerView; // @synthesize mjPlayerView=_mjPlayerView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCWidgetPlayer *customWidgetPlayer; // @synthesize customWidgetPlayer=_customWidgetPlayer;
@property(nonatomic) _Bool originalVideoMute; // @synthesize originalVideoMute=_originalVideoMute;
@property(nonatomic) __weak WCFinderFullNewMultiMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) _Bool isSubScene; // @synthesize isSubScene=_isSubScene;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <WCFinderHalfScreenListenProtocol> halfScreenDelegate; // @synthesize halfScreenDelegate=_halfScreenDelegate;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
- (_Bool)isMJMaasSDKAsyncExportTask;
- (void)addMaasRenderViewIfNeeded;
- (void)onVolumeDidChange:(double)arg1;
- (void)halfScreenMoveProgressChanged;
- (struct CGRect)getPlayerViewRect;
- (struct WCShowArea)getPlayerViewShowArea;
- (void)finderFeedCellRestoreMinimizeContentView:(id)arg1 forPlay:(_Bool)arg2;
- (CDUnknownBlockType)playerViewCreator;
- (_Bool)getPIPSwitch:(_Bool)arg1;
- (_Bool)getPIPSwitch;
- (void)restorePlayerViewForLandscapeAnimation:(id)arg1;
- (id)extractPlayerViewForLandscapeAnimation;
- (id)finderFeedCellMinimizeContentView:(_Bool)arg1;
- (void)_onMinimizeSilenceStop:(id)arg1;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (_Bool)finderFeedCellIsCurrentMediaMute;
- (_Bool)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (_Bool)finderFeedCellIsCurrentMediaPlaying;
- (void)setAllowBackgroundPlay:(_Bool)arg1;
- (void)_reloadPlayView:(id)arg1;
- (void)onFeedContentUpdateByURLExpired:(id)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)refreshImageIfFromShare;
- (_Bool)videoIsOnPlayState;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onPlayerDidStopPictureInPicture:(id)arg1;
- (void)onPlayerDidStartPictureInPicture;
- (void)onPlayer:(id)arg1 muteChanged:(_Bool)arg2;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)onPlayerDownloadMoovReady:(id)arg1 progressInfo:(id)arg2;
- (void)onPlayerPausePlay:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerMoovReady:(id)arg1;
- (void)loadingRetry;
- (void)updatePlayVolume:(_Bool)arg1;
- (void)tryDowngradePlayVideoIfSupport;
- (void)onVideoPlayFail:(unsigned long long)arg1;
- (void)onShowReloadAction;
- (void)pausePreloadTasks;
- (void)resumePreloadTasks;
- (unsigned long long)getPreloadTaskStatus;
- (void)checkPreloadTaskStatus;
- (double)_limitBufferCount;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onFinderThumbDownloadFail:(id)arg1;
- (void)hideLoadingView;
- (unsigned long long)getCurrentNetworkDownloadStatus;
- (void)updateStreamingBufferLength;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)_pauseVideo:(_Bool)arg1 isFakeStopAction:(_Bool)arg2;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)onVideoPlay;
- (void)onPlayToEnd;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerView:(id)arg1 stopDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerView:(id)arg1 startDisplayOnPipWindow:(long long)arg2;
- (void)onPipStatePauseWithPlayerView:(id)arg1;
- (void)onPipStateRePlayWithPlayerView:(id)arg1;
- (void)onPipStatePlayWithPlayerView:(id)arg1;
- (void)onPlayerView:(id)arg1 pipSeekFromTime:(double)arg2 toTime:(double)arg3;
- (void)didMoveToWindow;
- (double)getCurrentBatteryPowerPercent;
- (id)playReportInfo;
- (void)setPlayRate:(double)arg1;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (id)playSecondSet;
- (double)getCurrentPlayVideoTime;
- (void)pauseVideoIfSupport;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (void)realChangeVideoSilenceStatue:(_Bool)arg1;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (id)getCurrendThumb;
- (void)progressBarValueChange:(double)arg1 playVideo:(_Bool)arg2 pauseVideo:(_Bool)arg3 state:(struct WCFinderPlayerControlProgressState)arg4;
- (void)captureVideoIfPossible;
- (void)updateSnapshot;
- (void)stopVideoIfSupport;
- (void)_performStopActionCallback;
- (void)updatePlayerReport;
- (_Bool)checkCanPlayVideo;
- (_Bool)isH266;
- (_Bool)isH265;
- (void)fakeStopPlayAction;
- (void)pauseVideoIfSupport:(_Bool)arg1;
- (void)onLikeFeed;
- (void)addStartPlayReportInfo;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2 pauseVideo:(_Bool)arg3 playRate:(double)arg4 extParams:(id)arg5;
- (void)createPlayerView:(double)arg1 commentScene:(int)arg2;
- (void)layoutSubviews;
- (void)updateImage:(id)arg1;
- (struct CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)resetVideoReloadHidden:(_Bool)arg1;
- (void)initVideoReloadAction;
- (void)onClickRetry:(id)arg1;
- (id)generateConfig;
- (long long)getThumbMediaType;
- (void)updateMeidaWrap;
- (void)changeDataSource:(id)arg1 currentIndex:(long long)arg2 useThumb:(id)arg3 startPlayTime:(double)arg4 isFullScreen:(_Bool)arg5;
- (void)initSubView;
- (void)dealloc;
- (void)_relayoutCustomWidgetPlayer;
- (void)_restartCustomWidgetPlayer;
- (void)_seekCustomWidgetPlayerToTimeSec:(double)arg1;
- (void)_playCustomWidgetPlayer;
- (void)_pauseCustomWidgetPlayer;
- (void)_initCustomWidgetPlayer;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

