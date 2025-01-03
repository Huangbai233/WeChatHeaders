//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class MMTimer, NSString, TrackPOIItem;

@interface TrackRoomMgr
{
    _Bool _isJoining;
    _Bool _isRefreshing;
    int _nextState;
    int _currentState;
    unsigned long long _headingTag;
    unsigned long long _locationTag;
    int _retryCount;
    double _trueHeading;
    double _course;
    NSString *_chatname;
    NSString *_trackRoomID;
    TrackPOIItem *_trackPOIItem;
    TrackPOIItem *_roomPOI;
    struct CLLocationCoordinate2D _uploadCoordiante;
    MMTimer *_refreshTimer;
    unsigned int _scene;
    unsigned int _refreshTimeInterval;
    _Bool _isNeedResumeWXMuisc;
    _Bool _isNeedResumeFinderMinimize;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TrackPOIItem *roomPOI; // @synthesize roomPOI=_roomPOI;
@property(readonly, nonatomic) unsigned int refreshTimeInterval; // @synthesize refreshTimeInterval=_refreshTimeInterval;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) NSString *trackRoomID; // @synthesize trackRoomID=_trackRoomID;
@property(readonly, nonatomic) NSString *chatname; // @synthesize chatname=_chatname;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleExitTrackRoomResponse:(id)arg1;
- (void)handleRefreshTrackRoomResponse:(id)arg1;
- (void)handleJoinTrackRoomResponse:(id)arg1;
- (void)retryChangeState;
- (int)exitTrackRoom:(unsigned int)arg1;
- (void)onTimerRefreshTrackRoom;
- (int)refreshTrackRoomWithType:(int)arg1;
- (int)joinTrackRoom:(id)arg1;
- (void)stopUpdateCourse;
- (void)startUpdateCourse;
- (void)stopUpdateTrueHeading;
- (void)startUpdateTrueHeading;
- (void)setCurrentState:(int)arg1;
- (int)onRoomStateChanging:(int)arg1;
@property(readonly, nonatomic) _Bool isUploading;
@property(readonly, nonatomic) double heading;
- (int)closeTrackRoom:(unsigned int)arg1;
- (void)setUploadCoordinate:(struct CLLocationCoordinate2D)arg1;
- (int)setTrackRoomState:(int)arg1;
- (int)openTrackRoom:(id)arg1 POIItem:(id)arg2 Scene:(unsigned int)arg3;
- (void)enterForeground;
- (void)enterBackground;
- (void)dealloc;
- (id)init;
- (void)reportExitAction:(long long)arg1;
- (void)reportTimeAction:(long long)arg1 time:(unsigned long long)arg2;
- (void)reportRetryAction:(long long)arg1;
- (void)reportAction:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

