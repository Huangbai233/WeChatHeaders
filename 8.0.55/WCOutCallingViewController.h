//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMTimerLabel, NSString, UIButton, UILabel, UIView, WCOutDialPad, WavAudioPlayer;
@protocol WcoMinimizeDelegate;

@interface WCOutCallingViewController
{
    _Bool m_buttonsEnable;
    long long m_lastAddKeyPadTime;
    _Bool _hasBeAccepted;
    id <WcoMinimizeDelegate> _delegate;
    UIView *_normalBigView;
    UILabel *_userLabel;
    UILabel *_phoneLabel;
    UILabel *_stateLabel;
    MMTimerLabel *_timerLabel;
    UILabel *_keyPadInputLabel;
    WCOutDialPad *_dialPad;
    MMTimer *_m_netStatusUpdateTimer;
    UILabel *_m_netStatusLabel;
    WavAudioPlayer *_m_wavAudioPlayer;
    UIButton *_minimizeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *minimizeButton; // @synthesize minimizeButton=_minimizeButton;
@property(nonatomic) _Bool hasBeAccepted; // @synthesize hasBeAccepted=_hasBeAccepted;
@property(retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer; // @synthesize m_wavAudioPlayer=_m_wavAudioPlayer;
@property(retain, nonatomic) UILabel *m_netStatusLabel; // @synthesize m_netStatusLabel=_m_netStatusLabel;
@property(retain, nonatomic) MMTimer *m_netStatusUpdateTimer; // @synthesize m_netStatusUpdateTimer=_m_netStatusUpdateTimer;
@property(retain, nonatomic) WCOutDialPad *dialPad; // @synthesize dialPad=_dialPad;
@property(retain, nonatomic) UILabel *keyPadInputLabel; // @synthesize keyPadInputLabel=_keyPadInputLabel;
@property(retain, nonatomic) MMTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) UIView *normalBigView; // @synthesize normalBigView=_normalBigView;
@property(nonatomic) __weak id <WcoMinimizeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMinimizeButtonClick;
- (void)initMinimizeButton;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)OnUpdateCallStateWithText:(id)arg1;
- (void)OnPressedDialPadFunctionBtnWithType:(unsigned long long)arg1;
- (void)OnPressedDialPadKeyWithText:(id)arg1 andKeyCode:(int)arg2;
- (void)dismiss;
- (void)updatePhoneAndUserLabel;
- (void)initViewData;
- (void)configKeyPadBigView;
- (void)configNormalBigView;
- (void)configBlurBackground;
- (void)updateNetStatus;
- (void)initView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

