//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCUrl;

@interface VideoStreamInfo : NSObject
{
    float _m_uiVideoTime;
    int _m_siVideoBitrate;
    unsigned int _m_uiVideoLen;
    float _m_uiMaxLimitDuration;
    float _m_uiPreloadSec;
    float _m_uiSecByOnceDownload;
    float _minBufferLimit;
    float _maxBufferLimit;
    unsigned int _m_uiMoovPos;
    unsigned int _m_uiDownloadStatus;
    NSString *_m_nsClientMediaId;
    NSString *_m_nsVideoPath;
    NSString *_m_nsDataUrl;
    NSString *_m_nsAesKey;
    unsigned long long _m_uiDownloadMode;
    WCUrl *_m_wcDataUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiDownloadStatus; // @synthesize m_uiDownloadStatus=_m_uiDownloadStatus;
@property(retain, nonatomic) WCUrl *m_wcDataUrl; // @synthesize m_wcDataUrl=_m_wcDataUrl;
@property(nonatomic) unsigned int m_uiMoovPos; // @synthesize m_uiMoovPos=_m_uiMoovPos;
@property(nonatomic) float maxBufferLimit; // @synthesize maxBufferLimit=_maxBufferLimit;
@property(nonatomic) float minBufferLimit; // @synthesize minBufferLimit=_minBufferLimit;
@property(nonatomic) float m_uiSecByOnceDownload; // @synthesize m_uiSecByOnceDownload=_m_uiSecByOnceDownload;
@property(nonatomic) float m_uiPreloadSec; // @synthesize m_uiPreloadSec=_m_uiPreloadSec;
@property(nonatomic) float m_uiMaxLimitDuration; // @synthesize m_uiMaxLimitDuration=_m_uiMaxLimitDuration;
@property(nonatomic) unsigned long long m_uiDownloadMode; // @synthesize m_uiDownloadMode=_m_uiDownloadMode;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey=_m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsDataUrl; // @synthesize m_nsDataUrl=_m_nsDataUrl;
@property(retain, nonatomic) NSString *m_nsVideoPath; // @synthesize m_nsVideoPath=_m_nsVideoPath;
@property(nonatomic) unsigned int m_uiVideoLen; // @synthesize m_uiVideoLen=_m_uiVideoLen;
@property(nonatomic) int m_siVideoBitrate; // @synthesize m_siVideoBitrate=_m_siVideoBitrate;
@property(nonatomic) float m_uiVideoTime; // @synthesize m_uiVideoTime=_m_uiVideoTime;
@property(retain, nonatomic) NSString *m_nsClientMediaId; // @synthesize m_nsClientMediaId=_m_nsClientMediaId;
- (_Bool)isDownloadWhilePlayingMode;
- (id)init;

@end

