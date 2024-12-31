//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, NSMutableArray, NSString, QEngineResourceManager, QGraphicsTool, QStatisticer, TBImagePool, TBIndoorBuilding;
@protocol QMapContextUIDelegate;

@interface QMapContext : NSObject
{
    void *_pWorld;
    struct _opaque_pthread_t *_backgroundThread;
    _Bool _backgroundThreadRunning;
    _Bool _internalShowsPoi;
    _Bool _internalMaxOverlookingEnable;
    _Bool _keepCenterEnabled;
    _Bool _indoorMaxZoomEnable;
    _Bool _internalIndoorEnabled;
    _Bool _internalRoadEventEnabled;
    id <QMapContextUIDelegate> _viewDelegate;
    EAGLContext *_context;
    double _minZoomLevel;
    double _maxZoomLevel;
    QGraphicsTool *_graphicsTool;
    TBImagePool *_imagePool;
    NSMutableArray *_multiDelegates;
    NSMutableArray *_tileOverlayContextes;
    QEngineResourceManager *_resourceManager;
    NSString *_latestErrorLog;
    QStatisticer *_statistics;
}

+ (void)enableDebugLog:(_Bool)arg1;
+ (struct TMBitmapContext *)UIImage2TMBitmap:(id)arg1;
+ (CDStruct_02837cd9)QMapRectForMapRectD:(struct MapRectD)arg1;
+ (struct MapRectD)MapRectDForCGRect:(struct CGRect)arg1;
+ (struct MapRectD)MapRectDForQMapRect:(CDStruct_02837cd9)arg1;
+ (id)constructKeyForUIImage:(id)arg1;
+ (id)extractKeyFromImageInstruction:(id)arg1;
+ (id)constructImageInstructionWithKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak QStatisticer *statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) NSString *latestErrorLog; // @synthesize latestErrorLog=_latestErrorLog;
@property(retain, nonatomic) QEngineResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(nonatomic) _Bool internalRoadEventEnabled; // @synthesize internalRoadEventEnabled=_internalRoadEventEnabled;
@property(nonatomic) _Bool internalIndoorEnabled; // @synthesize internalIndoorEnabled=_internalIndoorEnabled;
@property(retain, nonatomic) NSMutableArray *tileOverlayContextes; // @synthesize tileOverlayContextes=_tileOverlayContextes;
@property(retain, nonatomic) NSMutableArray *multiDelegates; // @synthesize multiDelegates=_multiDelegates;
@property(retain, nonatomic) TBImagePool *imagePool; // @synthesize imagePool=_imagePool;
@property(retain, nonatomic) QGraphicsTool *graphicsTool; // @synthesize graphicsTool=_graphicsTool;
@property(nonatomic) _Bool indoorMaxZoomEnable; // @synthesize indoorMaxZoomEnable=_indoorMaxZoomEnable;
@property(nonatomic, getter=isKeepCenterEnabled) _Bool keepCenterEnabled; // @synthesize keepCenterEnabled=_keepCenterEnabled;
@property(nonatomic) _Bool internalMaxOverlookingEnable; // @synthesize internalMaxOverlookingEnable=_internalMaxOverlookingEnable;
@property(nonatomic) double maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) double minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(nonatomic) _Bool internalShowsPoi; // @synthesize internalShowsPoi=_internalShowsPoi;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <QMapContextUIDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (unsigned int)TMColorForUIColor:(id)arg1;
- (union MapVector4ub)vectorColorForUIColor:(id)arg1;
- (double)scale;
- (void)dealloc;
- (id)initWithResourceManager:(id)arg1;
- (void)setupWorld;
- (void)setupCompass;
- (void)setupEAGLContext;
- (void)destroy;
- (void)SetMapCacheClear:(int)arg1;
- (id)getPoisOnScreen;
- (id)generatePoisInfoV2:(struct _POIInfo *)arg1;
- (id)checkClickInfoAtPoint:(struct CGPoint)arg1;
- (void)setTrafficProtocolVersion:(int)arg1 fromZoomLevel:(double)arg2;
- (void)setupTrafficPayload:(struct _TrafficStyle *)arg1 fillColor:(id)arg2 borderColor:(id)arg3 lineWidth:(int)arg4 borderWidth:(int)arg5;
- (void)setTrafficStyle:(id)arg1;
- (int)saveTrafficData:(id)arg1;
- (id)checkTrafficUpdateWithRect:(CDStruct_02837cd9)arg1 dataLevel:(int)arg2;
- (void)setShowsTraffic:(_Bool)arg1;
- (void)enableL4:(_Bool)arg1;
- (id)getMarkerIDArray:(vector_cd3186ef)arg1 startIndex:(int)arg2 count:(int)arg3;
- (void)handleMarkerAoidedEventWithParam0:(const void *)arg1 param1:(const void *)arg2;
- (void)reloadConfig;
- (id)satelliteCacheFolder;
- (void)saveVectorData:(id)arg1 forUrl:(id)arg2;
@property(nonatomic) long long mapStyle;
- (void)updateSkyboxWithOldMapStyle:(long long)arg1 newMapStyle:(long long)arg2;
- (id)imageNameForSkyboxType:(long long)arg1;
- (long long)skyboxTypeForMapStyle:(long long)arg1;
- (void)handleMapLoadFinish;
- (void)handleEngineRuntimeError:(id)arg1;
- (void *)handleEngineGetContext;
- (struct TMBitmapContext *)handleEngineLoadGlyphWithText:(unsigned short)arg1 fontSize:(int)arg2 bold:(_Bool)arg3 rect:(struct MapRectF *)arg4 context:(void *)arg5;
- (void)handleEngineWriteWithFileName:(const char *)arg1 data:(const void *)arg2 dataSize:(int)arg3;
- (void)handleEngineDrawTextToBitmap:(struct TMBitmapContext *)arg1 text:(unsigned short *)arg2 count:(int)arg3 fontSize:(int)arg4 bold:(_Bool)arg5 density:(float)arg6;
- (struct TMSize)handleEngineCalcTextSizeWithText:(unsigned short *)arg1 count:(int)arg2 fontSize:(int)arg3 bold:(_Bool)arg4;
- (void)handleEngineCancelDownloadTile:(struct MapTileID)arg1;
- (void)handleEngineDownloadTile:(struct MapTileID)arg1;
- (id)tileWithMapTile:(struct MapTileID)arg1;
- (struct TMBitmapContext *)decodeBitmap:(char *)arg1 dataSize:(long long)arg2 sourceType:(long long)arg3 destType:(long long)arg4;
- (struct TMBitmapContext *)handleEngineLoadImageWithFileName:(const char *)arg1 code:(int)arg2 anchorPointX1:(float *)arg3 anchorPointY1:(float *)arg4;
- (_Bool)handleMapDrawCallBackWithType:(int)arg1 projection:(const float *)arg2 viewMatrix:(const double *)arg3 width:(int)arg4 height:(int)arg5 pixelScale:(float)arg6;
- (void)handleEngineEventWithType:(int)arg1 param0:(const void *)arg2 param1:(const void *)arg3;
- (void)stopBackgroundThread;
- (void)startBackgroundThread;
- (void)backgroundThreadEntry;
- (CDStruct_02837cd9)convertToMapRectFromScreenRect:(struct CGRect)arg1;
- (struct CGRect)convertToScreenRectFromMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_c3b9c2ee)convertToMapPointFromScreenPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertToScreenPointFromMapPoint:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) double skyRatio;
- (void)setLimitMapRect:(CDStruct_02837cd9)arg1 minZoomLevel:(double)arg2;
- (CDStruct_c3b9c2ee)mapSizeForOffsetRange:(struct CGSize)arg1;
- (void)zoomLevelFitsMapRect:(CDStruct_02837cd9)arg1 screenRect:(struct CGRect)arg2 outZoomLevel:(double *)arg3 outCenterMapPoint:(CDStruct_c3b9c2ee *)arg4;
@property(readonly, nonatomic) struct CGPoint defaultAnchor;
@property(nonatomic) struct CGPoint centerOffset; // @dynamic centerOffset;
@property(readonly, nonatomic) double maxOverlooking;
@property(readonly, nonatomic) double minOverlooking;
@property(nonatomic) double overlooking; // @dynamic overlooking;
@property(nonatomic) double rotation; // @dynamic rotation;
- (void)setMinZoomLevel:(double)arg1 maxZoomLevel:(double)arg2;
@property(nonatomic) int scaleLevel; // @dynamic scaleLevel;
@property(nonatomic) double zoomLevel; // @dynamic zoomLevel;
- (void)setZoomLevelWithAnchor:(struct CGRect)arg1;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerMapPoint; // @dynamic centerMapPoint;
- (double)internalScaleForZoomLevel:(double)arg1;
- (double)zoomLevelForInternalScale:(double)arg1;
- (double)normalizeZoomLevel:(double)arg1;
- (double)normalizeOverlooking:(double)arg1;
- (double)normalizeRotation:(double)arg1;
- (void)setupMinMaxZoomLevel;
- (double)availableMaxZoomLevel;
- (void)setIndoorMaxLevelEnable:(_Bool)arg1;
- (void)onBackground;
- (void)onForeground;
- (void)onMemoryWarning;
- (id)getRenderTimeLog;
- (void)renderEntry;
- (void)updateDuration:(float)arg1;
- (void)setViewport:(struct CGRect)arg1;
@property(nonatomic) _Bool dirty; // @dynamic dirty;
- (void)notifyMarkerOverlayShows:(id)arg1 andAvoided:(id)arg2;
- (_Bool)notifyDrawFrame:(struct TBDrawParamType *)arg1;
- (void)notifyMapLoadFinish;
- (void)notifyDidChangeActiveBuilding:(id)arg1;
- (void)notifySaveTileData:(id)arg1 withUrl:(id)arg2;
- (void)notifyCancelDownloadTile:(id)arg1;
- (void)notifyDownloadTile:(id)arg1;
- (void)notifyMapStatusChange:(int)arg1;
- (void)notifyDidMapStatusChangedAfterDraw;
- (void)notifyDidMapStatusChangedBeforeDraw;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)wrapperForDelegate:(id)arg1;
- (void)setupMulitDelegates;
- (void)freePolygonHolesWithMapPrimitive:(struct MapPrimitive *)arg1;
- (void)createAndFillPolygonHolesWithPayload:(id)arg1 mapPrimitive:(struct MapPrimitive *)arg2;
- (union MapVector2d *)mallocPoint:(id)arg1 count:(int)arg2;
- (void)updateInfoPoints:(struct _MapRouteInfo *)arg1 withPayload:(id)arg2;
- (void)createPolygonViewFrom:(id)arg1 to:(struct MapPrimitive *)arg2;
- (void)updatePathViewStyleFrom:(id)arg1 to:(struct MapPrimitive *)arg2;
- (void)updatePolylineGradient:(int)arg1 linePayload:(id)arg2;
- (void)updateCircleViewFrom:(id)arg1 to:(struct MapCircleInfo *)arg2;
- (void)configPolylineSegmentColor:(struct _MapRouteInfo *)arg1 polylineView:(id)arg2 styleParam:(struct _RGBAColorLineExtraParam *)arg3;
- (void)configPolylineDashParam:(struct _RGBADashedLineExtraParam *)arg1 polylineView:(id)arg2;
- (void)configPolylineArrow:(const struct _MapRouteInfo *)arg1 polylineView:(id)arg2 visible:(_Bool)arg3;
- (void)setPolylineArrowSpacing:(int)arg1 polylineView:(id)arg2;
- (void)updateZIndex:(int)arg1 forOverlay:(int)arg2;
- (void)updateLevel:(int)arg1 forOverlay:(int)arg2;
- (void)updateCircle:(id)arg1 alpha:(double)arg2;
- (void)updateCircleDisplayLevel:(id)arg1 level:(int)arg2;
- (void)updateCircle:(id)arg1 data:(id)arg2;
- (void)updatePolygon:(id)arg1 enableCollideLabel:(_Bool)arg2;
- (void)updatePolygon:(id)arg1 alpha:(double)arg2;
- (void)updatePolygonDisplayLevel:(id)arg1 level:(int)arg2;
- (void)updatePolygon:(id)arg1 style:(id)arg2;
- (void)updatePolyline:(id)arg1 clickable:(_Bool)arg2;
- (void)updatePolyline:(id)arg1 enableCollideLabel:(_Bool)arg2;
- (void)updatePolyline:(id)arg1 alpha:(double)arg2;
- (void)updatePolylineDisplayLevel:(id)arg1 level:(int)arg2;
- (void)updatePolylineArrowSpacing:(id)arg1 linePayload:(id)arg2;
- (void)updatePolyline:(id)arg1 turnArrowColor:(id)arg2 borderColor:(id)arg3;
- (void)updatePolyline:(id)arg1 turnArrowIndex:(int)arg2 withPayload:(id)arg3;
- (void)updatePolyline:(id)arg1 passpointStyle:(id)arg2;
- (void)updatePolyline:(id)arg1 segmentColor:(id)arg2;
- (void)updatePolyline:(id)arg1 RGBAColorStyle:(id)arg2;
- (void)updatePolyline:(id)arg1 segmentStyle:(id)arg2;
- (void)updatePolyline:(id)arg1 linePayload:(id)arg2;
- (void)configPolylineTextureStyle:(struct _MapRouteInfo *)arg1 polylineView:(id)arg2;
- (void)removeArc:(id)arg1;
- (void)removeCircle:(id)arg1;
- (void)removePolygon:(id)arg1;
- (void)removePolyline:(id)arg1;
- (void)setOverlayScaleRange:(id)arg1 minScale:(int)arg2 maxScale:(int)arg3;
- (void)setHiddenForOverlayView:(id)arg1 hidden:(_Bool)arg2;
- (id)addArc:(id)arg1;
- (id)addCircle:(id)arg1;
- (id)addPolygon:(id)arg1 withStrokeStyle:(id)arg2 holePayloads:(id)arg3;
- (id)addPolyline:(id)arg1;
- (void)createPolyline:(struct _MapRouteInfo *)arg1 polylineView:(id)arg2;
- (void)createTexturePolyline:(struct _MapRouteInfo *)arg1 polylineView:(id)arg2;
- (id)internalDataDebugLog;
- (id)internalDebugStatus;
- (id)getDataEngineVersion;
- (id)getMapEngineVersion;
- (_Bool)checkIsDirectionImagesAllNil:(id)arg1;
- (_Bool)checkIsDirectioImagesValided:(id)arg1;
- (id)setImageToImagePool:(id)arg1 instruction:(id)arg2;
- (unsigned int)getTMColorFromUIColor:(id)arg1;
- (void)updateLocationWithHeading:(double)arg1;
- (void)updateLocationWithMapPoint:(CDStruct_c3b9c2ee)arg1 course:(double)arg2 horizontalAccuracy:(double)arg3 animated:(_Bool)arg4;
- (void)setLocationRedlineHidden:(_Bool)arg1;
- (void)setLocationCompassHidden:(_Bool)arg1;
- (void)setLocatorHidden:(_Bool)arg1;
- (void)setLocationHidden:(_Bool)arg1;
- (void)updateLocationMarker:(id)arg1 locatorWrapper:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
- (id)constructLocationMarker:(id)arg1;
- (id)loadImageWithInstruction:(id)arg1;
- (int)priorityForPayload:(id)arg1;
- (void)setPriority:(int)arg1 forPayload:(id)arg2;
- (void)setSearchDepth:(int)arg1 levelOffset:(int)arg2 forPayload:(id)arg3;
- (_Bool)isAllTileOverlayEnabled;
- (void)setAllTileOverlayEnabled:(_Bool)arg1;
- (void)reloadPayload:(id)arg1;
- (void)removePayload:(id)arg1;
- (id)addTileOverlay:(id)arg1 WithLoadTileBlock:(CDUnknownBlockType)arg2 writeTileBlock:(CDUnknownBlockType)arg3;
- (void *)pWorld;
- (void)onSizeChange;
- (void)reloadWorld;
- (void)enableMaploadCallbackEventOnce;
- (_Bool)isLoadingFinished;
- (void)clearMapEngineCache;
- (void)unlockMapEngine;
- (void)lockMapEngine;
- (id)getVectorOnlineFilePath:(id)arg1;
- (id)getOfflineItemPlistPath;
- (void)copyOfflineMapLocalData;
- (void)clearOfflineMapData:(id)arg1;
- (void)copyOfflineMapResource:(id)arg1;
- (void)modifyMarker:(id)arg1 angle:(double)arg2;
- (void)setMapMarker:(id)arg1 MainMarker:(id)arg2 BindSyncVisibility:(_Bool)arg3;
- (void)setEngineMarkerHidden:(id)arg1 toHide:(_Bool)arg2;
- (_Bool)getMarkerHiddenStatus:(id)arg1;
- (id)getSubMarkersFromMainMarker:(id)arg1;
- (void)constructMapMarkerInfo:(struct MapMarkerIconInfo *)arg1 withPayload:(id)arg2;
- (void)updateMarkerLocation:(id)arg1 withLocation:(CDStruct_c3b9c2ee)arg2;
- (void)setMainMarkerRelation:(int)arg1 withChildID:(int)arg2;
- (void)setMarkerScaleRange:(int)arg1 minZoom:(int)arg2 maxZoom:(int)arg3;
- (int)getMarkerPriority:(int)arg1;
- (void)updateMarkerCollisionStatus:(id)arg1 avoidAnnotation:(_Bool)arg2 avoidOtherMarker:(_Bool)arg3;
- (void)updateMarker:(id)arg1 withPayload:(id)arg2;
- (void)removeMarker:(id)arg1;
- (id)addMarker:(id)arg1;
- (void)updateText:(id)arg1;
- (void)removeText:(id)arg1;
- (void)addText:(id)arg1;
- (void)setMapLanguage:(int)arg1;
- (void)setCompassDarkMode:(_Bool)arg1;
- (void)setCompassOffset:(struct CGPoint)arg1;
- (void)setBaseMapHidden:(_Bool)arg1;
- (int)engineLabelSize;
- (void)setLabelSize:(int)arg1;
- (int)transferLabelSizeToEngineSize:(int)arg1;
- (void)setShowsPoi:(_Bool)arg1;
- (_Bool)showsPoi;
- (void)setSatelliteEnabled:(_Bool)arg1;
- (void)refreshBuildings;
- (void)setBuildingBlackList:(CDStruct_02837cd9 *)arg1 count:(int)arg2;
- (void)setShowsBuilding3D:(_Bool)arg1;
- (_Bool)showsBuilding3D;
- (void)setShowsBuildings:(_Bool)arg1;
- (void)setShowsCompass:(_Bool)arg1;
- (struct Marker4KInfo)implement4KInfon:(id)arg1;
- (void)setIntersectionOverlayVisible:(_Bool)arg1 overlayID:(int)arg2;
- (void)updateIntersectionOverlay:(id)arg1;
- (void)removeIntersectionOverlay:(int)arg1;
- (id)addIntersectionOverlay:(id)arg1;
- (void)resetIndoorCell;
- (void)setIndoorCell:(id)arg1;
- (void)setIndoorPrevilegeType:(_Bool)arg1;
- (void)setIndoorDarkMode:(_Bool)arg1;
- (void)setIndoorMaskColor:(id)arg1;
- (void)setActiveBuildsFilter:(id)arg1;
- (double)getIndoorOutlineZoom:(id)arg1;
- (void)setActiveIndoorWithBuildId:(id)arg1 floor:(id)arg2;
@property(readonly, nonatomic) TBIndoorBuilding *activeIndoorBuilding;
- (_Bool)setLevelIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool indoorEnabled;
- (_Bool)getFloorBoundingMapRect:(CDStruct_02837cd9 *)arg1;
- (_Bool)getCurrentFloorIndex:(int *)arg1;
- (id)getFloorNamesWithCount:(int)arg1;
- (_Bool)getFloorCount:(int *)arg1;
- (struct _MarkerGroupIconAnchor)generateGroupIconAnchor:(id)arg1 withPos:(int)arg2;
- (void)modifyPoiMarkerHiddenStauts:(int)arg1 hidden:(_Bool)arg2;
- (id)createAnnoTextImage:(id)arg1;
- (void)removePOIMarker:(id)arg1;
- (int)createMapIconMarker:(id)arg1;
- (int)createMarkerAnnotion:(id)arg1;
- (id)loadPOIMarker:(id)arg1;
- (void)initStatistics:(id)arg1;
- (id)getStatistics;

@end

