//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSAudioDataProvider, KSAudioPlayer, KSAudioQueue, KSSongInfo, NSError, NSString;
@protocol KSAudioFileProtocol, KSAudioProcessorProtocol, OS_dispatch_queue;

@interface KSAudioStreamPlayBackItem : NSObject
{
    KSAudioDataProvider *_audioDataProvider;
    id <KSAudioFileProtocol> _audioFile;
    unsigned long long _status;
    NSError *_detailErr;
    unsigned long long _errType;
    NSObject<OS_dispatch_queue> *_queue;
    void *_queueContext;
    struct AudioStreamBasicDescription _outputFormat;
    double _duration;
    float _volume;
    float _playRate;
    _Bool _secondCacheSW;
    _Bool _bForceStop;
    _Bool _isPlayingEndingPause;
    _Bool _isPauseStatusAtPreSeek;
    unsigned int _secondCacheCnt;
    double _audioQueuePlayTime;
    KSAudioPlayer *_audioPlayer;
    id <KSAudioProcessorProtocol> _audioProcessor;
    KSAudioQueue *_audioQueue;
    double _seekTime;
    double _timeoffset;
    double _curTime;
    double _bufferingProgress;
    double _startTime;
    double _firstBufTime;
    double _secondCacheTotalDuration;
    double _secondCacheStartTime;
    unsigned long long _preStatus;
    long long _timmerDispatchCnt;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPauseStatusAtPreSeek; // @synthesize isPauseStatusAtPreSeek=_isPauseStatusAtPreSeek;
@property(nonatomic) _Bool isPlayingEndingPause; // @synthesize isPlayingEndingPause=_isPlayingEndingPause;
@property(nonatomic) _Bool bForceStop; // @synthesize bForceStop=_bForceStop;
@property(nonatomic) long long timmerDispatchCnt; // @synthesize timmerDispatchCnt=_timmerDispatchCnt;
@property(nonatomic) unsigned long long preStatus; // @synthesize preStatus=_preStatus;
@property(nonatomic) double secondCacheStartTime; // @synthesize secondCacheStartTime=_secondCacheStartTime;
@property(nonatomic) double secondCacheTotalDuration; // @synthesize secondCacheTotalDuration=_secondCacheTotalDuration;
@property(nonatomic) double firstBufTime; // @synthesize firstBufTime=_firstBufTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool secondCacheSW; // @synthesize secondCacheSW=_secondCacheSW;
@property(nonatomic) double bufferingProgress; // @synthesize bufferingProgress=_bufferingProgress;
@property(nonatomic) double curTime; // @synthesize curTime=_curTime;
@property(nonatomic) double timeoffset; // @synthesize timeoffset=_timeoffset;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(retain, nonatomic) KSAudioQueue *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) id <KSAudioProcessorProtocol> audioProcessor; // @synthesize audioProcessor=_audioProcessor;
@property(nonatomic) __weak KSAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) double audioQueuePlayTime; // @synthesize audioQueuePlayTime=_audioQueuePlayTime;
@property(nonatomic) unsigned int secondCacheCnt; // @synthesize secondCacheCnt=_secondCacheCnt;
@property(readonly, nonatomic) void *queueContext; // @synthesize queueContext=_queueContext;
@property(readonly, nonatomic) NSError *detailErr; // @synthesize detailErr=_detailErr;
@property(readonly, nonatomic) unsigned long long errType; // @synthesize errType=_errType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) KSAudioDataProvider *audioDataProvider; // @synthesize audioDataProvider=_audioDataProvider;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)provider:(id)arg1 useDefaultAudioFile:(id *)arg2;
- (void)provider:(id)arg1 onGuessType:(id)arg2;
- (void)providerOnNetErr:(id)arg1;
- (void)providerOnDataErr:(id)arg1;
- (void)providerOnDataFinish:(id)arg1;
- (void)providerOnDataReceive:(id)arg1;
- (void)providerOnDataReady:(id)arg1;
- (struct AudioTimeStamp *)syncStartTimeStamp;
- (void)audioQueue:(id)arg1 stateChange:(_Bool)arg2;
- (void)audioQueue:(id)arg1 hasAvailablebuf:(id)arg2;
- (void)initOutputFormat;
- (void)prepareAddtionReadData:(long long)arg1;
- (_Bool)isCanSeek:(double)arg1;
- (_Bool)seekInner:(double)arg1;
- (void)onPlayErr;
- (_Bool)playAudioData;
- (_Bool)perparePlayAudio;
- (_Bool)parseLPCMData:(id)arg1 desCnt:(unsigned int *)arg2 err:(id *)arg3;
- (_Bool)parseData:(id)arg1 desCnt:(unsigned int *)arg2 err:(id *)arg3;
- (_Bool)resumeInner:(_Bool)arg1;
- (_Bool)pauseInner:(_Bool)arg1;
- (void)stopInner:(_Bool)arg1;
- (void)setDetailErr:(id)arg1;
- (void)setErrType:(unsigned long long)arg1;
@property(readonly, nonatomic) double cacheProgress;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double currentTimeSync;
- (void)setStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) KSSongInfo *curSong;
@property(nonatomic) float playRate;
@property(nonatomic) float volume;
- (id)dataProviderDetail;
- (_Bool)preSeekInner:(double)arg1;
- (_Bool)seekSync:(double)arg1;
- (void)seek:(double)arg1;
- (void)stop:(_Bool)arg1;
- (_Bool)isStopped;
- (_Bool)resumeSync:(_Bool)arg1;
- (_Bool)resume:(_Bool)arg1;
- (_Bool)pausePlayAndDownloadData;
- (_Bool)pauseSync:(_Bool)arg1;
- (_Bool)pause:(_Bool)arg1;
- (_Bool)prepareAudioData:(double)arg1;
- (void)dealloc;
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2 context:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

