//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioPlayer, NSMutableString, NSString, UIViewController, WCOutRecentCallItem, WcoMinimizeWindow, WcoTalkMainWindow;

@interface WCOutCallLogic
{
    unsigned long long m_status;
    _Bool m_isSpeaker;
    _Bool m_isMute;
    WCOutRecentCallItem *m_curCallItem;
    int m_recentCallLocalID;
    int m_roomid;
    long long m_CallSeq;
    _Bool mIsAccepted;
    _Bool mIsConnected;
    _Bool mIsOnCalling;
    _Bool mIsPlayingCallSound;
    _Bool _isMinmizeMode;
    UIViewController *_curFromViewController;
    unsigned long long _curEntranceType;
    AVAudioPlayer *_player;
    NSMutableString *_callBackSteam;
    WcoMinimizeWindow *_minWindow;
    WcoTalkMainWindow *_mainWindow;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMinmizeMode; // @synthesize isMinmizeMode=_isMinmizeMode;
@property(retain, nonatomic) WcoTalkMainWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(retain, nonatomic) WcoMinimizeWindow *minWindow; // @synthesize minWindow=_minWindow;
@property(retain, nonatomic) NSMutableString *callBackSteam; // @synthesize callBackSteam=_callBackSteam;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long curEntranceType; // @synthesize curEntranceType=_curEntranceType;
@property(retain, nonatomic) UIViewController *curFromViewController; // @synthesize curFromViewController=_curFromViewController;
@property(readonly, nonatomic) _Bool isOnCalling; // @synthesize isOnCalling=mIsOnCalling;
@property(retain, nonatomic) WCOutRecentCallItem *curCallItem; // @synthesize curCallItem=m_curCallItem;
- (_Bool)isWcoActive;
- (void)showMinToastWindowDesc:(id)arg1;
- (void)quitMinWindow;
- (struct CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (void)onWcoMinimizeButtonClick;
- (void)onMultitalkMinimizeWindowClicked;
- (int)getNetSpeed;
- (void)OnPSTNInviteGap:(int)arg1;
- (void)OnPSTNTalkBrokenError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNNetWorkError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNSyncError:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNTimeOut:(id)arg1;
- (void)OnPSTNInterrupt:(id)arg1;
- (void)OnPSTNNotifyError:(id)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5;
- (void)OnPSTNInviteError:(id)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(id)arg4 ErrTitle:(id)arg5;
- (void)OnPSTNError:(id)arg1 ErrNo:(int)arg2 ErrMsg:(id)arg3 ErrTitle:(id)arg4;
- (void)OnPSTNBeginConnect:(id)arg1;
- (void)OnPSTNDataConnected:(id)arg1;
- (void)OnPSTNBeAccepted:(id)arg1;
- (void)OnPSTNBeginTalk:(id)arg1;
- (void)OnPSTNRing:(id)arg1;
- (void)onPSTNCheckNumberResp:(id)arg1;
- (void)OnPSTNCall:(id)arg1 ErrNo:(int)arg2;
- (void)OnPSTNTellMeViewIsExist:(_Bool *)arg1;
- (void)OnPSTNLightInterrupt:(_Bool)arg1;
- (void)OnPSTNCallInterrupt:(id)arg1;
- (void)OnPSTNAutoHangUp:(id)arg1;
- (void)OnPSTNBeHanguped:(id)arg1;
- (void)OnPSTNBeRejected:(id)arg1;
- (void)OnPSTNNoAnswer:(id)arg1;
- (void)handlePSTNErrorMsg:(id)arg1 errorlevel:(unsigned long long)arg2 ErrTitle:(id)arg3 showChargeAlert:(_Bool)arg4;
- (void)handlePSTNErrorCode:(int)arg1 ErrMsg:(id)arg2 ErrTitle:(id)arg3;
- (void)handlePSTNStatus:(unsigned long long)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stopPlaySound;
- (void)playCallingSound;
- (void)playEndingSound;
- (void)OnCallEnded:(_Bool)arg1;
- (void)beginToTalk;
- (void)prepareCalling;
- (id)GetNeedShowLogWithIsHidePhoneNum:(_Bool)arg1;
- (id)GetNeedShowLog;
- (id)GetCurCallItem;
- (_Bool)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (_Bool)isSpeakerMode;
- (void)setSpeaker:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)hangUpCall;
- (void)checkNumber:(id)arg1 PureNum:(id)arg2 LastCountryCode:(id)arg3 DialScece:(unsigned long long)arg4;
- (void)callWCoutContact;
- (void)onPreQuit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

