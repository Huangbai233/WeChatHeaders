//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CMessageWrap, ImageAutoControl, NSMutableArray, NSString;

@interface ImageAutoDownloadMgr
{
    NSMutableArray *m_arrChatQueue;
    NSMutableArray *m_arrBackGroundQueue;
    CMessageWrap *m_CurDownloadingMsg;
    unsigned int m_uiStatus;
    ImageAutoControl *m_oImageAutoControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *m_CurDownloadingMsg; // @synthesize m_CurDownloadingMsg;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(_Bool)arg3;
- (void)OnBeginDownloadAppData:(id)arg1 Brand:(id)arg2;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnBeginDownloadAppData:(id)arg1;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ClearChatQueue;
- (void)ResumeBackGroundQueue;
- (void)StopBackGroundQueue;
- (void)StartAutoDownloadFromChat:(id)arg1;
- (void)InternalAddMsgToQueue:(id)arg1 Msg:(id)arg2;
- (void)CheckQueue;
- (_Bool)StartDownloadMsgFromQueue:(id)arg1;
- (_Bool)IsImageShouldDownload:(id)arg1;
- (_Bool)IsMsgCanDownload:(id)arg1 CheckNotify:(_Bool)arg2;
- (_Bool)IsMsgCanDownloadForExp:(id)arg1 CheckNotify:(_Bool)arg2;
- (_Bool)IsMsgDownloaded:(id)arg1;
- (void)RemoveMsgFromQueue:(id)arg1 ByChatName:(id)arg2;
- (void)RemoveMsgFromQueue:(id)arg1 Msg:(id)arg2;
- (_Bool)IsInDownloadQueue:(id)arg1 Queue:(id)arg2;
- (_Bool)IsQueueCheckNotify:(id)arg1;
- (unsigned int)GetQueueType:(id)arg1;
- (void)SaveControlData;
- (void)LoadControlData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

