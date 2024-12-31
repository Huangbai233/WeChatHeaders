//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, WCDownloadArgsWrap, WCPlayerBufferEvent, WCPlayerDownloadInfo, WCPlayerPlayArgs, WCPlayerVVCInfo, WCPlayerVideoMetadata, WCResourceloaderState;
@protocol WCPlayerPlaybackInfoDelegate;

@interface WCPlayerPlaybackInfo : NSObject
{
    _Bool _isPictureInPicturing;
    _Bool _bReadyToPlay;
    _Bool _mute;
    _Bool _bSeeking;
    _Bool _isDataSourceSwitching;
    _Bool _isPlayToEnd;
    _Bool _fromQueuePreCreate;
    _Bool _isWaitingPauseBufferingCompleted;
    unsigned int _taskId;
    int _playerType;
    int _resourceType;
    unsigned int _playCount;
    unsigned int _loopCount;
    unsigned int _playerCreateTime;
    int _preloadPriority;
    float _duration;
    float _bitrate;
    unsigned int _dataSwitchCount;
    unsigned int _dataSwitchSuccCount;
    float _playablePos;
    unsigned int _bufferSeq;
    id <WCPlayerPlaybackInfoDelegate> _delegate;
    unsigned long long _exitType;
    WCPlayerPlayArgs *_playArgs;
    WCDownloadArgsWrap *_currentArgsWrap;
    double _totalPlaybackTime;
    double _playbackTime;
    double _limitBufferLength;
    long long _switchMode;
    double _sourceSwitchStartTime;
    double _sourceSwitchEndTime;
    WCDownloadArgsWrap *_sourceSwitchingArgsWrap;
    long long _totalBufferTime;
    unsigned long long _bufferState;
    WCPlayerBufferEvent *_bufferEmptyEvent;
    NSMutableArray *_arrBufferEmptyEvent;
    unsigned long long _playerErrorType;
    long long _playerErrorCode;
    NSString *_playerErrorDesc;
    unsigned long long _initialProcess;
    unsigned long long _lastState;
    unsigned long long _playerState;
    unsigned long long _processState;
    unsigned long long _recoverState;
    unsigned long long _currentDataRespOffset;
    WCPlayerVideoMetadata *_mediadata;
    unsigned long long _length;
    long long _videoFrameRate;
    long long _videorate;
    long long _audiorate;
    NSString *_vcodec;
    NSString *_acodec;
    NSMutableDictionary *_dicNetworkInfo;
    double _playbackTargetBufferLength;
    NSDate *_lastCreatedDate;
    WCResourceloaderState *_resourceloaderBugState;
    WCPlayerVVCInfo *_vvcInfo;
    WCPlayerDownloadInfo *_downloadInfo;
    struct CGSize _presentationSize;
    struct CGAffineTransform _preferredTransform;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int bufferSeq; // @synthesize bufferSeq=_bufferSeq;
@property(nonatomic) _Bool isWaitingPauseBufferingCompleted; // @synthesize isWaitingPauseBufferingCompleted=_isWaitingPauseBufferingCompleted;
@property(retain, nonatomic) WCPlayerDownloadInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(retain, nonatomic) WCPlayerVVCInfo *vvcInfo; // @synthesize vvcInfo=_vvcInfo;
@property(retain, nonatomic) WCResourceloaderState *resourceloaderBugState; // @synthesize resourceloaderBugState=_resourceloaderBugState;
@property(retain, nonatomic) NSDate *lastCreatedDate; // @synthesize lastCreatedDate=_lastCreatedDate;
@property(nonatomic) double playbackTargetBufferLength; // @synthesize playbackTargetBufferLength=_playbackTargetBufferLength;
@property(nonatomic) float playablePos; // @synthesize playablePos=_playablePos;
@property(nonatomic) unsigned int dataSwitchSuccCount; // @synthesize dataSwitchSuccCount=_dataSwitchSuccCount;
@property(nonatomic) unsigned int dataSwitchCount; // @synthesize dataSwitchCount=_dataSwitchCount;
@property(nonatomic) _Bool fromQueuePreCreate; // @synthesize fromQueuePreCreate=_fromQueuePreCreate;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(retain, nonatomic) NSMutableDictionary *dicNetworkInfo; // @synthesize dicNetworkInfo=_dicNetworkInfo;
@property(retain, nonatomic) NSString *acodec; // @synthesize acodec=_acodec;
@property(retain, nonatomic) NSString *vcodec; // @synthesize vcodec=_vcodec;
@property(nonatomic) long long audiorate; // @synthesize audiorate=_audiorate;
@property(nonatomic) long long videorate; // @synthesize videorate=_videorate;
@property(nonatomic) long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) float bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(retain, nonatomic) WCPlayerVideoMetadata *mediadata; // @synthesize mediadata=_mediadata;
@property(nonatomic) unsigned long long currentDataRespOffset; // @synthesize currentDataRespOffset=_currentDataRespOffset;
@property(nonatomic) unsigned long long recoverState; // @synthesize recoverState=_recoverState;
@property(nonatomic) _Bool isPlayToEnd; // @synthesize isPlayToEnd=_isPlayToEnd;
@property(nonatomic) unsigned long long processState; // @synthesize processState=_processState;
@property(readonly, nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) unsigned long long lastState; // @synthesize lastState=_lastState;
@property(readonly, nonatomic) unsigned long long initialProcess; // @synthesize initialProcess=_initialProcess;
@property(retain, nonatomic) NSString *playerErrorDesc; // @synthesize playerErrorDesc=_playerErrorDesc;
@property(nonatomic) long long playerErrorCode; // @synthesize playerErrorCode=_playerErrorCode;
@property(nonatomic) unsigned long long playerErrorType; // @synthesize playerErrorType=_playerErrorType;
@property(retain, nonatomic) NSMutableArray *arrBufferEmptyEvent; // @synthesize arrBufferEmptyEvent=_arrBufferEmptyEvent;
@property(retain, nonatomic) WCPlayerBufferEvent *bufferEmptyEvent; // @synthesize bufferEmptyEvent=_bufferEmptyEvent;
@property(nonatomic) unsigned long long bufferState; // @synthesize bufferState=_bufferState;
@property(nonatomic) long long totalBufferTime; // @synthesize totalBufferTime=_totalBufferTime;
@property(retain, nonatomic) WCDownloadArgsWrap *sourceSwitchingArgsWrap; // @synthesize sourceSwitchingArgsWrap=_sourceSwitchingArgsWrap;
@property(nonatomic) double sourceSwitchEndTime; // @synthesize sourceSwitchEndTime=_sourceSwitchEndTime;
@property(nonatomic) double sourceSwitchStartTime; // @synthesize sourceSwitchStartTime=_sourceSwitchStartTime;
@property(nonatomic) long long switchMode; // @synthesize switchMode=_switchMode;
@property(nonatomic) _Bool isDataSourceSwitching; // @synthesize isDataSourceSwitching=_isDataSourceSwitching;
@property(nonatomic) _Bool bSeeking; // @synthesize bSeeking=_bSeeking;
@property(nonatomic) double limitBufferLength; // @synthesize limitBufferLength=_limitBufferLength;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool bReadyToPlay; // @synthesize bReadyToPlay=_bReadyToPlay;
@property(nonatomic) int preloadPriority; // @synthesize preloadPriority=_preloadPriority;
@property(nonatomic) unsigned int playerCreateTime; // @synthesize playerCreateTime=_playerCreateTime;
@property(nonatomic) double totalPlaybackTime; // @synthesize totalPlaybackTime=_totalPlaybackTime;
@property(nonatomic) unsigned int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) _Bool isPictureInPicturing; // @synthesize isPictureInPicturing=_isPictureInPicturing;
@property(retain, nonatomic) WCDownloadArgsWrap *currentArgsWrap; // @synthesize currentArgsWrap=_currentArgsWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *playArgs; // @synthesize playArgs=_playArgs;
@property(nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property(nonatomic) int resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) int playerType; // @synthesize playerType=_playerType;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <WCPlayerPlaybackInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetPlaybackInfo;
- (unsigned long long)getDownloadLength;
- (unsigned long long)getExceedLength;
- (unsigned long long)getExtraLength;
- (double)getExtraTime;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getResourceRefer;
- (id)getResourceUrl;
- (id)getMediaIdentifier;
- (double)getMaxPlayPosition;
- (double)getMaxPlayProgress;
- (_Bool)isRecoverStateHadResetedPlayer;
- (_Bool)setInitialProcess:(unsigned long long)arg1;
- (void)updateDecodeFrmCnt:(long long)arg1 renderFrmCnt:(long long)arg2 tsGap:(unsigned long long)arg3;
- (void)onPlayerStoped;
- (_Bool)setPlayerState:(unsigned long long)arg1;
- (unsigned int)bufferredCount;
- (id)getAllBufferEvent;
- (_Bool)isBuffering;
- (void)checkPlayerFilePermission;
- (double)getBufferDurationToPlay;
- (void)onBufferingEnd;
- (void)onStartBufferingWithType:(unsigned long long)arg1;
- (_Bool)isVideoPlayStopped;
- (id)initWithArgs:(id)arg1;

@end

