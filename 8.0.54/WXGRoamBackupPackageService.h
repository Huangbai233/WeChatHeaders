//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSMutableArray, NSMutableDictionary, NSString, RoamBackupRange, RoamBackupRangeItem_ContactFilter, UIViewController, WXGRoamBackupPackageBridge, WXGRoamBackupPackageManagerViewController, WXGRoamBackupPackageModel, WXGRoamBackupPackageRangeHandler, WXGRoamChooseRangeExactUserViewController, WXGRoamWindowViewController;

@interface WXGRoamBackupPackageService
{
    _Bool _bAfterCreateShowDetail;
    _Bool _bSwitchPackagePlaceTop;
    _Bool _bShouldNotInteruption;
    _Bool _bAutoTestMode;
    int _enterListViewCount;
    RoamBackupRange *_currentChooseRange;
    RoamBackupRangeItem_ContactFilter *_currentExcludeFilter;
    NSMutableArray *_currentIncludeUsers;
    long long _currentChooseRangeIndex;
    WXGRoamBackupPackageModel *_currentViewModel;
    NSMutableArray *_listViewModels;
    WXGRoamWindowViewController *_roamWindowVC;
    WXGRoamChooseRangeExactUserViewController *_downloadSelectVC;
    WXGRoamBackupPackageManagerViewController *_detailVC;
    WXGRoamBackupPackageBridge *_roamBridge;
    WXGRoamBackupPackageRangeHandler *_rangeHandler;
    long long _selectUserEnterScene;
    UIViewController *_selectUserNavVC;
    NSMutableDictionary *_cancelDict;
    NSMutableDictionary *_cancelConnectDict;
    NSMutableDictionary *_modelMap;
    NSString *_workingBSSID;
    NSString *_curBindId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *curBindId; // @synthesize curBindId=_curBindId;
@property(copy, nonatomic) NSString *workingBSSID; // @synthesize workingBSSID=_workingBSSID;
@property(retain, nonatomic) NSMutableDictionary *modelMap; // @synthesize modelMap=_modelMap;
@property(retain, nonatomic) NSMutableDictionary *cancelConnectDict; // @synthesize cancelConnectDict=_cancelConnectDict;
@property(retain, nonatomic) NSMutableDictionary *cancelDict; // @synthesize cancelDict=_cancelDict;
@property(nonatomic) UIViewController *selectUserNavVC; // @synthesize selectUserNavVC=_selectUserNavVC;
@property(nonatomic) long long selectUserEnterScene; // @synthesize selectUserEnterScene=_selectUserEnterScene;
@property(nonatomic) _Bool bAutoTestMode; // @synthesize bAutoTestMode=_bAutoTestMode;
@property(nonatomic) _Bool bShouldNotInteruption; // @synthesize bShouldNotInteruption=_bShouldNotInteruption;
@property(retain, nonatomic) WXGRoamBackupPackageRangeHandler *rangeHandler; // @synthesize rangeHandler=_rangeHandler;
@property(retain, nonatomic) WXGRoamBackupPackageBridge *roamBridge; // @synthesize roamBridge=_roamBridge;
@property(retain, nonatomic) WXGRoamBackupPackageManagerViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(retain, nonatomic) WXGRoamChooseRangeExactUserViewController *downloadSelectVC; // @synthesize downloadSelectVC=_downloadSelectVC;
@property(retain, nonatomic) WXGRoamWindowViewController *roamWindowVC; // @synthesize roamWindowVC=_roamWindowVC;
@property(nonatomic) int enterListViewCount; // @synthesize enterListViewCount=_enterListViewCount;
@property(retain, nonatomic) NSMutableArray *listViewModels; // @synthesize listViewModels=_listViewModels;
@property(retain, nonatomic) WXGRoamBackupPackageModel *currentViewModel; // @synthesize currentViewModel=_currentViewModel;
@property(nonatomic) _Bool bSwitchPackagePlaceTop; // @synthesize bSwitchPackagePlaceTop=_bSwitchPackagePlaceTop;
@property(nonatomic) _Bool bAfterCreateShowDetail; // @synthesize bAfterCreateShowDetail=_bAfterCreateShowDetail;
@property(nonatomic) long long currentChooseRangeIndex; // @synthesize currentChooseRangeIndex=_currentChooseRangeIndex;
@property(retain, nonatomic) NSMutableArray *currentIncludeUsers; // @synthesize currentIncludeUsers=_currentIncludeUsers;
@property(retain, nonatomic) RoamBackupRangeItem_ContactFilter *currentExcludeFilter; // @synthesize currentExcludeFilter=_currentExcludeFilter;
@property(retain, nonatomic) RoamBackupRange *currentChooseRange; // @synthesize currentChooseRange=_currentChooseRange;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3 isPackageIDValid:(_Bool)arg4 extraInfo:(id)arg5;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3 isPackageIDValid:(_Bool)arg4;
- (void)reportAnalysis:(id)arg1 pageID:(int)arg2 actionID:(int)arg3;
- (id)getReportData:(id)arg1;
- (id)getAllRoamAnalysis;
- (void)reportStat:(unsigned long long)arg1 logString:(id)arg2;
- (void)onRoamBackupPackageBridgeDowngradeEventChange:(_Bool)arg1 stop:(_Bool)arg2 packageId:(unsigned long long)arg3;
- (void)onRoamBackupPackageBridgeDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageBridgeLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (void)onRoamBackupPackageBridgeDeviceInfoGet:(id)arg1 error:(int)arg2 deviceId:(id)arg3;
- (void)onRoamBackupPackageBridgeDeviceConnectivityChanged:(_Bool)arg1 deviceId:(id)arg2;
- (void)onRoamBackupPackageBridgeTaskStateChangeEvent:(unsigned long long)arg1 state:(int)arg2 type:(int)arg3 errorList:(id)arg4;
- (void)onRoamBackupPackageBridgeDeleteBackupRet:(int)arg1 packageId:(unsigned long long)arg2 duration:(unsigned int)arg3 deleteCount:(unsigned long long)arg4 deleteAll:(_Bool)arg5;
- (void)onRoamBackupPackageBridgeTimeToResumeQuitTask:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeTimeToAutoBackup:(unsigned long long)arg1;
- (void)onRoamBackupPackageBridgeTaskCompleteEvent:(unsigned long long)arg1 type:(int)arg2 error:(int)arg3 msg:(id)arg4;
- (void)onRoamBackupPackageBridgeTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageBridgeTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageBridgeFinishDeletePackages:(int)arg1 packageIds:(id)arg2 duration:(unsigned int)arg3;
- (void)onRoamBackupPackageBridgeFinishUpdatePackages:(int)arg1 packages:(id)arg2;
- (void)onRoamBackupPackageBridgeFinishCreatePackages:(int)arg1 packageIds:(id)arg2;
- (void)onRoamBackupPackageBridgeFinishGetAllModels:(id)arg1 error:(int)arg2 duration:(unsigned int)arg3 fromServer:(_Bool)arg4;
- (void)onRoamBackupPackageBridgeNotifyStartConnect:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onChooseRangeTypeComplete:(long long)arg1 typeArray:(id)arg2 tagArray:(id)arg3 userIncludeArray:(id)arg4;
- (void)onChooseRangeExactUserComplete:(long long)arg1 typeArray:(id)arg2 totalSize:(unsigned long long)arg3;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)remarkPortableDevice:(id)arg1 remark:(id)arg2;
- (void)jumpWeAppDeviceDetailFromCurrentDetail;
- (void)jumpBackupList:(id)arg1;
- (void)jumpCreateBackup:(id)arg1 deviceName:(id)arg2 deviceType:(int)arg3 parentVC:(id)arg4;
- (void)getAllPortableDevice;
- (void)deletePortableDevice:(id)arg1;
- (void)getDeviceInfo:(id)arg1;
- (void)connect:(id)arg1;
- (void)onNewSyncRoamBindTicket:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendStatusNotifyWithFunc:(id)arg1 isBind:(_Bool)arg2;
- (void)notifyToPackagesUpdate;
- (void)notifyToExecRoamServer:(id)arg1;
- (void)notifyToBindTicket;
- (void)cloudloadMediaForMessage:(id)arg1 localPath:(id)arg2 username:(id)arg3 dataID:(id)arg4;
- (_Bool)isOpenCloudBackup;
- (_Bool)isOpenCloudload;
- (_Bool)isRoamWorking;
- (void)setCanInterrupt;
- (void)setShouldNoInterrupt;
- (void)selectRestore:(id)arg1;
- (void)showExactUserSelect:(id)arg1 enterScene:(long long)arg2 existArr:(id)arg3;
- (void)selectUser:(id)arg1 existDic:(id)arg2;
- (void)showSelectUserImport:(id)arg1;
- (void)selectBackupIncludeUsers:(id)arg1;
- (void)selectBackupExclude:(id)arg1;
- (void)showUSBTipsHalfView:(id)arg1;
- (void)showDisconnectHalfView:(id)arg1;
- (void)selectBackupIncludeUpdate:(id)arg1;
- (void)selectBackupInclude:(id)arg1;
- (void)showDeleteSelectVCWith:(id)arg1;
- (void)showDeletePackageVCWith:(id)arg1;
- (void)showDeleteVCWith:(id)arg1;
- (void)hideRoamWindowVC;
- (void)showRoamWindowVC;
- (void)showRoamWindowVCRestore;
- (void)showRoamWindowVCRunning;
- (void)showPortablePermissonVCWith:(id)arg1;
- (void)showRejectVC;
- (void)showRoamAutoHalfViewWith:(id)arg1 isEnterFromList:(_Bool)arg2;
- (void)showRangeHalfViewWith:(id)arg1 isUpdate:(_Bool)arg2;
- (void)showRangeIncludeUserHalfView;
- (void)showRangeExcludeHalfView;
- (void)onHideCreateViewHalfView;
- (void)showDeviceAddVCWith:(id)arg1;
- (void)showUSBTipsViewWith:(id)arg1;
- (void)showDeviceUSBAddViewWith:(id)arg1;
- (void)showDevicePCAddViewWith:(id)arg1;
- (void)showDeviceSelectViewWith:(id)arg1;
- (void)showChooseRangeTypeVCImport;
- (void)showChooseRangeTypeVCExclude;
- (void)showChooseRangeTypeVC;
- (void)showChooseRangeTimeView;
- (void)showCreateBackupPackageVCWith:(id)arg1;
- (void)showChooseRangeVCWith:(id)arg1 isUpdate:(_Bool)arg2;
- (void)showPackageNameChangeHalfViewWith:(id)arg1;
- (void)showDetailBackupPackageVCWith:(id)arg1 index:(long long)arg2;
- (void)showManagerBackupPackageVCWith:(id)arg1 isDeleted:(_Bool)arg2;
- (void)showListVCAndSetHasEnterWith:(id)arg1;
- (void)showListVCOrNewEnterVCWith:(id)arg1;
- (void)reGetBackedUpConversationIsRestore:(_Bool)arg1;
- (_Bool)isAutoBackupNotifyCodeNotCorrect:(id)arg1;
- (void)notifyToNormal:(id)arg1;
- (void)notifyCurrentModelToNormal;
- (void)notifyOutBoxSelectComplete:(id)arg1 dirURL:(id)arg2;
- (void)onChooseRangeIncludeUserComplete;
- (void)onChooseRangeDetailComplete;
- (void)notifyPackagePermissionFail;
- (void)setupNotifyCode:(unsigned long long)arg1 toPackage:(unsigned long long)arg2;
- (id)getDeviceTypeNameWithDeviceType:(unsigned int)arg1;
- (id)getIconNameWithDeviceType:(unsigned int)arg1;
- (void)notifyLoginComplete;
- (id)mockOnlinePCDevice;
- (_Bool)checkAndShowNeedUpdateFrom:(id)arg1;
- (unsigned int)getXWeChatVersionNeedUpdateMac;
- (unsigned int)getXWeChatVersionNeedUpdatePc;
- (unsigned long long)isEnableDowngrade;
- (unsigned long long)isOpenNewBackup;
- (unsigned long long)getDiskFreeSize;
- (void)deleteBackup:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)deleteAllBackup;
- (void)deletePackageWithModels:(id)arg1;
- (void)updatePackageWithModels:(id)arg1;
- (void)createPackageWithModels:(id)arg1;
- (void)getAllModels:(_Bool)arg1 fetchFromServer:(_Bool)arg2;
- (void)updateBackupUserInfoWithStart:(unsigned long long)arg1 end:(unsigned long long)arg2 needSetModel:(_Bool)arg3;
- (id)getTransferStatWithModel:(id)arg1;
- (int)getTaskTypeWithModel:(id)arg1;
- (void)pauseWithModel:(id)arg1;
- (void)stopWithModel:(id)arg1;
- (void)resumeWithModel:(id)arg1;
- (void)startRestoreWithModel:(id)arg1;
- (void)startBackupWithModel:(id)arg1 isAuto:(_Bool)arg2;
- (void)startBackupWithModel:(id)arg1;
- (void)startCulculateCurrentModel;
- (void)updateModelFromDB:(id)arg1;
- (_Bool)isNeedConnectCancel:(id)arg1;
- (_Bool)isNeedCancel:(id)arg1;
- (void)cancelPrepare:(id)arg1;
- (int)getConnectType:(id)arg1;
- (id)getStandAlonePackageInfo:(id)arg1;
- (void)setAutoBackupLastSuccessTime:(id)arg1 lastSuccessTime:(unsigned long long)arg2;
- (void)setPauseAutoBackupForTimes:(id)arg1 pauseTime:(unsigned long long)arg2;
- (void)setAppBackupUIStateChanged:(_Bool)arg1;
- (_Bool)isNewBackupTaskRunning;
- (void)startAutoTestRestore;
- (void)startAutoTestBackup;
- (void)setAutoTestMode:(_Bool)arg1;
- (id)parseRangeItemIncludeLabelToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeExactUserToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemExcludeToString:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)parseRangeUsersCount:(id)arg1;
- (id)parseUserNameToSessionName:(id)arg1;
- (id)parseRangeToSymbolString:(id)arg1;
- (id)parseRangeItemToString:(id)arg1;
- (void)addNewRangeItemToCurrentRange;
- (id)getRangeTypeName:(int)arg1;
- (unsigned long long)getRangeTypeCount:(int)arg1;
- (void)onAuthOK;
- (void)setLastCreatePackageDeviceId:(id)arg1;
- (id)getLastCreatePackageDeviceId;
- (id)getRelatedMemoryKV;
- (id)getDeviceNameFor:(id)arg1;
- (id)getDeviceNameForCurModel;
- (id)getPackageNameFor:(id)arg1;
- (void)genCurrentCreatePackageName;
- (void)showLocalNotification;
- (void)onEnterForeground;
- (void)onTaskCanResume;
- (void)onTaskShouldPause;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
