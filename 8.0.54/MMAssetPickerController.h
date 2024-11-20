//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMAlbum, MMAlbumAccessAuthView, MMAlbumAuthorizationReportObject, MMAlbumDropPickerController, MMAlbumDropableTitleWithMultipleSectionView, MMAsset, MMAssetDragSelectHelper, MMAssetPickerActionBottomView, MMAssetPickerControllerProxyObjectForAllAsset, MMAssetPickerControllerState, MMAssetPickerSlider, MMAssetUserActionTipsView, MMDropableTitleView, MMImagePickerVideoCompressQueue, MMScrollView, MMSightCameraViewController, MMTableView, MMUIButton, MMUIImageView, MMUILabel, NSDateFormatter, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, UIImageView, UILabel, UIView, VideoEncodeTask, WCFinderFeedPickerViewController, WCFinderPreviewEditVideoCompositionTask, WCFinderSyncComposeResModel;
@protocol MMAssetPickerControllerDelegate, MMImagePickerControlCenter, UIViewControllerPreviewing;

@interface MMAssetPickerController
{
    NSMutableArray *_imageDictionaries;
    UIView *_bottomBarFloatView;
    UILabel *_bottomBarFloatLabel;
    MMUIButton *_previewButton;
    MMUIButton *_templateComposingButton;
    double _realBottomBarHeight;
    _Bool _isOriginalImageForSend;
    _Bool _needThumbImage;
    int _compressType;
    double _assetWidth;
    id <UIViewControllerPreviewing> _previewingContext;
    UIButton *m_sendButton;
    MMUIButton *m_originImageCheck;
    MMUIButton *m_userActionCheck;
    NSMutableDictionary *m_dicSectionTitle;
    NSMutableDictionary *m_dicAssetsByTitle;
    NSMutableArray *m_arrAssetInfoByIndex;
    NSMutableDictionary *m_dicAssetsSize;
    _Bool _isOriginSelected;
    _Bool _disableInteractivePop;
    _Bool _isHiddenSliderTopMask;
    _Bool _isSupportHeif;
    _Bool _m_isJustReturnMMAsset;
    _Bool _m_hasClickSendButton;
    _Bool _m_directToFirstAlbum;
    _Bool _isDefaultAlbum;
    _Bool _didFinishLoadAlbum;
    _Bool _reloadAnimating;
    _Bool _didSwitchToCamera;
    _Bool _isTopBarAnimating;
    _Bool _isDragged;
    _Bool _bPickerStyleForFile;
    _Bool _isAccessLimited;
    _Bool _isAssetScrollViewUserDragging;
    id <MMAssetPickerControllerDelegate> _m_delegate;
    id <MMImagePickerControlCenter> _controlCenter;
    MMTableView *_tableView;
    UIImageView *_bottomBar;
    MMAlbum *_m_album;
    NSMutableArray *_selectedAssetInfos;
    MMAssetDragSelectHelper *_dragSelectHelper;
    WCFinderSyncComposeResModel *_preCompositionResult;
    VideoEncodeTask *_preEncodeTask;
    VideoEncodeTask *_postEncodeTask;
    WCFinderPreviewEditVideoCompositionTask *_preFinderTask;
    WCFinderPreviewEditVideoCompositionTask *_postFinderTask;
    unsigned long long _preCompressCount;
    NSDateFormatter *_dateFormatter;
    long long _colNum;
    NSMutableSet *_selectedDefaultAssetIds;
    NSMutableSet *_selectedOtherAssetIds;
    NSMutableSet *_dragSelectedAssetIds;
    NSMutableSet *_limitAssetIds;
    MMAsset *_lastSelectedAsset;
    long long _reloadAnimateCounter;
    MMAlbumDropPickerController *_dropController;
    MMAssetPickerControllerProxyObjectForAllAsset *_m_proxyPreviewObjectForAllAsset;
    MMUILabel *_tipsLabel;
    MMUIImageView *_originSelectIconView;
    MMUILabel *_rawTotalSizeLabel;
    UIView *_navBarBlurView;
    UIView *_accessLimitTipView;
    UIView *_bottomBarBlurView;
    MMAlbumAccessAuthView *_accessAuthView;
    MMScrollView *_assetPickerScrollView;
    MMAssetPickerActionBottomView *_bottomActionView;
    MMSightCameraViewController *_sightCameraVC;
    MMAssetPickerSlider *_slider;
    NSMutableArray *_hybridFileArray;
    NSMutableArray *_hybridAVAssetArray;
    NSMutableArray *_assetExifInfo;
    UIView *_finderTemplateLegalTipView;
    long long _waitingToSelectIndex;
    long long _waitingToPreviewIndex;
    NSString *_waitingToSelectAssetId;
    unsigned long long _m_adjustRevertIndex;
    MMAlbumAuthorizationReportObject *_accessAuthReportObject;
    MMImagePickerVideoCompressQueue *_videoCompressQueue;
    NSMutableSet *_autoSelectAssetViews;
    MMUIButton *_skipBtn;
    NSMutableArray *_failAssets;
    NSMutableDictionary *_cameraTakenPhotoDictionary;
    UILabel *_bottomBarTipsLabel;
    NSHashTable *_assetInfoTable;
    MMAssetPickerControllerState *_assetPickerState;
    WCFinderFeedPickerViewController *_finderPickerController;
    MMAlbumDropableTitleWithMultipleSectionView *_multipleSectionTitle;
    MMDropableTitleView *_defaultDropableTitle;
    MMAssetUserActionTipsView *_userActionTipsView;
    struct UIEdgeInsets _additionalTableViewInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAssetUserActionTipsView *userActionTipsView; // @synthesize userActionTipsView=_userActionTipsView;
@property(nonatomic) _Bool isAssetScrollViewUserDragging; // @synthesize isAssetScrollViewUserDragging=_isAssetScrollViewUserDragging;
@property(retain, nonatomic) MMDropableTitleView *defaultDropableTitle; // @synthesize defaultDropableTitle=_defaultDropableTitle;
@property(retain, nonatomic) MMAlbumDropableTitleWithMultipleSectionView *multipleSectionTitle; // @synthesize multipleSectionTitle=_multipleSectionTitle;
@property(retain, nonatomic) WCFinderFeedPickerViewController *finderPickerController; // @synthesize finderPickerController=_finderPickerController;
@property(retain, nonatomic) MMAssetPickerControllerState *assetPickerState; // @synthesize assetPickerState=_assetPickerState;
@property(retain, nonatomic) NSHashTable *assetInfoTable; // @synthesize assetInfoTable=_assetInfoTable;
@property(retain, nonatomic) UILabel *bottomBarTipsLabel; // @synthesize bottomBarTipsLabel=_bottomBarTipsLabel;
@property(retain, nonatomic) NSMutableDictionary *cameraTakenPhotoDictionary; // @synthesize cameraTakenPhotoDictionary=_cameraTakenPhotoDictionary;
@property(retain, nonatomic) NSMutableArray *failAssets; // @synthesize failAssets=_failAssets;
@property(retain, nonatomic) MMUIButton *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) NSMutableSet *autoSelectAssetViews; // @synthesize autoSelectAssetViews=_autoSelectAssetViews;
@property(nonatomic) _Bool isAccessLimited; // @synthesize isAccessLimited=_isAccessLimited;
@property(retain, nonatomic) MMImagePickerVideoCompressQueue *videoCompressQueue; // @synthesize videoCompressQueue=_videoCompressQueue;
@property(retain, nonatomic) MMAlbumAuthorizationReportObject *accessAuthReportObject; // @synthesize accessAuthReportObject=_accessAuthReportObject;
@property(nonatomic) unsigned long long m_adjustRevertIndex; // @synthesize m_adjustRevertIndex=_m_adjustRevertIndex;
@property(nonatomic) _Bool bPickerStyleForFile; // @synthesize bPickerStyleForFile=_bPickerStyleForFile;
@property(nonatomic) _Bool isDragged; // @synthesize isDragged=_isDragged;
@property(retain, nonatomic) NSString *waitingToSelectAssetId; // @synthesize waitingToSelectAssetId=_waitingToSelectAssetId;
@property(nonatomic) long long waitingToPreviewIndex; // @synthesize waitingToPreviewIndex=_waitingToPreviewIndex;
@property(nonatomic) long long waitingToSelectIndex; // @synthesize waitingToSelectIndex=_waitingToSelectIndex;
@property(retain, nonatomic) UIView *finderTemplateLegalTipView; // @synthesize finderTemplateLegalTipView=_finderTemplateLegalTipView;
@property(retain, nonatomic) NSMutableArray *assetExifInfo; // @synthesize assetExifInfo=_assetExifInfo;
@property(retain, nonatomic) NSMutableArray *hybridAVAssetArray; // @synthesize hybridAVAssetArray=_hybridAVAssetArray;
@property(retain, nonatomic) NSMutableArray *hybridFileArray; // @synthesize hybridFileArray=_hybridFileArray;
@property(nonatomic) _Bool isTopBarAnimating; // @synthesize isTopBarAnimating=_isTopBarAnimating;
@property(retain, nonatomic) MMAssetPickerSlider *slider; // @synthesize slider=_slider;
@property(nonatomic) _Bool didSwitchToCamera; // @synthesize didSwitchToCamera=_didSwitchToCamera;
@property(retain, nonatomic) MMSightCameraViewController *sightCameraVC; // @synthesize sightCameraVC=_sightCameraVC;
@property(retain, nonatomic) MMAssetPickerActionBottomView *bottomActionView; // @synthesize bottomActionView=_bottomActionView;
@property(retain, nonatomic) MMScrollView *assetPickerScrollView; // @synthesize assetPickerScrollView=_assetPickerScrollView;
@property(retain, nonatomic) MMAlbumAccessAuthView *accessAuthView; // @synthesize accessAuthView=_accessAuthView;
@property(retain, nonatomic) UIView *bottomBarBlurView; // @synthesize bottomBarBlurView=_bottomBarBlurView;
@property(retain, nonatomic) UIView *accessLimitTipView; // @synthesize accessLimitTipView=_accessLimitTipView;
@property(retain, nonatomic) UIView *navBarBlurView; // @synthesize navBarBlurView=_navBarBlurView;
@property(retain, nonatomic) MMUILabel *rawTotalSizeLabel; // @synthesize rawTotalSizeLabel=_rawTotalSizeLabel;
@property(retain, nonatomic) MMUIImageView *originSelectIconView; // @synthesize originSelectIconView=_originSelectIconView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMAssetPickerControllerProxyObjectForAllAsset *m_proxyPreviewObjectForAllAsset; // @synthesize m_proxyPreviewObjectForAllAsset=_m_proxyPreviewObjectForAllAsset;
@property(retain, nonatomic) MMAlbumDropPickerController *dropController; // @synthesize dropController=_dropController;
@property(nonatomic) _Bool reloadAnimating; // @synthesize reloadAnimating=_reloadAnimating;
@property(nonatomic) long long reloadAnimateCounter; // @synthesize reloadAnimateCounter=_reloadAnimateCounter;
@property(nonatomic) __weak MMAsset *lastSelectedAsset; // @synthesize lastSelectedAsset=_lastSelectedAsset;
@property(retain, nonatomic) NSMutableSet *limitAssetIds; // @synthesize limitAssetIds=_limitAssetIds;
@property(retain, nonatomic) NSMutableSet *dragSelectedAssetIds; // @synthesize dragSelectedAssetIds=_dragSelectedAssetIds;
@property(retain, nonatomic) NSMutableSet *selectedOtherAssetIds; // @synthesize selectedOtherAssetIds=_selectedOtherAssetIds;
@property(retain, nonatomic) NSMutableSet *selectedDefaultAssetIds; // @synthesize selectedDefaultAssetIds=_selectedDefaultAssetIds;
@property(nonatomic) long long colNum; // @synthesize colNum=_colNum;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) _Bool didFinishLoadAlbum; // @synthesize didFinishLoadAlbum=_didFinishLoadAlbum;
@property(nonatomic) _Bool isDefaultAlbum; // @synthesize isDefaultAlbum=_isDefaultAlbum;
@property(nonatomic) _Bool m_directToFirstAlbum; // @synthesize m_directToFirstAlbum=_m_directToFirstAlbum;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton=_m_hasClickSendButton;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset=_m_isJustReturnMMAsset;
@property(nonatomic) struct UIEdgeInsets additionalTableViewInsets; // @synthesize additionalTableViewInsets=_additionalTableViewInsets;
@property(nonatomic) unsigned long long preCompressCount; // @synthesize preCompressCount=_preCompressCount;
@property(retain, nonatomic) WCFinderPreviewEditVideoCompositionTask *postFinderTask; // @synthesize postFinderTask=_postFinderTask;
@property(retain, nonatomic) WCFinderPreviewEditVideoCompositionTask *preFinderTask; // @synthesize preFinderTask=_preFinderTask;
@property(retain, nonatomic) VideoEncodeTask *postEncodeTask; // @synthesize postEncodeTask=_postEncodeTask;
@property(retain, nonatomic) VideoEncodeTask *preEncodeTask; // @synthesize preEncodeTask=_preEncodeTask;
@property(retain, nonatomic) WCFinderSyncComposeResModel *preCompositionResult; // @synthesize preCompositionResult=_preCompositionResult;
@property(nonatomic) _Bool isSupportHeif; // @synthesize isSupportHeif=_isSupportHeif;
@property(nonatomic) _Bool isHiddenSliderTopMask; // @synthesize isHiddenSliderTopMask=_isHiddenSliderTopMask;
@property(retain, nonatomic) MMAssetDragSelectHelper *dragSelectHelper; // @synthesize dragSelectHelper=_dragSelectHelper;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfos; // @synthesize selectedAssetInfos=_selectedAssetInfos;
@property(nonatomic) _Bool disableInteractivePop; // @synthesize disableInteractivePop=_disableInteractivePop;
@property(nonatomic) _Bool isOriginSelected; // @synthesize isOriginSelected=_isOriginSelected;
@property(retain, nonatomic) MMAlbum *m_album; // @synthesize m_album=_m_album;
@property(retain, nonatomic) UIImageView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(nonatomic) __weak id <MMAssetPickerControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (_Bool)isOnFinderScene;
- (void)bindBottomSendBtnToReport;
- (void)registerYReportSdk;
- (void)scrollVisibleToIndexPath:(id)arg1;
- (id)convertTableIndexPathFromAssetIndexPath:(id)arg1;
- (id)assetViewForIndexPath:(id)arg1;
- (id)convertAssetIndexPathFromPoint:(struct CGPoint)arg1;
- (void)notifyLimitTips:(id)arg1 assetInfo:(id)arg2 scene:(unsigned long long)arg3 showAlert:(_Bool)arg4;
- (void)dragSelectDoActionForIndexPath:(id)arg1 select:(_Bool)arg2;
- (_Bool)dragSelectAssetIsSelectedAtPoint:(struct CGPoint)arg1;
- (id)dragSelectIndexPathForRowAtPoint:(struct CGPoint)arg1;
- (id)genSendBtnDataReportDict;
- (void)onRealAlbumFinsihLoad:(id)arg1;
- (void)didClickCancel;
- (void)OnCancel:(id)arg1;
- (long long)getSelectedFirstAssetType;
- (void)OnCompressedSuccess:(id)arg1;
- (void)OnCompressEnd:(id)arg1;
- (void)OnCompressBegin;
- (_Bool)getPickerWAVideoCompressedFromOptionObj;
- (unsigned long long)getPickerSceneFromOptionObj;
- (CDUnknownBlockType)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(_Bool)arg3 exifLogInfo:(id)arg4;
- (void)compressAndSendVideo:(id)arg1;
- (void)asyncGetAssetVideo:(id)arg1 compress:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (void)onAccessAuthOpenWechatSetting;
- (void)onAccessAuthShowLimitedPhotos;
- (void)openSystemSetting;
- (void)onAccessAuthOpenSystemSetting;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)sendImageWithEditImageAttr:(id)arg1;
- (void)sendVideoWithDraft:(id)arg1;
- (void)sendVideoWithURL:(id)arg1;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (_Bool)canAsyncCompositeVideo;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(id)arg1;
- (void)onSightCameraViewControllerDidOpenCamera;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightCameraViewControllerCancelEditing;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraViewControllerDidStopCamera;
- (void)onSightCameraClose:(id)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)waitingToPreviewIndex:(long long)arg1 assetId:(id)arg2;
- (void)waitingToSelectIndex:(long long)arg1 assetId:(id)arg2;
- (struct CGRect)assetViewFrameGlobal:(id)arg1;
- (long long)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (_Bool)isSendButtonEnable;
- (void)updateAssetPickerControllerWithState:(id)arg1;
- (id)_onUserActionCheckChangedFromSource:(long long)arg1;
- (void)previewBrowserDidFinished:(id)arg1;
- (id)previewBrowser:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3;
- (id)previewBrowser:(id)arg1 willEditVideoAsset:(id)arg2;
- (id)previewBrowser:(id)arg1 didDeselectBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 willDeselectBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 didSelectBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 willSelectBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 didLoadBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 willLoadBrowserView:(id)arg2;
- (id)previewBrowser:(id)arg1 withBrowserView:(id)arg2 didChangeUserActionCheckTo:(_Bool)arg3 enabled:(_Bool)arg4;
- (id)previewBrowser:(id)arg1 withBrowserView:(id)arg2 willChangeUserActionCheckTo:(_Bool)arg3 enabled:(_Bool)arg4;
- (void)onOriginImageCheckChanged;
- (void)onMoveSelectedInfo:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)sendVideoWithAsset:(id)arg1;
- (void)clickAssetInfo:(id)arg1;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)arg1;
- (void)onRemoveSelectedInfo:(id)arg1;
- (void)onRemoveSelectedInfoWithAssetId:(id)arg1;
- (void)onFinishEditAssetInfo:(id)arg1;
- (id)dictionaryWithGPSInfoString:(id)arg1;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 sliderContentOffset:(struct CGPoint)arg3;
- (void)previewBrowser:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)onImagePreviewBrowserControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onImagePreviewBrowserControllerStartExportingWithAssetId:(id)arg1;
- (void)onImagePreviewBrowserControllerResumePreview;
- (void)onImagePreviewBrowserControllerCancelPreview;
- (void)onImagePreviewBrowserControllerCancelEditing;
- (void)onImagePreviewBrowserControllerStartEditing;
- (_Bool)canSelectAssetInPreview:(id)arg1;
- (_Bool)hasBeenAddedCheckWithArray:(id)arg1 andImage:(id)arg2;
- (void)_onFinderEdit;
- (void)selectedFinderPostShortAsset;
- (void)loadAssetForFinderPost:(id)arg1 postAction:(CDUnknownBlockType)arg2;
- (void)sendImageFromScene:(long long)arg1;
- (void)cancelSelectFromImagePreview;
- (void)onSelectAssetFinished:(id)arg1 isAutoSelct:(_Bool)arg2;
- (id)onAssetViewDidDeselect:(id)arg1;
- (id)onAssetViewWillDeselect:(id)arg1;
- (id)onAssetViewDidSelect:(id)arg1;
- (id)onAssetViewWillSelect:(id)arg1;
- (_Bool)canOpenCameraWithVideoMode;
- (void)onOpenCamera;
- (void)onPickMorePhoto;
- (void)assetPickerSlider:(id)arg1 didChangeValue:(double)arg2;
- (void)assetPickerSlider:(id)arg1 didChangeActiveState:(_Bool)arg2;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (void)initFinderPickerView;
- (void)switchToPageIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)onClickDropableTitleView:(id)arg1;
- (void)onAlbumTitleWillDeactive;
- (void)onSwitchToSectionAtIndex:(unsigned long long)arg1;
- (void)updateNavigationBarAndBottomActionViewStateWithScrollPercent:(double)arg1;
- (void)handleHorizontalScrollForFinder;
- (void)handleHorizontalScrollForCamera;
- (void)assetPickerScrollViewDidEndScroll;
- (void)handleAssetPickerDidScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isSelectedAssetInfosContainsVideo;
- (void)showExceedFileLimitTips;
- (void)hiddenExceedFileLimitTips;
- (void)updateSelectTotalSize;
- (void)showRawTotalSize:(unsigned long long)arg1;
- (void)showTipWithWording:(id)arg1;
- (void)sendFail;
- (void)postProcessImages;
- (void)generateOriginAssetData:(id)arg1 data:(id)arg2 dic:(id)arg3;
- (void)processingImage;
- (void)reloadPreviewBrowser;
- (void)stopPreviewBrowserLoading;
- (_Bool)startPreviewBrowserLoading;
- (void)reactivePreviewBrowserSendButton;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2;
- (void)stopLoadingAfterSent;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)cellHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)assetsForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeAssetsInChangeInfo:(id)arg1;
- (void)onAlbumChanged:(id)arg1 changeInfo:(id)arg2;
- (void)readAlbumsErrorWithAlbumDropPicker:(id)arg1;
- (void)authorizeErrorWithAlbumDropPicker:(id)arg1;
- (void)albumDropPicker:(id)arg1 didSelectAtAlbum:(id)arg2 isDefault:(_Bool)arg3;
- (id)getAlbumTitleView;
- (void)recordUnselectedAsset:(id)arg1;
- (void)recordDragSelectedAsset:(id)arg1;
- (void)recordSelectedAsset:(id)arg1;
- (void)adjustTableViewInitOffset;
- (void)addOutterSelectInfo;
- (void)removeBarBlurEffect;
- (void)removeAllSeletedMedia;
- (void)sendSelectedMedia;
- (void)onClickFooterViewButton;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onJumpToSystemSetting:(id)arg1;
- (void)OnAssetSend:(id)arg1;
- (void)OnSkipBtnClick:(id)arg1;
- (void)OnPreview:(id)arg1;
- (void)onQuit;
- (void)handleClickUserActionCheck;
- (void)onClickUserActionCheck:(id)arg1;
- (void)onOriginImageCheck:(id)arg1;
- (void)editPhoto:(id)arg1 withScene:(int)arg2;
- (void)saveAsset:(_Bool)arg1;
- (void)saveEditedVideo;
- (void)saveEditedImage:(_Bool)arg1;
- (void)previewImageOfSelectedWithIndex:(unsigned int)arg1;
- (void)editAssetWithAssetInfo:(id)arg1 andFinishPicker:(_Bool)arg2;
- (void)reloadPreviewOnMainThread;
- (void)stopPreviewLoading;
- (void)startPreviewLoadingIfPreviewing;
- (void)previewImageWithAssetInfo:(id)arg1;
- (void)handlePreviewTextStateVideoWithAnAvAsset:(id)arg1 AssetInfo:(id)arg2;
- (void)previewTextStateVideoWithAssetInfo:(id)arg1;
- (void)removeImagePreviewControllerIfShowing:(CDUnknownBlockType)arg1;
- (id)prepareImagePreviewControllerWithStartAssetInfo:(id)arg1;
- (void)reloadCameraButtonOnCell:(id)arg1;
- (void)reloadCameraButton;
- (unsigned int)getVideoUploadScene:(_Bool)arg1;
- (int)pickerScene;
- (void)reloadBottomBar;
- (void)configureSkipBtnVisibleState:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadPhotoViewWithAnimated:(_Bool)arg1 scrollToBottom:(_Bool)arg2;
- (void)reloadAssetPickerWithPreview:(_Bool)arg1 dataSource:(_Bool)arg2;
- (void)scrollToBottom;
- (void)updateOriginImageCheckAccessibility;
- (id)packedAssetPickerState;
- (_Bool)shouldInteractiveDismiss;
- (void)initGesture;
- (void)adjustSubviewRects;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)adjustTitleView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)layoutBottomBarWithTop:(double)arg1;
- (void)updateTopBottomBarStateForHide;
- (void)updateTopBottomBarStateForShow;
- (void)hideTopBottomBar:(CDUnknownBlockType)arg1;
- (void)showTopBottomBar:(CDUnknownBlockType)arg1;
- (void)setTopBottomBarHidden:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (double)tableViewScrollContentOffsetYPercent;
- (_Bool)canShowPickerSlider;
- (void)initPickerSlider;
- (void)tryInitAccessAuthView;
- (void)initBottomAccessLimitTipView;
- (void)onReShowTemplateLegalTips;
- (void)initBottomFinderTemplateLegalTipsView;
- (void)showOperationBtnWithoutAuth;
- (void)initNoAuthTitleView;
- (id)navTitleView;
- (void)initTitleView;
- (void)hideBottomBarIfNeeded;
- (void)showBottomBarIfNeeded;
- (void)switchToPickerWithAnimate:(_Bool)arg1 isDelayDeActiveCamera:(_Bool)arg2;
- (void)performSwitchCameraAnimation;
- (void)switchToCameraWithAnimate:(_Bool)arg1;
- (id)tryGetSightCameraVC;
- (void)activeCameraIfNeeded;
- (unsigned long long)suitableShortVideoToolbarUIStyle16To9;
- (void)initBottomActionView;
- (void)initBottomBarFloatView;
- (void)templateComposingButtonDidTouchUpInside:(id)arg1;
- (void)initTemplateComposingButtonForFinderMJPublisher;
- (void)startUserActionTipsShowAnimationIfNeeded;
- (_Bool)isUserActionTipsShow;
- (void)layoutUserActionTipsViewIfNeeded;
- (void)initUserActionTipsViewIfNeeded;
- (void)initBottomBar;
- (void)initFooterViewButtonWithTitle:(id)arg1 andImage:(id)arg2;
- (double)getContentViewY;
- (id)navigationBarBackgroundColor;
- (void)updateTableViewContentInset;
- (struct UIEdgeInsets)getTableViewContentInset;
- (void)initTableView;
- (_Bool)canShowCameraPage;
- (_Bool)canShowFinderPage;
- (unsigned long long)assetsPickerPages;
- (void)updateAssetPickerScrollViewScrollableState;
- (_Bool)canAssetPickerPagingScroll;
- (void)initAssetPickerScrollView;
- (void)initView;
- (void)reportAccessAuthInterruptIfNeeded;
- (void)initData;
- (void)tryStartLoadAlbum;
- (void)requestWechatAuthAndLoadAlbum;
- (_Bool)isSystemAuthDenied;
- (_Bool)isSystemAuthNotDetermined;
- (_Bool)isWechatAuthorized;
- (_Bool)isPhotoAuthorized;
- (void)_tryToLoadPhotoData;
- (_Bool)canShowCameraButtonInPicker;
- (_Bool)canShowAddButton;
- (void)rebuildAlbumData;
- (_Bool)isAssetSelectable:(id)arg1;
- (_Bool)hasSelectBothImageAndVideoAsset;
- (_Bool)hasSelectVideoAsset;
- (_Bool)hasSelectImageAsset;
- (_Bool)disableScrollViewBottomInsetAdjustment;
- (long long)overrideUserInterfaceStyle;
- (void)addAssetSize:(id)arg1 forAsset:(unsigned long long)arg2;
- (id)getSelectedAssetInfos;
- (id)getSelectedAssets;
- (unsigned long long)selectedVideoAssetCount;
- (unsigned long long)selectedAssetInfosCount;
- (void)dealloc;
- (void)reloadData;
- (id)init;
- (id)initForJustReturnMMAsset:(_Bool)arg1 withAdjustRevertIndex:(unsigned long long)arg2 withDirectToFirstAlbum:(_Bool)arg3;
- (_Bool)isForbidPageSheet;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)processAssetAndPresentToFinderImageEditVCWithAssets:(id)arg1 images:(id)arg2 fromScene:(unsigned long long)arg3 entranceScene:(unsigned long long)arg4;
- (void)processAssetAndPresentToFinderTemplateVCWithAssets:(id)arg1 images:(id)arg2 materials:(id)arg3 fromScene:(unsigned long long)arg4 entranceScene:(unsigned long long)arg5;
- (void)onEditImageWithAssets:(id)arg1 fromScene:(unsigned long long)arg2 entranceScene:(unsigned long long)arg3;
- (void)finderProcessWithTemplateVideoPath:(id)arg1 templateParams:(id)arg2;
- (void)finderTemplateVideoVC:(id)arg1 didExportFinishWithPath:(id)arg2 outputParams:(id)arg3;
- (void)finderTemplateProcessVC:(id)arg1 didExportFinishWithPath:(id)arg2 outputParams:(id)arg3;
- (void)editVideoViewController:(id)arg1 currentVC:(id)arg2 requestToLaunchMJAppWithScene:(unsigned long long)arg3 launchType:(long long)arg4 editTab:(long long)arg5 musicId:(id)arg6 exportedOpenWX:(int)arg7 launchCallback:(CDUnknownBlockType)arg8;
- (void)syncHandleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)asyncHandleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)handleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2 isAsyncCompositeEnabled:(_Bool)arg3;
- (_Bool)enableAsyncCompositeVideo:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)onEditTemplateVideoWithAssets:(id)arg1;
- (void)processAssetAndPresentToFinderEditVCWithAssets:(id)arg1 entranceType:(unsigned long long)arg2;
- (void)processAssetAndPresentToFinderTemplateProcessVCWithAssets:(id)arg1 entranceType:(unsigned long long)arg2;
- (void)onEditVideoWithAssets:(id)arg1 entranceType:(unsigned long long)arg2;
- (void)preSyncEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)preAsyncHandleEditVideo:(id)arg1 fromEditVideoViewController:(id)arg2;
- (void)cancelSyncEditVideo;
- (void)cancelAsyncEditVideo;
- (void)onWCEditVideoPreCancelEditor:(id)arg1;
- (void)onWCEditVideoPreComposeViewController:(id)arg1 didFinishEditingVideo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
