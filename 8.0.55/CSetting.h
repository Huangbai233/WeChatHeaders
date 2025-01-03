//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAutoAuthWrap, MemoryMappedKV, NSData, NSMutableDictionary, NSString;

@interface CSetting : NSObject
{
    NSMutableDictionary *m_dicSetting;
    MemoryMappedKV *mmkv;
    unsigned int _m_patSuffixVersion;
    NSString *_m_patSuffix;
}

+ (id)mmkvPathWithUsername:(id)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_patSuffixVersion; // @synthesize m_patSuffixVersion=_m_patSuffixVersion;
@property(retain, nonatomic) NSString *m_patSuffix; // @synthesize m_patSuffix=_m_patSuffix;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)getArrayOfValueType:(Class)arg1 forKey:(id)arg2;
- (id)getObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (int)getInt32ForKey:(id)arg1;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (void)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (_Bool)getBoolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)save;
- (id)initWithCurUserName:(id)arg1 fromOldSetting:(id)arg2;
- (void)continueInit;
- (void)preInit;
- (id)getDicSetting;
- (void)migrateDicSetting;
@property(nonatomic) unsigned int userExtInfoStatus;
@property(retain, nonatomic) NSString *m_nsSignature; // @dynamic m_nsSignature;
@property(retain, nonatomic) NSString *m_nsNickName; // @dynamic m_nsNickName;
@property(readonly, nonatomic) NSData *m_dtServerId;
@property(readonly, nonatomic) NSData *m_dtAutoAuthKey;
- (id)description;
- (id)keyPaths;
- (void)keepValidKeyValuesFromRecover;
- (void)cleanUnusedKeys;
- (void)setpasskeyCredentialID:(id)arg1;
@property(retain, nonatomic) NSData *passkeyCredentialID; // @dynamic passkeyCredentialID;
- (void)setm_textStatusData:(id)arg1;
@property(retain, nonatomic) NSString *m_textStatusData; // @dynamic m_textStatusData;
- (void)setlastSvrTime:(unsigned long long)arg1;
@property(nonatomic) unsigned long long lastSvrTime; // @dynamic lastSvrTime;
- (void)setsystemAuthImageContentData:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthImageContentData; // @dynamic systemAuthImageContentData;
- (void)setnotifyBannerDisplayContentSetting:(unsigned int)arg1;
@property(nonatomic) unsigned int notifyBannerDisplayContentSetting; // @dynamic notifyBannerDisplayContentSetting;
- (void)settranslateLanguage:(id)arg1;
@property(retain, nonatomic) NSString *translateLanguage; // @dynamic translateLanguage;
- (void)setsystemAuthImageLocationData:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthImageLocationData; // @dynamic systemAuthImageLocationData;
- (void)setlqtVersion:(unsigned int)arg1;
@property(nonatomic) unsigned int lqtVersion; // @dynamic lqtVersion;
- (void)setm_bHasCheckTimeChange:(_Bool)arg1;
@property(nonatomic) _Bool m_bHasCheckTimeChange; // @dynamic m_bHasCheckTimeChange;
- (void)setm_uLastSystemUptime:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uLastSystemUptime; // @dynamic m_uLastSystemUptime;
- (void)setm_bIsRunningAsBakDevice:(_Bool)arg1;
@property(nonatomic) _Bool m_bIsRunningAsBakDevice; // @dynamic m_bIsRunningAsBakDevice;
- (void)setsavedHelloMsg:(id)arg1;
@property(retain, nonatomic) NSString *savedHelloMsg; // @dynamic savedHelloMsg;
- (void)setsystemAuthLocation:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthLocation; // @dynamic systemAuthLocation;
- (void)setsystemAuthAddressBook:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthAddressBook; // @dynamic systemAuthAddressBook;
- (void)setsystemAuthPhoto:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthPhoto; // @dynamic systemAuthPhoto;
- (void)setsystemAuthCamera:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthCamera; // @dynamic systemAuthCamera;
- (void)setsystemAuthMicrophone:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthMicrophone; // @dynamic systemAuthMicrophone;
- (void)setsystemAuthBluetooth:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthBluetooth; // @dynamic systemAuthBluetooth;
- (void)setsystemAuthSports:(unsigned long long)arg1;
@property(nonatomic) unsigned long long systemAuthSports; // @dynamic systemAuthSports;
- (void)setextStatus2:(unsigned long long)arg1;
@property(nonatomic) unsigned long long extStatus2; // @dynamic extStatus2;
- (void)setm_SMCryptoFlag:(unsigned int)arg1;
@property(nonatomic) unsigned int m_SMCryptoFlag; // @dynamic m_SMCryptoFlag;
- (void)setdiscoveryPageCtrlFlag:(unsigned long long)arg1;
@property(nonatomic) unsigned long long discoveryPageCtrlFlag; // @dynamic discoveryPageCtrlFlag;
- (void)setringToneSoundOpen:(_Bool)arg1;
@property(nonatomic) _Bool ringToneSoundOpen; // @dynamic ringToneSoundOpen;
- (void)setringEndTime:(double)arg1;
@property(nonatomic) double ringEndTime; // @dynamic ringEndTime;
- (void)setringStartTime:(double)arg1;
@property(nonatomic) double ringStartTime; // @dynamic ringStartTime;
- (void)setringMusicSid:(unsigned int)arg1;
@property(nonatomic) unsigned int ringMusicSid; // @dynamic ringMusicSid;
- (void)setringNonceId:(id)arg1;
@property(retain, nonatomic) NSString *ringNonceId; // @dynamic ringNonceId;
- (void)setringObjectId:(unsigned long long)arg1;
@property(nonatomic) unsigned long long ringObjectId; // @dynamic ringObjectId;
- (void)setringType:(unsigned int)arg1;
@property(nonatomic) unsigned int ringType; // @dynamic ringType;
- (void)setm_teenagerModeEmotionSetting:(unsigned int)arg1;
@property(nonatomic) unsigned int m_teenagerModeEmotionSetting; // @dynamic m_teenagerModeEmotionSetting;
- (void)setm_teenagerModeMiniProgramSetting:(unsigned int)arg1;
@property(nonatomic) unsigned int m_teenagerModeMiniProgramSetting; // @dynamic m_teenagerModeMiniProgramSetting;
- (void)setm_teenagerModeBizAcctSetting:(unsigned int)arg1;
@property(nonatomic) unsigned int m_teenagerModeBizAcctSetting; // @dynamic m_teenagerModeBizAcctSetting;
- (void)setm_teenagerModeFinderSetting:(unsigned int)arg1;
@property(nonatomic) unsigned int m_teenagerModeFinderSetting; // @dynamic m_teenagerModeFinderSetting;
- (void)setm_finderSetting:(unsigned long long)arg1;
@property(nonatomic) unsigned long long m_finderSetting; // @dynamic m_finderSetting;
- (void)setm_textStatusExtInfo:(id)arg1;
@property(retain, nonatomic) NSString *m_textStatusExtInfo; // @dynamic m_textStatusExtInfo;
- (void)setm_textStatusID:(id)arg1;
@property(retain, nonatomic) NSString *m_textStatusID; // @dynamic m_textStatusID;
- (void)setm_salt:(id)arg1;
@property(retain, nonatomic) NSString *m_salt; // @dynamic m_salt;
- (void)setm_xAgreementInfoFuncsUserChoiceSwitch:(unsigned long long)arg1;
@property(nonatomic) unsigned long long m_xAgreementInfoFuncsUserChoiceSwitch; // @dynamic m_xAgreementInfoFuncsUserChoiceSwitch;
- (void)setm_xAgreementInfoFuncsSwitch:(unsigned long long)arg1;
@property(nonatomic) unsigned long long m_xAgreementInfoFuncsSwitch; // @dynamic m_xAgreementInfoFuncsSwitch;
- (void)setm_nsBindXmail:(id)arg1;
@property(retain, nonatomic) NSString *m_nsBindXmail; // @dynamic m_nsBindXmail;
- (void)setm_bNeedClearMailPluginMsg:(_Bool)arg1;
@property(nonatomic) _Bool m_bNeedClearMailPluginMsg; // @dynamic m_bNeedClearMailPluginMsg;
- (void)setm_oAutoAuthWrap:(id)arg1;
@property(retain, nonatomic) MMAutoAuthWrap *m_oAutoAuthWrap; // @dynamic m_oAutoAuthWrap;
- (void)setm_uSendMsgActionFlag:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uSendMsgActionFlag; // @dynamic m_uSendMsgActionFlag;
- (void)setm_version:(unsigned int)arg1;
@property(nonatomic) unsigned int m_version; // @dynamic m_version;
- (void)setm_uSnsWeishiShowed:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uSnsWeishiShowed; // @dynamic m_uSnsWeishiShowed;
- (void)setm_uStartTime:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uStartTime; // @dynamic m_uStartTime;
- (void)setm_iDiffTime:(int)arg1;
@property(nonatomic) int m_iDiffTime; // @dynamic m_iDiffTime;
- (void)setm_uiPaySettingStatus:(unsigned long long)arg1;
@property(nonatomic) unsigned long long m_uiPaySettingStatus; // @dynamic m_uiPaySettingStatus;
- (void)setm_uiExtStatus:(unsigned long long)arg1;
@property(nonatomic) unsigned long long m_uiExtStatus; // @dynamic m_uiExtStatus;
- (void)setm_nsMobile:(id)arg1;
@property(retain, nonatomic) NSString *m_nsMobile; // @dynamic m_nsMobile;
- (void)setm_nsEmail:(id)arg1;
@property(retain, nonatomic) NSString *m_nsEmail; // @dynamic m_nsEmail;
- (void)setm_nsAliasName:(id)arg1;
@property(retain, nonatomic) NSString *m_nsAliasName; // @dynamic m_nsAliasName;
- (void)setm_nsUsrName:(id)arg1;
@property(retain, nonatomic) NSString *m_nsUsrName; // @dynamic m_nsUsrName;
- (void)setm_remindMMDBRestore:(_Bool)arg1;
@property(nonatomic) _Bool m_remindMMDBRestore; // @dynamic m_remindMMDBRestore;
- (void)setm_walletRegion:(unsigned int)arg1;
@property(nonatomic) unsigned int m_walletRegion; // @dynamic m_walletRegion;
- (void)setm_walletType:(unsigned int)arg1;
@property(nonatomic) unsigned int m_walletType; // @dynamic m_walletType;
- (void)setm_patternInfoSign:(id)arg1;
@property(retain, nonatomic) NSData *m_patternInfoSign; // @dynamic m_patternInfoSign;
- (void)setm_patternLockStatus:(unsigned int)arg1;
@property(nonatomic) unsigned int m_patternLockStatus; // @dynamic m_patternLockStatus;
- (void)setm_patternVersion:(unsigned int)arg1;
@property(nonatomic) unsigned int m_patternVersion; // @dynamic m_patternVersion;
- (void)setm_nsMsgPushSound:(id)arg1;
@property(retain, nonatomic) NSString *m_nsMsgPushSound; // @dynamic m_nsMsgPushSound;
- (void)setm_useInitContact:(_Bool)arg1;
@property(nonatomic) _Bool m_useInitContact; // @dynamic m_useInitContact;
- (void)setm_dtNewInitTempMaxBuffer:(id)arg1;
@property(retain, nonatomic) NSData *m_dtNewInitTempMaxBuffer; // @dynamic m_dtNewInitTempMaxBuffer;
- (void)setm_dtNewInitTempBuffer:(id)arg1;
@property(retain, nonatomic) NSData *m_dtNewInitTempBuffer; // @dynamic m_dtNewInitTempBuffer;
- (void)setm_nsLastUUID:(id)arg1;
@property(retain, nonatomic) NSString *m_nsLastUUID; // @dynamic m_nsLastUUID;
- (void)setm_dtA2KeyNew:(id)arg1;
@property(retain, nonatomic) NSData *m_dtA2KeyNew; // @dynamic m_dtA2KeyNew;
- (void)setm_dtA2Key:(id)arg1;
@property(retain, nonatomic) NSData *m_dtA2Key; // @dynamic m_dtA2Key;
- (void)setm_pcWCBGImgID:(id)arg1;
@property(retain, nonatomic) NSString *m_pcWCBGImgID; // @dynamic m_pcWCBGImgID;
- (void)setm_iWCRecentHours:(unsigned int)arg1;
@property(nonatomic) unsigned int m_iWCRecentHours; // @dynamic m_iWCRecentHours;
- (void)setm_iWCFlagExt:(int)arg1;
@property(nonatomic) int m_iWCFlagExt; // @dynamic m_iWCFlagExt;
- (void)setm_iWCFlag:(int)arg1;
@property(nonatomic) int m_iWCFlag; // @dynamic m_iWCFlag;
- (void)setm_nsWCBGImgObjectID:(id)arg1;
@property(retain, nonatomic) NSString *m_nsWCBGImgObjectID; // @dynamic m_nsWCBGImgObjectID;
- (void)setm_nsAuthKey:(id)arg1;
@property(retain, nonatomic) NSString *m_nsAuthKey; // @dynamic m_nsAuthKey;
- (void)setm_uiPluginSwitch:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiPluginSwitch; // @dynamic m_uiPluginSwitch;
- (void)setm_nsFacebookToken:(id)arg1;
@property(retain, nonatomic) NSString *m_nsFacebookToken; // @dynamic m_nsFacebookToken;
- (void)setm_nsFacebookName:(id)arg1;
@property(retain, nonatomic) NSString *m_nsFacebookName; // @dynamic m_nsFacebookName;
- (void)setm_nsFacebookID:(id)arg1;
@property(retain, nonatomic) NSString *m_nsFacebookID; // @dynamic m_nsFacebookID;
- (void)setm_uiFacebookFlag:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiFacebookFlag; // @dynamic m_uiFacebookFlag;
- (void)setm_uiSelfShowType:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiSelfShowType; // @dynamic m_uiSelfShowType;
- (void)setm_uiPluginInstallStatus:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiPluginInstallStatus; // @dynamic m_uiPluginInstallStatus;
- (void)setm_nsHDImgStatus:(id)arg1;
@property(retain, nonatomic) NSString *m_nsHDImgStatus; // @dynamic m_nsHDImgStatus;
- (void)setm_nsHDHeadImgMD5:(id)arg1;
@property(retain, nonatomic) NSString *m_nsHDHeadImgMD5; // @dynamic m_nsHDHeadImgMD5;
- (void)setm_uiSex:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiSex; // @dynamic m_uiSex;
- (void)setm_nsCity:(id)arg1;
@property(retain, nonatomic) NSString *m_nsCity; // @dynamic m_nsCity;
- (void)setm_nsProvince:(id)arg1;
@property(retain, nonatomic) NSString *m_nsProvince; // @dynamic m_nsProvince;
- (void)setm_nsCountry:(id)arg1;
@property(retain, nonatomic) NSString *m_nsCountry; // @dynamic m_nsCountry;
- (void)setm_dtSyncBuffer:(id)arg1;
@property(retain, nonatomic) NSData *m_dtSyncBuffer; // @dynamic m_dtSyncBuffer;
- (void)setm_nsPushmailFolderUrl:(id)arg1;
@property(retain, nonatomic) NSString *m_nsPushmailFolderUrl; // @dynamic m_nsPushmailFolderUrl;
- (void)setm_uiPushMailSwitchStatus:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiPushMailSwitchStatus; // @dynamic m_uiPushMailSwitchStatus;
- (void)setm_bAuthAnotherPlace:(_Bool)arg1;
@property(nonatomic) _Bool m_bAuthAnotherPlace; // @dynamic m_bAuthAnotherPlace;
- (void)setm_uiInitStatus:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiInitStatus; // @dynamic m_uiInitStatus;
- (void)setm_nsInitBuffer:(id)arg1;
@property(retain, nonatomic) NSString *m_nsInitBuffer; // @dynamic m_nsInitBuffer;
- (void)setm_uiLastInitVersion:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiLastInitVersion; // @dynamic m_uiLastInitVersion;
- (void)setm_uiCryptUin:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiCryptUin; // @dynamic m_uiCryptUin;
- (void)setm_uiLastTimeOfNotifyOpenPush:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiLastTimeOfNotifyOpenPush; // @dynamic m_uiLastTimeOfNotifyOpenPush;
- (void)setm_bNewMsgVibration:(_Bool)arg1;
@property(nonatomic) _Bool m_bNewMsgVibration; // @dynamic m_bNewMsgVibration;
- (void)setm_bNewMsgSound:(_Bool)arg1;
@property(nonatomic) _Bool m_bNewMsgSound; // @dynamic m_bNewMsgSound;
- (void)setm_uiStatus:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiStatus; // @dynamic m_uiStatus;
- (void)setm_uiBindQQUin:(unsigned int)arg1;
@property(nonatomic) unsigned int m_uiBindQQUin; // @dynamic m_uiBindQQUin;
@property(retain, nonatomic) NSData *m_dtOldAutoAuthKey; // @dynamic m_dtOldAutoAuthKey;
- (void)copyFromSetting:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

