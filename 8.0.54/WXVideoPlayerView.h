//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CMessageWrap, NSString, SightView, UIButton, UIImageView, UILabel, VideoProgressBar, WXFullScreenGestureRecognizer;
@protocol WXVideoPlayerViewDelegate, WXVideoPlayerViewTouchDelegate;

@interface WXVideoPlayerView
{
    unsigned long long m_ui64PlayStartTime;
    WXFullScreenGestureRecognizer *_gestureView;
    unsigned long long m_emDownloadMode;
    UIButton *m_closeButton;
    UIImageView *m_topBkgView;
    UIImageView *m_bottomBkgView;
    VideoProgressBar *m_progressBar;
    NSString *m_videoPath;
    _Bool m_bPreViewMode;
    _Bool m_shouldRestartPlay;
    _Bool m_videoExpired;
    _Bool _isAnimating;
    _Bool _soundable;
    _Bool _m_bCurrentVideoMessageStartPlay;
    CMessageWrap *m_msgWrap;
    UILabel *m_percentageLabel;
    id <WXVideoPlayerViewDelegate> m_delegate;
    id <WXVideoPlayerViewTouchDelegate> m_touchDelegate;
    UIButton *m_playAttachVideoButton;
    SightView *_sightView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bCurrentVideoMessageStartPlay; // @synthesize m_bCurrentVideoMessageStartPlay=_m_bCurrentVideoMessageStartPlay;
@property(nonatomic) _Bool soundable; // @synthesize soundable=_soundable;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) SightView *sightView; // @synthesize sightView=_sightView;
@property(retain, nonatomic) UIButton *m_playAttachVideoButton; // @synthesize m_playAttachVideoButton;
@property(nonatomic) __weak id <WXVideoPlayerViewTouchDelegate> m_touchDelegate; // @synthesize m_touchDelegate;
@property(nonatomic) __weak id <WXVideoPlayerViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_videoExpired; // @synthesize m_videoExpired;
@property(nonatomic) _Bool m_shouldRestartPlay; // @synthesize m_shouldRestartPlay;
@property(retain, nonatomic) UILabel *m_percentageLabel; // @synthesize m_percentageLabel;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
- (void)showIconViewAndHindLoadingView;
- (void)playVideoOnDownloaded;
- (void)pauseForDownloading;
- (void)setDownloadMode:(unsigned long long)arg1;
- (_Bool)isNeedPlayFromEveryDisplay;
- (void)layoutSubviews;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onVideoStreamDownloadFail:(_Bool)arg1;
- (void)onStartToPlayVideo;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)onClickIconViewOfSightView:(id)arg1;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)handleDownloadFail;
- (void)updateProgress:(unsigned int)arg1;
- (void)hideProgress;
- (void)InternalUpdateVideo:(id)arg1;
- (void)pause;
- (void)stopPlay:(id)arg1;
- (void)stopPlay;
- (void)getReadyForPlay;
- (_Bool)startPlay;
- (_Bool)doCheckBeforeStartPlay;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onSightProgressBarHidden;
- (void)setToolViewsHidden:(_Bool)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onCloseBtnClick;
- (void)startVideoStreamDownload;
- (void)initView;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (void)genVideoPlayStat;
- (void)resetPlayerView;
- (void)setPreViewMode;
- (id)initWithFrame:(struct CGRect)arg1 MsgWrap:(id)arg2 VideoPath:(id)arg3 Soundable:(_Bool)arg4 PreviewMode:(_Bool)arg5 delegate:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 MsgWrap:(id)arg2 VideoPath:(id)arg3 Soundable:(_Bool)arg4 PreviewMode:(_Bool)arg5;
- (id)initWithFrame:(struct CGRect)arg1 MsgWrap:(id)arg2 VideoPath:(id)arg3 Soundable:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 MsgWrap:(id)arg2 Soundable:(_Bool)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetViewPosition;
- (double)getCurrPlayedTimeInSec;
- (unsigned long long)totalTime;
- (void)setTouchDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)whenGoingToResign;
- (void)whenDidActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

