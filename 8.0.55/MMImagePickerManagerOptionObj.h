//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveImagePickerParams, MMNearbyPoiInfo, NSArray, NSMutableDictionary, NSNumber, NSString, WCFinderEditOptionModel, WCFinderPickerTemplateParams;
@protocol MMAssetPickerUserActionTipsProtocol;

@interface MMImagePickerManagerOptionObj
{
    _Bool _isCamera;
    _Bool _isFrontCameraDevice;
    _Bool _isOnlyShowVideoMode;
    _Bool _isNotShowVideoSizeAlertView;
    _Bool _canSendOriginalImage;
    _Bool _canSendVideoMessage;
    _Bool _canSendMultiImage;
    _Bool _needThumbImage;
    _Bool m_isJustReturnMMAsset;
    _Bool m_directToFirstAlbum;
    _Bool _canSendGif;
    _Bool _isWAVideoCompressed;
    _Bool _isPresentInSplitVC;
    _Bool _isAllowCache;
    _Bool _isSightCamera;
    _Bool _isSightCameraLandscapeEnabled;
    _Bool _isAsyncCompositeEnabled;
    _Bool _isHidePreviewPlayButton;
    _Bool _customizesClickAction;
    _Bool _forceSendOriginalImage;
    _Bool _isUserActionCheckShowed;
    _Bool _enforceUserActionCheck;
    _Bool _enforceUserActionUnCheck;
    _Bool _isUserActionSelected;
    _Bool _shouldShowFinderMJPublisherTemplateComposingButton;
    _Bool _canSendMultiVideo;
    _Bool _canHybridSendAsset;
    _Bool _disableVideoSelection;
    _Bool _isOpenSendOriginVideo;
    _Bool _isPickerCustom;
    _Bool _videoDirectToEditMode;
    _Bool _imageDirectToEditMode;
    _Bool _buttonEnableAfterSend;
    _Bool _isPickerForceFullScreen;
    _Bool _showSkipBtn;
    _Bool _showsCameraButtonInPicker;
    _Bool _showsCameraButtonAtBottom;
    _Bool _isCameraButtonDisabled;
    _Bool _isInternalAction;
    _Bool _toVideoTemplateEditor;
    _Bool _toVideoTemplateSelectAndEditViewController;
    _Bool _showFinderPicker;
    _Bool _doNotAutoHandleImageEditorDismiss;
    _Bool _isSupportHeif;
    _Bool _showAssetWithLocationOnly;
    int _previewType;
    int _compressType;
    int _finishWordMode;
    int m_pickerScene;
    int _previewEditScene;
    unsigned long long _uiMaxVideoDuration;
    unsigned long long _uiMinVideoDuration;
    long long _maxImageCount;
    NSArray *_selectedImageURLs;
    NSArray *_selectedImageAssets;
    id _delegateObj;
    unsigned long long m_adjustRevertIndex;
    unsigned long long _maxGifDataSize;
    CDUnknownBlockType _assetSelectedBlock;
    unsigned long long _authScene;
    unsigned long long _sightCameraMode;
    long long _userActionCheckScene;
    NSString *_userActionCheckTitle;
    id <MMAssetPickerUserActionTipsProtocol> _userActionTipsActivity;
    long long _canDragSelect;
    MMNearbyPoiInfo *_poiInfo;
    long long _videoQualityType;
    WCFinderEditOptionModel *_finderOptionModel;
    NSString *_monoServiceId;
    NSString *_footerViewButtonTitle;
    NSString *_videoTemplateId;
    NSString *_videoTemplateMusicId;
    NSString *_pickerBottomTips;
    WCFinderPickerTemplateParams *_finderTemplateParams;
    MMFinderLiveImagePickerParams *_finderLiveParams;
    NSString *_pickerBottomFloatText;
    NSNumber *_bottomInset;
    NSMutableDictionary *_dicExtInfo;
    long long _livePhotoMode;
    struct _NSRange _selectCountLimit;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showAssetWithLocationOnly; // @synthesize showAssetWithLocationOnly=_showAssetWithLocationOnly;
@property(nonatomic) _Bool isSupportHeif; // @synthesize isSupportHeif=_isSupportHeif;
@property(nonatomic) long long livePhotoMode; // @synthesize livePhotoMode=_livePhotoMode;
@property(retain, nonatomic) NSMutableDictionary *dicExtInfo; // @synthesize dicExtInfo=_dicExtInfo;
@property(retain, nonatomic) NSNumber *bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) _Bool doNotAutoHandleImageEditorDismiss; // @synthesize doNotAutoHandleImageEditorDismiss=_doNotAutoHandleImageEditorDismiss;
@property(nonatomic) _Bool showFinderPicker; // @synthesize showFinderPicker=_showFinderPicker;
@property(copy, nonatomic) NSString *pickerBottomFloatText; // @synthesize pickerBottomFloatText=_pickerBottomFloatText;
@property(retain, nonatomic) MMFinderLiveImagePickerParams *finderLiveParams; // @synthesize finderLiveParams=_finderLiveParams;
@property(retain, nonatomic) WCFinderPickerTemplateParams *finderTemplateParams; // @synthesize finderTemplateParams=_finderTemplateParams;
@property(nonatomic) _Bool toVideoTemplateSelectAndEditViewController; // @synthesize toVideoTemplateSelectAndEditViewController=_toVideoTemplateSelectAndEditViewController;
@property(nonatomic) struct _NSRange selectCountLimit; // @synthesize selectCountLimit=_selectCountLimit;
@property(copy, nonatomic) NSString *pickerBottomTips; // @synthesize pickerBottomTips=_pickerBottomTips;
@property(copy, nonatomic) NSString *videoTemplateMusicId; // @synthesize videoTemplateMusicId=_videoTemplateMusicId;
@property(copy, nonatomic) NSString *videoTemplateId; // @synthesize videoTemplateId=_videoTemplateId;
@property(nonatomic) _Bool toVideoTemplateEditor; // @synthesize toVideoTemplateEditor=_toVideoTemplateEditor;
@property(nonatomic) _Bool isInternalAction; // @synthesize isInternalAction=_isInternalAction;
@property(nonatomic) _Bool isCameraButtonDisabled; // @synthesize isCameraButtonDisabled=_isCameraButtonDisabled;
@property(nonatomic) _Bool showsCameraButtonAtBottom; // @synthesize showsCameraButtonAtBottom=_showsCameraButtonAtBottom;
@property(nonatomic) _Bool showsCameraButtonInPicker; // @synthesize showsCameraButtonInPicker=_showsCameraButtonInPicker;
@property(retain, nonatomic) NSString *footerViewButtonTitle; // @synthesize footerViewButtonTitle=_footerViewButtonTitle;
@property(retain, nonatomic) NSString *monoServiceId; // @synthesize monoServiceId=_monoServiceId;
@property(nonatomic) _Bool showSkipBtn; // @synthesize showSkipBtn=_showSkipBtn;
@property(retain, nonatomic) WCFinderEditOptionModel *finderOptionModel; // @synthesize finderOptionModel=_finderOptionModel;
@property(nonatomic) _Bool isPickerForceFullScreen; // @synthesize isPickerForceFullScreen=_isPickerForceFullScreen;
@property(nonatomic) long long videoQualityType; // @synthesize videoQualityType=_videoQualityType;
@property(nonatomic) _Bool buttonEnableAfterSend; // @synthesize buttonEnableAfterSend=_buttonEnableAfterSend;
@property(nonatomic) _Bool imageDirectToEditMode; // @synthesize imageDirectToEditMode=_imageDirectToEditMode;
@property(nonatomic) _Bool videoDirectToEditMode; // @synthesize videoDirectToEditMode=_videoDirectToEditMode;
@property(nonatomic) _Bool isPickerCustom; // @synthesize isPickerCustom=_isPickerCustom;
@property(retain, nonatomic) MMNearbyPoiInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) _Bool isOpenSendOriginVideo; // @synthesize isOpenSendOriginVideo=_isOpenSendOriginVideo;
@property(nonatomic) _Bool disableVideoSelection; // @synthesize disableVideoSelection=_disableVideoSelection;
@property(nonatomic) _Bool canHybridSendAsset; // @synthesize canHybridSendAsset=_canHybridSendAsset;
@property(nonatomic) long long canDragSelect; // @synthesize canDragSelect=_canDragSelect;
@property(nonatomic) _Bool canSendMultiVideo; // @synthesize canSendMultiVideo=_canSendMultiVideo;
@property(nonatomic) _Bool shouldShowFinderMJPublisherTemplateComposingButton; // @synthesize shouldShowFinderMJPublisherTemplateComposingButton=_shouldShowFinderMJPublisherTemplateComposingButton;
@property(retain, nonatomic) id <MMAssetPickerUserActionTipsProtocol> userActionTipsActivity; // @synthesize userActionTipsActivity=_userActionTipsActivity;
@property(retain, nonatomic) NSString *userActionCheckTitle; // @synthesize userActionCheckTitle=_userActionCheckTitle;
@property(nonatomic) _Bool isUserActionSelected; // @synthesize isUserActionSelected=_isUserActionSelected;
@property(nonatomic) _Bool enforceUserActionUnCheck; // @synthesize enforceUserActionUnCheck=_enforceUserActionUnCheck;
@property(nonatomic) _Bool enforceUserActionCheck; // @synthesize enforceUserActionCheck=_enforceUserActionCheck;
@property(nonatomic) _Bool isUserActionCheckShowed; // @synthesize isUserActionCheckShowed=_isUserActionCheckShowed;
@property(nonatomic) long long userActionCheckScene; // @synthesize userActionCheckScene=_userActionCheckScene;
@property(nonatomic) _Bool forceSendOriginalImage; // @synthesize forceSendOriginalImage=_forceSendOriginalImage;
@property(nonatomic) _Bool customizesClickAction; // @synthesize customizesClickAction=_customizesClickAction;
@property(nonatomic) _Bool isHidePreviewPlayButton; // @synthesize isHidePreviewPlayButton=_isHidePreviewPlayButton;
@property(nonatomic) int previewEditScene; // @synthesize previewEditScene=_previewEditScene;
@property(nonatomic) _Bool isAsyncCompositeEnabled; // @synthesize isAsyncCompositeEnabled=_isAsyncCompositeEnabled;
@property(nonatomic) _Bool isSightCameraLandscapeEnabled; // @synthesize isSightCameraLandscapeEnabled=_isSightCameraLandscapeEnabled;
@property(nonatomic) unsigned long long sightCameraMode; // @synthesize sightCameraMode=_sightCameraMode;
@property(nonatomic) _Bool isSightCamera; // @synthesize isSightCamera=_isSightCamera;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(copy, nonatomic) CDUnknownBlockType assetSelectedBlock; // @synthesize assetSelectedBlock=_assetSelectedBlock;
@property(nonatomic) _Bool isAllowCache; // @synthesize isAllowCache=_isAllowCache;
@property(nonatomic) _Bool isPresentInSplitVC; // @synthesize isPresentInSplitVC=_isPresentInSplitVC;
@property(nonatomic) unsigned long long maxGifDataSize; // @synthesize maxGifDataSize=_maxGifDataSize;
@property(nonatomic) _Bool isWAVideoCompressed; // @synthesize isWAVideoCompressed=_isWAVideoCompressed;
@property(nonatomic) _Bool canSendGif; // @synthesize canSendGif=_canSendGif;
@property(nonatomic) _Bool m_directToFirstAlbum; // @synthesize m_directToFirstAlbum;
@property(nonatomic) unsigned long long m_adjustRevertIndex; // @synthesize m_adjustRevertIndex;
@property(nonatomic) int m_pickerScene; // @synthesize m_pickerScene;
@property(nonatomic) _Bool m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(nonatomic) __weak id delegateObj; // @synthesize delegateObj=_delegateObj;
@property(nonatomic) int finishWordMode; // @synthesize finishWordMode=_finishWordMode;
@property(retain, nonatomic) NSArray *selectedImageAssets; // @synthesize selectedImageAssets=_selectedImageAssets;
@property(retain, nonatomic) NSArray *selectedImageURLs; // @synthesize selectedImageURLs=_selectedImageURLs;
@property(nonatomic) int compressType; // @synthesize compressType=_compressType;
@property(nonatomic) long long maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) _Bool needThumbImage; // @synthesize needThumbImage=_needThumbImage;
@property(nonatomic) _Bool canSendMultiImage; // @synthesize canSendMultiImage=_canSendMultiImage;
@property(nonatomic) _Bool canSendVideoMessage; // @synthesize canSendVideoMessage=_canSendVideoMessage;
@property(nonatomic) _Bool canSendOriginalImage; // @synthesize canSendOriginalImage=_canSendOriginalImage;
@property(nonatomic) int previewType; // @synthesize previewType=_previewType;
@property(nonatomic) unsigned long long uiMinVideoDuration; // @synthesize uiMinVideoDuration=_uiMinVideoDuration;
@property(nonatomic) unsigned long long uiMaxVideoDuration; // @synthesize uiMaxVideoDuration=_uiMaxVideoDuration;
@property(nonatomic) _Bool isNotShowVideoSizeAlertView; // @synthesize isNotShowVideoSizeAlertView=_isNotShowVideoSizeAlertView;
@property(nonatomic) _Bool isOnlyShowVideoMode; // @synthesize isOnlyShowVideoMode=_isOnlyShowVideoMode;
@property(nonatomic) _Bool isFrontCameraDevice; // @synthesize isFrontCameraDevice=_isFrontCameraDevice;
@property(nonatomic) _Bool isCamera; // @synthesize isCamera=_isCamera;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getImagePickerByPassInfo;
- (void)setImagePickerByPassInfo:(id)arg1;
- (id)getByPassInfo;
- (void)setByPassInfoObject:(id)arg1 forKey:(id)arg2;

@end

