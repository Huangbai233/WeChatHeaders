//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCMRedpointExposureControlModel, GCRedPointLogicTypeModel, GameCenterMessageRedPointInfo, GameCenterMsgDb, GameFindEntryRedDotInfo, GameMessageDBCleaner, GameReddotManager, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface GameCenterMsgMgr
{
    _Bool shouldClearDb;
    _Bool shouldClearNotify;
    _Bool _useNewRedpointLogic;
    _Bool _findVcVisible;
    _Bool _needUpdateRedPointInfo;
    _Bool _insideUpdateRedPointInfo;
    GameCenterMessageRedPointInfo *_redPointInfo;
    GameCenterMsgDb *_db;
    GCMRedpointExposureControlModel *_redpointExposureControlModel;
    GCRedPointLogicTypeModel *_logicTypeModel;
    GameFindEntryRedDotInfo *_findGameEntryRedDotInfo;
    GameMessageDBCleaner *_messageDBCleaner;
    GameReddotManager *_gameReddotManager;
    NSArray *_hideConfigs;
    NSMutableDictionary *_downloadTimeDict;
    NSMutableArray *_reExposureDbArray;
    NSMutableArray *_allReExposureArray;
    NSMutableSet *_redpointUpdateListenerSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool insideUpdateRedPointInfo; // @synthesize insideUpdateRedPointInfo=_insideUpdateRedPointInfo;
@property(nonatomic) _Bool needUpdateRedPointInfo; // @synthesize needUpdateRedPointInfo=_needUpdateRedPointInfo;
@property(retain, nonatomic) NSMutableSet *redpointUpdateListenerSet; // @synthesize redpointUpdateListenerSet=_redpointUpdateListenerSet;
@property(retain, nonatomic) NSMutableArray *allReExposureArray; // @synthesize allReExposureArray=_allReExposureArray;
@property(retain, nonatomic) NSMutableArray *reExposureDbArray; // @synthesize reExposureDbArray=_reExposureDbArray;
@property(retain, nonatomic) NSMutableDictionary *downloadTimeDict; // @synthesize downloadTimeDict=_downloadTimeDict;
@property(retain, nonatomic) NSArray *hideConfigs; // @synthesize hideConfigs=_hideConfigs;
@property(retain, nonatomic) GameReddotManager *gameReddotManager; // @synthesize gameReddotManager=_gameReddotManager;
@property(retain, nonatomic) GameMessageDBCleaner *messageDBCleaner; // @synthesize messageDBCleaner=_messageDBCleaner;
@property(retain, nonatomic) GameFindEntryRedDotInfo *findGameEntryRedDotInfo; // @synthesize findGameEntryRedDotInfo=_findGameEntryRedDotInfo;
@property(nonatomic) _Bool findVcVisible; // @synthesize findVcVisible=_findVcVisible;
@property(nonatomic) _Bool useNewRedpointLogic; // @synthesize useNewRedpointLogic=_useNewRedpointLogic;
@property(retain, nonatomic) GCRedPointLogicTypeModel *logicTypeModel; // @synthesize logicTypeModel=_logicTypeModel;
@property(retain, nonatomic) GCMRedpointExposureControlModel *redpointExposureControlModel; // @synthesize redpointExposureControlModel=_redpointExposureControlModel;
@property(retain, nonatomic) GameCenterMsgDb *db; // @synthesize db=_db;
@property(retain, nonatomic) GameCenterMessageRedPointInfo *redPointInfo; // @synthesize redPointInfo=_redPointInfo;
- (void)unRegisterRedPointUpdateListener:(id)arg1;
- (void)registerRedPointUpdateListener:(id)arg1;
- (void)updateMsgWithReportType;
- (unsigned int)getUnReadHistoryGameLifeMsgCount;
- (void)deleteHistroyGameLifeMsg;
- (_Bool)hasHistoryGameLifeMsg;
- (id)getLastMessageWithShowType:(int)arg1;
- (unsigned int)getMsgUnreadCoutWithShowType:(int)arg1;
- (void)wepkgEndWith:(id)arg1 bSuccess:(_Bool)arg2;
- (void)onWekgOperateSuccess:(id)arg1;
- (void)reportMsgBeingSilence:(id)arg1;
- (void)reportCoverNotify:(id)arg1 OldMsg:(id)arg2 NewCoverOld:(_Bool)arg3;
- (unsigned int)receiveActionStatusForMsg:(id)arg1 hasRevoke:(_Bool)arg2 clickedMsgWithSameContentId:(id)arg3;
- (void)statMsgReceived:(id)arg1 hasRevoke:(_Bool)arg2 clickedMsgWithSameContentId:(id)arg3;
- (_Bool)clearMsgDb:(id)arg1;
- (void)clearMsgList;
- (void)clearAllRedDot;
- (id)getMsgDbModelList;
- (id)getMsgDbModelBySvrMsgId:(id)arg1;
- (id)getMsgDbModelByLocalId:(unsigned int)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (_Bool)isEntryIconDownloading:(id)arg1;
- (void)reportImageDecodeFailForUrl:(id)arg1 imageData:(id)arg2;
- (_Bool)downloadEntryIconIfNeed:(id)arg1;
- (_Bool)urlSameWithFindFriendEntry:(id)arg1 DownloadTime:(int *)arg2 LocalId:(unsigned int *)arg3;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (int)getDownloadTime:(unsigned int)arg1;
- (_Bool)setDownloadTime:(unsigned int)arg1 DownloadTime:(int)arg2;
- (id)getAllForbiddenTypes;
- (void)setForbidden:(_Bool)arg1 forBasicType:(unsigned int)arg2;
- (_Bool)isForbiddenForBasicType:(unsigned int)arg1;
- (_Bool)setKeyAtPosition:(id)arg1 Value:(unsigned int)arg2;
- (_Bool)clearKeyAtPosition:(id)arg1;
- (unsigned int)getKeyAtPosition:(id)arg1;
- (id)getMsgWithLocalId:(unsigned int)arg1;
- (id)getMsgWithSvrMsgId:(id)arg1;
- (id)getMsgWithKey:(id)arg1;
- (_Bool)waitingForWePkgDownload:(id)arg1;
- (id)getNotifyWithKey:(id)arg1;
- (id)getNotifyContentFromMsg:(id)arg1;
- (_Bool)canClearMsgNotify:(unsigned int)arg1;
- (_Bool)underWeakNetStrategy:(id)arg1;
- (_Bool)cleanMsgDB;
- (_Bool)deleteMsgByLocalIdList:(id)arg1;
- (_Bool)unhideAllMsgByShowType:(unsigned int)arg1;
- (_Bool)hideAllMsgByShowType:(unsigned int)arg1;
- (_Bool)deleteAllMsgByShowType:(unsigned int)arg1;
- (_Bool)deleteMsgBeforeTimeStamp:(unsigned int)arg1;
- (_Bool)deleteMsgByLocalId:(int)arg1;
- (_Bool)deleteAllMsg;
- (_Bool)setMsgReadWithLocalIdList:(id)arg1;
- (_Bool)setMsgCenterAllReadWithShowType:(unsigned int)arg1;
- (_Bool)setMsgCenterAllRead;
- (id)getMsgCenterListForJsApi:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(_Bool)arg3 maxCount:(int)arg4 subMsgType:(int)arg5;
- (id)msgCenterContentV2FromMsg:(id)arg1;
- (id)getMsgCenterReadListBefore:(unsigned int)arg1;
- (id)getMsgCenterUnReadListWithShowType:(int)arg1;
- (id)getMsgCenterListWithShowType:(int)arg1 readState:(int)arg2 oldThan:(unsigned int)arg3 maxCount:(unsigned int)arg4;
- (id)getMsgCenterUnreadList;
- (_Bool)clearGameCenterGiftRedDot;
- (_Bool)clearGameCenterMsgCenterAllRedDot;
- (_Bool)clearGameCenterBanner:(unsigned int)arg1;
- (_Bool)clearGameCenterH5FloatLayer:(unsigned int)arg1;
- (_Bool)clearGameCenterBubble:(unsigned int)arg1;
- (void)clearFindEntryAndResource:(long long)arg1;
- (void)clearFindEntryAndResource;
- (_Bool)clearBubbleBannerH5FloatLayerResource;
- (void)recordReddotExitTime:(id)arg1;
- (_Bool)clearFindFriendEntryWithReason:(long long)arg1;
- (_Bool)clearFindFriendEntry;
- (_Bool)setMessageReadWithLocalId:(unsigned int)arg1;
- (id)getLastUnExpiredMsg;
- (unsigned int)getLastMsgKey;
- (id)getGameCenterGiftRedDot;
- (id)getGameCenterMsgCenterRedDot;
- (id)getGameCenterBanner;
- (id)getGameCenterH5FloatLayer;
- (id)getGameCenterBubble;
- (void)checkNotifiyContentDegrde:(id)arg1 baseMsg:(id)arg2;
- (void)handleReExposureMsg:(id)arg1;
- (void)asyncPickReExposureMsg;
- (id)getReExposureMsgArray;
- (void)asyncGetDbExposureArray;
- (void)asyncCheckNotifyReExposure;
- (void)updateMsgtExposured:(id)arg1;
- (id)findFriendGetNotifyContentFromMsg:(id)arg1;
- (id)getFindFriendMsgNoCheck;
- (id)getFindFriendMsgWithCheck:(_Bool)arg1;
- (id)getFindFriendMsg;
- (id)getFindFriendEntryNotify;
- (id)getUnexpiredMsgWithKey:(id)arg1;
- (id)getMsgWithKey:(id)arg1 checkExpired:(_Bool)arg2;
- (_Bool)checkCanReExposure;
- (void)updateLastRedPointDisppearTime;
- (_Bool)coverNotify:(id)arg1;
- (void)didChooseCurrentMsg:(id)arg1 reason:(long long)arg2;
- (_Bool)shouldCoverNotify:(id)arg1;
- (_Bool)isMsgBlocked:(id)arg1 shouldReport:(_Bool)arg2;
- (_Bool)appendUserInfoToMsg:(id)arg1 WithXmlSection:(id)arg2;
- (_Bool)replaceJumpInfoSection:(id)arg1 JumpInfoSection:(id)arg2;
- (_Bool)refreshJumpInfoXmlSection:(id)arg1;
- (_Bool)mergeJumpInfo:(id)arg1 JumpInfoDic:(id)arg2;
- (_Bool)mergeUserInfo:(id)arg1 DbMsg:(id)arg2 UserJumpInfoDic:(id)arg3;
- (void)filterUserInfoList:(id)arg1 DbMsg:(id)arg2;
- (_Bool)mergeOriginXmlFromDB:(id)arg1;
- (_Bool)mergeMsgIfNeed:(id)arg1;
- (unsigned int)saveMsg:(id)arg1;
- (void)tryCheckUpdateWithDownloadTriggerType:(unsigned int)arg1;
- (void)tryCheckUpdateWhenEnterFindFriend;
- (void)tryCheckUpdateWhenEnterForeground;
- (void)trySavePkgIdForFutureCheckUpdate:(id)arg1 DownloadTriggerType:(unsigned int)arg2;
- (void)tryDownloadOrSave:(id)arg1 DownloadTriggerType:(unsigned int)arg2 updateOnly:(_Bool)arg3;
- (void)wePkgMsgReceived:(struct XmlReaderNode_t *)arg1;
- (_Bool)checkMsgExpired:(id)arg1;
- (void)notifyMsgReceived:(id)arg1 RootNode:(struct XmlReaderNode_t *)arg2;
- (_Bool)checkSupportVersion:(struct XmlReaderNode_t *)arg1;
- (void)savePreRevokeMsgWithIdKey:(id)arg1 targetId:(id)arg2;
- (void)savePreRevokeMsgId:(id)arg1;
- (_Bool)checkPreRevokeIdWithIdKvKey:(id)arg1 targetId:(id)arg2;
- (_Bool)checkPreRevokePushId:(id)arg1;
- (_Bool)checkPreRevokeMsgId:(id)arg1;
- (void)reportDeleteWithMsgId:(id)arg1 pushId:(id)arg2 actionStatus:(int)arg3;
- (_Bool)handleRevokeMsgIdDbModel:(id)arg1 actionStatus:(int)arg2;
- (void)reportDelWith:(int)arg1 msgModel:(id)arg2;
- (void)handleRevokeMsg:(id)arg1;
- (void)handleRevokePushId:(id)arg1;
- (void)onFunctionMsgRevoke:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (_Bool)checkHiddenForMsg:(id)arg1;
- (void)handleReddotSyncNode:(struct XmlReaderNode_t *)arg1;
- (void)handleDeleteConfig:(struct XmlReaderNode_t *)arg1;
- (void)handleHideConfig:(struct XmlReaderNode_t *)arg1;
- (void)handleCdnSettingNode:(struct XmlReaderNode_t *)arg1;
- (void)handleExposureMessageSettingNode:(struct XmlReaderNode_t *)arg1;
- (void)handleControlNode:(struct XmlReaderNode_t *)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (void)onReceiveNewGameLifeRedPoint:(id)arg1;
- (void)onConversationUpdated;
- (void)notifyReadPointInfoChange;
- (void)setMyGroupUnReadCnt:(unsigned int)arg1 lastGroupUpdateTime:(unsigned long long)arg2;
- (void)updateGameCenterMessageRedPointInfoWorker:(unsigned int)arg1 andNotiy:(unsigned int)arg2 andConversation:(unsigned int)arg3 andInterativeModel:(id)arg4 andNotifyModel:(id)arg5;
- (void)updateGameCenterMessageRedPointInfoIfChange;
- (void)updateGameCenterMessageRedPointInfoIfNeed;
- (void)updateGameCenterMessageRedPointInfoIfChangeAndObserved;
- (unsigned long long)validLastReceiveTime:(unsigned long long)arg1;
- (void)runPrefetchTest;
- (void)pushCustomeXmlMsg:(id)arg1;
- (void)saveRedPointLogicTypeModel:(id)arg1;
- (void)initRedPointStrategy;
- (_Bool)checkUseNewRedpointStrategy;
- (id)init;
- (unsigned long long)getGameFinderSpecialReddotExptOptions;
- (id)reportObjectWithEntry:(id)arg1 msg:(id)arg2 externInfo:(id)arg3;
- (void)clearCurGameLifeRedPoint:(id)arg1;
- (_Bool)v2HasGameLifeRedPoint;
- (void)checkGameLifeRedPointExit;
- (void)updatecompleteExposureCnt:(id)arg1;
- (void)updateExposureCnt:(id)arg1;
- (void)onUpdateGameCenterEntrance;
- (void)onFindEntryVcWillDisAppear:(id)arg1;
- (void)onFindEntryVcWillAppear:(id)arg1;
- (void)enterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

