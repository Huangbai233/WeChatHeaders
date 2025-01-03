//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LZDownloadTaskItem, NSURLConnection, NSURLRequest;

@interface KSHttpAudioDataDownload
{
    NSURLRequest *_urlRequest;
    NSURLConnection *_urlConnection;
    LZDownloadTaskItem *_taskItem;
    long long _statusCode;
    struct _NSRange _downloadRange;
    long long _downloadDataLen;
    double _startTime;
    double _downloadSpeed;
    double _costTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(readonly, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
- (_Bool)ParseRangeInfo:(id)arg1 Result:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)createURLRequest;
- (_Bool)isErrorCanRetry:(id)arg1;
- (_Bool)beginDownload:(id)arg1;
- (double)downloadCostTime;
- (double)downloadSpeed;
- (long long)continuousLengh;
- (struct _NSRange)downloadRange;
- (id)taskItem;
- (void)cancel;
- (void)dealloc;

@end

