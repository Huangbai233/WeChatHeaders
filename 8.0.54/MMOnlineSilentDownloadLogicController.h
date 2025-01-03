//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSMutableArray, SilentDownloadMessageWrap;

@interface MMOnlineSilentDownloadLogicController : NSObject
{
    NSMutableArray *_silentDownloadFileList;
    NSMutableArray *_sentDownloadFileList;
    SilentDownloadMessageWrap *_currentDownloadImage;
    SilentDownloadMessageWrap *_currentDownloadVideo;
    SilentDownloadMessageWrap *_currentDownloadFile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SilentDownloadMessageWrap *currentDownloadFile; // @synthesize currentDownloadFile=_currentDownloadFile;
@property(retain, nonatomic) SilentDownloadMessageWrap *currentDownloadVideo; // @synthesize currentDownloadVideo=_currentDownloadVideo;
@property(retain, nonatomic) SilentDownloadMessageWrap *currentDownloadImage; // @synthesize currentDownloadImage=_currentDownloadImage;
@property(retain, nonatomic) NSMutableArray *sentDownloadFileList; // @synthesize sentDownloadFileList=_sentDownloadFileList;
@property(retain, nonatomic) NSMutableArray *silentDownloadFileList; // @synthesize silentDownloadFileList=_silentDownloadFileList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)isFileDownloaded:(id)arg1;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(_Bool)arg2;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (_Bool)isHDImageDownloaded:(id)arg1;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)isUserNeedProcess:(id)arg1;
- (void)checkList;
- (void)removeMessageWithUsername:(id)arg1;
- (_Bool)isTwoMessageEqual:(id)arg1 silent:(id)arg2;
- (_Bool)isMessageValidForSilentDownload:(id)arg1;
- (_Bool)canMediaDownloadedNow:(unsigned int)arg1;
- (_Bool)isExistedInDownloadList:(id)arg1;
- (void)setAllowSilentDownload:(_Bool)arg1;
- (_Bool)allowSilentDownload;
- (_Bool)shouldShowSetting;
- (_Bool)isWrapMsgInSilentDownloading:(id)arg1;
- (void)sendSilentDownloadFileToBackDevice:(id)arg1;
- (void)preStartSilentDownloadFile:(id)arg1 svrid:(long long)arg2;
- (void)saveDataToFile;
- (void)reloadDataFromFile;
- (void)dealloc;
- (id)init;

@end

