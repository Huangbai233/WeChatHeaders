//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class AVVideoDevice, CContact, CMessageWrap, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, VOIPVideoRender, XImageContext, XImageViewRenderer;
@protocol IVOIPVideoDeviceDelegate, IlinkMultiTalkDelegate;

@interface VoIPilinkMgr
{
    char *mCameraBuf;
    char *mHWYUVbuffer;
    _Bool mIsMinimizeView;
    _Bool mIsLocalVideoClosed;
    _Bool mIsRemoteVideoClosed;
    _Bool mIsInterrupted;
    _Bool _supportIlinkCloudService;
    _Bool _isThisTalkIlink;
    _Bool _isAudio;
    _Bool _isCaller;
    _Bool _isConnected;
    _Bool _joinToRoom;
    _Bool _isSpeakerOn;
    _Bool _isLocalCaptureSuspended;
    _Bool _shouldCheckLocalCaptureIsActive;
    _Bool _isIlinkFailed;
    _Bool _isActived;
    _Bool _changeToMultiTalk;
    _Bool _startWithExternalDevice;
    _Bool _isCameraSetOn;
    _Bool _isMicMute;
    _Bool _isLocalCaptureCheckingActiveContinually;
    _Bool _isInBackground;
    _Bool _mIsInterruptByPhoneCall;
    _Bool _mIsPausedByInterrupt;
    _Bool _isAlreadyHangup;
    _Bool _mEnableDirectRendering;
    _Bool _isRenderFirstFrameRemote;
    _Bool _isRenderFirstFrameLocal;
    _Bool _isInviteInitEngineFail;
    _Bool _isInviteDeviceWaiting;
    _Bool _enableVoIPMPAudioUnit;
    _Bool _isCallKit;
    _Bool _acceptNewCall;
    int _modeActionStatus;
    unsigned int _mInviteId;
    unsigned int _remoteWxVer;
    int _remoteRatio;
    unsigned int _changeToCelluarCount;
    int _netSpeed;
    unsigned int _callType;
    unsigned int _receiveMsgTime;
    int _mCntTryStartAudioDev;
    VOIPVideoRender *inputVideoRender;
    VOIPVideoRender *outputVideoRender;
    VOIPVideoRender *smallInputVideoRender;
    VOIPVideoRender *smallOutputVideoRender;
    NSRecursiveLock *outputVideoRenderLock;
    NSRecursiveLock *inputVideoRenderLock;
    id <IVOIPVideoDeviceDelegate> m_videoDeviceDelegate;
    id <IlinkMultiTalkDelegate> _multiTalkDelegate;
    unsigned long long _mRoomId;
    NSString *_mRemoteUserName;
    NSRecursiveLock *_smallOutputVideoRenderLock;
    long long _m_videoOrientation;
    NSString *_remoteSourceDevice;
    unsigned long long _mStartTalkingTime;
    unsigned long long _remoteCaptureStatus;
    CContact *_remoteContact;
    XImageViewRenderer *_localViewRenderer;
    XImageViewRenderer *_remoteViewRenderer;
    XImageContext *_remoteImageContext;
    NSString *_clientGroupId;
    double _lastLocalCaptureSuspendedTimestamp;
    NSMutableArray *_observsers;
    unsigned long long _lastLocalCaptureFrameIndex;
    unsigned long long _exceptionType;
    NSMutableDictionary *_lowVersionMembers;
    CMessageWrap *_changeToMultiTalkMsg;
    unsigned long long _cancelRoomId;
}

+ (_Bool)startVoipViewByVoipMonoMsg:(id)arg1;
+ (_Bool)shouldSupportAddMembers;
+ (_Bool)shouldSupportIlinkCloudService;
+ (_Bool)isHavingIlinkCall;
- (void).cxx_destruct;
@property(nonatomic) _Bool acceptNewCall; // @synthesize acceptNewCall=_acceptNewCall;
@property(nonatomic) _Bool isCallKit; // @synthesize isCallKit=_isCallKit;
@property(nonatomic) _Bool enableVoIPMPAudioUnit; // @synthesize enableVoIPMPAudioUnit=_enableVoIPMPAudioUnit;
@property(nonatomic) _Bool isInviteDeviceWaiting; // @synthesize isInviteDeviceWaiting=_isInviteDeviceWaiting;
@property(nonatomic) _Bool isInviteInitEngineFail; // @synthesize isInviteInitEngineFail=_isInviteInitEngineFail;
@property(nonatomic) _Bool isRenderFirstFrameLocal; // @synthesize isRenderFirstFrameLocal=_isRenderFirstFrameLocal;
@property(nonatomic) _Bool isRenderFirstFrameRemote; // @synthesize isRenderFirstFrameRemote=_isRenderFirstFrameRemote;
@property(nonatomic) int mCntTryStartAudioDev; // @synthesize mCntTryStartAudioDev=_mCntTryStartAudioDev;
@property(nonatomic) unsigned long long cancelRoomId; // @synthesize cancelRoomId=_cancelRoomId;
@property(retain, nonatomic) CMessageWrap *changeToMultiTalkMsg; // @synthesize changeToMultiTalkMsg=_changeToMultiTalkMsg;
@property(retain, nonatomic) NSMutableDictionary *lowVersionMembers; // @synthesize lowVersionMembers=_lowVersionMembers;
@property(nonatomic) _Bool mEnableDirectRendering; // @synthesize mEnableDirectRendering=_mEnableDirectRendering;
@property(nonatomic) unsigned int receiveMsgTime; // @synthesize receiveMsgTime=_receiveMsgTime;
@property(nonatomic) _Bool isAlreadyHangup; // @synthesize isAlreadyHangup=_isAlreadyHangup;
@property(nonatomic) unsigned long long exceptionType; // @synthesize exceptionType=_exceptionType;
@property(nonatomic) _Bool mIsPausedByInterrupt; // @synthesize mIsPausedByInterrupt=_mIsPausedByInterrupt;
@property(nonatomic) _Bool mIsInterruptByPhoneCall; // @synthesize mIsInterruptByPhoneCall=_mIsInterruptByPhoneCall;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool isLocalCaptureCheckingActiveContinually; // @synthesize isLocalCaptureCheckingActiveContinually=_isLocalCaptureCheckingActiveContinually;
@property(nonatomic) unsigned long long lastLocalCaptureFrameIndex; // @synthesize lastLocalCaptureFrameIndex=_lastLocalCaptureFrameIndex;
@property(retain, nonatomic) NSMutableArray *observsers; // @synthesize observsers=_observsers;
@property(nonatomic) _Bool isMicMute; // @synthesize isMicMute=_isMicMute;
@property(nonatomic) unsigned int callType; // @synthesize callType=_callType;
@property(nonatomic) double lastLocalCaptureSuspendedTimestamp; // @synthesize lastLocalCaptureSuspendedTimestamp=_lastLocalCaptureSuspendedTimestamp;
@property(nonatomic) _Bool isCameraSetOn; // @synthesize isCameraSetOn=_isCameraSetOn;
@property(retain, nonatomic) NSString *clientGroupId; // @synthesize clientGroupId=_clientGroupId;
@property(nonatomic) _Bool startWithExternalDevice; // @synthesize startWithExternalDevice=_startWithExternalDevice;
@property(retain, nonatomic) XImageContext *remoteImageContext; // @synthesize remoteImageContext=_remoteImageContext;
@property(retain) XImageViewRenderer *remoteViewRenderer; // @synthesize remoteViewRenderer=_remoteViewRenderer;
@property(retain) XImageViewRenderer *localViewRenderer; // @synthesize localViewRenderer=_localViewRenderer;
@property(nonatomic) _Bool changeToMultiTalk; // @synthesize changeToMultiTalk=_changeToMultiTalk;
@property(nonatomic) _Bool isActived; // @synthesize isActived=_isActived;
@property(nonatomic) _Bool isIlinkFailed; // @synthesize isIlinkFailed=_isIlinkFailed;
@property(nonatomic) _Bool shouldCheckLocalCaptureIsActive; // @synthesize shouldCheckLocalCaptureIsActive=_shouldCheckLocalCaptureIsActive;
@property(retain, nonatomic) CContact *remoteContact; // @synthesize remoteContact=_remoteContact;
@property(nonatomic) int netSpeed; // @synthesize netSpeed=_netSpeed;
@property(nonatomic) unsigned int changeToCelluarCount; // @synthesize changeToCelluarCount=_changeToCelluarCount;
@property(nonatomic) unsigned long long remoteCaptureStatus; // @synthesize remoteCaptureStatus=_remoteCaptureStatus;
@property(nonatomic) int remoteRatio; // @synthesize remoteRatio=_remoteRatio;
@property(nonatomic) unsigned long long mStartTalkingTime; // @synthesize mStartTalkingTime=_mStartTalkingTime;
@property(retain, nonatomic) NSString *remoteSourceDevice; // @synthesize remoteSourceDevice=_remoteSourceDevice;
@property(nonatomic) unsigned int remoteWxVer; // @synthesize remoteWxVer=_remoteWxVer;
@property(nonatomic) long long m_videoOrientation; // @synthesize m_videoOrientation=_m_videoOrientation;
@property(nonatomic) _Bool isLocalCaptureSuspended; // @synthesize isLocalCaptureSuspended=_isLocalCaptureSuspended;
@property(retain, nonatomic) NSRecursiveLock *smallOutputVideoRenderLock; // @synthesize smallOutputVideoRenderLock=_smallOutputVideoRenderLock;
@property(nonatomic) unsigned int mInviteId; // @synthesize mInviteId=_mInviteId;
@property(retain, nonatomic) NSString *mRemoteUserName; // @synthesize mRemoteUserName=_mRemoteUserName;
@property(nonatomic) unsigned long long mRoomId; // @synthesize mRoomId=_mRoomId;
@property(nonatomic) int modeActionStatus; // @synthesize modeActionStatus=_modeActionStatus;
@property(nonatomic) __weak id <IlinkMultiTalkDelegate> multiTalkDelegate; // @synthesize multiTalkDelegate=_multiTalkDelegate;
@property(nonatomic) _Bool isSpeakerOn; // @synthesize isSpeakerOn=_isSpeakerOn;
@property(nonatomic) _Bool joinToRoom; // @synthesize joinToRoom=_joinToRoom;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(nonatomic) _Bool isThisTalkIlink; // @synthesize isThisTalkIlink=_isThisTalkIlink;
@property(nonatomic) _Bool supportIlinkCloudService; // @synthesize supportIlinkCloudService=_supportIlinkCloudService;
@property(nonatomic) _Bool mIsInterrupted; // @synthesize mIsInterrupted;
@property(nonatomic) _Bool mIsRemoteVideoClosed; // @synthesize mIsRemoteVideoClosed;
@property(nonatomic) _Bool mIsLocalVideoClosed; // @synthesize mIsLocalVideoClosed;
@property(nonatomic) __weak id <IVOIPVideoDeviceDelegate> m_videoDeviceDelegate; // @synthesize m_videoDeviceDelegate;
@property(nonatomic) _Bool mIsMinimizeView; // @synthesize mIsMinimizeView;
@property(retain, nonatomic) NSRecursiveLock *inputVideoRenderLock; // @synthesize inputVideoRenderLock;
@property(retain, nonatomic) NSRecursiveLock *outputVideoRenderLock; // @synthesize outputVideoRenderLock;
@property(retain, nonatomic) VOIPVideoRender *outputVideoRender; // @synthesize outputVideoRender;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)voIPConfSDKServiceOnReceiveEvent:(int)arg1 errCode:(int)arg2 data:(id)arg3 ret:(id)arg4;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)checkLocalCaptureActive;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)onMonoServiceMsgHoldWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgCancelWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgRejectWithMsg:(id)arg1;
- (_Bool)onMonoServiceMsgHandleWithMsg:(id)arg1;
- (void)onMonoServiceMsgStartWithMsg:(id)arg1;
- (void)ilinkVoIPMainWindowQuitAnimationDidEnd;
- (void)receiverCanStartCamera;
- (void)notifyReceiverCanStart;
- (void)setSpeakerPhone:(_Bool)arg1;
- (void)setMicroPhoneMute:(_Bool)arg1;
- (void)releaseDevice;
- (void)setAudioParams:(id)arg1;
- (_Bool)getIfEnableVoIPMPAudioUnit;
- (_Bool)getIfCallKitStatus;
- (void)startAudioDeviceSucc;
- (_Bool)shouldBluetoothStartEarlier;
- (void)inviteInitEngineFail;
- (void)receiveInviteNotFriendWithErrCode:(int)arg1;
- (unsigned long long)getRoomID;
- (void)onInviteFailedBecauseOfRiskControlWithErrorCode:(int)arg1 groupUserName:(id)arg2 verificationUrlBase64:(id)arg3;
- (void)getIlinkAddMembersResult:(id)arg1;
- (void)readyJoinRoomForIlink:(unsigned int)arg1 roomID:(unsigned long long)arg2;
- (void)showAddMembersNotSupportToast:(id)arg1;
- (id)getClientGroupId;
- (id)currentRemoteSourceDevice;
- (void)onStartRecvInvite;
- (void)onRecvAckFail:(unsigned long long)arg1 username:(id)arg2;
- (void)changeToHighCapture:(int)arg1;
- (_Bool)getEnableDirectRendering;
- (_Bool)get720pCaptureStatus;
- (void)setGPUReslution:(int)arg1;
- (void)setNetworkStatus:(int)arg1;
- (void)confSDKOnRecvCmdMsg:(id)arg1;
- (void)onReceiveConfCallWordingInfo:(id)arg1;
- (void)supplementLocalBubbleWithConfCallWordingInfo:(id)arg1;
- (void)onSimuCallerCloseVideo;
- (void)simuCallFromCallerToReceiver:(id)arg1;
- (void)onRecvCmdMsg:(id)arg1;
- (void)onSendCmdMsg;
- (void)OnCancel;
- (void)OnBeRejected;
- (void)OnBeAccepted;
- (void)ilinkInviteFailedToVoIPMgrWithUserName:(id)arg1;
- (void)remoteVideoStatusChange:(_Bool)arg1;
- (int)getRemoteVideoRatio;
- (_Bool)getIfIsConnected;
- (void)onCallEnd:(unsigned long long)arg1 callResult:(unsigned int)arg2;
- (void)resetByNoVCCreate;
- (void)onCallEndWithoutCheck:(unsigned long long)arg1;
- (void)onChangeOfjoinedMemberCnt:(int)arg1 joiningMemberCnt:(int)arg2;
- (void)onRecvSimuCall;
- (void)onRecvNotifyFail;
- (void)onRecvInviteBusy;
- (void)receiverOpenUIForRoomInfo:(id)arg1 username:(id)arg2 receiveMsgTime:(unsigned int)arg3;
- (void)onCall;
- (void)onSetRoomID:(unsigned long long)arg1;
- (int)getVideoErrorCode;
- (void)onRejectToOpenCameraForServerOverloadWithTimeInterval:(int)arg1;
- (void)onRejectToCreateRoomForServerOverloadWithTimeInterval:(int)arg1;
- (void)onDoScreenSharingSecurityCheck:(int)arg1 checkStatus:(int)arg2 fileMd5:(id)arg3;
- (void)onSetMultiTalkScreenSharingStatus:(int)arg1 ScreenSharingStatus:(int)arg2;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkBannerChange:(id)arg1;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 errorType:(int)arg2 groupInfo:(id)arg3;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5 screenData:(_Bool)arg6 format:(int)arg7;
- (void)onErr:(int)arg1 groupUserName:(id)arg2;
- (void)onAddMultiTalkMemberFailedDueToRiskWithUserNames:(id)arg1 groupInfo:(id)arg2 isAll:(_Bool)arg3;
- (void)onAddMultiTalkMemberFailedDueToCallerRisk;
- (void)onCreateUnsafelyDueToCalleeRiskWithUserNames:(id)arg1 isAll:(_Bool)arg2;
- (void)onJoinFailedDueToCallerRisk;
- (void)onCreateFailedDueToRequireVerification:(id)arg1;
- (void)onCreateFailedDueToCallerRisk;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMemberChange:(id)arg1 withNewJoinedMembers:(id)arg2;
- (void)onMemberChange:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onAuthOK;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(_Bool)arg2;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerDidClose;
- (void)VideoDevPutDataFromMultiTalkToVoIP:(int)arg1 frmData:(char *)arg2 frmIndex:(unsigned long long)arg3 imageWidth:(unsigned int)arg4 imageHeight:(unsigned int)arg5;
- (void)renderLocalImage:(void *)arg1 frameIndex:(unsigned long long)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 rgbaTexture:(id)arg5;
- (void)renderToRemoteView:(struct __CVBuffer *)arg1;
- (void)renderYuvToLocalView:(struct __CVBuffer *)arg1;
- (void)renderToLocalView:(id)arg1;
- (_Bool)isRemoteVideoClosed;
- (_Bool)isLocalVideoClosed;
- (void)StartLocalVideo;
- (void)FlipCamera;
- (_Bool)isCameraFront;
- (void)setVirtualBackground:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)VideoStatusChange:(_Bool)arg1 update:(_Bool)arg2 notify:(_Bool)arg3;
- (void)onLocalCatpureSuspend;
- (void)onLocalCaptureResume;
- (void)SetLocalVideoEnable:(_Bool)arg1;
- (void)notifyAudioDeviceChange:(_Bool)arg1 isWirelessDevice:(_Bool)arg2 isWiredDevice:(_Bool)arg3;
- (void)startAudioDevice:(CDUnknownBlockType)arg1;
- (void)StartSessionWithWorkModeSecondPart;
- (void)HeadSetPlugin:(_Bool)arg1;
- (void)resetVoipRender;
- (void)OngetVideoFrameWithOrientation:(long long)arg1;
- (void)onVideoSessionStopComplete;
- (void)onVideoSessionRecvFirstFrame;
- (void)onVideoSessionStartComplete;
- (void)setVideoDeviceDelegate:(id)arg1;
@property(retain, nonatomic) VOIPVideoRender *smallOutputVideoRender; // @synthesize smallOutputVideoRender;
@property(retain, nonatomic) VOIPVideoRender *smallInputVideoRender; // @synthesize smallInputVideoRender;
@property(retain, nonatomic) VOIPVideoRender *inputVideoRender; // @synthesize inputVideoRender;
- (void)handleEnterForeground;
- (void)handleEnterBackground;
- (void)StartSession;
- (void)StopTalk;
- (void)StopSession;
- (void)UnInitAll;
- (void)InitAll;
- (_Bool)checkHasChangedToCelluar;
- (void)sendIfCanSupportAddMembers:(_Bool)arg1;
- (void)sendRemoteSourceDevice;
- (void)sendWxVersion;
- (void)accept:(unsigned long long)arg1;
- (void)rejectWithRoomID:(unsigned long long)arg1;
- (void)hangup;
- (void)hangupWithVoIPShutdownReason:(int)arg1 ifIsConnect:(_Bool)arg2;
- (void)hangupWithVoIPCancelType:(int)arg1;
- (void)receiveVoIPMTCancelInviteForIlink:(id)arg1 username:(id)arg2 groupId:(id)arg3 receiveMsgTime:(unsigned int)arg4 roomID:(unsigned long long)arg5;
- (_Bool)handleNotificationContentInfo:(id)arg1 pushType:(int)arg2;
- (void)HandleVoIPNotifyForIlink:(id)arg1 username:(id)arg2 MsgWrap:(id)arg3;
- (void)receiveVoIPMTMessageForIlink:(id)arg1 username:(id)arg2 MsgWrap:(id)arg3;
- (void)receiveVoIPMTMessageForIlink:(id)arg1 username:(id)arg2 receiveMsgTime:(unsigned int)arg3;
- (_Bool)isOutOfDate:(unsigned int)arg1;
- (void)RealCall:(id)arg1 isAudioMode:(_Bool)arg2 withCallType:(unsigned int)arg3;
- (int)ilinkOpenWindowWithContact:(id)arg1 msgWrap:(id)arg2 isCaller:(_Bool)arg3 from:(unsigned long long)arg4 startInApp:(_Bool)arg5 isEarMode:(_Bool)arg6 isAudioMode:(_Bool)arg7;
- (void)interruptVoipByCall:(_Bool)arg1;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)restartAudioDevice;
- (void)interruptVoipByNonPhoneCall;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceInterruptionBegin;
- (void)VoIPMPReleaseDevice;
- (void)startPlay:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (void)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (id)getCallerName;
- (id)getLowVersionMembers;
- (void)onMultiTalkVCHangupWithGroup:(id)arg1 isClickHangup:(_Bool)arg2 isInviterQuitEarly:(_Bool)arg3;
- (void)onIlinkChangeToMultiTalk:(id)arg1;
- (void)tryAddMembersForIlink:(id)arg1;
- (void)receiveCancelFromSDK:(unsigned long long)arg1 usrName:(id)arg2;
- (void)changeFloatingWindowStatus:(int)arg1;
- (_Bool)getIfThisTalkIlinkButNotMultiTalk;
- (_Bool)getIfThisTalkIlink;
- (void)reset;
- (void)commonSetup;
- (void)removeObserver:(id)arg1;
- (void)appendObserver:(id)arg1;
@property(readonly, nonatomic) AVVideoDevice *videoDevice;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)acceptSubCallWithInviteInfo:(id)arg1 inviteMsg:(id)arg2 wragMsg:(id)arg3;
- (void)handleSubCallWithInviteInfo:(id)arg1 inviteMsg:(id)arg2 wragMsg:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

