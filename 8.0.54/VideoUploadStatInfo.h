//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString, VideoParamsInfo, VideoParamsSource;

@interface VideoUploadStatInfo : NSObject
{
    _Bool _sourceVideoContainsWXTag;
    unsigned int _uploadStartTime;
    unsigned int _cpStatus;
    unsigned int _sendScene;
    NSString *_toUsername;
    NSString *_fileId;
    NSString *_videoNewMd5;
    NSString *_msgSource;
    NSString *_snsCommitId;
    VideoParamsSource *_oriVideoParamsSource;
    VideoParamsSource *_cpVideoParamsSource;
    NSString *_cdnIp;
    NSString *_snsUrl;
    VideoParamsInfo *_srcVideoParams;
    VideoParamsInfo *_cpVideoParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VideoParamsInfo *cpVideoParams; // @synthesize cpVideoParams=_cpVideoParams;
@property(retain, nonatomic) VideoParamsInfo *srcVideoParams; // @synthesize srcVideoParams=_srcVideoParams;
@property(nonatomic) _Bool sourceVideoContainsWXTag; // @synthesize sourceVideoContainsWXTag=_sourceVideoContainsWXTag;
@property(retain, nonatomic) NSString *snsUrl; // @synthesize snsUrl=_snsUrl;
@property(retain, nonatomic) NSString *cdnIp; // @synthesize cdnIp=_cdnIp;
@property(nonatomic) unsigned int sendScene; // @synthesize sendScene=_sendScene;
@property(nonatomic) unsigned int cpStatus; // @synthesize cpStatus=_cpStatus;
@property(retain, nonatomic) VideoParamsSource *cpVideoParamsSource; // @synthesize cpVideoParamsSource=_cpVideoParamsSource;
@property(retain, nonatomic) VideoParamsSource *oriVideoParamsSource; // @synthesize oriVideoParamsSource=_oriVideoParamsSource;
@property(nonatomic) unsigned int uploadStartTime; // @synthesize uploadStartTime=_uploadStartTime;
@property(retain, nonatomic) NSString *snsCommitId; // @synthesize snsCommitId=_snsCommitId;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(retain, nonatomic) NSString *videoNewMd5; // @synthesize videoNewMd5=_videoNewMd5;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
- (void)reportKV;
- (id)getBigVideoStatInfo;
- (unsigned int)getUploadSpeed:(unsigned int)arg1;
- (void)mergeInfoFromSnsTaskInfo:(id)arg1;
- (void)mergeInfoFromTaskInfo:(id)arg1;
- (void)mergeInfoFromUploadTaskInfo:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

