//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSArray, NSMutableArray, NSString, WCCardData, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardDynamicCodeGenerator, WCCardEnterInfo, WCCardOfflineCodeConfigData, WCCardUsedStoreInfo, WCShareCardData;
@protocol WCNewCardDetailLogicDelegate;

@interface WCNewCardDetailLogicController
{
    double _oldBrightness;
    double _toBrightness;
    MMTimer *brightTimer;
    MMTimer *_updateOfflineDynamicCodeTimer;
    MMTimer *_updateDynamicCodeTimer;
    unsigned int _getItemInfoEventID;
    unsigned int _acceptItemEventID;
    unsigned int _giftItemEventID;
    unsigned int _getShopsEventID;
    _Bool _bNeedGetCardDataFromSvr;
    _Bool _bIsFromBathView;
    _Bool _isConsumedNotify;
    _Bool _bIsShareCardDetailMode;
    int _cardStatus;
    unsigned int _cardItemFromScene;
    unsigned int _originCardItemFromScene;
    unsigned int _offlineCodeStatus;
    WCCardEnterInfo *_cardEnterInfo;
    WCCardData *_cardData;
    WCCardDynamicCodeGenerator *_dynamicCodeGenerator;
    WCShareCardData *_shareCardData;
    NSMutableArray *_arrShareCardDataList;
    NSMutableArray *_arrUsedShareCardList;
    NSString *_nsConsumedBoxID;
    WCCardUsedStoreInfo *_oneUsedStoreInfo;
    NSArray *_usedStoreList;
    WCCardDataCardInfo *_curCardInfo;
    WCCardDataCardTPInfo *_curCardTPInfo;
    unsigned long long _addCardState;
    id <WCNewCardDetailLogicDelegate> _delegate;
    NSString *_offlineCode;
    NSString *_dynamicCode;
    WCCardOfflineCodeConfigData *_codeConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCardOfflineCodeConfigData *codeConfig; // @synthesize codeConfig=_codeConfig;
@property(nonatomic) unsigned int offlineCodeStatus; // @synthesize offlineCodeStatus=_offlineCodeStatus;
@property(retain, nonatomic) NSString *dynamicCode; // @synthesize dynamicCode=_dynamicCode;
@property(retain, nonatomic) NSString *offlineCode; // @synthesize offlineCode=_offlineCode;
@property(nonatomic) __weak id <WCNewCardDetailLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long addCardState; // @synthesize addCardState=_addCardState;
@property(retain, nonatomic) WCCardDataCardTPInfo *curCardTPInfo; // @synthesize curCardTPInfo=_curCardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo *curCardInfo; // @synthesize curCardInfo=_curCardInfo;
@property(retain, nonatomic) NSArray *usedStoreList; // @synthesize usedStoreList=_usedStoreList;
@property(nonatomic) unsigned int originCardItemFromScene; // @synthesize originCardItemFromScene=_originCardItemFromScene;
@property(retain, nonatomic) WCCardUsedStoreInfo *oneUsedStoreInfo; // @synthesize oneUsedStoreInfo=_oneUsedStoreInfo;
@property(nonatomic) unsigned int cardItemFromScene; // @synthesize cardItemFromScene=_cardItemFromScene;
@property(nonatomic) _Bool bIsShareCardDetailMode; // @synthesize bIsShareCardDetailMode=_bIsShareCardDetailMode;
@property(retain, nonatomic) NSString *nsConsumedBoxID; // @synthesize nsConsumedBoxID=_nsConsumedBoxID;
@property(retain, nonatomic) NSMutableArray *arrUsedShareCardList; // @synthesize arrUsedShareCardList=_arrUsedShareCardList;
@property(nonatomic) _Bool isConsumedNotify; // @synthesize isConsumedNotify=_isConsumedNotify;
@property(retain, nonatomic) NSMutableArray *arrShareCardDataList; // @synthesize arrShareCardDataList=_arrShareCardDataList;
@property(retain, nonatomic) WCShareCardData *shareCardData; // @synthesize shareCardData=_shareCardData;
@property(retain, nonatomic) WCCardDynamicCodeGenerator *dynamicCodeGenerator; // @synthesize dynamicCodeGenerator=_dynamicCodeGenerator;
@property(nonatomic) int cardStatus; // @synthesize cardStatus=_cardStatus;
@property(nonatomic) _Bool bIsFromBathView; // @synthesize bIsFromBathView=_bIsFromBathView;
@property(nonatomic) _Bool bNeedGetCardDataFromSvr; // @synthesize bNeedGetCardDataFromSvr=_bNeedGetCardDataFromSvr;
@property(retain, nonatomic) WCCardData *cardData; // @synthesize cardData=_cardData;
@property(retain, nonatomic) WCCardEnterInfo *cardEnterInfo; // @synthesize cardEnterInfo=_cardEnterInfo;
- (void)doRecoverScreenShot;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)timerCheckUpdateBrightness;
- (void)graduallySetBrightness:(double)arg1;
- (void)graduallyIncreaseBrightnessIfNeed;
- (void)recoverBrightnessIfNeed;
- (_Bool)isHaveShowTipForCardId:(id)arg1;
- (void)setHaveShowTipForCardId:(id)arg1;
- (_Bool)hasAnnounceReport;
- (void)uploadOpenCellList0ItemViewReport:(id)arg1;
- (void)uploadOpenDetailViewReport;
- (void)uploadOpenOperationViewReport;
- (void)uploadCardPkgLocationReport;
- (void)uploadEnterBrandProfileKvReport;
- (void)uploadEnterCardDetailKvReport;
- (_Bool)bIsCardFromOutAppScene;
- (unsigned long long)getCurAddCardState;
- (_Bool)bCanDeleteCurCard;
- (id)getCardDataJsonContentIfExist;
- (_Bool)bIsCardCanShareToFriend;
- (_Bool)bIsShareCardFromSelf;
- (_Bool)bIsNeedShowRightActionSheetItem;
- (id)getOuterAppNameIfExist;
- (_Bool)bIsMemberCard;
- (_Bool)bIsMemberCardPreAccept;
- (id)getCardTypeName;
- (id)getServiceContact;
- (id)getUsedShareCardDataList;
- (_Bool)bNeedToCallDelegateShareCardConsumed;
- (_Bool)bUsingOfflinePay;
- (_Bool)bUsingPayAndQrcode;
- (id)getShareCardDataByCardId:(id)arg1;
- (id)getShareCardDataList;
- (id)getShareCardData;
- (unsigned long long)getShareUserCount;
- (id)getShareUsername;
- (int)curCardStatus;
- (id)curCardEnterInfo;
- (id)curCardData;
- (_Bool)bNeedShowNuknowType;
- (_Bool)bHasEnoughCardDataToShow;
- (id)getNearbyShopPboneNum;
- (id)getUsedStoreList;
- (id)getNearbyStoreInfo;
- (unsigned int)getCardItemFromScene;
- (_Bool)isNeedToDisplayDeeplink;
- (unsigned int)getOriginCardItemFromScene;
- (_Bool)bIsShareCardMode;
- (id)getCurCardDataSource;
- (id)getCurCardTpId;
- (id)getCurCardId;
- (void)updateShareCard:(id)arg1;
- (void)acceptCard:(_Bool)arg1;
- (void)handleShareCardAfterConsuemdOK;
- (void)handleCodeViewNeedMark:(_Bool)arg1 needNotify:(_Bool)arg2 markScene:(int)arg3;
- (void)giftMyCardTo:(id)arg1;
- (void)shareMyCardWithVisibleUserList:(id)arg1 invisibleUserList:(id)arg2 visibleTagIDList:(id)arg3 invisibleTagIDList:(id)arg4;
- (void)updateCardDataFromOuter:(id)arg1;
- (void)setForBatchViewCard;
- (void)updateOfflineDynamicCode;
- (void)updateOfflineDynamicCodeByTimer;
- (void)startOfflineDynamicCodeUpdateTimer;
- (unsigned int)getOfflineCodeStatus;
- (id)getOfflineCode;
- (void)trySetupOfflineLogic;
- (void)initCardData;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onIdleTimerUtilVoipQuit;
- (void)onMarkedResponseError;
- (void)onUpdateShareCardList:(id)arg1;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 successShareCardList:(id)arg3 andCardInfo:(id)arg4;
- (_Bool)isShareCardDataFailShareForCardTpId:(id)arg1;
- (_Bool)isCardDataFailShareForCardTpId:(id)arg1;
- (void)onShareMyCard:(id)arg1 Error:(int)arg2;
- (void)onBanUpdateOfflineCode;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onGetUpdateOfflineCode:(int)arg1;
- (void)onGetUsedStoreList:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onWCCardUpdate:(id)arg1;
- (void)onGiftCard:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onAcceptCard:(id)arg1 ErrCode:(int)arg2 ErrMsg:(id)arg3 EventID:(unsigned int)arg4;
- (void)onGetCardData:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)doUnavailableCodeLogic;
- (void)updateDynamicCode;
- (void)startDynamicCodeUpdateTimer;
- (id)getDynamicCode;
- (id)getDynamicCodeGenerator;
- (void)trySetupDynamicCodeGenerator;
- (int)getMarkScene;
- (id)genFailAcceptInfo;
- (id)genSuccessAcceptInfo;
- (id)genAcceptShareInfoWithCardList:(id)arg1;
- (void)getCardDataFromSvr;
- (_Bool)isGetCardDataEachTime;
- (_Bool)isCardDataUpdatedOneDayAgo;
- (_Bool)isCardDataExistInDB;
- (void)updateCardStatus;
- (void)fullCardDataWithEnterInfo:(id)arg1;
- (void)preConvertFormScene:(id)arg1;
- (void)reloadAllViewControllerContent;
- (void)reloadViewControllerContent;
- (void)getPayCardListAndUsrInfoForPayIfNeed;
- (void)commonInitData;
- (id)initLogicControllerWithShareCardData:(id)arg1 withShareCardListIfExist:(id)arg2 withFromScene:(unsigned long long)arg3 logicDelegate:(id)arg4;
- (id)initLogicControllerWithCardEnterInfo:(id)arg1 logicDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

