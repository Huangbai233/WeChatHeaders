//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSDate, NSString;

@interface CdnComMgr
{
    unsigned int m_uiGetCdnDnsInfoEventID;
    unsigned int m_uiGetCdnCount;
    NSDate *m_tGetCdn;
    unsigned int m_uiSnsGetCdnDistanceRequestEventID;
    _Bool m_bInitCdnCom;
    _Bool m_bHasGetCdnDns;
    _Bool m_bNetWorkChangeRetry;
    _Bool m_bIgnoreBackGroundFetchRetry;
    _Bool m_bForbidSnsDownloadWithCustomProtocol;
    int m_vcodec1Limit;
    struct Config {
        int enable_safecdn;
        int enable_snsvideo_stream_download;
        int enable_snsimage_stream_download;
        basic_string_5909a4e2 video_private_protocol_approved_hostlist;
        struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> miscellaneous_exptvalues;
    } m_currentConfig;
    struct shared_ptr<CdnCallback> m_spCallback;
}

+ (_Bool)SnsStreamImageEnable;
+ (id)GetMsgUploadClientMsgID:(id)arg1;
+ (int)GetVideoDownloadCodecFlag;
+ (_Bool)enableC2CWxamDownload;
+ (_Bool)IsSupportVcodec2;
+ (id)GetDownloadThumbClientID:(id)arg1;
+ (id)GetDownloadClientID:(id)arg1 HD:(_Bool)arg2;
+ (id)GetCdnRootPath;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool m_bForbidSnsDownloadWithCustomProtocol; // @synthesize m_bForbidSnsDownloadWithCustomProtocol;
- (void)SetAllDebugIP:(id)arg1;
- (void)SetHttpDownloadDebugIP:(id)arg1;
- (void)SetSNSDownloadDebugIP:(id)arg1;
- (void)SetSNSUploadDebugIP:(id)arg1;
- (void)SetFriendsImageDownloadDebugIP:(id)arg1;
- (void)SetFriendsImageUploadDebugIP:(id)arg1;
- (void)SetFavoriteDownloadDebugIP:(id)arg1;
- (void)SetFavoriteUploadDebugIP:(id)arg1;
- (void)SetC2CDownloadDebugIP:(id)arg1;
- (void)SetC2CUploadDebugIP:(id)arg1;
- (id)GetHttpDownloadDebugIP;
- (id)GetSNSDownloadDebugIP;
- (id)GetSNSUploadDebugIP;
- (id)GetFriendsImageDownloadDebugIP;
- (id)GetFriendsImageUploadDebugIP;
- (id)GetFavoriteDownloadDebugIP;
- (id)GetFavoriteUploadDebugIP;
- (id)GetC2CDownloadDebugIP;
- (id)GetC2CUploadDebugIP;
- (int)convertDownloadBehavior:(long long)arg1;
- (_Bool)StartSnsVideoStreamingDownload:(id)arg1 httpUrl:(id)arg2 fileType:(int)arg3 appType:(int)arg4 filePath:(id)arg5 preloadPercent:(int)arg6 Timeout:(unsigned int)arg7 referer:(id)arg8 blockSize:(unsigned int)arg9;
- (void)stopUploadGroupPayPfImage:(id)arg1;
- (_Bool)StartUploadGroupPayPfImageWithMediaInfo:(id)arg1;
- (_Bool)StartUploadMailAttachWithClientMediaID:(id)arg1 filePath:(id)arg2 uploadKey:(id)arg3 host:(id)arg4;
- (void)StopUploadEmoji:(id)arg1;
- (_Bool)StartUploadEmoji:(id)arg1;
- (int)tryMultisockC2CDowload:(struct C2CDownloadRequest)arg1;
- (int)tryMultisockC2CUpload:(struct C2CUploadRequest)arg1;
- (id)getClientIPV6;
- (id)getClientIPV4;
- (id)genarateResAesKey;
- (id)calcMP4IdentifyMD5WithFilePath:(id)arg1;
- (id)calcFileMd5WithFilePath:(id)arg1;
- (void)SetCdnHostIPFromNewDNS;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)onAuthOK;
- (void)OnRequestGetCdnDns:(int)arg1;
- (void)CallInternalGetCdnDns:(id)arg1;
- (void)OnDownloadEnd:(id)arg1;
- (void)CallDownloadExtendsion:(id)arg1;
- (void)OnDownloadProgress:(id)arg1;
- (void)OnPreloadCompleted:(id)arg1;
- (void)CallPreloadCompletedExtendsion:(id)arg1;
- (void)onDownloadToEnd:(id)arg1;
- (void)CallDownloadToEndExtendsion:(id)arg1;
- (void)OnMoovReady:(id)arg1;
- (void)OnMoovNotFound:(id)arg1;
- (void)OnM3u8Ready:(id)arg1;
- (void)CallDownloadM3u8ReadyExtendsion:(id)arg1;
- (void)CallDownloadMoovReadyExtendsion:(id)arg1;
- (void)OnDownloadPartialVideoData:(id)arg1;
- (void)CallDownloadPartialDataExtendsion:(id)arg1;
- (void)CallDownloadProgressExtendsion:(id)arg1;
- (void)OnUploadEnd:(id)arg1;
- (void)OnCallDownloadNotifyPeerUploadFinish:(id)arg1 uploadFinish:(_Bool)arg2 fileSize:(unsigned long long)arg3;
- (void)OnUploadGetCdnFileID:(id)arg1;
- (void)CallUploadExtendsion:(id)arg1;
- (void)OnUploadProgress:(id)arg1;
- (void)CallUploadProgressExtendsion:(id)arg1;
- (_Bool)StartUploadMusicVideoImage:(id)arg1;
- (_Bool)StartUploadDeviceFile:(id)arg1;
- (_Bool)StartUploadEncryptDeviceImage:(id)arg1;
- (_Bool)StartUploadDeviceRankCover:(id)arg1;
- (void)StopUploadTimelineMediaOfSight:(id)arg1;
- (_Bool)StartUploadTimelineMediaOfSight:(id)arg1;
- (_Bool)StartUploadTimelineMediaOfSightThumb:(id)arg1;
- (void)StopUploadTimelineMedia:(id)arg1;
- (_Bool)StartUploadTimelineMedia:(id)arg1;
- (_Bool)CancelUploadWeappMedia:(id)arg1;
- (_Bool)StartUploadWeappMedia:(id)arg1;
- (void)StopDownloadNormalFile:(id)arg1;
- (_Bool)StartDownloadNormalFile:(id)arg1;
- (void)StopUploadNormalFile:(id)arg1;
- (_Bool)StartUploadNormalFile:(id)arg1;
- (int)StartDownloadRecordMedia:(id)arg1;
- (_Bool)StartUploadRecordMedia:(id)arg1 enableHitCheck:(_Bool)arg2;
- (void)StopDownloadFavMedia:(id)arg1;
- (_Bool)StartDownloadFavMedia:(id)arg1;
- (void)StopUploadFavMedia:(id)arg1;
- (_Bool)StartUploadFavMedia:(id)arg1;
- (void)StopDownloadComMedia:(id)arg1;
- (_Bool)StartDownloadComMedia:(id)arg1;
- (void)StopUploadComMedia:(id)arg1;
- (_Bool)StartUploadComMedia:(id)arg1;
- (_Bool)CheckAppAttachExist:(id)arg1 IsLargeFile:(_Bool)arg2;
- (unsigned long long)QueryDownloadedLength:(id)arg1 fileUrl:(id)arg2 filePath:(id)arg3 fileSize:(unsigned long long)arg4 isLargeFile:(_Bool)arg5;
- (_Bool)StopDownloadAppAttach:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StartDownloadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 SvrSign:(id)arg3 bigFileAes:(id)arg4 bigFileSign:(id)arg5 Silent:(_Bool)arg6 autoDownload:(_Bool)arg7 behavior:(long long)arg8;
- (_Bool)StartDownloadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 SvrSign:(id)arg3 bigFileAes:(id)arg4 bigFileSign:(id)arg5 Silent:(_Bool)arg6;
- (int)startDownloadGameWithFileKey:(id)arg1 isThumb:(_Bool)arg2 imgUrl:(id)arg3 savePath:(id)arg4 aesKey:(id)arg5;
- (_Bool)startUploadGameWithFileKey:(id)arg1 imagePath:(id)arg2 thumbPath:(id)arg3 aesKey:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg4;
- (_Bool)StartUploadGameVideo:(id)arg1 fileMd5:(id)arg2 videoPath:(id)arg3 thumbPath:(id)arg4 enableHitCheck:(_Bool)arg5;
- (_Bool)StartUploadGameHaowanImage:(id)arg1 imagePath:(id)arg2;
- (_Bool)StartUploadGameHaowanVideo:(id)arg1 videoPath:(id)arg2 thumbPath:(id)arg3;
- (void)StopUploadTextStateMedia:(id)arg1;
- (_Bool)StartTextStateDownloadWithTaskInfoWrap:(id)arg1;
- (_Bool)StartUploadTextStateVideoWithTaskInfo:(id)arg1;
- (_Bool)StartUploadTextStateImageWithTaskInfo:(id)arg1;
- (_Bool)StartUploadTingImageWithTask:(id)arg1;
- (_Bool)StartDownloadFinderImage:(id)arg1 retCode:(int *)arg2;
- (_Bool)StartDownloadFinderImage:(id)arg1;
- (_Bool)StartFinderDownloadWithTaskInfoWrap:(id)arg1;
- (void)StopUploadFinderMedia:(id)arg1;
- (_Bool)StartUploadFinderCoverWithTaskInfo:(id)arg1;
- (_Bool)StartUploadFinderVideoWithTaskInfo:(id)arg1 cdnHeaderParamType:(unsigned long long)arg2 forbidFinishCallBack:(_Bool)arg3;
- (_Bool)StartUploadFinderVideoWithTaskInfo:(id)arg1 cdnHeaderParamType:(unsigned long long)arg2;
- (_Bool)StartUploadTingAudioRecordWithTaskInfo:(id)arg1;
- (_Bool)StartUploadAudioWithTaskInfo:(id)arg1;
- (_Bool)StartUploadFinderImageWithTaskInfo:(id)arg1 cdnHeaderParamType:(unsigned long long)arg2 forbidFinishCallBack:(_Bool)arg3;
- (_Bool)StartUploadFinderImageWithTaskInfo:(id)arg1 cdnHeaderParamType:(unsigned long long)arg2;
- (void)StopUploadStoryMedia:(id)arg1;
- (_Bool)StartStoryDownloadWithTaskInfoWrap:(id)arg1;
- (int)getRequestVideoFormatWithFilePath:(id)arg1 h265DownloadFlag:(int)arg2;
- (_Bool)StartUploadStoryWithTaskInfo:(id)arg1;
- (void)StopUploadAppAttach:(id)arg1;
- (_Bool)StartUploadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 FileMd5:(id)arg3 SvrSign:(id)arg4 bigFileAes:(id)arg5 bigFileSign:(id)arg6 enableHitCheck:(_Bool)arg7 filekey:(id)arg8 isOpenRealtimeUpload:(_Bool)arg9;
- (_Bool)StartUploadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 FileMd5:(id)arg3 SvrSign:(id)arg4 bigFileAes:(id)arg5 bigFileSign:(id)arg6 enableHitCheck:(_Bool)arg7 filekey:(id)arg8;
- (_Bool)StopDownloadSnsImage:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StartDownloadSnsWWImage:(id)arg1;
- (_Bool)StartDownloadSnsImage:(id)arg1;
- (void)StopDownloadThumb:(id)arg1;
- (_Bool)StartDownloadThumb:(id)arg1;
- (_Bool)StartSnsDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(_Bool)arg5 withAppType:(int)arg6 withSnsDecodKey:(id)arg7;
- (_Bool)StopHttpsDownloadTask:(id)arg1;
- (_Bool)StartHttpsDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(_Bool)arg5 withFileType:(int)arg6;
- (_Bool)StartHttpMultiSocketDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 durationMs:(int)arg4;
- (_Bool)StartVideoStreamingDownload:(id)arg1 DownloadMode:(int)arg2;
- (_Bool)StartVideoStreamingDownload:(id)arg1 PlayMode:(_Bool)arg2;
- (_Bool)StartVideoPreload:(id)arg1;
- (int)getRequestVideoFormatWthSavePath:(id)arg1 expectFormat:(int)arg2;
- (int)getRequestVideoFormat:(id)arg1 tempPath:(id)arg2;
- (int)getSNSVideoFormat:(id)arg1 fileType:(int)arg2 dataUrl:(id)arg3 adVideoFormatIDKey:(int *)arg4;
- (_Bool)StartSNSDownloadWithTaskInfoWrap:(id)arg1;
- (_Bool)StopAllDownloadTaskWithFileType:(int)arg1 CancelFlag:(int)arg2;
- (_Bool)StartHttpVideoStreamingDownload:(id)arg1 httpUrl:(id)arg2 fileType:(int)arg3 filePath:(id)arg4 preloadPercent:(int)arg5 Timeout:(unsigned int)arg6 referer:(id)arg7 blockSize:(unsigned int)arg8;
- (_Bool)StartHttpVideoStreamingDownload:(id)arg1 httpUrl:(id)arg2 fileType:(int)arg3 filePath:(id)arg4 preloadPercent:(int)arg5 Timeout:(unsigned int)arg6;
- (_Bool)StartHttpVideoStreamingDownload:(id)arg1 fileType:(int)arg2 filePath:(id)arg3 preloadPercent:(int)arg4 Timeout:(unsigned int)arg5;
- (_Bool)StartHttpVideoStreamingDownload:(id)arg1 fileType:(int)arg2 filePath:(id)arg3 preloadPercent:(int)arg4;
- (_Bool)StopDownloadVideo:(id)arg1 downloadTaskInfo:(id *)arg2;
- (_Bool)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2 Silent:(_Bool)arg3 behavior:(long long)arg4;
- (void)StopUploadVideo:(id)arg1;
- (_Bool)StartUploadVideo:(id)arg1 enableHitCheck:(_Bool)arg2 filekey:(id)arg3;
- (void)StopUploadImage:(id)arg1;
- (_Bool)StartUploadDetectImage:(id)arg1;
- (_Bool)StartUploadTransImage:(id)arg1;
- (_Bool)StartUploadImage:(id)arg1 enableHitCheck:(_Bool)arg2 disableHevc:(_Bool)arg3 lastError:(int)arg4 filekey:(id)arg5 sendMsgFromCdn:(_Bool)arg6 attachPrepareRequest:(_Bool)arg7;
- (id)GetUploadImageBuffer:(id)arg1 NoCommitCdnMsg:(_Bool)arg2;
- (int)startDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3 andDownloadMode:(int)arg4;
- (int)startDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3;
- (_Bool)StopDownloadWithClientMediaID:(id)arg1 downloadTaskInfo:(id *)arg2;
- (void)OnRequestGetCdnDistance:(unsigned int)arg1 province:(unsigned int)arg2 city:(unsigned int)arg3;
- (void)CheckCdnInfo;
- (void)GetCdnDnsInfo:(unsigned int)arg1;
- (void)InternalGetCdnDnsInfo:(unsigned int)arg1;
- (unsigned long long)QueryContinousSizeWithClientId:(id)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)QueryDownloadedSizesWithClientId:(id)arg1;
- (int)GetAverageSpeedWithClientId:(id)arg1 recentSeconds:(int)arg2;
- (list_a29d43c9)getCGIAndCDNConnectSpeedInfoWithRecentSeconds:(int)arg1 limitCount:(int)arg2;
- (struct DownloadInfo)getDownloadInfoRecentWithAppType:(int)arg1 filetype:(int)arg2 recentMS:(int)arg3 beginTick:(unsigned long long)arg4 shiftMS:(int)arg5;
- (struct DownloadInfo)getDownloadInfoRecentWithAppTypeV2:(int)arg1 filetype:(int)arg2 recentSeconds:(int)arg3 shiftMS:(int)arg4;
- (struct DownloadInfo)getDownloadInfoRecentWithAppType:(int)arg1 filetype:(int)arg2 recentSeconds:(int)arg3;
- (int)GetAverageSpeedWithRecentSeconds:(int)arg1;
- (int)GetRecentAverageSpeed;
- (void)checkCdnDownloadBehavior:(_Bool)arg1 behavior:(long long)arg2;
- (int)GetVcodec1Limit;
- (_Bool)IsCanRetry:(int)arg1;
- (_Bool)IsCdnAvaible;
- (_Bool)IsAppMsgUseCdn;
- (_Bool)IsVideoUseCdn;
- (_Bool)IsImageUseCdn;
- (_Bool)IsCanUseRealtimeDownload:(id)arg1;
- (_Bool)IsCdnHideAeskey;
- (_Bool)IsMessageCanUseCdnDownload:(id)arg1;
- (_Bool)IsMessageCanUseCdnUpload:(id)arg1;
- (_Bool)isAppMsgMustUseCdnUpload:(id)arg1;
- (void)UnInit;
- (void)InitWithCdnInfo:(id)arg1;
- (void)CdnInit;
- (void)CdnInitForNonLogin;
- (void)UpdateDynamicConfig;
- (void)UpdateExptConfig;
- (void)onMMDynamicConfigUpdated;
- (void)onExptItemListChange;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

