//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSString;

@interface UrlInfo : NSObject
{
    NSString *m_nsRequestUrl;
    NSData *m_dtResponseData;
    NSString *m_nsRefer;
    _Bool m_bGetMethod;
    NSData *m_dtBodyData;
    NSDictionary *m_dicReq;
    NSDictionary *m_dicResp;
    _Bool m_bCdn;
    NSString *m_nsRequestUrlSuffix;
    unsigned int m_uiRecvTime;
    unsigned int m_uiRetCode;
    unsigned int m_uiDataSize;
    unsigned int m_uiDnsCostTime;
    unsigned int m_uiConnectCostTime;
    unsigned int m_uiSendCostTime;
    unsigned int m_uiWaitResponseCostTime;
    unsigned int m_uiReceiveCostTime;
    NSString *m_nsClientIP;
    NSString *m_nsServerIP;
    unsigned int m_uiDnsType;
    NSString *m_host;
    NSString *m_nsXErrno;
    NSMutableArray *m_aryReceiveData;
    NSString *m_fileMd5;
    _Bool m_bSupportValidateMd5;
    _Bool m_bContinueReceive;
    NSString *m_filePath;
    _Bool m_useDCIP;
    _Bool m_fromSns;
    _Bool m_useXorEncrypt;
    unsigned long long m_xorEncryKey;
    unsigned int m_uiXEncIdx;
    NSString *m_nsXEnc;
    NSString *m_nsXEncToken;
    unsigned int m_uiReqestCSeq;
    unsigned int m_uiResponseCSeq;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiResponseCSeq; // @synthesize m_uiResponseCSeq;
@property(nonatomic) unsigned int m_uiReqestCSeq; // @synthesize m_uiReqestCSeq;
@property(nonatomic) unsigned int m_uiXEncIdx; // @synthesize m_uiXEncIdx;
@property(retain, nonatomic) NSString *m_nsXEncToken; // @synthesize m_nsXEncToken;
@property(retain, nonatomic) NSString *m_nsXEnc; // @synthesize m_nsXEnc;
@property(nonatomic) unsigned long long m_xorEncryKey; // @synthesize m_xorEncryKey;
@property(retain, nonatomic) NSMutableArray *m_aryReceiveData; // @synthesize m_aryReceiveData;
@property(nonatomic) _Bool m_useXorEncrypt; // @synthesize m_useXorEncrypt;
@property(nonatomic) _Bool m_fromSns; // @synthesize m_fromSns;
@property(nonatomic) _Bool m_useDCIP; // @synthesize m_useDCIP;
@property(nonatomic) _Bool m_bSupportValidateMd5; // @synthesize m_bSupportValidateMd5;
@property(retain, nonatomic) NSString *m_fileMd5; // @synthesize m_fileMd5;
@property(retain, nonatomic) NSString *m_filePath; // @synthesize m_filePath;
@property(nonatomic) _Bool m_bContinueReceive; // @synthesize m_bContinueReceive;
@property(retain, nonatomic) NSString *m_nsXErrno; // @synthesize m_nsXErrno;
@property(retain, nonatomic) NSString *m_nsRequestUrlSuffix; // @synthesize m_nsRequestUrlSuffix;
@property(retain, nonatomic) NSString *m_host; // @synthesize m_host;
@property(nonatomic) unsigned int m_uiDnsType; // @synthesize m_uiDnsType;
@property(retain, nonatomic) NSString *m_nsServerIP; // @synthesize m_nsServerIP;
@property(retain, nonatomic) NSString *m_nsClientIP; // @synthesize m_nsClientIP;
@property(nonatomic) unsigned int m_uiReceiveCostTime; // @synthesize m_uiReceiveCostTime;
@property(nonatomic) unsigned int m_uiWaitResponseCostTime; // @synthesize m_uiWaitResponseCostTime;
@property(nonatomic) unsigned int m_uiSendCostTime; // @synthesize m_uiSendCostTime;
@property(nonatomic) unsigned int m_uiConnectCostTime; // @synthesize m_uiConnectCostTime;
@property(nonatomic) unsigned int m_uiDnsCostTime; // @synthesize m_uiDnsCostTime;
@property(nonatomic) unsigned int m_uiDataSize; // @synthesize m_uiDataSize;
@property(nonatomic) unsigned int m_uiRetCode; // @synthesize m_uiRetCode;
@property(nonatomic) unsigned int m_uiRecvTime; // @synthesize m_uiRecvTime;
@property(nonatomic) _Bool m_bCdn; // @synthesize m_bCdn;
@property(retain, nonatomic) NSDictionary *m_dicResp; // @synthesize m_dicResp;
@property(retain, nonatomic) NSDictionary *m_dicReq; // @synthesize m_dicReq;
@property(retain, nonatomic) NSData *m_dtBodyData; // @synthesize m_dtBodyData;
@property(nonatomic) _Bool m_bGetMethod; // @synthesize m_bGetMethod;
@property(retain, nonatomic) NSString *m_nsRefer; // @synthesize m_nsRefer;
@property(retain, nonatomic) NSData *m_dtResponseData; // @synthesize m_dtResponseData;
@property(retain, nonatomic) NSString *m_nsRequestUrl; // @synthesize m_nsRequestUrl;
- (id)GenStatStringWithDataType:(unsigned long long)arg1;
- (id)GenStatString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

