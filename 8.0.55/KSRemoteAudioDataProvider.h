//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LZAudioDataDownloader, NSDictionary, NSString;
@protocol KSAudioFileProtocol, KSAudioPlayerUserDefineProtocol;

@interface KSRemoteAudioDataProvider
{
    id <KSAudioPlayerUserDefineProtocol> _userProtocol;
    _Bool _bReadyToParsing;
    long long _bytesParesd;
    unsigned int _parsingFlag;
    long long _parsingCnt;
    _Bool _enableLimitNet;
    _Bool _closed;
    _Bool _bPaused;
    _Bool _orgEnableLimitSetting;
    _Bool _bFirstLimitPart;
    unsigned int _retryCnt;
    unsigned int _maxRetryCnt;
    unsigned int _firstLimitTime;
    unsigned int _triggleTime;
    unsigned int _downloadTime;
    LZAudioDataDownloader *_headerDownloader;
    long long _headLastPos;
    LZAudioDataDownloader *_tailDownloader;
    id <KSAudioFileProtocol> _audioFile;
    NSString *_audioFileExt;
    NSString *_lastdownLoadUrl;
    double _lastDownloadSpeed;
    double _lastDownloadCost;
    NSDictionary *_lastDownloadDetailInfo;
    unsigned long long _cacheStatus;
    long long _lastReadingPos;
    struct _NSRange _tailDataRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bFirstLimitPart; // @synthesize bFirstLimitPart=_bFirstLimitPart;
@property(nonatomic) unsigned int downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) unsigned int triggleTime; // @synthesize triggleTime=_triggleTime;
@property(nonatomic) unsigned int firstLimitTime; // @synthesize firstLimitTime=_firstLimitTime;
@property(nonatomic) _Bool orgEnableLimitSetting; // @synthesize orgEnableLimitSetting=_orgEnableLimitSetting;
@property(nonatomic) long long lastReadingPos; // @synthesize lastReadingPos=_lastReadingPos;
@property(nonatomic) unsigned long long cacheStatus; // @synthesize cacheStatus=_cacheStatus;
@property(retain, nonatomic) NSDictionary *lastDownloadDetailInfo; // @synthesize lastDownloadDetailInfo=_lastDownloadDetailInfo;
@property(nonatomic) double lastDownloadCost; // @synthesize lastDownloadCost=_lastDownloadCost;
@property(nonatomic) double lastDownloadSpeed; // @synthesize lastDownloadSpeed=_lastDownloadSpeed;
@property(retain, nonatomic) NSString *lastdownLoadUrl; // @synthesize lastdownLoadUrl=_lastdownLoadUrl;
@property(nonatomic) unsigned int maxRetryCnt; // @synthesize maxRetryCnt=_maxRetryCnt;
@property(nonatomic) unsigned int retryCnt; // @synthesize retryCnt=_retryCnt;
@property(nonatomic) _Bool bPaused; // @synthesize bPaused=_bPaused;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(retain, nonatomic) NSString *audioFileExt; // @synthesize audioFileExt=_audioFileExt;
@property(nonatomic) __weak id <KSAudioFileProtocol> audioFile; // @synthesize audioFile=_audioFile;
@property(nonatomic) struct _NSRange tailDataRange; // @synthesize tailDataRange=_tailDataRange;
@property(retain, nonatomic) LZAudioDataDownloader *tailDownloader; // @synthesize tailDownloader=_tailDownloader;
@property(nonatomic) long long headLastPos; // @synthesize headLastPos=_headLastPos;
@property(retain, nonatomic) LZAudioDataDownloader *headerDownloader; // @synthesize headerDownloader=_headerDownloader;
@property(nonatomic) _Bool bReadyToParsing; // @synthesize bReadyToParsing=_bReadyToParsing;
@property(nonatomic) _Bool enableLimitNet; // @synthesize enableLimitNet=_enableLimitNet;
@property(readonly, nonatomic) id <KSAudioPlayerUserDefineProtocol> userProtocol; // @synthesize userProtocol=_userProtocol;
- (_Bool)isDataCorruption:(id)arg1;
- (void)onAudioTask:(id)arg1 receivedHeader:(id)arg2;
- (void)onAudioTask:(id)arg1 receivedData:(id)arg2;
- (void)onAudioTask:(id)arg1 error:(id)arg2;
- (void)onAudioTask:(id)arg1 finish:(id)arg2;
- (void)startLimitDownload:(long long)arg1;
- (void)judgeLimitDownload:(long long)arg1 addtionLen:(long long)arg2;
- (void)setAudioFileToPlay;
- (void)retryDownloadData:(id)arg1;
- (void)startDownload:(id)arg1 range:(struct _LzRange)arg2 retryCnt:(unsigned int)arg3;
- (void)tryParsingAudioInfo;
- (void)notifyAudioFileAlreadFinished;
- (id)buildDownloadProtocol;
- (void)close:(_Bool)arg1;
- (void)resumeDownloadData;
- (void)pauseDownloadData;
- (void)prepareBufferData;
- (void)prepareTailData:(struct _NSRange)arg1;
- (void)prepareSeekingData:(long long)arg1;
- (_Bool)prepareAudioData;
- (_Bool)canReadData:(long long)arg1 len:(long long)arg2 err:(id *)arg3;
- (_Bool)readFileData:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(_Bool *)arg4;
- (_Bool)isReady;
- (long long)fileCachingLength:(long long *)arg1;
- (id)audioFileExtension;
- (void)dealloc;
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3 downloadProtocol:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

