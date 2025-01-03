//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class AVAudioPlayer, CContact, CMessageWrap, MMTimer, MultiTalkHDHeadView, NSString, UIImageView, UILabel, VideoVoipCSTalkingView, VoipMinimizeReportObject, WCUIAlertView, WavAudioPlayer;
@protocol VideoVoipCSViewDelegate;

@interface VideoVoipCSView
{
    unsigned int _status;
    NSString *m_nsAppId;
    UIImageView *_backgroundView;
    CMessageWrap *_msgWrap;
    _Bool _isConnectOK;
    AVAudioPlayer *_player;
    _Bool _isAcceptVoice;
    _Bool _canUpdateStatusMachine;
    unsigned int _startTalkingTime;
    int m_viewInitMode;
    UILabel *m_mainStatusLabel;
    _Bool m_forceToVoice;
    _Bool m_hasStopBellSound;
    _Bool m_hasInvokeToAudioAnimation;
    _Bool m_isMinimizeMode;
    _Bool _m_isEndCall;
    _Bool _m_hasCalculateBlurView;
    _Bool _m_shouldChange;
    _Bool _m_isLandSpaceMode;
    _Bool _m_bAllowBackCamera;
    _Bool _m_bShowCSVideo;
    MultiTalkHDHeadView *m_headImageView;
    UILabel *m_usrnameLabel;
    UIImageView *m_blurView;
    UIImageView *m_profileBackgroundView;
    VoipMinimizeReportObject *m_reportObject;
    MMTimer *m_netStatusUpdateTimer;
    CContact *m_contact;
    NSString *m_nsHeadImageUrl;
    id <VideoVoipCSViewDelegate> _m_delegate;
    WCUIAlertView *_alertView;
    VideoVoipCSTalkingView *_m_talkingView;
    double _m_oldOriginY;
    UILabel *_m_netStatusLabel;
    WavAudioPlayer *_m_wavAudioPlayer;
}

+ (void)updateLabel:(id)arg1 WithWidth:(double)arg2 WithHeight:(double)arg3 AndLastLineWidth:(double)arg4 AndUpDownMargin:(double)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bShowCSVideo; // @synthesize m_bShowCSVideo=_m_bShowCSVideo;
@property(nonatomic) _Bool m_bAllowBackCamera; // @synthesize m_bAllowBackCamera=_m_bAllowBackCamera;
@property(retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer; // @synthesize m_wavAudioPlayer=_m_wavAudioPlayer;
@property(retain, nonatomic) UILabel *m_netStatusLabel; // @synthesize m_netStatusLabel=_m_netStatusLabel;
@property(nonatomic) _Bool m_isLandSpaceMode; // @synthesize m_isLandSpaceMode=_m_isLandSpaceMode;
@property(nonatomic) double m_oldOriginY; // @synthesize m_oldOriginY=_m_oldOriginY;
@property(nonatomic) _Bool m_shouldChange; // @synthesize m_shouldChange=_m_shouldChange;
@property(retain, nonatomic) VideoVoipCSTalkingView *m_talkingView; // @synthesize m_talkingView=_m_talkingView;
@property(nonatomic) _Bool m_hasCalculateBlurView; // @synthesize m_hasCalculateBlurView=_m_hasCalculateBlurView;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak id <VideoVoipCSViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_isEndCall; // @synthesize m_isEndCall=_m_isEndCall;
@property(retain, nonatomic) NSString *m_nsHeadImageUrl; // @synthesize m_nsHeadImageUrl;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) MMTimer *m_netStatusUpdateTimer; // @synthesize m_netStatusUpdateTimer;
@property(retain, nonatomic) VoipMinimizeReportObject *m_reportObject; // @synthesize m_reportObject;
@property(nonatomic) _Bool m_isMinimizeMode; // @synthesize m_isMinimizeMode;
@property(retain, nonatomic) UIImageView *m_profileBackgroundView; // @synthesize m_profileBackgroundView;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) UILabel *m_usrnameLabel; // @synthesize m_usrnameLabel;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) UILabel *m_mainStatusLabel; // @synthesize m_mainStatusLabel;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)cancelOrEndCallAction;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)adjustViewAndNavBarRect;
- (void)viewDidLayoutSubviews;
- (void)updateNetStatus;
- (void)layoutNetStatusLabel;
- (void)initNetStatusLabel;
- (id)getContact;
- (void)switchToAudioModeAnimation;
- (_Bool)isInitVideoMode;
- (_Bool)isVideoMode;
- (void)setMainStatusString:(id)arg1;
- (void)onVideoVoipCSTalkingViewHideStatusBar;
- (void)onVideoVoipCSTalkingViewShowStatusBar;
- (_Bool)onVideoVoipCSTalkingViewRequestMinimizeStatus;
- (void)onVideoVoipCSTalkingViewSwitchToSmall;
- (_Bool)isVideoVoipCSTalkingViewInitWithVideoMode;
- (void)onVideoVoipCSTalkingViewEndCall;
- (void)onVideoVoipCSTalkingViewHangUp;
- (void)forceEndCall;
- (void)clearRenderView;
- (void)quitAnimation;
- (void)endCallAfterDelay:(double)arg1;
- (void)updateNetTypeStatus;
- (void)OnVideoModeChangeToVoiceMode;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnRemoteEarMode;
- (void)OnLocalEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarModeFor2G;
- (void)switchToTalkingView;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)onConfirm;
- (void)stopPlaySound;
- (void)playEndingSound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (_Bool)isCaller;
- (void)onVideoSessionStartComplete;
- (void)dealloc;
- (void)preSetAudioCategory;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4 appid:(id)arg5 headUrl:(id)arg6 isAllowBackCamera:(_Bool)arg7 isShowCSVideo:(_Bool)arg8;
- (void)layoutTalkingView;
- (void)initView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)initTipsView;
- (void)layoutMainStatusLabel;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)layoutUsernameLabel;
- (void)layoutHeadImageView;
- (void)layoutBlurView;
- (void)layoutProfileBackgroundView;
- (void)layoutBackgroundView;
- (struct CGSize)viewSize;
- (void)updateStatusLabel;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)accessibilityViewIsModal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

