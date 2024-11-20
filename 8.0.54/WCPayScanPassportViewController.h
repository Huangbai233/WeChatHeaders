//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class AVCaptureSession, AVCaptureVideoPreviewLayer, CornerView, IntelligentOCRPassport, MMUIButton, MMUILabel, MobileOCRImage, NSDictionary, NSMutableArray, NSString, UIImage, UIImageView, UILabel, UIView;
@protocol WCPayScanPassportViewControllerDelegate;

@interface WCPayScanPassportViewController
{
    _Bool _use4KMode;
    _Bool _testMissingModel;
    _Bool _testEngineError;
    _Bool _testOutputError;
    _Bool _didHandledRotate;
    _Bool _didSetupUI;
    _Bool _didPlayingScanAnimation;
    _Bool _didInNormalScanProcess;
    _Bool _shouldEnterLeanFrontScan;
    _Bool _didInLeanFrontScanProcess;
    _Bool _didRecognizeLeanFront;
    _Bool _shouldEnterLeanBackScan;
    _Bool _didInLeanBackScanProcess;
    _Bool _didRecognizeLeanBack;
    _Bool _shouldPlayLeanAnimation;
    unsigned int _frameCount;
    int _captureWidth;
    int _captureHeight;
    int _viewWidth;
    int _viewHeight;
    int _statusResetCount;
    int _frameResetCount;
    id <WCPayScanPassportViewControllerDelegate> _delegate;
    NSDictionary *_scanDetailMsgMap;
    IntelligentOCRPassport *_ocr;
    unsigned long long _scene;
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_previewLayer;
    MMUIButton *_closeButton;
    UIView *_containerView;
    UIView *_scanStatusView;
    UIImageView *_scanStatusIcon;
    UILabel *_scanStatusLabel;
    long long _edgeFailedCount;
    long long _stableFailedCount;
    unsigned long long _startTime;
    MMUILabel *_tipsLabel;
    NSMutableArray *_resultRects;
    UIImageView *_scanLineView;
    double _scanLineTopCenterY;
    double _scanLineBottomCenterY;
    CornerView *_leftTopView;
    CornerView *_rightTopView;
    CornerView *_rightBottomView;
    CornerView *_leftBottomView;
    MobileOCRImage *_reuseImage;
    UIImage *_onlyReflectionPhoto;
    long long _minWeightingReflectionPixels;
    UIImage *_leanFrontOnlyReflectionPhoto;
    long long _leanFrontMinWeightingReflectionPixels;
    UIImage *_leanBackOnlyReflectionPhoto;
    long long _leanBackMinWeightingReflectionPixels;
    UILabel *_leanTipsLabel;
    UIView *_fixedScanFrameView;
    UIImageView *_leftTopCorner;
    UIImageView *_rightTopCorner;
    UIImageView *_rightBottomCorner;
    UIImageView *_leftBottomCorner;
    UIImageView *_vectorImageView;
    long long _leanDirection;
    UILabel *_leanAnimateLabel;
    long long _pitchDetectTotalWindow;
    long long _pitchDetectLeanFrontWindow;
    long long _pitchDetectLeanBackWindow;
}

- (void).cxx_destruct;
@property(nonatomic) long long pitchDetectLeanBackWindow; // @synthesize pitchDetectLeanBackWindow=_pitchDetectLeanBackWindow;
@property(nonatomic) long long pitchDetectLeanFrontWindow; // @synthesize pitchDetectLeanFrontWindow=_pitchDetectLeanFrontWindow;
@property(nonatomic) long long pitchDetectTotalWindow; // @synthesize pitchDetectTotalWindow=_pitchDetectTotalWindow;
@property(retain, nonatomic) UILabel *leanAnimateLabel; // @synthesize leanAnimateLabel=_leanAnimateLabel;
@property(nonatomic) long long leanDirection; // @synthesize leanDirection=_leanDirection;
@property(nonatomic) _Bool shouldPlayLeanAnimation; // @synthesize shouldPlayLeanAnimation=_shouldPlayLeanAnimation;
@property(retain, nonatomic) UIImageView *vectorImageView; // @synthesize vectorImageView=_vectorImageView;
@property(retain, nonatomic) UIImageView *leftBottomCorner; // @synthesize leftBottomCorner=_leftBottomCorner;
@property(retain, nonatomic) UIImageView *rightBottomCorner; // @synthesize rightBottomCorner=_rightBottomCorner;
@property(retain, nonatomic) UIImageView *rightTopCorner; // @synthesize rightTopCorner=_rightTopCorner;
@property(retain, nonatomic) UIImageView *leftTopCorner; // @synthesize leftTopCorner=_leftTopCorner;
@property(retain, nonatomic) UIView *fixedScanFrameView; // @synthesize fixedScanFrameView=_fixedScanFrameView;
@property(retain, nonatomic) UILabel *leanTipsLabel; // @synthesize leanTipsLabel=_leanTipsLabel;
@property(nonatomic) _Bool didRecognizeLeanBack; // @synthesize didRecognizeLeanBack=_didRecognizeLeanBack;
@property(nonatomic) long long leanBackMinWeightingReflectionPixels; // @synthesize leanBackMinWeightingReflectionPixels=_leanBackMinWeightingReflectionPixels;
@property(retain, nonatomic) UIImage *leanBackOnlyReflectionPhoto; // @synthesize leanBackOnlyReflectionPhoto=_leanBackOnlyReflectionPhoto;
@property(nonatomic) _Bool didInLeanBackScanProcess; // @synthesize didInLeanBackScanProcess=_didInLeanBackScanProcess;
@property(nonatomic) _Bool shouldEnterLeanBackScan; // @synthesize shouldEnterLeanBackScan=_shouldEnterLeanBackScan;
@property(nonatomic) _Bool didRecognizeLeanFront; // @synthesize didRecognizeLeanFront=_didRecognizeLeanFront;
@property(nonatomic) long long leanFrontMinWeightingReflectionPixels; // @synthesize leanFrontMinWeightingReflectionPixels=_leanFrontMinWeightingReflectionPixels;
@property(retain, nonatomic) UIImage *leanFrontOnlyReflectionPhoto; // @synthesize leanFrontOnlyReflectionPhoto=_leanFrontOnlyReflectionPhoto;
@property(nonatomic) _Bool didInLeanFrontScanProcess; // @synthesize didInLeanFrontScanProcess=_didInLeanFrontScanProcess;
@property(nonatomic) _Bool shouldEnterLeanFrontScan; // @synthesize shouldEnterLeanFrontScan=_shouldEnterLeanFrontScan;
@property(nonatomic) long long minWeightingReflectionPixels; // @synthesize minWeightingReflectionPixels=_minWeightingReflectionPixels;
@property(retain, nonatomic) UIImage *onlyReflectionPhoto; // @synthesize onlyReflectionPhoto=_onlyReflectionPhoto;
@property(nonatomic) _Bool didInNormalScanProcess; // @synthesize didInNormalScanProcess=_didInNormalScanProcess;
@property(nonatomic) _Bool didPlayingScanAnimation; // @synthesize didPlayingScanAnimation=_didPlayingScanAnimation;
@property(retain, nonatomic) MobileOCRImage *reuseImage; // @synthesize reuseImage=_reuseImage;
@property(nonatomic) int frameResetCount; // @synthesize frameResetCount=_frameResetCount;
@property(nonatomic) int statusResetCount; // @synthesize statusResetCount=_statusResetCount;
@property(nonatomic) int viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) int viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) int captureHeight; // @synthesize captureHeight=_captureHeight;
@property(nonatomic) int captureWidth; // @synthesize captureWidth=_captureWidth;
@property(retain, nonatomic) CornerView *leftBottomView; // @synthesize leftBottomView=_leftBottomView;
@property(retain, nonatomic) CornerView *rightBottomView; // @synthesize rightBottomView=_rightBottomView;
@property(retain, nonatomic) CornerView *rightTopView; // @synthesize rightTopView=_rightTopView;
@property(retain, nonatomic) CornerView *leftTopView; // @synthesize leftTopView=_leftTopView;
@property(nonatomic) double scanLineBottomCenterY; // @synthesize scanLineBottomCenterY=_scanLineBottomCenterY;
@property(nonatomic) double scanLineTopCenterY; // @synthesize scanLineTopCenterY=_scanLineTopCenterY;
@property(retain, nonatomic) UIImageView *scanLineView; // @synthesize scanLineView=_scanLineView;
@property(retain, nonatomic) NSMutableArray *resultRects; // @synthesize resultRects=_resultRects;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) unsigned int frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long stableFailedCount; // @synthesize stableFailedCount=_stableFailedCount;
@property(nonatomic) long long edgeFailedCount; // @synthesize edgeFailedCount=_edgeFailedCount;
@property(retain, nonatomic) UILabel *scanStatusLabel; // @synthesize scanStatusLabel=_scanStatusLabel;
@property(retain, nonatomic) UIImageView *scanStatusIcon; // @synthesize scanStatusIcon=_scanStatusIcon;
@property(retain, nonatomic) UIView *scanStatusView; // @synthesize scanStatusView=_scanStatusView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) _Bool didSetupUI; // @synthesize didSetupUI=_didSetupUI;
@property(nonatomic) _Bool didHandledRotate; // @synthesize didHandledRotate=_didHandledRotate;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) IntelligentOCRPassport *ocr; // @synthesize ocr=_ocr;
@property(retain, nonatomic) NSDictionary *scanDetailMsgMap; // @synthesize scanDetailMsgMap=_scanDetailMsgMap;
@property(nonatomic) _Bool testOutputError; // @synthesize testOutputError=_testOutputError;
@property(nonatomic) _Bool testEngineError; // @synthesize testEngineError=_testEngineError;
@property(nonatomic) _Bool testMissingModel; // @synthesize testMissingModel=_testMissingModel;
@property(nonatomic) _Bool use4KMode; // @synthesize use4KMode=_use4KMode;
@property(nonatomic) __weak id <WCPayScanPassportViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (_Bool)isVerticalScreen;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldEnableMultiAnglesProcess;
- (void)reportTips:(id)arg1;
- (void)reportDetail:(unsigned long long)arg1;
- (void)stopScanLineAnimation;
- (void)startScanLineAnimation;
- (id)handleOCRImageToUIImage:(id)arg1 withPassport:(struct Passport)arg2;
- (void)updateLeanAnimationLabel;
- (void)setupFixedScanFrameView;
- (void)hideFixedScanFrame;
- (void)startLeanAnimation;
- (void)animateScanStatusWithTips:(id)arg1;
- (id)getPasspoertScanImageRectWithPassport:(struct Passport)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)updateFrameStatus:(struct Passport)arg1;
- (_Bool)addOutput:(id)arg1;
- (void)stopCapture;
- (void)startCapture;
- (_Bool)useHighResolution;
- (void)continuousAutoFocus:(struct CGPoint)arg1;
- (void)stopEngine;
- (void)setBarViewToInvisible:(id)arg1;
- (void)handleVisible:(_Bool)arg1 forView:(id)arg2;
- (float)getRotateRadius:(long long)arg1;
- (struct CGRect)viewBounds;
- (void)onFail;
- (void)onReturn;
- (void)onCloseButtonCallback;
- (void)setupVideoDataOutput;
- (void)setupImageBuffer;
- (_Bool)setupIDCardEngine;
- (void)setupScanSize;
- (void)setupInput;
- (void)setupEngine;
- (void)setupUI;
- (_Bool)useTransparentNavibar;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)leanBackTimeOutTips;
- (void)leanFrontTimeOutTips;
- (void)timeOutTips;
- (void)viewDidAppear:(_Bool)arg1;
- (void)hideScanStatus;
- (void)updateScanStatusLabel;
- (void)updateScanStatusIcon;
- (void)updateScanStatusView;
- (void)updateContainerView;
- (void)onCloseButtonClicked;
- (double)getCloseBtnCenterY;
- (void)setupCloseButton;
- (void)setupScanLineView;
- (void)UISplitViewWillChangeSplitMode;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupCornerView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)continueFocus;
- (id)init;
- (void)setSession:(unsigned long long)arg1;
- (unsigned long long)getSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

