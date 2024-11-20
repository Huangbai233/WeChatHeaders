//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class AddEmoticonWrap, CEmoticonWrap, EmoticonBoardView, EmoticonCustomAddLogicController, GKImagePicker, KindaProxy, MMEmoticonView, MMTimer, MMUIButton, MMUILabel, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, PAGView, UIButton, UIImage, UIImageView, UIView, WCRedEnvelopesControlData, WeToast, ZCWScrollNumView;
@protocol WCRedEnvelopes2019GreetingViewControllerDelegate;

@interface WCRedEnvelopes2019GreetingViewController
{
    int m_currentNum;
    NSString *m_currentWish;
    NSString *m_currentWishKeyWord;
    NSString *m_currentPagName;
    NSString *m_currentMaskPagName;
    NSString *m_nsStatusMsg;
    double m_numAnimationDuration;
    int m_currentMessIndex;
    NSArray *m_oMessArr;
    NSString *m_nsHeadUrl;
    NSString *m_nsSenderNickName;
    unsigned long long m_enStatus;
    NSString *m_chatName;
    _Bool isEmoticonHongBao;
    _Bool isNeedReupload;
    _Bool isUploadFail;
    _Bool isDownloadFail;
    _Bool isEmoticonBoardViewShow;
    AddEmoticonWrap *reuploadWrap;
    _Bool _m_bIsSender;
    _Bool _m_bScrollNum;
    _Bool _m_bPitcureEnable;
    _Bool _m_bEnableAddEmoticon;
    _Bool _m_bIsCreate;
    _Bool _m_bFisrtLayout;
    _Bool _m_bEnableDownloadEmoticon;
    _Bool _m_bIsNextClick;
    _Bool _m_bIsSetWXStatusClick;
    _Bool _m_bIsSendClick;
    _Bool _m_bNotNeedPag;
    _Bool _m_bHasPagFile;
    _Bool _isAudioRecording;
    _Bool _isAudioPlaying;
    _Bool _hasShowTooShortTips;
    _Bool _hasClickStartRecordBtn;
    _Bool _isStartDownloadFromReceiveAutoPlay;
    _Bool _isKeywordAnimating;
    _Bool _isKeywordChecked;
    _Bool _isDismissing;
    _Bool _needReportKeywordAnimate;
    int _m_scene;
    id <WCRedEnvelopes2019GreetingViewControllerDelegate> _m_delegate;
    UIView *_m_coverView;
    UIView *_m_containerView;
    UIImageView *_m_containerBGImgView;
    UIButton *_m_closeBtn;
    UIButton *_m_cameraBtn;
    UIImageView *_m_pictureBGImgView;
    MMEmoticonView *_m_pictureImgView;
    UIImageView *_m_pictureLoadingView;
    UIButton *_m_pictureDelBtn;
    MMUILabel *_m_greetingLabel;
    MMUILabel *_m_yuanLabel;
    ZCWScrollNumView *_m_numView;
    UIButton *_m_randomNextMoneyBtn;
    UIImageView *_m_snowGifImageView;
    MMUILabel *_m_saveBalanceLabel;
    UIButton *_m_sendBtn;
    MMUILabel *_m_statusLabel;
    UIView *_m_senderView;
    UIView *_m_receiverView;
    UIButton *_m_cancelButton;
    MMUILabel *_m_loadingLabel;
    EmoticonBoardView *_m_emoticonBoardView;
    UIView *_m_emoticonBackgroundView;
    UIButton *_m_emoticonUploadFailBtn;
    UIButton *_m_emoticonDownloadFailBtn;
    UIButton *_m_openDetailButton;
    UIImageView *_m_arrowImageView;
    UIButton *_m_saveBalanceBtn;
    UIImageView *_m_saveBalanceArrowImageView;
    WCRedEnvelopesControlData *_m_data;
    UIImage *_m_oImage;
    WeToast *_m_toastView;
    GKImagePicker *_m_picker;
    NSString *_m_cdnFileId;
    NSString *_m_cdnAesKey;
    NSNumber *_m_cdnFileLength;
    EmoticonCustomAddLogicController *_m_emoticonCustomAddLogic;
    CEmoticonWrap *_m_emoticonWrap;
    PAGView *_m_pagView;
    UIView *_m_setWXStatusView;
    UIButton *_m_addEmotionView;
    UIButton *_m_delEmotionView;
    KindaProxy *_kindProxy;
    PAGView *_m_recordBgPagView;
    UIButton *_m_audioPlayBtn;
    UIImageView *_m_audioPlayImgView;
    MMUILabel *_m_audioPlayTimeLabel;
    MMUILabel *_m_audioPlayTipsViewReceive;
    UIButton *_m_audioPlayBtnReceive;
    MMUILabel *_m_randomWishLabelInBtn;
    UIImageView *_m_randomWishIconInBtn;
    UIButton *_m_randomNextWishBtn;
    MMUILabel *_m_audioRecordTipsLabel;
    UIButton *_m_audioRecordBtn;
    MMUILabel *_m_audioRecordTimeoutTipsLabel;
    UIButton *_m_floatSendButton;
    NSString *_audioDataPath;
    NSMutableDictionary *_audioDataDict;
    NSString *_playingAudioID;
    long long _audioPlayTime;
    MMTimer *_cloudWordsTimer;
    long long _cloudWordsAniIndex;
    NSMutableArray *_keywordDatas;
    long long _keywordAniIndex;
    NSMutableArray *_keywordAniObjs;
    NSMutableArray *_keywordAniEndPoints;
    NSMutableArray *_keywordAniUsedEndPoints;
    NSMutableArray *_keywordAniEndStatus;
    NSMutableArray *_keywordAniUsedEndStatus;
    double _keywordDefaultFontSize;
    unsigned long long _audioStartPlayTimeStampInMs;
    NSMutableDictionary *_transingKeywordData;
    NSArray *_finalKeywordData;
    MMUIButton *_keywordCheckBoxBtn;
    UIImageView *_keywordCheckBoxImg;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReportKeywordAnimate; // @synthesize needReportKeywordAnimate=_needReportKeywordAnimate;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool isKeywordChecked; // @synthesize isKeywordChecked=_isKeywordChecked;
@property(retain, nonatomic) UIImageView *keywordCheckBoxImg; // @synthesize keywordCheckBoxImg=_keywordCheckBoxImg;
@property(retain, nonatomic) MMUIButton *keywordCheckBoxBtn; // @synthesize keywordCheckBoxBtn=_keywordCheckBoxBtn;
@property(retain, nonatomic) NSArray *finalKeywordData; // @synthesize finalKeywordData=_finalKeywordData;
@property(retain, nonatomic) NSMutableDictionary *transingKeywordData; // @synthesize transingKeywordData=_transingKeywordData;
@property(nonatomic) unsigned long long audioStartPlayTimeStampInMs; // @synthesize audioStartPlayTimeStampInMs=_audioStartPlayTimeStampInMs;
@property(nonatomic) _Bool isKeywordAnimating; // @synthesize isKeywordAnimating=_isKeywordAnimating;
@property(nonatomic) double keywordDefaultFontSize; // @synthesize keywordDefaultFontSize=_keywordDefaultFontSize;
@property(retain, nonatomic) NSMutableArray *keywordAniUsedEndStatus; // @synthesize keywordAniUsedEndStatus=_keywordAniUsedEndStatus;
@property(retain, nonatomic) NSMutableArray *keywordAniEndStatus; // @synthesize keywordAniEndStatus=_keywordAniEndStatus;
@property(retain, nonatomic) NSMutableArray *keywordAniUsedEndPoints; // @synthesize keywordAniUsedEndPoints=_keywordAniUsedEndPoints;
@property(retain, nonatomic) NSMutableArray *keywordAniEndPoints; // @synthesize keywordAniEndPoints=_keywordAniEndPoints;
@property(retain, nonatomic) NSMutableArray *keywordAniObjs; // @synthesize keywordAniObjs=_keywordAniObjs;
@property(nonatomic) long long keywordAniIndex; // @synthesize keywordAniIndex=_keywordAniIndex;
@property(retain, nonatomic) NSMutableArray *keywordDatas; // @synthesize keywordDatas=_keywordDatas;
@property(nonatomic) long long cloudWordsAniIndex; // @synthesize cloudWordsAniIndex=_cloudWordsAniIndex;
@property(retain, nonatomic) MMTimer *cloudWordsTimer; // @synthesize cloudWordsTimer=_cloudWordsTimer;
@property(nonatomic) _Bool isStartDownloadFromReceiveAutoPlay; // @synthesize isStartDownloadFromReceiveAutoPlay=_isStartDownloadFromReceiveAutoPlay;
@property(nonatomic) long long audioPlayTime; // @synthesize audioPlayTime=_audioPlayTime;
@property(nonatomic) _Bool hasClickStartRecordBtn; // @synthesize hasClickStartRecordBtn=_hasClickStartRecordBtn;
@property(nonatomic) _Bool hasShowTooShortTips; // @synthesize hasShowTooShortTips=_hasShowTooShortTips;
@property(retain, nonatomic) NSString *playingAudioID; // @synthesize playingAudioID=_playingAudioID;
@property(nonatomic) _Bool isAudioPlaying; // @synthesize isAudioPlaying=_isAudioPlaying;
@property(retain, nonatomic) NSMutableDictionary *audioDataDict; // @synthesize audioDataDict=_audioDataDict;
@property(retain, nonatomic) NSString *audioDataPath; // @synthesize audioDataPath=_audioDataPath;
@property(nonatomic) _Bool isAudioRecording; // @synthesize isAudioRecording=_isAudioRecording;
@property(retain, nonatomic) UIButton *m_floatSendButton; // @synthesize m_floatSendButton=_m_floatSendButton;
@property(retain, nonatomic) MMUILabel *m_audioRecordTimeoutTipsLabel; // @synthesize m_audioRecordTimeoutTipsLabel=_m_audioRecordTimeoutTipsLabel;
@property(retain, nonatomic) UIButton *m_audioRecordBtn; // @synthesize m_audioRecordBtn=_m_audioRecordBtn;
@property(retain, nonatomic) MMUILabel *m_audioRecordTipsLabel; // @synthesize m_audioRecordTipsLabel=_m_audioRecordTipsLabel;
@property(retain, nonatomic) UIButton *m_randomNextWishBtn; // @synthesize m_randomNextWishBtn=_m_randomNextWishBtn;
@property(retain, nonatomic) UIImageView *m_randomWishIconInBtn; // @synthesize m_randomWishIconInBtn=_m_randomWishIconInBtn;
@property(retain, nonatomic) MMUILabel *m_randomWishLabelInBtn; // @synthesize m_randomWishLabelInBtn=_m_randomWishLabelInBtn;
@property(retain, nonatomic) UIButton *m_audioPlayBtnReceive; // @synthesize m_audioPlayBtnReceive=_m_audioPlayBtnReceive;
@property(retain, nonatomic) MMUILabel *m_audioPlayTipsViewReceive; // @synthesize m_audioPlayTipsViewReceive=_m_audioPlayTipsViewReceive;
@property(retain, nonatomic) MMUILabel *m_audioPlayTimeLabel; // @synthesize m_audioPlayTimeLabel=_m_audioPlayTimeLabel;
@property(retain, nonatomic) UIImageView *m_audioPlayImgView; // @synthesize m_audioPlayImgView=_m_audioPlayImgView;
@property(retain, nonatomic) UIButton *m_audioPlayBtn; // @synthesize m_audioPlayBtn=_m_audioPlayBtn;
@property(retain, nonatomic) PAGView *m_recordBgPagView; // @synthesize m_recordBgPagView=_m_recordBgPagView;
@property(retain, nonatomic) KindaProxy *kindProxy; // @synthesize kindProxy=_kindProxy;
@property(nonatomic) _Bool m_bHasPagFile; // @synthesize m_bHasPagFile=_m_bHasPagFile;
@property(nonatomic) _Bool m_bNotNeedPag; // @synthesize m_bNotNeedPag=_m_bNotNeedPag;
@property(nonatomic) _Bool m_bIsSendClick; // @synthesize m_bIsSendClick=_m_bIsSendClick;
@property(nonatomic) _Bool m_bIsSetWXStatusClick; // @synthesize m_bIsSetWXStatusClick=_m_bIsSetWXStatusClick;
@property(nonatomic) _Bool m_bIsNextClick; // @synthesize m_bIsNextClick=_m_bIsNextClick;
@property(retain, nonatomic) UIButton *m_delEmotionView; // @synthesize m_delEmotionView=_m_delEmotionView;
@property(retain, nonatomic) UIButton *m_addEmotionView; // @synthesize m_addEmotionView=_m_addEmotionView;
@property(retain, nonatomic) UIView *m_setWXStatusView; // @synthesize m_setWXStatusView=_m_setWXStatusView;
@property(retain, nonatomic) PAGView *m_pagView; // @synthesize m_pagView=_m_pagView;
@property(nonatomic) _Bool m_bEnableDownloadEmoticon; // @synthesize m_bEnableDownloadEmoticon=_m_bEnableDownloadEmoticon;
@property(retain, nonatomic) CEmoticonWrap *m_emoticonWrap; // @synthesize m_emoticonWrap=_m_emoticonWrap;
@property(retain, nonatomic) EmoticonCustomAddLogicController *m_emoticonCustomAddLogic; // @synthesize m_emoticonCustomAddLogic=_m_emoticonCustomAddLogic;
@property(retain, nonatomic) NSNumber *m_cdnFileLength; // @synthesize m_cdnFileLength=_m_cdnFileLength;
@property(retain, nonatomic) NSString *m_cdnAesKey; // @synthesize m_cdnAesKey=_m_cdnAesKey;
@property(retain, nonatomic) NSString *m_cdnFileId; // @synthesize m_cdnFileId=_m_cdnFileId;
@property(retain, nonatomic) GKImagePicker *m_picker; // @synthesize m_picker=_m_picker;
@property(retain, nonatomic) WeToast *m_toastView; // @synthesize m_toastView=_m_toastView;
@property(nonatomic) _Bool m_bFisrtLayout; // @synthesize m_bFisrtLayout=_m_bFisrtLayout;
@property(retain, nonatomic) UIImage *m_oImage; // @synthesize m_oImage=_m_oImage;
@property(nonatomic) _Bool m_bIsCreate; // @synthesize m_bIsCreate=_m_bIsCreate;
@property(nonatomic) _Bool m_bEnableAddEmoticon; // @synthesize m_bEnableAddEmoticon=_m_bEnableAddEmoticon;
@property(nonatomic) _Bool m_bPitcureEnable; // @synthesize m_bPitcureEnable=_m_bPitcureEnable;
@property(nonatomic) _Bool m_bScrollNum; // @synthesize m_bScrollNum=_m_bScrollNum;
@property(nonatomic) _Bool m_bIsSender; // @synthesize m_bIsSender=_m_bIsSender;
@property(retain, nonatomic) WCRedEnvelopesControlData *m_data; // @synthesize m_data=_m_data;
@property(retain, nonatomic) UIImageView *m_saveBalanceArrowImageView; // @synthesize m_saveBalanceArrowImageView=_m_saveBalanceArrowImageView;
@property(retain, nonatomic) UIButton *m_saveBalanceBtn; // @synthesize m_saveBalanceBtn=_m_saveBalanceBtn;
@property(retain, nonatomic) UIImageView *m_arrowImageView; // @synthesize m_arrowImageView=_m_arrowImageView;
@property(retain, nonatomic) UIButton *m_openDetailButton; // @synthesize m_openDetailButton=_m_openDetailButton;
@property(retain, nonatomic) UIButton *m_emoticonDownloadFailBtn; // @synthesize m_emoticonDownloadFailBtn=_m_emoticonDownloadFailBtn;
@property(retain, nonatomic) UIButton *m_emoticonUploadFailBtn; // @synthesize m_emoticonUploadFailBtn=_m_emoticonUploadFailBtn;
@property(retain, nonatomic) UIView *m_emoticonBackgroundView; // @synthesize m_emoticonBackgroundView=_m_emoticonBackgroundView;
@property(retain, nonatomic) EmoticonBoardView *m_emoticonBoardView; // @synthesize m_emoticonBoardView=_m_emoticonBoardView;
@property(retain, nonatomic) MMUILabel *m_loadingLabel; // @synthesize m_loadingLabel=_m_loadingLabel;
@property(retain, nonatomic) UIButton *m_cancelButton; // @synthesize m_cancelButton=_m_cancelButton;
@property(retain, nonatomic) UIView *m_receiverView; // @synthesize m_receiverView=_m_receiverView;
@property(retain, nonatomic) UIView *m_senderView; // @synthesize m_senderView=_m_senderView;
@property(retain, nonatomic) MMUILabel *m_statusLabel; // @synthesize m_statusLabel=_m_statusLabel;
@property(retain, nonatomic) UIButton *m_sendBtn; // @synthesize m_sendBtn=_m_sendBtn;
@property(retain, nonatomic) MMUILabel *m_saveBalanceLabel; // @synthesize m_saveBalanceLabel=_m_saveBalanceLabel;
@property(retain, nonatomic) UIImageView *m_snowGifImageView; // @synthesize m_snowGifImageView=_m_snowGifImageView;
@property(retain, nonatomic) UIButton *m_randomNextMoneyBtn; // @synthesize m_randomNextMoneyBtn=_m_randomNextMoneyBtn;
@property(retain, nonatomic) ZCWScrollNumView *m_numView; // @synthesize m_numView=_m_numView;
@property(retain, nonatomic) MMUILabel *m_yuanLabel; // @synthesize m_yuanLabel=_m_yuanLabel;
@property(retain, nonatomic) MMUILabel *m_greetingLabel; // @synthesize m_greetingLabel=_m_greetingLabel;
@property(retain, nonatomic) UIButton *m_pictureDelBtn; // @synthesize m_pictureDelBtn=_m_pictureDelBtn;
@property(retain, nonatomic) UIImageView *m_pictureLoadingView; // @synthesize m_pictureLoadingView=_m_pictureLoadingView;
@property(retain, nonatomic) MMEmoticonView *m_pictureImgView; // @synthesize m_pictureImgView=_m_pictureImgView;
@property(retain, nonatomic) UIImageView *m_pictureBGImgView; // @synthesize m_pictureBGImgView=_m_pictureBGImgView;
@property(retain, nonatomic) UIButton *m_cameraBtn; // @synthesize m_cameraBtn=_m_cameraBtn;
@property(retain, nonatomic) UIButton *m_closeBtn; // @synthesize m_closeBtn=_m_closeBtn;
@property(retain, nonatomic) UIImageView *m_containerBGImgView; // @synthesize m_containerBGImgView=_m_containerBGImgView;
@property(retain, nonatomic) UIView *m_containerView; // @synthesize m_containerView=_m_containerView;
@property(retain, nonatomic) UIView *m_coverView; // @synthesize m_coverView=_m_coverView;
@property(nonatomic) int m_scene; // @synthesize m_scene=_m_scene;
@property(nonatomic) __weak id <WCRedEnvelopes2019GreetingViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)cleanKeywordAnimateData;
- (void)stopKeywordAnimation;
- (id)genKeywordAnimateLabel:(id)arg1;
- (void)checkAndStartNextAnimationWithCurrentTimeInterval:(long long)arg1;
- (id)createWiggleAnimationWithDuration:(double)arg1 frequency:(double)arg2 amplitude:(double)arg3;
- (void)updateKeywordAnimation;
- (void)startKeywordAnimation:(unsigned int)arg1;
- (id)getUniqueEndStatusData;
- (id)getUniqueDestinationPoint;
- (void)addKeywordAniEndStatus:(long long)arg1 alpha:(double)arg2;
- (void)setupKeywordAnimationData;
- (struct CGPoint)getRandomPointOnCircleWithCenter:(struct CGPoint)arg1 radius:(double)arg2 arcAngle:(double)arg3;
- (void)realAnimateKeyword;
- (void)startAnimateCloudKeywords;
- (void)onGetAudioFinalKeywordData:(id)arg1;
- (void)onGetAudioTransingKeywordData:(id)arg1;
- (void)onAudioCdnDownloadFail:(id)arg1;
- (void)onAudioCdnDownloadSucc:(id)arg1 cdnUrl:(id)arg2;
- (void)onAudioUploadCdnFailWithPath:(id)arg1;
- (void)onAudioUploadCdnSuccWithPath:(id)arg1 cdnUrl:(id)arg2 aesKey:(id)arg3 fileSize:(long long)arg4 recordLength:(long long)arg5 format:(long long)arg6;
- (void)stopPlayAudioImgView;
- (void)startPlayAudioImgView;
- (void)onAudioPlayError:(id)arg1 playtime:(long long)arg2;
- (void)onAudioEndPlay:(id)arg1 playtime:(long long)arg2;
- (void)onAudioStartPlay:(id)arg1;
- (void)displayPeakPower:(float)arg1 MaxRadius:(double)arg2 MinRadius:(double)arg3 BaseRadius:(double)arg4 UIView:(id)arg5;
- (void)onAudioRecordNeedNoticeTimeout:(long long)arg1;
- (void)onFinishedAudioRecord:(id)arg1 recordLength:(int)arg2 errCode:(long long)arg3 stopReason:(long long)arg4;
- (void)onAudioRecordTooShort;
- (void)onStartAudioRecord:(long long)arg1;
- (void)reportKeywordCheckBoxAction;
- (void)reportRedEnvKeywordWithShowTime:(long long)arg1 index:(long long)arg2 keyword:(id)arg3;
- (long long)getVoiceKeywordCount;
- (void)parseKeywordTimeString:(id)arg1;
- (id)genKeywordTimeString;
- (int)getVoiceKeyWordMaxLengthConfig;
- (void)showAudioMuteTips;
- (_Bool)isDeviceMute;
- (void)updateAudioPlayBtnWithPlayTime:(long long)arg1;
- (void)stopPlayAudioAfterReceive;
- (void)startPlayAudioAfterReceive;
- (void)stopPlayAudioAfterFinishRecord;
- (void)startPlayAudioAfterFinishRecord;
- (void)reportGreetingWithAction:(int)arg1 sceneUI:(int)arg2 playtime:(long long)arg3 amount:(int)arg4 sendid:(id)arg5 hbStatus:(int)arg6;
- (void)resetRecordButton;
- (void)startUploadAudioData;
- (void)removeAudioData;
- (void)stopRecordAudio;
- (void)startRecordAudio;
- (void)playRecordBgPagView;
- (void)floatSendBtnClick;
- (void)recordBtnTouchUpOutside;
- (void)recordBtnTouchUpInside;
- (void)checkHoldEvent;
- (void)recordBtnTouchDown;
- (void)randomWishBtnClick;
- (void)audioPlayBtnReceiveClick;
- (void)audioPlayBtnClick;
- (double)getDynamicSizeFrom:(double)arg1;
- (void)updateRandomWishBtnView:(double)arg1;
- (_Bool)hasAudioMsgItem;
- (id)getVoiceCloudWords;
- (_Bool)hasAudioRecordEntry;
- (_Bool)hasSetWXStatusEntry;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)setWxStatus;
- (void)onSetWxStatus;
- (void)rollNumber:(_Bool)arg1 needAnimation:(_Bool)arg2;
- (void)playPagView;
- (id)getDisplayNameInfo:(id)arg1;
- (id)getLastEmoticonWithType:(unsigned int *)arg1;
- (void)saveLastEmoticon:(id)arg1 type:(int)arg2;
- (void)onAddEmoticonDetectIfDismissViewController:(id)arg1;
- (void)onTakePhotoCancelled;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(id)arg1;
- (void)downloadEmoticon:(id)arg1;
- (void)reuploadEmticon:(id)arg1;
- (void)onReuploadLogic:(id)arg1;
- (void)onFailUploadLogic:(id)arg1;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (float)hb_height;
- (float)hb_width;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)endAnimation;
- (void)showAnimation;
- (void)doNumViewEndingAnimation;
- (void)onNumViewAnimationDidStop;
- (void)initAndUpdateKeywordCheckBox;
- (id)getKeywordCheckBoxTips;
- (_Bool)isKeywordCheckboxDefaultOn;
- (void)updateKeywordCheckBox;
- (void)keywordCheckBoxBtnClick;
- (void)showLoading:(id)arg1;
- (void)sendWithEmoticon;
- (void)continueRequestSendRedEnv;
- (void)sendWithoutEmoticon;
- (void)onCoverTap:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
- (void)onNextLucyMoneyClick:(id)arg1;
- (void)onPictureDelBtnClick:(id)arg1;
- (void)showV2;
- (void)endAnimationV2;
- (void)makeSelfieEmoitcon;
- (void)onSendButtonClicked;
- (_Bool)handleAddCameraEmoji;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)setWording0Alpha;
- (void)setWording50Alpha;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickSelectEmoticon:(id)arg1;
- (id)checkImageExistInEmoticonWrapArray:(id)arg1 abortOnFailure:(_Bool)arg2;
- (id)cameraPackageId;
- (void)onCloseClick:(id)arg1;
- (void)dismiss;
- (void)show;
- (id)getViewController;
- (void)OnOpenList;
- (void)layoutSenderExpiredView;
- (void)layoutExpiredView;
- (void)onGoToBalanceDetail;
- (void)layoutReceiveView;
- (void)layoutSendView;
- (_Bool)isEmoticonViewHongBao;
- (void)viewDidLayoutSubviews;
- (void)layoutContainerView;
- (void)layoutViews;
- (void)updatePagView;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)showRetryView;
- (void)showEmoticon;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)startLoadEmoticonCache;
- (void)startDownloadAudioData;
- (void)parseLowUrlDataToAudioItem;
- (void)startDownloadEmoticon;
- (void)viewDidLoad;
- (void)onTapOnEmotionIcon:(id)arg1;
- (void)setupView;
- (void)centerButton:(id)arg1 imageSpacing:(double)arg2;
- (void)configNumView:(id)arg1 withNumber:(int)arg2 font:(id)arg3;
- (void)layoutCamerBtn;
- (void)tapOnHongBao:(id)arg1;
- (id)initReceiveViewWithIsScrollNum:(_Bool)arg1 payData:(id)arg2;
- (id)initSendViewWithIsScrollNum:(_Bool)arg1 payData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

