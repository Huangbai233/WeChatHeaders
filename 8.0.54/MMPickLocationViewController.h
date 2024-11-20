//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CLLocation, MMAutoSearchLogic, MMFloorPickView, MMLocationAttributeBanner, MMLocationPinView, MMMapView, MMPickLocationReporter, MMPickLocationSearchView, NSMutableArray, NSString, POIItem, PickLocationManager, QPoiInfo, UIBarButtonItem, UIButton, UIImageView, UIPinchGestureRecognizer, UIView, WCUIAlertView;
@protocol MMPickLocationViewControllerDelegate;

@interface MMPickLocationViewController
{
    id <MMPickLocationViewControllerDelegate> _delegate;
    NSString *_openID;
    MMLocationPinView *_pinView;
    MMMapView *_mapView;
    MMLocationAttributeBanner *_attributeBanner;
    MMFloorPickView *_floorPickView;
    UIView *_attributeFooterView;
    _Bool _isLoadFinish;
    _Bool _isLocationFirstUpdated;
    _Bool _shouldUpdateList;
    _Bool _isOnlyUseUserLocation;
    _Bool _isMapAnimating;
    _Bool _isGestureMapAnimating;
    _Bool _isShowUp;
    _Bool _isPoiIndoor;
    unsigned int _scene;
    unsigned int _sceneType;
    unsigned int _selectType;
    unsigned int _lastSelectType;
    struct CLLocationCoordinate2D _lastSelectedLocation;
    struct CLLocationCoordinate2D _lastSelectedPoiLocation;
    struct CLLocationCoordinate2D _firstGetNearLocation;
    struct CLLocationCoordinate2D _lastDragLocation;
    struct CLLocationCoordinate2D _moveToLocation;
    struct CLLocationCoordinate2D _lastCenterLocation;
    UIButton *_showMyLocationButton;
    unsigned long long _selectedPoiIndex;
    unsigned long long _startLocateTime;
    struct CGSize _beginTouchDeltaRatio;
    struct CLLocationCoordinate2D _beginTouchRegion;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSMutableArray *_sysGestureRecognizers;
    CLLocation *_userCurrentLocation;
    MMAutoSearchLogic *_autoSearchLogic;
    double _keyboardHeight;
    unsigned long long _entryTime;
    unsigned long long _startGetListTime;
    unsigned long long _endGetListTime;
    unsigned long long _firstGetTime;
    unsigned int _getPageCount;
    unsigned long long _startSearchListTime;
    unsigned long long _endSearchListTime;
    unsigned long long _firstSearchTime;
    unsigned long long _searchPageCount;
    NSString *_currentSearchId;
    _Bool _lastSelectFromSearch;
    unsigned long long _lastSelectRow;
    unsigned long long _lastSelectTime;
    NSString *_lastSelectPOIId;
    _Bool _dismissWithCancel;
    _Bool _selectFromSearchTable;
    _Bool _selectShowMyUserLocation;
    _Bool _requestFourAddress;
    NSString *_requestId;
    POIItem *_myPoiItem;
    struct CLLocationCoordinate2D _coordForGetAddressReqeust;
    _Bool _enterBackground;
    _Bool _isSubViewAnimating;
    _Bool _searchAnimateEnd;
    _Bool _searchAreaFold;
    _Bool _didShowLocationCloseAlert;
    _Bool _isRequestingUserAddress;
    _Bool _hasRequestLocation;
    _Bool _requestUserLocationTime;
    _Bool _needUpdateLocation;
    _Bool _showAccuracyAuthorizationTip;
    int _currentAuthLogType;
    MMPickLocationReporter *_reporter;
    POIItem *_locationItem;
    CLLocation *_currLocation;
    CLLocation *_userLocation;
    QPoiInfo *_lastSelectPoiInfo;
    UIBarButtonItem *_rightBarButtonItem;
    double _mapViewCurrentDisplayBottom;
    PickLocationManager *_pickLocationManager;
    MMPickLocationSearchView *_pickLocationSearchView;
    UIImageView *_navigaBarMaskImgView;
    WCUIAlertView *_currAlertView;
    struct CGPoint _mapViewCurrentCenter;
    struct CLLocationCoordinate2D _requestingAddressLocation;
}

+ (void)safeMapView:(id)arg1 setRegion:(CDStruct_b7cb895d)arg2;
- (void).cxx_destruct;
@property(nonatomic) int currentAuthLogType; // @synthesize currentAuthLogType=_currentAuthLogType;
@property(nonatomic) _Bool showAccuracyAuthorizationTip; // @synthesize showAccuracyAuthorizationTip=_showAccuracyAuthorizationTip;
@property(retain, nonatomic) WCUIAlertView *currAlertView; // @synthesize currAlertView=_currAlertView;
@property(nonatomic) _Bool needUpdateLocation; // @synthesize needUpdateLocation=_needUpdateLocation;
@property(nonatomic) _Bool requestUserLocationTime; // @synthesize requestUserLocationTime=_requestUserLocationTime;
@property(nonatomic) _Bool hasRequestLocation; // @synthesize hasRequestLocation=_hasRequestLocation;
@property(nonatomic) _Bool isRequestingUserAddress; // @synthesize isRequestingUserAddress=_isRequestingUserAddress;
@property(nonatomic) struct CLLocationCoordinate2D requestingAddressLocation; // @synthesize requestingAddressLocation=_requestingAddressLocation;
@property(retain, nonatomic) UIImageView *navigaBarMaskImgView; // @synthesize navigaBarMaskImgView=_navigaBarMaskImgView;
@property(retain, nonatomic) MMPickLocationSearchView *pickLocationSearchView; // @synthesize pickLocationSearchView=_pickLocationSearchView;
@property(retain, nonatomic) PickLocationManager *pickLocationManager; // @synthesize pickLocationManager=_pickLocationManager;
@property(nonatomic) _Bool didShowLocationCloseAlert; // @synthesize didShowLocationCloseAlert=_didShowLocationCloseAlert;
@property(nonatomic) _Bool searchAreaFold; // @synthesize searchAreaFold=_searchAreaFold;
@property(nonatomic) _Bool searchAnimateEnd; // @synthesize searchAnimateEnd=_searchAnimateEnd;
@property(nonatomic) _Bool isSubViewAnimating; // @synthesize isSubViewAnimating=_isSubViewAnimating;
@property(nonatomic) struct CGPoint mapViewCurrentCenter; // @synthesize mapViewCurrentCenter=_mapViewCurrentCenter;
@property(nonatomic) double mapViewCurrentDisplayBottom; // @synthesize mapViewCurrentDisplayBottom=_mapViewCurrentDisplayBottom;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(retain, nonatomic) QPoiInfo *lastSelectPoiInfo; // @synthesize lastSelectPoiInfo=_lastSelectPoiInfo;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) CLLocation *currLocation; // @synthesize currLocation=_currLocation;
@property(retain, nonatomic) POIItem *locationItem; // @synthesize locationItem=_locationItem;
@property(retain, nonatomic) MMLocationPinView *pinView; // @synthesize pinView=_pinView;
@property(retain, nonatomic) MMPickLocationReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <MMPickLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)goToSettingLocationAuthorization;
- (void)showAlertForLocationAuthorization;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)updateMapStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)adjustDisplayRectForSearchAnnotations:(id)arg1;
- (id)getDisplayAnnotations:(id)arg1;
- (struct CLLocationCoordinate2D)getSearchPoiListCoordination:(_Bool)arg1;
- (id)currentIndoorInfo;
- (void)setCoordinationForGetAddressRequest:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)OnGetAutoSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetNearPOIList:(id)arg1 Error:(int)arg2;
- (void)updataSearchListWithCoordinate:(struct CLLocationCoordinate2D)arg1 Keyword:(id)arg2 StartFromFirst:(_Bool)arg3;
- (void)updatePOIListWithCoordinate:(struct CLLocationCoordinate2D)arg1 StartFromFirst:(_Bool)arg2;
- (void)autoSearchShouldBeginWithKey:(id)arg1 StartFromFirst:(_Bool)arg2;
- (_Bool)isSearchViewExpanded;
- (void)handleTableView:(id)arg1 PanGesture:(id)arg2;
- (void)searchTableFooterDidTriggerRefresh;
- (void)nearTableFooterDidTriggerRefresh;
- (void)searchBarWillEndSearch;
- (void)searchBarWillBeginSearch;
- (void)searchBarBecomeActive;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidChange:(id)arg1;
- (void)searchBarTextDidBeginEditing;
- (void)didAnnotationDidSelect:(unsigned long long)arg1;
- (void)searchResultPOIItemDidSelect:(unsigned long long)arg1;
- (void)selectSearchResultPOIItem:(unsigned long long)arg1;
- (void)nearbyPOIItemDidSelect:(unsigned long long)arg1;
- (double)getPickLocationSearchViewFoldHeight;
- (double)getPickLocationSearchViewExpandHeight;
- (void)didPickLocationSearchViewFolded;
- (void)searchResultSelectStateChange:(_Bool)arg1;
- (void)didClearSearchAnnotations:(id)arg1;
- (void)adjustDisplayAreaAfterSelectSeachPOIAnnotation;
- (void)updateSearchPOIAnnotation:(unsigned long long)arg1 SearchState:(long long)arg2;
- (void)setupSelectedAnnotationState;
- (void)checkCurrSelectedAnnotationState;
- (void)checkLastSelectedAnnotationState;
- (void)selectPOIAtIndex:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)resetPOIList;
- (void)addPOIItem:(id)arg1 UpdateTable:(_Bool)arg2 Animated:(_Bool)arg3 SearchID:(id)arg4;
- (void)showPinViewCallout;
- (void)addUserLocationAnnotation;
- (void)mapView:(id)arg1 didTapPoi:(id)arg2;
- (void)mapView:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)pickLocAnnotationViewForAnnotationInMap:(id)arg1;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)cancelSelectors;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(_Bool)arg3;
- (void)mapView:(id)arg1 scaleViewChanged:(double)arg2;
- (void)updateUserLocationAndPoiList;
- (void)updateAllLocationInfo:(_Bool)arg1 gesture:(_Bool)arg2 forceUpdate:(_Bool)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)mapView:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (void)onClickAttributeBanner;
- (void)displaySearchAnnotation:(id)arg1;
- (void)unFoldMapView:(double)arg1;
- (void)unFoldMapView;
- (void)scrollSelectItemVisible;
- (void)unFoldMapViewAnimatedWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2 ScrollToSelectItemWhenComplete:(_Bool)arg3;
- (void)unFoldMapViewAnimatedWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)foldMapView:(double)arg1;
- (void)foldMapView;
- (void)foldMapViewAnimatedWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)adjustOtherViewsFrameAfterMapViewChange;
- (void)onCancelSelectLocation;
- (void)onLoadMapError:(id)arg1;
- (void)onTimerCheckUserLocation;
- (void)onTimeOut;
- (void)moveToLocation:(struct CLLocationCoordinate2D)arg1;
- (void)pinUserLocation:(id)arg1;
- (void)onShowMyLocation;
- (_Bool)isOnUserLocation:(struct CLLocationCoordinate2D)arg1;
- (id)getUserLocation;
- (id)getLocationPOIItem;
- (id)getCurrentPOIItem;
- (id)getCurrentPOIInfo;
- (void)stopPicking;
- (void)showMapViewUserLocation;
- (void)onPinGestureUpdated:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)enableSysGestureRecognizers:(_Bool)arg1;
- (void)initMapViewGestureRecognizer:(id)arg1;
- (void)initGesture;
- (void)checkSystemAuthorization;
- (void)adjustSubviewRects;
- (void)willDisshow;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setRightBarButtonItemEnabled:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setRequestFourAddress:(_Bool)arg1;
- (void)setMapViewFrame:(struct CGRect)arg1;
- (void)initView;
- (void)adjustMapLogosPosition;
- (void)showAttributeBannerTitle:(id)arg1 LogoUrl:(id)arg2 Link:(id)arg3;
@property(readonly, nonatomic) double mapViewLimitHeight;
@property(readonly, nonatomic) struct CGPoint mapViewFoldCenter;
@property(readonly, nonatomic) struct CGPoint mapViewExpandCenter;
- (double)mapLogoAdjustBottomForCornerRadius;
- (double)searchViewAdjustYForCornerRadius;
- (void)initHeaderView;
- (void)initMapPinView:(_Bool)arg1;
- (void)updateSearchBarTips;
- (void)initSearchView;
- (void)initShowMyLocationButton;
- (void)reportLog17993:(_Bool)arg1;
- (void)reportOnDone;
- (void)dealloc;
- (unsigned long long)getSystemAuthSceneFrom:(unsigned int)arg1;
- (int)getSceneFromSceneType;
- (id)initWithSceneType:(unsigned int)arg1 OnlyUseUserLocation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

