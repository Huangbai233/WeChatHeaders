//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSMutableDictionary, NSString;

@interface OpenInfo : NSObject
{
    unsigned int m_uiLocalID;
    NSString *m_nsUsrName;
    unsigned int m_uiCreateTime;
    unsigned int m_uiScene;
    CMessageWrap *m_wrapMsg;
    unsigned int m_uiStartPos;
    unsigned int m_uiAddQueueTime;
    _Bool m_bCheckMd5;
    NSString *m_nsAttachId;
    NSString *m_nsAttachFileExt;
    unsigned int m_uiAttachDataSize;
    unsigned long long m_ui64StartTime;
    _Bool m_bUpload;
    int m_nRetCode;
    _Bool _isRealtimeUpload;
    _Bool _m_bFileExistInSvr;
    _Bool _m_bSilent;
    _Bool _m_isDeleted;
    _Bool _isRevokingMsg;
    _Bool _isSendingMsg;
    _Bool _isSendingOverWriteMsg;
    _Bool _isParallelUpload;
    _Bool _disableHitCheck;
    _Bool _autoDownload;
    NSString *m_nsShareOriginUrl;
    NSString *m_nsShareOpenUrl;
    NSString *m_nsJsAppId;
    NSMutableDictionary *m_dicStatParas;
    NSString *_m_nsMsgMd5;
    NSString *_bigFileSignature;
    unsigned long long _emojiDataLength;
    long long _downloadBehavior;
}

- (void).cxx_destruct;
@property(nonatomic) long long downloadBehavior; // @synthesize downloadBehavior=_downloadBehavior;
@property(nonatomic) _Bool autoDownload; // @synthesize autoDownload=_autoDownload;
@property(nonatomic) _Bool disableHitCheck; // @synthesize disableHitCheck=_disableHitCheck;
@property(nonatomic) unsigned long long emojiDataLength; // @synthesize emojiDataLength=_emojiDataLength;
@property(retain, nonatomic) NSString *bigFileSignature; // @synthesize bigFileSignature=_bigFileSignature;
@property(nonatomic) _Bool isParallelUpload; // @synthesize isParallelUpload=_isParallelUpload;
@property(nonatomic) _Bool isSendingOverWriteMsg; // @synthesize isSendingOverWriteMsg=_isSendingOverWriteMsg;
@property(nonatomic) _Bool isSendingMsg; // @synthesize isSendingMsg=_isSendingMsg;
@property(nonatomic) _Bool isRevokingMsg; // @synthesize isRevokingMsg=_isRevokingMsg;
@property(nonatomic) _Bool m_isDeleted; // @synthesize m_isDeleted=_m_isDeleted;
@property(nonatomic) _Bool m_bSilent; // @synthesize m_bSilent=_m_bSilent;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5=_m_nsMsgMd5;
@property(nonatomic) _Bool m_bFileExistInSvr; // @synthesize m_bFileExistInSvr=_m_bFileExistInSvr;
@property(nonatomic) _Bool isRealtimeUpload; // @synthesize isRealtimeUpload=_isRealtimeUpload;
@property(retain, nonatomic) NSMutableDictionary *m_dicStatParas; // @synthesize m_dicStatParas;
@property(retain, nonatomic) NSString *m_nsJsAppId; // @synthesize m_nsJsAppId;
@property(retain, nonatomic) NSString *m_nsShareOpenUrl; // @synthesize m_nsShareOpenUrl;
@property(retain, nonatomic) NSString *m_nsShareOriginUrl; // @synthesize m_nsShareOriginUrl;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) _Bool m_bUpload; // @synthesize m_bUpload;
@property(nonatomic) unsigned int m_uiAttachDataSize; // @synthesize m_uiAttachDataSize;
@property(retain, nonatomic) NSString *m_nsAttachFileExt; // @synthesize m_nsAttachFileExt;
@property(retain, nonatomic) NSString *m_nsAttachId; // @synthesize m_nsAttachId;
@property(nonatomic) _Bool m_bCheckMd5; // @synthesize m_bCheckMd5;
@property(nonatomic) unsigned int m_uiAddQueueTime; // @synthesize m_uiAddQueueTime;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
- (id)GetStatInfo;
- (void)SetStartTime;
- (void)SetStatus;
- (_Bool)IsCanDownload;
- (_Bool)IsCanUpload;
- (void)GetMsg;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

