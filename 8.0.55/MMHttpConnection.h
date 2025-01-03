//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableData, NSString, NSURLConnection;
@protocol MMHttpConnectionDelegate><NSObject;

@interface MMHttpConnection
{
    unsigned int mStatusCode;
    NSString *m_nsFileName;
    MMTimer *m_tmCheckTimeOut;
    unsigned int m_uiHttpType;
    NSString *m_nsNotifyKey;
    unsigned int m_uiContentLen;
    id <MMHttpConnectionDelegate><NSObject> mDelegate;
    _Bool m_bGZip;
    _Bool isWebp;
    unsigned int mConnProto;
    NSURLConnection *mUrlConn;
    NSMutableData *mRecvData;
    NSString *mCacheKey;
    double timeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double timeInterval; // @synthesize timeInterval;
@property(nonatomic) _Bool isWebp; // @synthesize isWebp;
@property(retain, nonatomic) NSString *m_nsNotifyKey; // @synthesize m_nsNotifyKey;
@property(nonatomic) unsigned int m_uiHttpType; // @synthesize m_uiHttpType;
@property(retain, nonatomic) MMTimer *m_tmCheckTimeOut; // @synthesize m_tmCheckTimeOut;
@property(retain, nonatomic) NSString *m_nsFileName; // @synthesize m_nsFileName;
@property(nonatomic) unsigned int mConnProto; // @synthesize mConnProto;
@property(retain, nonatomic) NSString *mCacheKey; // @synthesize mCacheKey;
@property(retain, nonatomic) NSMutableData *mRecvData; // @synthesize mRecvData;
@property(retain, nonatomic) NSURLConnection *mUrlConn; // @synthesize mUrlConn;
- (void)TimeOut;
- (void)cancelRequest;
- (_Bool)spostWithURL:(id)arg1 body:(id)arg2 boundary:(id)arg3;
- (_Bool)sgetWithURL:(id)arg1;
- (_Bool)getWithURL:(id)arg1 andRefererHeader:(id)arg2;
- (_Bool)getWithURL:(id)arg1;
- (void)dealloc;
- (void)CancelTimer;
- (id)initWithProtocol:(unsigned int)arg1 andDelegate:(id)arg2;
- (_Bool)connectWithRequest:(id)arg1;
- (_Bool)setPostRequestHeader:(id)arg1 boundary:(id)arg2;
- (_Bool)setNormalRequestHeader:(id)arg1;
- (void)saveRawDataIfNeeded:(id)arg1 fileName:(id)arg2;
- (void)handleMd5WithRaw:(id)arg1 urlStr:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;

@end

