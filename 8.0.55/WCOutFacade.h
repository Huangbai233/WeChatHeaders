//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary, PhoneNumberFormatLogic, WCOFeedBackTips, WCOutAddressBookLogic, WCOutCallLogic, WCOutChargeLogic, WCOutCountryCodeLogic, WCOutDataBase;

@interface WCOutFacade
{
    NSMutableDictionary *m_hotCountryCodeDic;
    OrderedDictionary *m_lastCallItemOrderDic;
    NSMutableArray *m_wcoutContactItemArray;
    NSMutableDictionary *m_phoneNumToWCOutContact;
    unsigned int m_lastDownloadMFriendListTime;
    unsigned int m_lastReportContactTime;
    unsigned int _showTimesWcoMainFromVoip;
    unsigned int _showTimesFeedback;
    PhoneNumberFormatLogic *_m_phoneNumberFormatLogic;
    WCOutCountryCodeLogic *_m_countryCodeLogic;
    WCOutAddressBookLogic *_m_addressBookLogic;
    WCOutDataBase *_m_dataBase;
    NSRecursiveLock *_m_oLock;
    MMTimer *_inviteTimer;
    WCOutChargeLogic *_chargeLogic;
    WCOutCallLogic *_callLogic;
    unsigned long long _showlastTsWcoMainFromVoip;
    unsigned long long _fromVoipType;
    WCOFeedBackTips *_feedbackTips;
    unsigned long long _showlastFeedbackTs;
}

+ (void)reportWCOClickMsgType:(id)arg1;
+ (void)reportWCOWCOActivityInfo:(id)arg1;
+ (void)reportWCOFeedbackOp:(id)arg1;
+ (void)reportWCOEnterFromVoip:(id)arg1;
+ (void)reportWCORedDotStat:(unsigned long long)arg1 OperationReddotClickScene:(unsigned long long)arg2 NewUserReddotClickScene:(unsigned long long)arg3 AccountRedDotType:(int)arg4 WCOMsgType:(int)arg5 TabRedDotType:(int)arg6;
+ (void)reportWCOPackageOp:(id)arg1;
+ (void)reportWCOAutoVerify:(id)arg1;
+ (void)reportWCOPurchaseOp:(id)arg1;
+ (void)reportWCORechargePageOp:(id)arg1;
+ (void)reportWCOAccountPageOp:(id)arg1;
+ (void)reportWechatOutIdKey:(unsigned long long)arg1;
+ (void)reportSearchReportType:(unsigned long long)arg1;
+ (void)reportClickWithType:(unsigned long long)arg1;
+ (void)reportClickStatWithType:(unsigned long long)arg1;
+ (void)reportCallEntraceWithType:(unsigned long long)arg1;
+ (void)reportRestrictionCountryCode:(id)arg1;
+ (void)reportTalkingClickStatWithType:(unsigned long long)arg1;
+ (id)GetWeChatOutCouponsResponseCache;
+ (unsigned int)getShowWCOReddotType;
+ (_Bool)isWCOSwitchOpen;
+ (_Bool)showWCOut;
+ (_Bool)isOpenWCOutPlugin;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long showlastFeedbackTs; // @synthesize showlastFeedbackTs=_showlastFeedbackTs;
@property(nonatomic) unsigned int showTimesFeedback; // @synthesize showTimesFeedback=_showTimesFeedback;
@property(retain, nonatomic) WCOFeedBackTips *feedbackTips; // @synthesize feedbackTips=_feedbackTips;
@property(nonatomic) unsigned long long fromVoipType; // @synthesize fromVoipType=_fromVoipType;
@property(nonatomic) unsigned long long showlastTsWcoMainFromVoip; // @synthesize showlastTsWcoMainFromVoip=_showlastTsWcoMainFromVoip;
@property(nonatomic) unsigned int showTimesWcoMainFromVoip; // @synthesize showTimesWcoMainFromVoip=_showTimesWcoMainFromVoip;
@property(retain, nonatomic) WCOutCallLogic *callLogic; // @synthesize callLogic=_callLogic;
@property(retain, nonatomic) WCOutChargeLogic *chargeLogic; // @synthesize chargeLogic=_chargeLogic;
@property(retain, nonatomic) MMTimer *inviteTimer; // @synthesize inviteTimer=_inviteTimer;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) WCOutDataBase *m_dataBase; // @synthesize m_dataBase=_m_dataBase;
@property(retain, nonatomic) WCOutAddressBookLogic *m_addressBookLogic; // @synthesize m_addressBookLogic=_m_addressBookLogic;
@property(retain, nonatomic) WCOutCountryCodeLogic *m_countryCodeLogic; // @synthesize m_countryCodeLogic=_m_countryCodeLogic;
@property(retain, nonatomic) PhoneNumberFormatLogic *m_phoneNumberFormatLogic; // @synthesize m_phoneNumberFormatLogic=_m_phoneNumberFormatLogic;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnTimeOut:(id)arg1;
- (void)OnNoAnswer:(id)arg1;
- (id)getWeChatOutMsgBeginLocalID:(unsigned int)arg1 limit:(int)arg2;
- (_Bool)insertOrUpdateWcoMsg:(id)arg1;
- (void)gotoChargeViewController;
- (_Bool)isClosePurchase;
- (_Bool)isItemListWebChargeOpen;
- (_Bool)isItemWebChargeOpen;
- (_Bool)isChargeRecordClosed;
- (_Bool)isChargeClosed;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (void)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3 Ret:(_Bool *)arg4 NeedCheckBitset:(_Bool *)arg5;
- (void)processWCONotify:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processWeChatOutConfig:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processWeChatOutMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (void)PhoneContactLoadedFail;
- (void)PhoneContactLoadedComplete;
- (void)stopInviteRegister;
- (void)didReceiveInviteGap:(int)arg1;
- (void)OnCallEndFinish;
- (_Bool)canStartPSTN;
- (void)InternalCallWCoutContact:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned long long)arg3;
- (id)createWCOutRecentCallItemByCallItem:(id)arg1;
- (id)createWCOutRecentCallItemByFullPhoneNum:(id)arg1 CountryCode:(id)arg2 FromContact:(id)arg3;
- (_Bool)updateWCOutContactsInfoWithMfriendList:(id)arg1;
- (_Bool)loadWCOutPhoneContactsMMInfo;
- (void)updateWCOutPhoneContactsMMInfoAsync;
- (_Bool)loadWCOutPhoneContactsFromMMPhoneContacts;
- (void)loadWCOutPhoneContactAsync;
- (void)loadAllDataAsync;
- (void)loadLastCallItemsAndHotCountryCodeDic;
- (void)loadHotCountryCode;
- (void)reportContactAndRecentContactStat;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getCountryCodeFromFullPhoneNum:(id)arg1;
- (id)getPurePhoneNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)getLocaleCountryCode;
- (id)getCarrierCountryCode;
- (id)getISOCountryCodeCountryCode:(id)arg1;
- (id)countryNameForISOCountryCode:(id)arg1;
- (id)countryNameForCountryCode:(id)arg1;
- (unsigned int)countOfCountryCodeStartWith:(id)arg1;
- (_Bool)isValidCountryCode:(id)arg1;
- (_Bool)isRestrictedCountryCode:(id)arg1;
- (id)getAllCountryCodes;
- (id)defaultCoutryCode;
- (id)getHotCountryCodeList;
- (_Bool)addressBookStatusIsDenied;
- (void)deleteLastCallWithPhoneNum:(id)arg1 WithCountryCode:(id)arg2;
- (_Bool)deleteRecentCallByPhoneContact:(id)arg1;
- (_Bool)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (_Bool)deleteRecentCallById:(int)arg1;
- (int)insertRecentCall:(id)arg1;
- (id)findWCOutContactByPhoneNum:(id)arg1;
- (id)selectRecentCallForWCOutContact:(id)arg1 limit:(int)arg2;
- (id)selectAllRecentCallForWCOutContact:(id)arg1;
- (id)getLastRecentCallItems;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (_Bool)isWcoActive;
- (void)tryShowWCOFeedBack:(int)arg1 CallSeq:(long long)arg2;
- (int)getNetSpeed;
- (_Bool)isCalling;
- (void)playEndingSound;
- (id)GetNeedShowLog;
- (id)GetCurPhoneContact;
- (id)GetCurCallItem;
- (_Bool)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (_Bool)isSpeakerMode;
- (void)setSpeaker:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)hangUpCall;
- (void)callWCOutCallItem:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned long long)arg3 CountryCodeFrom:(unsigned long long)arg4;
- (void)callPhoneNumber:(id)arg1 WithCountryCode:(id)arg2 FromViewController:(id)arg3 AndEntrance:(unsigned long long)arg4 CountryCodeFrom:(unsigned long long)arg5;
- (void)callFullPhoneNumber:(id)arg1 OfContact:(id)arg2 FromViewController:(id)arg3 AndEntrace:(unsigned long long)arg4 CountryCodeFrom:(unsigned long long)arg5;
- (void)pushWCOutDialViewController:(id)arg1 PhoneNum:(id)arg2 DialScece:(unsigned long long)arg3;
- (void)checkNumber:(id)arg1 PureNum:(id)arg2 LastCountryCode:(id)arg3 DialScece:(unsigned long long)arg4;
- (_Bool)loadAllData;
- (void)onServiceInit;
- (id)init;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

