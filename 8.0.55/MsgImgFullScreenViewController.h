//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandMpVideoReporter, CAGradientLayer, CMessageWrap, CameraScanCodesMarkDotView, EditImageForwardAndEditLogicController, ForwardMessageLogicController, GetQRCodeInfoLogic, ImageBrowseButton, MMAdaptiveBubbleViewWithLabel, MMProgressViewEx, MMScrollActionSheet, MMTimer, MMUIActivityIndicatorView, MPCustomInteractiveHandler, MPDragDownGestureHandler, MsgImgDataLogic, MsgImgDelayEntryReporter, MsgImgFullScreenContainer, MsgImgPreviewData, MsgImgSearchPhashMemCache, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, OCRTransHalfScreenViewController, QRCodeInMultiDisplayView, ScanQRCodeLogicController, ShareDataToOpenSDKController, SightIconView, UILabel, UIView, WCActionSheet, WCImageTranslateLogic, WCMomentsBizOriginalArticleButton;
@protocol MsgImgFullScreenTransitionComponent, MsgImgFullScreenTransitionDelegate, MsgImgFullScreenViewControllerDelegate;

@interface MsgImgFullScreenViewController
{
    NSMutableDictionary *m_dicMsgStatus;
    NSMutableDictionary *m_dicTryshowTime;
    NSMutableDictionary *_dicImageDownloadedPercent;
    UIView *_backgroundView;
    MsgImgFullScreenContainer *pagingScrollView;
    NSString *m_nsChatName;
    ImageBrowseButton *_btnForImgFastBrowse;
    ImageBrowseButton *_downloadBtn;
    ImageBrowseButton *_moreBtn;
    ImageBrowseButton *_shareBtn;
    ImageBrowseButton *_translateBtn;
    ImageBrowseButton *_qrCodeBtn;
    ImageBrowseButton *_imgSourceBtn;
    ImageBrowseButton *_enterWeAppBtn;
    ImageBrowseButton *_enterTailBtn;
    double _bottomMarginBorder;
    double _bottomRightPadding;
    double _bottomLeftPadding;
    UIView *_bottomBar;
    CAGradientLayer *_bottomBarMaskLayer;
    double _fastBrowseOffset;
    id <MsgImgFullScreenViewControllerDelegate> m_delegate;
    CMessageWrap *_nextHDImgMsg;
    _Bool _isHDImgLoading;
    NSOperationQueue *_loadHDImgOperationQueue;
    MMProgressViewEx *_progressView;
    _Bool _allowRotate;
    _Bool _isFromMsgContentView;
    _Bool _isRotating;
    _Bool _bNeedEditAtStart;
    WCImageTranslateLogic *_imgTranslateLogic;
    MsgImgDelayEntryReporter *_delayEntryReporter;
    MsgImgPreviewData *m_msgImgPreviewData;
    _Bool m_bAnimateShowing;
    long long _orientationWhenInit;
    _Bool m_bIsEditMode;
    int m_qrcodeActionSheetIndex;
    MMUIActivityIndicatorView *m_preLoadingView;
    MMUIActivityIndicatorView *m_nextLoadingView;
    MsgImgDataLogic *m_dataLogic;
    NSMutableSet *m_revokedMsgIDSet;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    _Bool m_bCloseForViewDetail;
    CMessageWrap *m_oForwardMessageWrap;
    unsigned int m_videoOperateStatus;
    _Bool m_bShouldAutoPlayVideo;
    _Bool m_bSoundable;
    unsigned int _startTime;
    unsigned long long m_startDownloadTime;
    _Bool m_downloadingHd;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    unsigned int _needEditImageIndex;
    NSString *m_fromUsr;
    _Bool _isClosing;
    double _lastPageId;
    unsigned int _lastMsgLocalId;
    unsigned int m_tapOpenMsgLocalId;
    _Bool _needResumeVideoWhenAppear;
    CameraScanCodesMarkDotView *_qrCodeDotView;
    _Bool _isHandlingQRCodeFastEntry;
    _Bool _enableDragToClose;
    _Bool _enablePressToShowSheet;
    WCActionSheet *m_actionSheet;
    _Bool m_bShow;
    struct CGRect m_originFrame;
    UIView *m_snapShotImgView;
    UIView *_bottomButtonsContainerView;
    _Bool m_bToolViewsHidden;
    _Bool m_hasPreviewVideo;
    _Bool _bForbidBounces;
    _Bool _isShowSingleMsg;
    _Bool _bForbidRotateToPortraitWhenExit;
    _Bool _bForbidTransToOriginRectWhenExitIfOrientationChanged;
    _Bool _bIsNotMoreMsgImgBrowseView;
    _Bool _bUpdateForVoiceOver;
    _Bool _m_hasShowSpamTips;
    _Bool _isFromReferedMsg;
    _Bool _haveMaterialButton;
    _Bool _canLongPress;
    _Bool _hasSearchPhashBtnKVReportOnce;
    _Bool _hasSearchBubbleViewKVReportOnce;
    _Bool _isUrlInfoHasUpdated;
    _Bool _lockRotate;
    int _detectImageEventID;
    NSMutableDictionary *m_videoViewDic;
    unsigned long long m_eType;
    unsigned long long m_eScene;
    NSArray *_scanCodePrefixBlackList;
    unsigned long long _m_eSubScene;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    WCMomentsBizOriginalArticleButton *_originalArticleBtn;
    unsigned long long _transitioningStyle;
    BrandMpVideoReporter *_brandMpVideoReporter;
    MMTimer *_sliderUpdateTimer;
    ForwardMessageLogicController *_m_forwardLogicController;
    SightIconView *_iconView;
    UIView *_middleExpireTipsView;
    UILabel *_middleExpireTipsLabel;
    QRCodeInMultiDisplayView *_qrCodeMultiView;
    NSString *_materialFileExt;
    unsigned long long _detectImageSessionID;
    MMAdaptiveBubbleViewWithLabel *_enterWeAppBubbleView;
    MMAdaptiveBubbleViewWithLabel *_enterTailBubbleView;
    MMAdaptiveBubbleViewWithLabel *_searchBubbleView;
    ImageBrowseButton *_searchPhashBtn;
    MsgImgSearchPhashMemCache *_phashMemCache;
    CMessageWrap *_lastSearchPhashFailedMessageWrap;
    CDUnknownBlockType _customBottomLeftActioin;
    CDUnknownBlockType _customBottomLeftString;
    NSMutableDictionary *_m_imageViewDic;
    MPCustomInteractiveHandler *_interactiveHandler;
    MPDragDownGestureHandler *_dragDownLeaveGestureHandler;
    id <MsgImgFullScreenTransitionDelegate> _transitionDelegate;
    id <MsgImgFullScreenTransitionComponent> _transitionComponent;
    UIView *_maskView;
    GetQRCodeInfoLogic *_qrCodeInfoLogic;
    MMScrollActionSheet *_scrollActionSheet;
    NSMutableArray *_arrItems1;
    NSMutableArray *_arrItems2;
    OCRTransHalfScreenViewController *_ocrHalfScreenViewCtrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OCRTransHalfScreenViewController *ocrHalfScreenViewCtrl; // @synthesize ocrHalfScreenViewCtrl=_ocrHalfScreenViewCtrl;
@property(nonatomic) _Bool lockRotate; // @synthesize lockRotate=_lockRotate;
@property(retain, nonatomic) NSMutableArray *arrItems2; // @synthesize arrItems2=_arrItems2;
@property(retain, nonatomic) NSMutableArray *arrItems1; // @synthesize arrItems1=_arrItems1;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(nonatomic) _Bool isUrlInfoHasUpdated; // @synthesize isUrlInfoHasUpdated=_isUrlInfoHasUpdated;
@property(retain, nonatomic) GetQRCodeInfoLogic *qrCodeInfoLogic; // @synthesize qrCodeInfoLogic=_qrCodeInfoLogic;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) id <MsgImgFullScreenTransitionComponent> transitionComponent; // @synthesize transitionComponent=_transitionComponent;
@property(nonatomic) __weak id <MsgImgFullScreenTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(retain, nonatomic) MPDragDownGestureHandler *dragDownLeaveGestureHandler; // @synthesize dragDownLeaveGestureHandler=_dragDownLeaveGestureHandler;
@property(retain, nonatomic) MPCustomInteractiveHandler *interactiveHandler; // @synthesize interactiveHandler=_interactiveHandler;
@property(retain, nonatomic) NSMutableDictionary *m_imageViewDic; // @synthesize m_imageViewDic=_m_imageViewDic;
@property(copy, nonatomic) CDUnknownBlockType customBottomLeftString; // @synthesize customBottomLeftString=_customBottomLeftString;
@property(copy, nonatomic) CDUnknownBlockType customBottomLeftActioin; // @synthesize customBottomLeftActioin=_customBottomLeftActioin;
@property(retain, nonatomic) CMessageWrap *lastSearchPhashFailedMessageWrap; // @synthesize lastSearchPhashFailedMessageWrap=_lastSearchPhashFailedMessageWrap;
@property(nonatomic) _Bool hasSearchBubbleViewKVReportOnce; // @synthesize hasSearchBubbleViewKVReportOnce=_hasSearchBubbleViewKVReportOnce;
@property(nonatomic) _Bool hasSearchPhashBtnKVReportOnce; // @synthesize hasSearchPhashBtnKVReportOnce=_hasSearchPhashBtnKVReportOnce;
@property(retain, nonatomic) MsgImgSearchPhashMemCache *phashMemCache; // @synthesize phashMemCache=_phashMemCache;
@property(retain, nonatomic) ImageBrowseButton *searchPhashBtn; // @synthesize searchPhashBtn=_searchPhashBtn;
@property(retain, nonatomic) MMAdaptiveBubbleViewWithLabel *searchBubbleView; // @synthesize searchBubbleView=_searchBubbleView;
@property(retain, nonatomic) MMAdaptiveBubbleViewWithLabel *enterTailBubbleView; // @synthesize enterTailBubbleView=_enterTailBubbleView;
@property(retain, nonatomic) MMAdaptiveBubbleViewWithLabel *enterWeAppBubbleView; // @synthesize enterWeAppBubbleView=_enterWeAppBubbleView;
@property(nonatomic) _Bool canLongPress; // @synthesize canLongPress=_canLongPress;
@property(nonatomic) unsigned long long detectImageSessionID; // @synthesize detectImageSessionID=_detectImageSessionID;
@property(nonatomic) int detectImageEventID; // @synthesize detectImageEventID=_detectImageEventID;
@property(retain, nonatomic) NSString *materialFileExt; // @synthesize materialFileExt=_materialFileExt;
@property(nonatomic) _Bool haveMaterialButton; // @synthesize haveMaterialButton=_haveMaterialButton;
@property(nonatomic) _Bool isFromReferedMsg; // @synthesize isFromReferedMsg=_isFromReferedMsg;
@property(retain, nonatomic) QRCodeInMultiDisplayView *qrCodeMultiView; // @synthesize qrCodeMultiView=_qrCodeMultiView;
@property(retain, nonatomic) UILabel *middleExpireTipsLabel; // @synthesize middleExpireTipsLabel=_middleExpireTipsLabel;
@property(retain, nonatomic) UIView *middleExpireTipsView; // @synthesize middleExpireTipsView=_middleExpireTipsView;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) ForwardMessageLogicController *m_forwardLogicController; // @synthesize m_forwardLogicController=_m_forwardLogicController;
@property(retain, nonatomic) MMTimer *sliderUpdateTimer; // @synthesize sliderUpdateTimer=_sliderUpdateTimer;
@property(nonatomic) _Bool m_hasShowSpamTips; // @synthesize m_hasShowSpamTips=_m_hasShowSpamTips;
@property(nonatomic) _Bool bUpdateForVoiceOver; // @synthesize bUpdateForVoiceOver=_bUpdateForVoiceOver;
@property(retain, nonatomic) BrandMpVideoReporter *brandMpVideoReporter; // @synthesize brandMpVideoReporter=_brandMpVideoReporter;
@property(nonatomic) unsigned long long transitioningStyle; // @synthesize transitioningStyle=_transitioningStyle;
@property(retain, nonatomic) WCMomentsBizOriginalArticleButton *originalArticleBtn; // @synthesize originalArticleBtn=_originalArticleBtn;
@property(nonatomic) _Bool bIsNotMoreMsgImgBrowseView; // @synthesize bIsNotMoreMsgImgBrowseView=_bIsNotMoreMsgImgBrowseView;
@property(retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic; // @synthesize scanQRCodeLogic=_scanQRCodeLogic;
@property(nonatomic) _Bool bForbidTransToOriginRectWhenExitIfOrientationChanged; // @synthesize bForbidTransToOriginRectWhenExitIfOrientationChanged=_bForbidTransToOriginRectWhenExitIfOrientationChanged;
@property(nonatomic) _Bool bForbidRotateToPortraitWhenExit; // @synthesize bForbidRotateToPortraitWhenExit=_bForbidRotateToPortraitWhenExit;
@property(nonatomic) _Bool isShowSingleMsg; // @synthesize isShowSingleMsg=_isShowSingleMsg;
@property(nonatomic) unsigned long long m_eSubScene; // @synthesize m_eSubScene=_m_eSubScene;
@property(retain, nonatomic) NSArray *scanCodePrefixBlackList; // @synthesize scanCodePrefixBlackList=_scanCodePrefixBlackList;
@property(nonatomic) _Bool bForbidBounces; // @synthesize bForbidBounces=_bForbidBounces;
@property(retain, nonatomic) UIView *bottomButtonsContainerView; // @synthesize bottomButtonsContainerView=_bottomButtonsContainerView;
@property(nonatomic) unsigned long long m_eScene; // @synthesize m_eScene;
@property(nonatomic) unsigned long long m_eType; // @synthesize m_eType;
@property(nonatomic) _Bool m_hasPreviewVideo; // @synthesize m_hasPreviewVideo;
@property(retain, nonatomic) NSMutableDictionary *m_videoViewDic; // @synthesize m_videoViewDic;
@property(nonatomic) _Bool isFromMsgContentView; // @synthesize isFromMsgContentView=_isFromMsgContentView;
@property(nonatomic) _Bool allowRotate; // @synthesize allowRotate=_allowRotate;
@property(nonatomic) __weak id <MsgImgFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
- (_Bool)onClickSaveHDImageAlbumButton;
- (_Bool)isDisplayTranslateResult:(id)arg1;
- (void)onRawVideoDownloadSuccess:(id)arg1;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)accessibilityScroll;
- (void)presentImgSourceWebVC:(unsigned int)arg1;
- (void)onTappedRowImgSource;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)onTappedRowInfo:(id)arg1;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(_Bool)arg2;
- (void)dismissQRCodeMultiView;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onDotViewClicked:(id)arg1;
- (id)getDataOfDotViewInfoFilterWithScanFinishBlock:(CDUnknownBlockType)arg1;
- (void)updateQRCodeMultiView;
- (void)showQRCodeMultiDisplayView;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)startImageSearchWithsource:(long long)arg1;
- (void)startImageCircleToSearch:(unsigned long long)arg1;
- (void)openSearchViewController:(id)arg1;
- (id)phashInfoForCurrPageMessageWrap;
- (id)phashStrForCurrPageMessageWrap;
- (id)currPageMessageWrap;
- (void)setSearchPhashInfoHasShowOnce;
- (void)updateEnterTailBubbleViewHidden:(_Bool)arg1;
- (void)updateEnterWeAppBubbleViewHidden:(_Bool)arg1;
- (void)updateSearchBubbleViewHidden:(_Bool)arg1;
- (void)onHideDetectResultButtonListWithAnimation:(_Bool)arg1;
- (void)onShowDetectResultButton:(id)arg1 isAnimation:(_Bool)arg2;
- (void)tryHideDetectResultButton:(id)arg1;
- (void)tryShowDetectResultButton:(id)arg1;
- (void)safeReportQRCodeFastEntryClickResult:(_Bool)arg1;
- (void)reportFastEntryClickResult:(_Bool)arg1;
- (void)reportClickWithEntryType:(unsigned int)arg1;
- (void)refreshDetectResult;
- (void)reportDetectExpose;
- (void)makeFeedBack;
- (void)layoutQRCodeDotView;
- (void)layoutSearchBubbleView;
- (void)layoutEnterTailBubbleView;
- (void)layoutEnterWeAppBubbleView;
- (void)removeQRCodeDotView;
- (void)onSelectMarkDotInfo:(id)arg1;
- (_Bool)showQRCodeDotView;
- (void)onStartHandleQRCode;
- (void)delayQRCodeLoading;
- (void)internalHandleScanCode;
- (void)handleSingleCodeOnClickQrCodeButton;
- (void)handleSecondScanOnClickQrCodeButton;
- (void)OpenLiteApp:(id)arg1;
- (void)OpenHtml5:(id)arg1;
- (void)onClickTailScreenshotButton;
- (void)enterWeAppByScreenshotContextInfoWithScene:(unsigned long long)arg1;
- (void)onClickWeAppScreenshotButton;
- (void)onClickImgSourceButton:(id)arg1;
- (void)onClickQrCodeButton:(id)arg1;
- (void)asyncDetectImageIfNeeded:(_Bool)arg1;
- (id)getPreDetectResultButton;
- (void)regenerateDetectImageSessionID;
- (void)resetPreDetectButton;
- (void)updateDetectResultUI;
- (void)notifyQrCodeDetectFinish;
- (void)notifySearchPhashDetectFinish;
- (void)notifyPreDetectWordFinish;
- (_Bool)shouldUseQrCodeButton;
- (_Bool)shouldUseTranslateButton;
- (_Bool)shouldShowQrCodeEntry;
- (_Bool)shouldShowSearchBubbleView;
- (_Bool)shouldShowSearchPhashBtn;
- (_Bool)isSearchHeatImage;
- (_Bool)isSearchPhashDetected;
- (_Bool)shouldShowOCREntry;
- (_Bool)shouldShowTranslateEntryWithSource:(int)arg1;
- (_Bool)isQrCodeDetected;
- (_Bool)isQrCodeBeginDetect;
- (_Bool)isSupportImagePreScanFastEntry;
- (_Bool)isSupportImageDetectFastEntry;
- (void)addButton:(id)arg1 toVisibleSet:(id)arg2 orInvisibleSet:(id)arg3;
- (_Bool)canShowButton:(id)arg1;
- (_Bool)shouldShowCreateFinderContactAction;
- (_Bool)canShowQRCodeButton;
- (_Bool)canShowDownloadButton;
- (void)checkInterceptStatus;
- (id)genDetectWordActionSheetItemList;
- (void)onFinishAnimateOCRImage;
- (void)onStartAnimateOCRImage;
- (id)getTranlateMidImgIdentifer:(id)arg1;
- (void)onStatDownloadFinish:(int)arg1;
- (void)onStatStartDownload:(_Bool)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)getCurrentViewController;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(_Bool)arg2;
- (void)startEditImage:(_Bool)arg1;
- (void)forwardMessage:(id)arg1 toContact:(id)arg2;
- (void)setToolViewAlpha:(double)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (id)getPlayerViewWithMsgWrap:(id)arg1;
- (id)getCurrentPlayerView;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)hideWithoutAnimate;
- (void)animateHideWithFadeout;
- (void)animateHide;
- (void)animateHideWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)onMsgImgDataMatch:(id)arg1;
- (_Bool)needShowLocateBtn;
- (void)stopPlayVideo;
- (void)startPlayVideo;
- (void)onWXVideoPlayerViewLongPress:(id)arg1;
- (void)statLevelFullScreenSight;
- (void)onFullScreenSingleTap;
- (void)onWXVideoPlayerViewSingleTap:(id)arg1;
- (void)onDownloadVideoSuccess:(id)arg1;
- (double)getBottomRightMargin;
- (void)onReceiveVideoFinishMsg:(id)arg1;
- (void)onGetEMsgScene:(unsigned long long *)arg1;
- (void)onVideoBlocked:(id)arg1;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartWidth:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)onWXVideoPlayerProgressBarHiddenChangeTo:(_Bool)arg1;
- (void)onWXVideoPlayerClickDetail:(id)arg1;
- (void)isWXVideoPlayerPlayAttachVideo:(id)arg1;
- (_Bool)isWXVideoPlayerDisplay:(id)arg1;
- (void)onClickSaveRawVideoToAlbumButton;
- (void)onGetA8KeyFail;
- (void)didShowScanResult;
- (void)onScanEnds;
- (void)onStopLoading;
- (void)onPushViewContoller:(id)arg1 animated:(_Bool)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgBeRemoved:(id)arg1 n64MsgId:(long long)arg2 FromRevoked:(_Bool)arg3;
- (void)OnMsgBeRemoved:(id)arg1 msg:(id)arg2 index:(unsigned int)arg3;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)relayoutOnTransition;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tryShowProgressJpegForIndex:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)addDebugLabelToSuperView:(id)arg1 msg:(id)arg2;
- (id)generatePlayerViewWithMsg:(id)arg1 frame:(struct CGRect)arg2;
- (void)delayStartDownloadImg:(id)arg1;
- (void)animateShowViewsWhenEndDrag;
- (void)animateShowViews;
- (void)animateHideViews:(_Bool)arg1;
- (void)animateHideViewsAfterSeconds;
- (void)animateHideViewsWhenBeginDrag;
- (void)setUnStatbleViewsHidden:(_Bool)arg1;
- (void)multiImageScrollViewDidEndScrolling;
- (void)multiImageScrollViewDidScroll;
- (void)ImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)multiImageScrollViewWillBeginDragging;
- (void)pageDidChanged;
- (void)onChangePage;
- (void)clearVideoMemoryOnChangePage;
- (void)clearImageMemoryOnChangePage;
- (id)imagePathAtPage:(unsigned int)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)uuidAtPage:(unsigned int)arg1;
- (void)showAlertViewForNetDisconnected;
- (void)saveVideoToAlbum:(id)arg1;
- (_Bool)isNeedClipQRCodeScanImageForSize:(struct CGSize)arg1;
- (_Bool)hasSufficientMemoryWithImageWidth:(double)arg1 imageHeight:(double)arg2;
- (void)imageForScanQRCodeAtPage:(unsigned int)arg1 isClipImage:(_Bool *)arg2 clipRect:(struct CGRect *)arg3 returnBlock:(CDUnknownBlockType)arg4;
- (void)PreScanQRCode:(id)arg1 withSecondScanCallbackBlock:(CDUnknownBlockType)arg2;
- (void)PreScanQRCode:(id)arg1;
- (void)preSearchPhash:(id)arg1;
- (void)preDetectWordInImage;
- (void)onClickSavedPhotosAlbumButton;
- (void)onImgFastBrowse:(id)arg1;
- (void)onImgMsgLocate;
- (void)onViewQuickMsgSoure:(id)arg1;
- (void)onViewHDImage:(id)arg1;
- (void)startDownloadImg:(_Bool)arg1 forIndex:(unsigned int)arg2;
- (void)startDownloadImageForSaveAlbum;
- (void)OnDownloadForSaveAlbumFail:(id)arg1 Expired:(_Bool)arg2;
- (void)OnImageSaveAlbumError:(id)arg1;
- (void)OnImageSaveAlbumSuccess:(id)arg1;
- (void)OnDownloadImagePartNew:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(_Bool)arg4;
- (void)OnDownloadImagePart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)updateTransitionComponent;
- (id)curImgSearchReporter;
- (void)setVideoThumbImage:(id)arg1;
- (void)setVideoInitialTime:(double)arg1;
- (id)getProgressJpeg:(id)arg1;
- (id)getThumbOrDefaultImageFor:(id)arg1;
- (id)getThumbImageFor:(id)arg1;
- (void)doLoadHDImage:(id)arg1;
- (void)asyncLoadHDImage:(id)arg1;
- (id)getOriginImageFor:(id)arg1 isHD:(_Bool *)arg2;
- (id)getImageFor:(id)arg1 isHD:(_Bool *)arg2;
- (id)getImageFor:(id)arg1;
- (unsigned int)getIndexFor:(id)arg1;
- (id)getMsgFor:(unsigned int)arg1;
- (void)setStatusFor:(id)arg1 status:(unsigned int)arg2;
- (unsigned int)getStatusFor:(id)arg1;
- (void)dealloc;
- (void)adjustSubviewRects;
- (void)uninitLogic;
- (void)initLogic:(id)arg1;
- (void)preLoad:(id)arg1;
- (void)ensurePageOffsetWithPageCount:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)ensurePageOffsetWithMsg:(id)arg1;
- (void)updateMsgArray:(id)arg1;
- (void)updateLoadingView;
- (void)initScrollView;
- (void)onCancelCurrentDownload;
- (void)updateSliderAlpha;
- (void)addShadowToView:(id)arg1;
- (id)downloadBtn;
- (double)updateBottomBarAndViews;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheetViewForAppMsg;
- (void)onMoreButtonClicked:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)adujstViewForImageAppMsg;
- (void)weAppOpenMaterial:(id)arg1;
- (void)handleClickWeAppOpenMaterial:(id)arg1;
- (void)handleClickWeAppListOpenMaterial;
- (_Bool)addWAOpenWxMaterialButton:(id)arg1;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(_Bool)arg1;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)reportSaveLocalMediaItem;
- (void)initEnterTailBtnAndBubbleViewIfNeeded;
- (void)initEnterWeAppBtnAndBubbleViewIfNeeded;
- (void)initBottomBar;
- (void)checkVideoSteamDownloadStatus;
- (id)getImgInfoTime:(id)arg1;
- (id)getImgInfoName:(id)arg1;
- (void)videoForwardToFinder;
- (void)imageForwardToFinder;
- (void)handleClickForwardToFinderClub;
- (void)handleClickActionSheetItemCancel;
- (void)handleClickActionSheetItemShareTimeline;
- (void)handleClickActionSheetItemMessageLocation;
- (void)handleClickActionSheetItemEdit;
- (void)handleClickActionSheetItemOpen;
- (void)handleClickActionSHeetItemCircleToSearch;
- (void)handleClickActionSheetItemSearchImage;
- (void)handleClickActionSheetItemSaveVideoToAlbum;
- (void)handleClickActionSheetItemSavePreviewImageToAlbum;
- (void)handleClickActionSheetItemSaveImageToAlbum;
- (void)handleClickActionSheetItemFavorite;
- (void)handleClickActionSheetItemShareFriend:(id)arg1;
- (void)showOCRHalfScreenViewCtrl;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)setupOCRHalfScreenViewCtrl:(id)arg1 msgWrap:(id)arg2;
- (void)handleClickActionSheetItemOCR;
- (void)handleClickActionSheetItemScan;
- (_Bool)forwardOrSaveWhilePlaying:(unsigned int)arg1 messageWrap:(id)arg2;
- (void)onLongPressBegin:(id)arg1;
- (void)onClickMoreBtn:(id)arg1;
- (void)onClickShareBtn:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)showActionSheetIfNeed:(id)arg1 scene:(unsigned int)arg2;
- (void)configScrollableActionSheet:(id)arg1 scene:(unsigned int)arg2;
- (long long)compareActionSheetItemInfo:(id)arg1 b:(id)arg2;
- (void)sortActionSheetItem;
- (void)addActionSheetItem:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (void)onSingleTap;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (id)tagForActivePage;
- (void)adjustViewAndNavBarRect;
- (_Bool)useCustomNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)hidesStatusBar;
- (id)getCurrentImageView;
- (id)getImageViewWithMsgWrap:(id)arg1;
- (void)updateToolbar;
- (void)animateShowButton;
- (void)updateHDDownloadingStatus:(float)arg1 msgWrap:(id)arg2;
- (void)updateCurrentImageDownloadStatus;
- (void)animateHideHDDownloadStatusOnComplete:(float)arg1 msgWrap:(id)arg2;
- (void)animateHideHDDownloadStatus:(id)arg1;
- (void)animateShowMiddleExpireTipsViewWithTips:(id)arg1;
- (void)animateHideDownloadingView;
- (void)tryShowDownloadingView;
- (void)report17560WithType:(int)arg1 msgWrap:(id)arg2;
- (_Bool)hasDownloadHDImg:(id)arg1;
- (void)hideImageFastBrowseButton;
- (void)stopImageDownload;
- (_Bool)isCurrentPageError;
- (void)handlePushOrPresentTransitioningFinish;
- (_Bool)isImgMsg:(id)arg1;
- (id)getCurrentScrollView:(id)arg1;
- (void)updateExpireTipsView;
- (id)getOpenMsgWrap;
- (id)getCurrentMsgWrap;
- (id)initWithParam:(id)arg1;
- (void)advancePreloadMpDataIfNeed;
- (id)contactByUsrName:(id)arg1;
- (_Bool)isShowEnterMpPageBtn:(id)arg1;
- (void)tryReportBrandMpVideoShareSuccessEventIfNeed;
- (unsigned long long)convertESceneToBrandMpVideoReportScene;
- (void)reportBrandMpVideoIfNeedWithOpType:(unsigned long long)arg1;
- (void)onOpenBrandProfile:(id)arg1;
- (void)onOpenBrandMpPage:(id)arg1 enterIdForReport:(unsigned int)arg2;
- (void)onFullScreenItemDragEndInEditMode;
- (void)onFullScreenItemDragBeginInEditMode;
- (void)pageDidChangedInEditMode;
- (void)onUserClickVideoInEditMode;
- (void)onSingleTapVideoViewInEditMode;
- (void)onSingleTapViewInEditMode;
- (void)OnClickBackBarButton:(id)arg1;
- (void)OnSelectedButtonDone;
- (void)setTopBarHiddenAnimated:(_Bool)arg1;
- (void)changeSelectedButtonInEditMode;
- (id)getSelectCheckButton;
- (void)initSelectCheckButton;
- (void)initBackBarButton;
- (id)getTitleBackGroundView;
- (void)initBackgroundView;
- (void)initEditModeView;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)updateRowInfoUseDefaultInfo:(unsigned int)arg1;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)arg1 qrCodeInfoItem:(id)arg2;
- (void)onGetQRCodeInfoResultFailure:(unsigned int)arg1;
- (void)onTimeout:(id)arg1;
- (void)getQRCodeInfo:(unsigned int)arg1 codeStr:(id)arg2;
- (void)actionSheet:(id)arg1 didTapedVerticalRowInfo:(id)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)cancelQRCodeInfoCallback;
- (void)setupScrollableActionSheetCanForward:(_Bool)arg1;
- (void)animateHideWithOrientation:(long long)arg1 PreviewData:(id)arg2;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1 msgTransition:(_Bool)arg2;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateMsgTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTranslateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)onPresentAnimatedTransitioningFinish;
- (void)onCustomInteractiveTransitioningBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)dragDownGestureHandler:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onInitForCategoryTransitioning;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)onCancelTranslateImage:(id)arg1;
- (void)onFinishAnimateTranslateImage:(id)arg1;
- (void)onStartAnimateTranslateImage:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (void)onShowTranslateImage:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)reportTranslateMenuClick:(id)arg1;
- (void)onTranslateWordInImage;
- (void)showTranslateImg;
- (void)internalHandleTranslate;
- (void)showActionSheetFromTranslateImg;
- (void)handleClickActionSheetItemTranslateFeedback;
- (void)handleClickActionSheetItemChangeTranslateLang;
- (void)handleClickActionSheetItemCancelTranslate;
- (void)handleClickActionSheetItemTranslate;
- (void)onClickTranslateButton:(id)arg1;
- (_Bool)isPreTranslateDetected;
- (id)markTranslateSet;
- (_Bool)_isDisplayTranslateResult:(id)arg1;
- (void)unmarkDisplayTranslateResult:(id)arg1;
- (void)markDisplayTranslateResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

