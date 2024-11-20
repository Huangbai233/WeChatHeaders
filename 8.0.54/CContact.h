//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CAppBrandInfo, COpenIMInfo, ChatRoomData, ChatRoomDetail, EncryptSecretInfo, NSArray, NSDictionary, NSRecursiveLock, NSString, RingTone;

@interface CContact
{
    unsigned int m_uiChatRoomStatus;
    NSString *m_nsChatRoomMemList;
    NSString *m_nsChatRoomAdminList;
    unsigned int m_uiChatRoomAccessType;
    unsigned int m_uiChatRoomMaxCount;
    unsigned int m_uiChatRoomVersion;
    ChatRoomDetail *m_ChatRoomDetail;
    NSString *m_nsChatRoomData;
    ChatRoomData *m_ChatRoomData;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    unsigned int m_uiCertificationFlag;
    NSString *m_nsCertificationInfo;
    NSString *m_nsOwner;
    NSString *m_nsFBNickName;
    NSString *m_nsFBID;
    unsigned int m_uiNeedUpdate;
    NSString *m_nsWCBGImgObjectID;
    int m_iWCFlag;
    NSString *m_pcWCBGImgID;
    NSString *m_nsExternalInfo;
    NSString *m_nsBrandSubscriptConfigUrl;
    unsigned int m_uiBrandSubscriptionSettings;
    NSString *m_nsBrandIconUrl;
    _Bool m_isExtInfoValid;
    NSDictionary *externalInfoJSONCache;
    _Bool m_isShowRedDot;
    NSString *m_nsMobileHash;
    NSString *m_nsMobileFullHash;
    NSString *m_nsLinkedInID;
    NSString *m_nsLinkedInName;
    NSString *m_nsLinkedInPublicUrl;
    unsigned int m_uiDeleteFlag;
    NSString *m_nsDescription;
    NSString *m_nsCardUrl;
    NSArray *m_arrCardItem;
    NSString *m_nsWorkID;
    NSString *m_nsLabelIDList;
    NSArray *m_arrPhoneItem;
    NSRecursiveLock *m_lockForChatRoomData;
    CAppBrandInfo *_appBrandInfo;
    NSString *m_nsSourceExtInfo;
    NSString *m_patSuffix;
    unsigned int m_uiLocalCommonFlag;
    NSString *m_nsOpenIMPrivacyAgreementUrl;
    _Bool _m_bFromNewDB;
    unsigned int extFlag;
    unsigned int m_uiInChatRoomStatus;
    unsigned int m_uiLastModifyTime;
    unsigned int m_uiAddCreateTime;
    unsigned int _m_uiLastUpdate;
    unsigned int _m_uiMetaFlag;
    unsigned int _m_uiLocalAddContactTime;
    unsigned int _m_uiDebugModeType;
    unsigned int _m_uiWxAppOpt;
    unsigned int _uiLastUpdateAppVersionInfoTime;
    unsigned int _m_uiShareCardMessageStatus;
    unsigned int _m_uiChatRoomLocalSendUpgradeType;
    unsigned int _m_textStatusFlag;
    NSString *openIMAppid;
    COpenIMInfo *openIMInfo;
    unsigned long long m_uiChatRoomBusinessType;
    NSString *m_textStatusID;
    NSString *m_textStatusExtInfo;
    RingTone *m_ringBackInfo;
    RingTone *exclusiveRing;
    unsigned long long m_uiLocalBitFlag;
    NSDictionary *_m_dicWeiDianInfo;
    NSString *_m_nsChatRoomSpecialAttentionMemList;
    NSString *_m_nsWeiDianInfo;
    NSString *_m_textStatusData;
    NSString *_m_createGroupSessionId;
    EncryptSecretInfo *_m_encryptSecretInfo;
}

+ (_Bool)isHeadImgUpdated:(id)arg1 Local:(id)arg2;
+ (void)HandleChatMemUsrImgPB:(id)arg1 Contatct:(id)arg2;
+ (void)HandleUsrImgPB:(id)arg1 Contatct:(id)arg2;
+ (_Bool)IsChatRoomContact:(id)arg1;
+ (id)genChatRoomName:(id)arg1 truncateByLen:(long long)arg2 appendTailText:(id)arg3 canShowRemark:(_Bool)arg4;
+ (id)genChatRoomNameNoRemark:(id)arg1;
+ (id)genChatRoomName:(id)arg1 truncateByLen:(long long)arg2 appendTailText:(id)arg3;
+ (id)genChatRoomName:(id)arg1 truncateByLen:(long long)arg2 appendTail:(_Bool)arg3;
+ (id)genChatRoomName:(id)arg1 truncateByLen:(long long)arg2;
+ (id)genChatRoomName:(id)arg1;
+ (id)getChatRoomMemberWithoutMyself:(id)arg1;
+ (id)GetChatRoomAdminUserName:(id)arg1;
+ (id)GetChatRoomAdmin:(id)arg1;
+ (id)getChatRoomMember:(id)arg1;
+ (id)getChatRoomMemberUserName:(id)arg1;
+ (unsigned long long)getChatRoomMemberCount:(id)arg1;
+ (id)parseContactKey:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_uiLocalBitFlag;
+ (void)PBArrayAdd_m_uiInChatRoomStatus;
+ (void)PBArrayAdd_m_arrCardItem;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_exclusiveRing;
+ (void)PBArrayAdd_m_ringBackInfo;
+ (void)PBArrayAdd_m_textStatusExtInfo;
+ (void)PBArrayAdd_m_textStatusID;
+ (void)PBArrayAdd_m_patSuffix;
+ (void)PBArrayAdd_m_uiChatRoomBusinessType;
+ (void)PBArrayAdd_m_nsSourceExtInfo;
+ (void)PBArrayAdd_m_nsChatRoomAdminList;
+ (void)PBArrayAdd_openIMInfo;
+ (void)PBArrayAdd_openIMAppid;
+ (void)PBArrayAdd_m_ChatRoomDetail;
+ (void)PBArrayAdd_m_arrPhoneItem;
+ (void)PBArrayAdd_m_nsLabelIDList;
+ (void)PBArrayAdd_m_nsCardUrl;
+ (void)PBArrayAdd_m_nsDescription;
+ (void)PBArrayAdd_m_uiDeleteFlag;
+ (void)PBArrayAdd_m_uiChatRoomVersion;
+ (void)PBArrayAdd_m_uiChatRoomMaxCount;
+ (void)PBArrayAdd_m_nsLinkedInPublicUrl;
+ (void)PBArrayAdd_m_nsLinkedInName;
+ (void)PBArrayAdd_m_nsLinkedInID;
+ (void)PBArrayAdd_m_nsMobileFullHash;
+ (void)PBArrayAdd_m_nsMobileHash;
+ (void)PBArrayAdd_m_isShowRedDot;
+ (void)PBArrayAdd_m_uiChatRoomAccessType;
+ (void)PBArrayAdd_m_nsChatRoomData;
+ (void)PBArrayAdd_m_isExtInfoValid;
+ (void)PBArrayAdd_m_nsBrandIconUrl;
+ (void)PBArrayAdd_m_uiBrandSubscriptionSettings;
+ (void)PBArrayAdd_m_nsBrandSubscriptConfigUrl;
+ (void)PBArrayAdd_m_nsExternalInfo;
+ (void)PBArrayAdd_m_pcWCBGImgID;
+ (void)PBArrayAdd_m_iWCFlag;
+ (void)PBArrayAdd_m_nsWCBGImgObjectID;
+ (void)PBArrayAdd_m_uiNeedUpdate;
+ (void)PBArrayAdd_m_nsFBID;
+ (void)PBArrayAdd_m_nsFBNickName;
+ (void)PBArrayAdd_m_nsOwner;
+ (void)PBArrayAdd_m_nsCertificationInfo;
+ (void)PBArrayAdd_m_uiCertificationFlag;
+ (void)PBArrayAdd_m_nsSignature;
+ (void)PBArrayAdd_m_nsCity;
+ (void)PBArrayAdd_m_nsProvince;
+ (void)PBArrayAdd_m_nsCountry;
+ (void)PBArrayAdd_m_uiChatRoomStatus;
+ (void)PBArrayAdd_m_nsChatRoomMemList;
+ (_Bool)isBrandFollowedWithUsername:(id)arg1;
+ (_Bool)isWeWorkKFUserName:(id)arg1;
+ (_Bool)isWeAppUserName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) EncryptSecretInfo *m_encryptSecretInfo; // @synthesize m_encryptSecretInfo=_m_encryptSecretInfo;
@property(retain, nonatomic) NSString *m_createGroupSessionId; // @synthesize m_createGroupSessionId=_m_createGroupSessionId;
@property(retain, nonatomic) NSString *m_textStatusData; // @synthesize m_textStatusData=_m_textStatusData;
@property(nonatomic) unsigned int m_textStatusFlag; // @synthesize m_textStatusFlag=_m_textStatusFlag;
@property(nonatomic) unsigned int m_uiChatRoomLocalSendUpgradeType; // @synthesize m_uiChatRoomLocalSendUpgradeType=_m_uiChatRoomLocalSendUpgradeType;
@property(nonatomic) unsigned int m_uiShareCardMessageStatus; // @synthesize m_uiShareCardMessageStatus=_m_uiShareCardMessageStatus;
@property(nonatomic) unsigned int uiLastUpdateAppVersionInfoTime; // @synthesize uiLastUpdateAppVersionInfoTime=_uiLastUpdateAppVersionInfoTime;
@property(nonatomic) unsigned int m_uiWxAppOpt; // @synthesize m_uiWxAppOpt=_m_uiWxAppOpt;
@property(nonatomic) unsigned int m_uiDebugModeType; // @synthesize m_uiDebugModeType=_m_uiDebugModeType;
@property(nonatomic) unsigned int m_uiLocalAddContactTime; // @synthesize m_uiLocalAddContactTime=_m_uiLocalAddContactTime;
@property(nonatomic) unsigned int m_uiMetaFlag; // @synthesize m_uiMetaFlag=_m_uiMetaFlag;
@property(nonatomic) unsigned int m_uiLastUpdate; // @synthesize m_uiLastUpdate=_m_uiLastUpdate;
@property(nonatomic) _Bool m_bFromNewDB; // @synthesize m_bFromNewDB=_m_bFromNewDB;
@property(retain, nonatomic) NSString *m_nsWeiDianInfo; // @synthesize m_nsWeiDianInfo=_m_nsWeiDianInfo;
@property(retain, nonatomic) NSString *m_nsChatRoomSpecialAttentionMemList; // @synthesize m_nsChatRoomSpecialAttentionMemList=_m_nsChatRoomSpecialAttentionMemList;
@property(nonatomic) unsigned int m_uiAddCreateTime; // @synthesize m_uiAddCreateTime;
@property(retain, nonatomic) NSString *m_nsOpenIMPrivacyAgreementUrl; // @synthesize m_nsOpenIMPrivacyAgreementUrl;
@property(nonatomic) unsigned int m_uiLocalCommonFlag; // @synthesize m_uiLocalCommonFlag;
@property(nonatomic) unsigned int m_uiLastModifyTime; // @synthesize m_uiLastModifyTime;
@property(retain, nonatomic) CAppBrandInfo *appBrandInfo; // @synthesize appBrandInfo=_appBrandInfo;
@property(retain, nonatomic) NSString *m_nsWorkID; // @synthesize m_nsWorkID;
- (void)setExternalInfoJSONCache:(id)arg1;
- (id)externalInfoJSONCache;
@property(nonatomic) unsigned long long m_uiLocalBitFlag; // @synthesize m_uiLocalBitFlag;
@property(nonatomic) unsigned int m_uiInChatRoomStatus; // @synthesize m_uiInChatRoomStatus;
@property(retain, nonatomic) NSArray *m_arrCardItem; // @synthesize m_arrCardItem;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag;
@property(retain, nonatomic) RingTone *exclusiveRing; // @synthesize exclusiveRing;
@property(retain, nonatomic) RingTone *m_ringBackInfo; // @synthesize m_ringBackInfo;
@property(retain, nonatomic) NSString *m_textStatusExtInfo; // @synthesize m_textStatusExtInfo;
@property(retain, nonatomic) NSString *m_textStatusID; // @synthesize m_textStatusID;
@property(retain, nonatomic) NSString *m_patSuffix; // @synthesize m_patSuffix;
@property(nonatomic) unsigned long long m_uiChatRoomBusinessType; // @synthesize m_uiChatRoomBusinessType;
@property(retain, nonatomic) NSString *m_nsSourceExtInfo; // @synthesize m_nsSourceExtInfo;
@property(retain, nonatomic) NSString *m_nsChatRoomAdminList; // @synthesize m_nsChatRoomAdminList;
@property(retain, nonatomic) COpenIMInfo *openIMInfo; // @synthesize openIMInfo;
@property(retain, nonatomic) NSString *openIMAppid; // @synthesize openIMAppid;
@property(retain, nonatomic) ChatRoomDetail *m_ChatRoomDetail; // @synthesize m_ChatRoomDetail;
@property(retain, nonatomic) NSArray *m_arrPhoneItem; // @synthesize m_arrPhoneItem;
@property(retain, nonatomic) NSString *m_nsLabelIDList; // @synthesize m_nsLabelIDList;
@property(retain, nonatomic) NSString *m_nsCardUrl; // @synthesize m_nsCardUrl;
@property(retain, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
@property(nonatomic) unsigned int m_uiDeleteFlag; // @synthesize m_uiDeleteFlag;
@property(nonatomic) unsigned int m_uiChatRoomVersion; // @synthesize m_uiChatRoomVersion;
@property(nonatomic) unsigned int m_uiChatRoomMaxCount; // @synthesize m_uiChatRoomMaxCount;
@property(retain, nonatomic) NSString *m_nsLinkedInPublicUrl; // @synthesize m_nsLinkedInPublicUrl;
@property(retain, nonatomic) NSString *m_nsLinkedInName; // @synthesize m_nsLinkedInName;
@property(retain, nonatomic) NSString *m_nsLinkedInID; // @synthesize m_nsLinkedInID;
@property(retain, nonatomic) NSString *m_nsMobileFullHash; // @synthesize m_nsMobileFullHash;
@property(retain, nonatomic) NSString *m_nsMobileHash; // @synthesize m_nsMobileHash;
@property(nonatomic) _Bool m_isShowRedDot; // @synthesize m_isShowRedDot;
@property(nonatomic) unsigned int m_uiChatRoomAccessType; // @synthesize m_uiChatRoomAccessType;
@property(nonatomic) _Bool m_isExtInfoValid; // @synthesize m_isExtInfoValid;
@property(retain, nonatomic) NSString *m_nsBrandIconUrl; // @synthesize m_nsBrandIconUrl;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings;
@property(retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
@property(retain, nonatomic) NSString *m_pcWCBGImgID; // @synthesize m_pcWCBGImgID;
@property(nonatomic) int m_iWCFlag; // @synthesize m_iWCFlag;
@property(retain, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID;
@property(nonatomic) unsigned int m_uiNeedUpdate; // @synthesize m_uiNeedUpdate;
@property(retain, nonatomic) NSString *m_nsFBID; // @synthesize m_nsFBID;
@property(retain, nonatomic) NSString *m_nsFBNickName; // @synthesize m_nsFBNickName;
@property(retain, nonatomic) NSString *m_nsOwner; // @synthesize m_nsOwner;
@property(retain, nonatomic) NSString *m_nsCertificationInfo; // @synthesize m_nsCertificationInfo;
@property(nonatomic) unsigned int m_uiCertificationFlag; // @synthesize m_uiCertificationFlag;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(nonatomic) unsigned int m_uiChatRoomStatus; // @synthesize m_uiChatRoomStatus;
@property(retain, nonatomic) NSString *m_nsChatRoomMemList; // @synthesize m_nsChatRoomMemList;
- (long long)cardImageCount;
- (_Bool)hasCardImage;
- (_Bool)canStartChatRoomLive;
- (_Bool)IsUserInChatRoom:(id)arg1;
- (_Bool)isChatRoomBlocked;
- (_Bool)isChatRoomDismissed;
- (_Bool)isChatRoomOnlyAdminModTopic;
- (id)getLabelIDList;
- (_Bool)isAccountDeleted;
@property(readonly, nonatomic) NSDictionary *m_dicWeiDianInfo; // @synthesize m_dicWeiDianInfo=_m_dicWeiDianInfo;
- (_Bool)isHasWeiDian;
- (_Bool)needShowUnreadCountOnSession;
- (void)setShowOpenIMStoragePopUp:(_Bool)arg1;
- (_Bool)isShowOpenIMStoragePopUp;
- (_Bool)isUseNewMuteFlag;
- (void)setChatStatusUnfoldSnsOpen:(_Bool)arg1;
- (_Bool)isChatStatusUnfoldSnsOpen;
- (_Bool)isElderModeQuickCallContact;
- (void)setChatStatusNotifyOpen:(_Bool)arg1;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isContactSessionTop;
- (_Bool)isChatroomNeedAccessVerify;
- (_Bool)isShowChatRoomDisplayName;
- (id)admins;
- (int)getChatRoomRole;
- (_Bool)isAdmin;
- (_Bool)isOwner;
@property(readonly, nonatomic) _Bool hasOverseaInfo;
@property(readonly, nonatomic) NSString *accountColumnName;
@property(readonly, nonatomic) _Bool isWechatUser;
- (id)xmlForMessageWrapContent:(id)arg1 OpCode:(unsigned int)arg2;
- (id)genDictExtraInfoStrWithDictExtraInfo:(id)arg1;
- (id)xmlForMessageWrapContentWithDictExtraInfo:(id)arg1;
- (id)xmlForMessageWrapContent;
- (id)getChatRoomMembrGroupNickName:(id)arg1;
- (id)getChatRoomMemberNickName:(id)arg1;
- (id)getUsernameForDisplayName:(id)arg1;
- (id)getChatRoomMemberDisplayName:(id)arg1;
- (id)getNormalContactDisplayDesc;
- (long long)compareForFavourGroup:(id)arg1;
- (_Bool)isLocalizedContact;
- (_Bool)isChatBoxContact;
- (_Bool)isNormalContact;
- (_Bool)isWeixinSingleConatct;
- (_Bool)isHolderContact;
- (_Bool)isVerified;
- (_Bool)isIgnoreBrandContat;
- (_Bool)isVerifiedBrandContact;
- (_Bool)isBrandContact;
- (_Bool)IsAddFromShake;
- (_Bool)IsAddFromLbs;
- (_Bool)isToBeUpgradeChatRoomMemberMoreThanMax;
- (_Bool)isToBeUpgradeHadNotUpgradeChatRoom;
- (_Bool)isUpgradeOpenIMChatroom;
- (_Bool)isOpenImChatroomAndUpgradeOpenIMChatroom;
- (_Bool)isMyContact;
- (_Bool)hasContactDisplayUsrName;
- (void)tryLoadExtInfo;
@property(readonly, copy) NSString *description;
- (_Bool)copyPatialFieldFromContact:(id)arg1;
- (_Bool)copyFieldFromContact:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithModContact:(id)arg1;
- (id)init;
- (id)getContactDisplayName;
- (id)m_nsNickName;
- (_Bool)isHasMobile;
- (id)getMobileList;
- (id)getMobileNumString;
- (id)getMobileDisplayName;
- (_Bool)isContactTypeShouldDelete;
@property(retain, nonatomic) ChatRoomData *m_ChatRoomData; // @synthesize m_ChatRoomData;
@property(retain, nonatomic) NSString *m_nsChatRoomData; // @synthesize m_nsChatRoomData;
- (void)setSignatureWithoutEmojiChange:(id)arg1;
- (void)setChatRoomDataWithoutEmojiChange:(id)arg1;
- (id)getPBPropertyTable;
- (id)getTitleKey:(id)arg1;
- (id)getBrandInfoItemAndRemoveIt:(id)arg1 fromArray:(id)arg2;
- (_Bool)isBlockWeAppTemplateMessage;
- (_Bool)isBlockWeAppSessionMessage;
- (_Bool)isWeAppContact;
- (id)getWeAppID;
- (id)getAppBrandInfo;
- (id)getMigrationNicknameList;
- (id)getBrandProfileBindWeAppList;
- (long long)getWeAppBizWxaOpenFlag;
- (unsigned int)getFunctionFlag;
- (id)getSupportEmoticonLinkPrefix;
- (id)getConferenceVerifyButtonTitle;
- (id)getConferenceVerifyPromptTitle;
- (unsigned int)getConferenceContactExpireTime;
- (_Bool)isConferenceContactExpired;
- (id)getBrandBusinessScope;
- (id)getBrandMerchantSecurityUrl;
- (id)getBrandMerchantSecurity;
- (id)getBrandMerchantRatings;
- (id)brandUrls;
- (id)brandPrivileges;
- (_Bool)getBrandRegisterSourceIsClose;
- (id)getBrandRegisterSourceIntroUrl;
- (id)getBrandRegisterSourceBody;
- (id)getPersonalVerifiedDescribe;
- (id)getPersonalVerifiedIdentity;
- (id)verifedIdentity;
- (_Bool)isBizPersonalVerifed;
- (id)getBrandVerifySubTitle;
- (id)getBrandVerifySourceIntroUrl;
- (id)getBrandVerifySourceDescription;
- (id)getBrandVerifySourceName;
- (unsigned int)getBrandVerifySourceType;
- (id)getBrandTrademarkName;
- (id)getBrandTrademarkUrl;
- (id)getCustomizeMenu;
- (id)bizMenuInfoFromContact;
- (long long)getInteractiveMode;
- (_Bool)isShowToolBarInMsg;
- (_Bool)isShowHeadImgInMsg;
- (long long)getScanQRCodeType;
- (long long)getReportLocationType;
- (long long)getAudioPlayType;
- (void)setProvideLocationSwitch:(_Bool)arg1;
- (_Bool)isProvideLocationSwitchOn;
- (void)setReceiveMessageSwitch:(_Bool)arg1;
- (_Bool)isReceiveMessageSwitchOn;
- (_Bool)containKFWorkerInfo;
- (id)getSpecifyWorkerOpenID;
- (long long)getConnectorMsgType;
- (_Bool)canSupportMessageNotify;
- (_Bool)isHardDeviceHideSubtitle;
- (_Bool)isInternalMyDeviceBrand;
- (_Bool)isInternalSportBrand;
- (id)getPersonalVerifiedDesc;
- (id)getAboutBizUrl;
- (_Bool)canAutoMuteBrand;
- (_Bool)isPersonalVerifiedBrand;
- (_Bool)isHardDeviceTestBrand;
- (_Bool)isHardDeviceBrand;
- (_Bool)isEnterpriseDisableBrand;
- (_Bool)isEnterpriseWebSubBrand;
- (_Bool)isEnterpriseChatSubBrand;
- (_Bool)isEnterpriseSubBrand;
- (id)getEnterpriseSubBrandChatExtUrl;
- (id)getEnterpriseSubBrandUrl;
- (unsigned int)getEnterpriseSubBrandChildType;
- (_Bool)isEnterpriseBrand;
- (_Bool)isEnterpriseMainBrand;
- (id)getEnterpriseMainBrandUserName;
- (id)getBrandAppId;
- (unsigned long long)getBrandContactType;
- (_Bool)isServiceBrand;
- (_Bool)isSubscriptionBrand;
- (_Bool)isNormalBrand;
- (id)getExternalInfoDictionary;
- (void)updateWithBizAttrChanged:(id)arg1;
@property(nonatomic) unsigned int massSendContactfromScene;
- (id)doNotDisturbModeTipWith:(id)arg1;
- (id)contactTextState;
- (id)textStateList;
- (id)mostRecentTextState;
- (_Bool)validForTextState;
- (id)openIMIconNamePostfix;
- (id)openIMIconNamePostfixWithIconSize:(double)arg1;
- (_Bool)isOpenImFinderShopKefuContact;
- (unsigned int)openIMResourceSubType;
- (id)getMsgSendOpEntry;
@property(readonly, nonatomic) NSString *customSectionHeader;
@property(readonly, nonatomic) NSString *openimDescShortPY;
@property(readonly, nonatomic) NSString *openimDescQuanPin;
@property(readonly, nonatomic) NSString *openIMDescIcon;
@property(readonly, nonatomic) NSString *openIMDesc;
- (id)openIMUIDesc;
@property(readonly, nonatomic) NSString *openimIntroURL;
@property(readonly, nonatomic) NSString *openimIconURL;
@property(readonly, nonatomic) NSString *openimName;
@property(readonly, nonatomic) NSString *openimAcctType;
- (_Bool)isFTSKFContact;
- (void)setIsFTSKFContact:(_Bool)arg1;
- (id)generateSelectChatRoomInfo;
@property(nonatomic, readonly) _Bool isDoNotDisturbMode;
- (id)diffIdentifier;
@property(nonatomic, readonly) NSString *userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

