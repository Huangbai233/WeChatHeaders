//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LZDownloadTaskItem, NSURLConnection;

@interface MMKSMusicDataDownloader
{
    NSURLConnection *_urlConnection;
    LZDownloadTaskItem *_taskItem;
    long long _statusCode;
    long long _downloadDataLen;
    double _startTime;
    double _downloadSpeed;
    double _costTime;
    struct _NSRange _downloadRange;
}

- (void).cxx_destruct;
@property(nonatomic) double costTime; // @synthesize costTime=_costTime;
@property(nonatomic) double downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long downloadDataLen; // @synthesize downloadDataLen=_downloadDataLen;
@property(nonatomic) struct _NSRange downloadRange; // @synthesize downloadRange=_downloadRange;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) LZDownloadTaskItem *taskItem; // @synthesize taskItem=_taskItem;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
- (void)reportContentRangeError;
- (void)reportContentLengthError;
- (void)reportContentTypeError;
- (void)reportDownloadStart;
- (id)syncReplaceRequestIPIfNeed:(id)arg1;
- (_Bool)ParseRangeInfo:(id)arg1 Result:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (_Bool)isErrorCanRetry:(id)arg1;
- (_Bool)beginDownload:(id)arg1;
- (double)downloadCostTime;
- (long long)continuousLengh;
- (void)cancel;
- (void)dealloc;

@end

