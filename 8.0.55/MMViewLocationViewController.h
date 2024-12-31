//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnnotationLogicController, CAGradientLayer, CLLocation, FavDataItemWrap, FavoritesItem, ForwardMessageLogicController, MMFloorPickView, MMMapView, MMScrollActionSheet, MMTimer, NSString, NavigateLogicController, POIInfo, PickLocationAnnotationView, UIButton, UIView, UnderLineLabel;
@protocol IFinderPOIDetailViewController, ViewLocationDelegate;

@interface MMViewLocationViewController
{
    _Bool _canAddToFav;
    _Bool _canSendToFriend;
    _Bool _directShowDirection;
    _Bool _isLoadFinish;
    _Bool _isMapRegionChanging;
    _Bool _hasReportLocateError;
    unsigned long long _headingTag;
    unsigned int _reportNavTapCount;
    double _trueHeading;
    POIInfo *_poiInfo;
    UIButton *_myLocationButton;
    MMMapView *_mapView;
    MMFloorPickView *_floorPickView;
    MMTimer *_updateUserLocationTimer;
    UnderLineLabel *_infoLabel;
    NavigateLogicController *_navigateLogicController;
    AnnotationLogicController *_annotationLogicController;
    ForwardMessageLogicController *_forwardLogicController;
    id <ViewLocationDelegate> _delegate;
    int _locationUpdateCount;
    _Bool _enterBackground;
    _Bool _isCoordinateError;
    _Bool _hiddenMoreButtonItem;
    unsigned int _srcType;
    NSString *fromUsername;
    NSString *_messageSvrID;
    id <IFinderPOIDetailViewController> _poiDetailVc;
    FavDataItemWrap *_favDataWrap;
    FavoritesItem *_favItem;
    unsigned long long _assignAuthScene;
    UIButton *_backBtn;
    UIButton *_moreBtn;
    UIView *_topMaskView;
    CAGradientLayer *_topGradientLayer;
    UIView *_bottomMaskView;
    CAGradientLayer *_bottomGradientLayer;
    UIButton *_addressDetailBtn;
    UIButton *_addressNavigationBtn;
    CLLocation *_userLocation;
    unsigned long long _authScene;
    PickLocationAnnotationView *_annotationView;
    NSString *_buildingId;
    NSString *_floorName;
    MMScrollActionSheet *_scrollActionSheet;
    NSString *_reportSessionID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportSessionID; // @synthesize reportSessionID=_reportSessionID;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(retain, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
@property(retain, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(nonatomic) __weak PickLocationAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(nonatomic) unsigned int srcType; // @synthesize srcType=_srcType;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) UIButton *addressNavigationBtn; // @synthesize addressNavigationBtn=_addressNavigationBtn;
@property(retain, nonatomic) UIButton *addressDetailBtn; // @synthesize addressDetailBtn=_addressDetailBtn;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) unsigned long long assignAuthScene; // @synthesize assignAuthScene=_assignAuthScene;
@property(nonatomic) _Bool hiddenMoreButtonItem; // @synthesize hiddenMoreButtonItem=_hiddenMoreButtonItem;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) FavDataItemWrap *favDataWrap; // @synthesize favDataWrap=_favDataWrap;
@property(retain, nonatomic) id <IFinderPOIDetailViewController> poiDetailVc; // @synthesize poiDetailVc=_poiDetailVc;
@property(nonatomic) _Bool isCoordinateError; // @synthesize isCoordinateError=_isCoordinateError;
@property(retain, nonatomic) NSString *messageSvrID; // @synthesize messageSvrID=_messageSvrID;
@property(nonatomic) __weak id <ViewLocationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) _Bool directShowDirection; // @synthesize directShowDirection=_directShowDirection;
@property(nonatomic) _Bool canSendToFriend; // @synthesize canSendToFriend=_canSendToFriend;
@property(nonatomic) _Bool canAddToFav; // @synthesize canAddToFav=_canAddToFav;
@property(retain, nonatomic) NSString *fromUsername; // @synthesize fromUsername;
- (void)layoutMapViewCenterIfNeeded;
- (_Bool)isCurrentPOIFavorite;
- (void)changeFavSelected:(_Bool)arg1;
- (void)onUpdateFavSelected:(_Bool)arg1;
- (void)onExpandPOIView;
- (void)onShrinkPOIView;
- (void)onDragProgressChanged:(double)arg1;
- (void)onLocatingPoiCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)OnOpenLocationWAApp;
- (void)reportCustomMoreViewClickEvent:(id)arg1 dicParam:(id)arg2;
- (void)reportCustomMoreViewClickEvent:(id)arg1;
- (void)updateFinderContextId;
- (unsigned long long)forwardMessageScene;
- (unsigned int)reportType;
- (void)reportLog26733;
- (void)onMapItemClickOrCancel:(_Bool)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)updateMapStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onFavTagEditBegin:(int)arg1;
- (void)silentPopSelf;
- (void)OnUpdateItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)onShareLocationMsgToDevice;
- (_Bool)canShowShareLocationMsgToDevice;
- (id)sceneNoteForSrcType;
- (void)onOpenWeAppWithPara:(id)arg1;
- (void)onPushViewController:(id)arg1 Animated:(_Bool)arg2;
- (void)onPresentViewControlelr:(id)arg1 Animated:(_Bool)arg2;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3 WeAppList:(id)arg4;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)showDirection;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(_Bool)arg3;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 scaleViewChanged:(double)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)setAnnotation:(id)arg1 Coordinate:(struct CLLocationCoordinate2D)arg2 Animated:(_Bool)arg3 Duration:(float)arg4;
- (_Bool)isOnUserLocation:(struct CLLocationCoordinate2D)arg1;
- (void)mapView:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)stopUpdateUserLocation;
- (void)startUpdateUserLocation;
- (void)stopTimerCheckUserLocation;
- (void)startTimerCheckUserLocation;
- (void)onTimerUpdateLocation;
- (id)getUserLocation;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)stopUpdateTrueHeading;
- (void)startUpdateTrueHeading;
- (_Bool)canPoiForwardOrFavorite;
- (void)onNavigateToPOI:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getCurrentViewController;
- (void)updateZoomLevelToMyLocation;
- (void)updateZoomLevelToDefault;
- (void)forwardLocationMsg:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getMenuItemArray;
- (void)registerFavReport:(id)arg1;
- (void)onAction:(id)arg1;
- (id)dataReportParamDict;
- (void)reportCustomActionSheetClickWithIndex:(unsigned long long)arg1;
- (id)genMenuItemArray;
- (void)onTapMoreBtn:(id)arg1;
- (void)onReturn;
- (void)onMyLocationButtonClick;
- (void)setPOICalloutShow:(_Bool)arg1;
- (void)onClickInfo:(id)arg1;
- (void)stopViewingLocation;
- (void)startViewingLocation;
- (id)getLocationText:(struct CLLocationCoordinate2D)arg1;
- (_Bool)useBlackStatusbar;
- (void)checkAuthorization;
- (_Bool)shouldNavigationBarAccessibilityHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initAddressDetailView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (unsigned long long)getAuthSceneFrom:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithPOIInfo:(id)arg1 FromSrc:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
