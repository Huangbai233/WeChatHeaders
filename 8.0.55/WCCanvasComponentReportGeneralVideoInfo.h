//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCanvasComponentReportUrlInfo, WCCanvasComponentReportVideoFloatAreaInfo;

@interface WCCanvasComponentReportGeneralVideoInfo
{
    unsigned int _videoDuration;
    unsigned int _playTimeInterval;
    unsigned int _playCount;
    unsigned int _playCompletedCount;
    unsigned int _clickPlayControlCount;
    unsigned int _clickVoiceControlCount;
    unsigned int _isAutoPlay;
    unsigned long long _clickSightCount;
    unsigned long long _clickFullscreenBtnCount;
    unsigned long long _doubleClickCount;
    unsigned long long _clickSightIconCount;
    WCCanvasComponentReportUrlInfo *_thumbUrlInfo;
    WCCanvasComponentReportUrlInfo *_videoUrlInfo;
    WCCanvasComponentReportVideoFloatAreaInfo *_floatAreaInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentReportVideoFloatAreaInfo *floatAreaInfo; // @synthesize floatAreaInfo=_floatAreaInfo;
@property(retain, nonatomic) WCCanvasComponentReportUrlInfo *videoUrlInfo; // @synthesize videoUrlInfo=_videoUrlInfo;
@property(retain, nonatomic) WCCanvasComponentReportUrlInfo *thumbUrlInfo; // @synthesize thumbUrlInfo=_thumbUrlInfo;
@property(nonatomic) unsigned long long clickSightIconCount; // @synthesize clickSightIconCount=_clickSightIconCount;
@property(nonatomic) unsigned long long doubleClickCount; // @synthesize doubleClickCount=_doubleClickCount;
@property(nonatomic) unsigned long long clickFullscreenBtnCount; // @synthesize clickFullscreenBtnCount=_clickFullscreenBtnCount;
@property(nonatomic) unsigned long long clickSightCount; // @synthesize clickSightCount=_clickSightCount;
@property(nonatomic) unsigned int isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) unsigned int clickVoiceControlCount; // @synthesize clickVoiceControlCount=_clickVoiceControlCount;
@property(nonatomic) unsigned int clickPlayControlCount; // @synthesize clickPlayControlCount=_clickPlayControlCount;
@property(nonatomic) unsigned int playCompletedCount; // @synthesize playCompletedCount=_playCompletedCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned int playTimeInterval; // @synthesize playTimeInterval=_playTimeInterval;
@property(nonatomic) unsigned int videoDuration; // @synthesize videoDuration=_videoDuration;
- (id)dictionaryRepresentation;
- (id)initWithCid:(id)arg1;

@end
