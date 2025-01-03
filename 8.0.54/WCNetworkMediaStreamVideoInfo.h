//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface WCNetworkMediaStreamVideoInfo : NSObject
{
    unsigned int _m_uiStreamVideoTime;
    NSString *_m_nsStreamVideoUrl;
    NSString *_m_nsStreamVideoThumbUrl;
    NSString *_m_nsStreamVideoTitle;
    NSString *_m_nsStreamVideoWording;
    NSString *_m_nsStreamVideoWebUrl;
    NSString *_m_nsStreamVideoPublishId;
    NSString *_m_nsStreamVideoAdUxInfo;
    NSString *_m_nsStatExtStr;
    NSString *_m_nsJsReportArgs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsJsReportArgs; // @synthesize m_nsJsReportArgs=_m_nsJsReportArgs;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr=_m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo=_m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId=_m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl=_m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording=_m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle=_m_nsStreamVideoTitle;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime=_m_uiStreamVideoTime;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl=_m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl=_m_nsStreamVideoUrl;

@end

