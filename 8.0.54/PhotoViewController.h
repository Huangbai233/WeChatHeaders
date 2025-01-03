//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CMessageWrap, MMImageActionSheet, MMUILabel, MultiImageScrollView, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol PhotoViewControllerDelegate;

@interface PhotoViewController
{
    MultiImageScrollView *pagingScrollView;
    NSMutableArray *m_arrayImageUrl;
    _Bool m_bAnimating;
    double _oldNavigationBarAlpha;
    NSString *m_appID;
    unsigned long long m_appScene;
    MMUILabel *_title;
    NSString *m_referer;
    NSMutableArray *m_arrayImageCache;
    _Bool m_isLiteAppCache;
    _Bool m_isPresented;
    _Bool _isForbidForward;
    _Bool _enableImageSearch;
    _Bool _isFromWebview;
    _Bool _isFromWeApp;
    _Bool _isFromLiteApp;
    _Bool _disableAutoResumeNavigationBar;
    _Bool _isFromSafariOr3rdApp;
    _Bool _needDistinguishGif;
    _Bool _needSaveOrigin;
    _Bool _isBanMenu;
    _Bool _shouldTranslateImmediately;
    _Bool _isFromWeAppInnerWebView;
    unsigned int _webViewA8KeyScene;
    unsigned int _adScene;
    int _presetIndex;
    NSString *_relativeUrl;
    id <PhotoViewControllerDelegate> _delegate;
    NSString *_firstUrlString;
    NSString *_webViewUrlString;
    NSString *_fromBizUser;
    NSString *_publisherUserName;
    NSString *_wxaPathWithQuery;
    NSString *_wxaSessionId;
    unsigned long long _weappOrientationMask;
    long long _dismissContentMode;
    NSSet *_setScanQRCodeResultType;
    CMessageWrap *_originMsgWrap;
    unsigned long long _adId;
    NSMutableDictionary *_presetImages;
    NSMutableDictionary *_translatedImages;
    MMImageActionSheet *_imageActionSheet;
    struct CGRect _tappedPhotoInWebViewPosition;
}

+ (id)imageFromCacheWithUrl:(id)arg1;
+ (id)imageFromLocalCacheWithPath:(id)arg1;
+ (id)imageDataFromCacheWithUrl:(id)arg1;
+ (id)genKeyForUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMImageActionSheet *imageActionSheet; // @synthesize imageActionSheet=_imageActionSheet;
@property(retain, nonatomic) NSMutableDictionary *translatedImages; // @synthesize translatedImages=_translatedImages;
@property(nonatomic) int presetIndex; // @synthesize presetIndex=_presetIndex;
@property(retain, nonatomic) NSMutableDictionary *presetImages; // @synthesize presetImages=_presetImages;
@property(nonatomic) unsigned long long adId; // @synthesize adId=_adId;
@property(nonatomic) unsigned int adScene; // @synthesize adScene=_adScene;
@property(retain, nonatomic) CMessageWrap *originMsgWrap; // @synthesize originMsgWrap=_originMsgWrap;
@property(retain, nonatomic) NSSet *setScanQRCodeResultType; // @synthesize setScanQRCodeResultType=_setScanQRCodeResultType;
@property(nonatomic) long long dismissContentMode; // @synthesize dismissContentMode=_dismissContentMode;
@property(nonatomic) unsigned long long weappOrientationMask; // @synthesize weappOrientationMask=_weappOrientationMask;
@property(nonatomic) _Bool isFromWeAppInnerWebView; // @synthesize isFromWeAppInnerWebView=_isFromWeAppInnerWebView;
@property(copy, nonatomic) NSString *wxaSessionId; // @synthesize wxaSessionId=_wxaSessionId;
@property(copy, nonatomic) NSString *wxaPathWithQuery; // @synthesize wxaPathWithQuery=_wxaPathWithQuery;
@property(nonatomic) struct CGRect tappedPhotoInWebViewPosition; // @synthesize tappedPhotoInWebViewPosition=_tappedPhotoInWebViewPosition;
@property(copy, nonatomic) NSString *publisherUserName; // @synthesize publisherUserName=_publisherUserName;
@property(retain, nonatomic) NSString *fromBizUser; // @synthesize fromBizUser=_fromBizUser;
@property(nonatomic) unsigned int webViewA8KeyScene; // @synthesize webViewA8KeyScene=_webViewA8KeyScene;
@property(retain, nonatomic) NSString *webViewUrlString; // @synthesize webViewUrlString=_webViewUrlString;
@property(retain, nonatomic) NSString *firstUrlString; // @synthesize firstUrlString=_firstUrlString;
@property(nonatomic) __weak id <PhotoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *relativeUrl; // @synthesize relativeUrl=_relativeUrl;
@property(nonatomic) _Bool shouldTranslateImmediately; // @synthesize shouldTranslateImmediately=_shouldTranslateImmediately;
@property(nonatomic) _Bool isBanMenu; // @synthesize isBanMenu=_isBanMenu;
@property(nonatomic) _Bool needSaveOrigin; // @synthesize needSaveOrigin=_needSaveOrigin;
@property(nonatomic) _Bool needDistinguishGif; // @synthesize needDistinguishGif=_needDistinguishGif;
@property(nonatomic) _Bool isFromSafariOr3rdApp; // @synthesize isFromSafariOr3rdApp=_isFromSafariOr3rdApp;
@property(nonatomic) _Bool disableAutoResumeNavigationBar; // @synthesize disableAutoResumeNavigationBar=_disableAutoResumeNavigationBar;
@property(nonatomic) _Bool isFromLiteApp; // @synthesize isFromLiteApp=_isFromLiteApp;
@property(nonatomic) _Bool isFromWeApp; // @synthesize isFromWeApp=_isFromWeApp;
@property(nonatomic) _Bool isFromWebview; // @synthesize isFromWebview=_isFromWebview;
@property(nonatomic) _Bool enableImageSearch; // @synthesize enableImageSearch=_enableImageSearch;
@property(nonatomic) _Bool isForbidForward; // @synthesize isForbidForward=_isForbidForward;
@property(readonly, nonatomic) NSString *referer; // @synthesize referer=m_referer;
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=m_appID;
- (void)reportTranslateMenuClick:(id)arg1;
- (void)onClickTransalteFeedbackButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickCancelTranslateButton;
- (void)onClickSavedPhotosAlbumButton;
- (void)displayOriginImage;
- (void)showActionSheetFromTranslateImg;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onShowTranslateImage:(id)arg1;
- (id)translateImageIdentifier;
- (void)imageActionSheetDidCancel:(id)arg1;
- (_Bool)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidClicked:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemWillClicked:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidAppear:(id)arg2;
- (unsigned int)ocrSvrScene;
- (unsigned int)orcEnterScene;
- (void)multiImageScrollViewDidEndDecelerating;
@property(readonly, nonatomic) unsigned long long circleToSearchScene;
- (void)startCircleToSearch:(unsigned long long)arg1;
- (void)startImageSearch;
- (void)tryReportSimilarImgOperation:(unsigned long long)arg1;
- (id)genSearchEntity;
- (void)translateImageImmediately;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)setTitle:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)reportWebviewImageActionWithItemType:(unsigned int)arg1;
- (void)PreScanQRCode;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)addToFavorites;
- (void)forwardMessage;
- (void)onOperate;
- (_Bool)canAddImageToSearch;
- (_Bool)canAddImageToForward;
- (_Bool)canAddImageToFavorite;
- (_Bool)canAddImageToAlbum;
- (_Bool)canOperateImage;
- (void)onSavedPhotosAlbum;
- (void)onAnimationDidStop;
- (void)showFullScreen;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)showFullScreenAnimated:(_Bool)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onFullScreenItemDragCancel;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (id)tryGetResource:(id)arg1;
- (void)initLocalCaches:(id)arg1;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2 appID:(id)arg3 appScene:(unsigned long long)arg4 referer:(id)arg5;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2;
- (unsigned long long)getIndexArrayImageUrl:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)addPresetImageForCurrentIndex:(id)arg1;
- (void)updatePhotoatIndex:(unsigned int)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (id)imageWithData:(id)arg1;
- (id)imageDataAtPage:(unsigned int)arg1;
- (void)changePresentedState:(_Bool)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (_Bool)useCustomNavibar;
- (void)dealloc;
- (void)enterForeground;
- (void)onMainWindowFrameChanged;
- (void)viewDidLoad;
- (id)init;
- (void)viewWillBeInteractivePoped;
- (_Bool)shouldInteractivePop;
- (void)initScrollView;
- (void)initNavigationBar;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)hidesStatusBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)handleViewWillBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)hideStatusBar;
- (void)showStatusBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

