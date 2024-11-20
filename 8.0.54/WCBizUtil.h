//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@interface WCBizUtil : NSObject
{
}

+ (id)getRedEnvelopesDefaultSkinInfoPath;
+ (_Bool)isWCPayThirdC2CMessage:(unsigned int)arg1;
+ (unsigned int)genServerCurrentTime;
+ (id)getWePalmModelResourcePath;
+ (id)getWePalmResourceZipPath:(unsigned int)arg1;
+ (id)getRedEnvelopesPagFile:(unsigned int)arg1 fileName:(id)arg2;
+ (id)getRedEnvelopesDetailAtmosphereLocalPag:(unsigned int)arg1;
+ (id)getRedEnvelopesCoverAtmosphereLocalPag:(unsigned int)arg1;
+ (id)getRedEnvelopesBubbleAtmosphereLocalPag:(unsigned int)arg1;
+ (id)decodeHexString:(id)arg1;
+ (id)getPalmResultPath:(id)arg1;
+ (id)getWCPayDisplayUserName:(id)arg1 groupContact:(id)arg2;
+ (float)getRedEnvelopesDetailAtmosphereShowDelayTime;
+ (_Bool)isEnableGetFullCoverInfoDetail;
+ (id)getWCPayJumpInfoSjtReportString:(id)arg1;
+ (id)getRecvChannelJumpInfoSjtReportString:(id)arg1;
+ (void)jumpScanQRCode;
+ (id)createPlayerInfoFromMediaWrap:(id)arg1;
+ (id)createMediaWrapFromURL:(id)arg1 subtypeId:(unsigned int)arg2;
+ (_Bool)isShowWxpayEntranceLocal;
+ (void)jumpFinderFeedWithFinderUri:(id)arg1 currentNavController:(id)arg2;
+ (_Bool)hasTunnelCgiPrefix:(id)arg1 withPattern:(id)arg2;
+ (id)getRedEnvAudioSavePath:(id)arg1;
+ (id)getRedEnvAudioSaveDir;
+ (id)parseHKNativeAttachInfoFromPayUrl:(id)arg1;
+ (id)nationalStandardSm2UserId;
+ (id)cellAccessibilityLabelWithTitle:(id)arg1 subTitle:(id)arg2 redDotType:(long long)arg3 redDotInfo:(id)arg4;
+ (id)getWCPaySMDigtialCertRootPath;
+ (id)getWCPayDigtialCertLocalConfigPath;
+ (id)getFacingReceiveMoneyTipsDescWording;
+ (id)getWalletLockCloseTipsWording;
+ (id)getWalletLockTipsWording;
+ (id)getBalanceDetailInfoTipsNewUserWording;
+ (id)getWalletEntryTitle;
+ (id)getWeChatPayEntryNameFromAbtest;
+ (id)getFolderInfo:(id)arg1;
+ (_Bool)checkShouldShowTransferRedLabelWithSessionInfo:(id)arg1;
+ (unsigned int)calcValidNewTransferCountWithUsername:(id)arg1;
+ (void)reportTransferActionWithChatContact:(id)arg1 userType:(unsigned int)arg2 reportScene:(unsigned int)arg3;
+ (_Bool)isTransferMsgDefaultSubType:(unsigned int)arg1;
+ (_Bool)isTransferReturnMsgSubType:(unsigned int)arg1;
+ (void)reportTransferNodeViewClickWithSubtype:(unsigned int)arg1 isSender:(_Bool)arg2 isReceiver:(_Bool)arg3 isOutSider:(_Bool)arg4 chatContact:(id)arg5;
+ (int)getChatTypeWithContact:(id)arg1;
+ (id)converStringContentToArray:(id)arg1;
+ (_Bool)canShowTransferInGroupEntry;
+ (double)calcExposeLastHalfCellSelectPayCardViewHeightWithMaxHeight:(double)arg1 cellHeightCache:(id)arg2 cellTitleHalfYCache:(id)arg3;
+ (void)clearAllValidExclusiveHbWithUsername:(id)arg1;
+ (unsigned int)calcValidNewExclusiveHbCountWithUsername:(id)arg1;
+ (id)getCorrectShowStringWithMoneyValue:(unsigned long long)arg1;
+ (id)calcSubStringLocationWithContent:(id)arg1 subString:(id)arg2;
+ (unsigned long long)numberFromHexString:(id)arg1;
+ (id)getWCPaySpeechConfig:(id)arg1;
+ (id)getWCPaySpeechPos:(id)arg1;
+ (id)getCorrectBizMainViewController;
+ (struct CGSize)sizeWithNumber:(long long)arg1 font:(id)arg2;
+ (struct CGSize)maxDigitLabelWidthWithFont:(id)arg1;
+ (void)wcpayLogFeatureExt:(unsigned int)arg1 domainName:(id)arg2 eventName:(id)arg3 logString:(id)arg4;
+ (void)wcpayLogFeatureExt:(unsigned int)arg1 domainName:(id)arg2 logString:(id)arg3;
+ (id)genKeyValueDictFromUrl:(id)arg1 prefix:(id)arg2;
+ (void)handleWCPayJumpActionItem:(id)arg1 rootVC:(id)arg2 fromScene:(unsigned int)arg3 params:(id)arg4 extraInfo:(id)arg5;
+ (void)handleWCPayJumpActionItem:(id)arg1 rootVC:(id)arg2 fromScene:(unsigned int)arg3 params:(id)arg4;
+ (id)numberAtMostTwoDigit:(unsigned long long)arg1;
+ (id)getRedEnvelopesTimeLimitPromotionDir;
+ (id)getRedEnvelopesDynamicResourcePath:(id)arg1;
+ (id)getRedEnvelopesDynamicResourceDir;
+ (id)getRedEnvelopesStoryInfoDir;
+ (id)getWCPaySpeechDir;
+ (void)reportRedEnvReplyWithEmoticonData:(long long)arg1 md5:(id)arg2 remarkFlag:(long long)arg3;
+ (void)reportRedEnvReplyWithEmoticonClick:(long long)arg1;
+ (void)reportRedEnvSendWithEmoticonData:(long long)arg1 md5:(id)arg2;
+ (void)reportRedEnvSendWithEmoticonClick:(long long)arg1;
+ (id)getRedEnvelopesShowResourceDir:(unsigned int)arg1;
+ (id)getRedEnvelopesShowResourceZipPath:(unsigned int)arg1;
+ (id)singleDownloadTempDir;
+ (id)getNewYearHBPagFilePath:(id)arg1;
+ (id)getNewYearHBResourceDir:(unsigned int)arg1;
+ (void)delNewYearHBResourceDir;
+ (id)getNewYearHBResourceDir;
+ (id)getNewYearHBResourceZipPath:(unsigned int)arg1;
+ (id)getWePalmModelResourceDir;
+ (id)getRedEnvelopesShowResourceDir;
+ (id)getRedEnvelopesStoryDetailVideoPath:(unsigned int)arg1 index:(long long)arg2;
+ (id)getRedEnvelopesStoryDetailVideoTempPath:(id)arg1;
+ (id)getRedEnvelopesStoryDetailVideoFormatPath:(id)arg1;
+ (id)getRedEnvelopesStoryDetailVideoDir;
+ (id)getRedEnvelopesStoryDetailVideoThumbImage:(unsigned int)arg1 index:(long long)arg2;
+ (id)getRedEnvelopesStoryDetailLocalImage:(unsigned int)arg1 index:(long long)arg2;
+ (id)getRedEnvelopesDetailMaskLocalImage:(unsigned int)arg1;
+ (id)getRedEnvelopesMiniLogoLocalImage:(unsigned int)arg1;
+ (id)getRedEnvelopesCoverMaskLocalImage:(unsigned int)arg1;
+ (id)getRedEnvelopesCoverWidgetLocalImage:(unsigned int)arg1;
+ (id)getRedEnvelopesBubbleWidgetLocalImage:(unsigned int)arg1;
+ (id)getRedEnvelopesBubbleMaskLocalImage:(unsigned int)arg1;
+ (id)getRedEnvelopesMiniLogoLocalPag:(unsigned int)arg1;
+ (id)getRedEnvelopesDetailLocalPag:(unsigned int)arg1;
+ (id)getRedEnvelopesPagResource:(unsigned int)arg1 fileName:(id)arg2;
+ (id)getRedEnvelopesCoverLocalPag:(unsigned int)arg1;
+ (id)getRedEnvelopesBubbleLocalPag:(unsigned int)arg1;
+ (id)md5ForString:(id)arg1;
+ (id)trimStringFromSourceString:(id)arg1 toLength:(unsigned long long)arg2;
+ (unsigned int)transferTinyAppEnterSceneToPayChannel:(unsigned long long)arg1;
+ (_Bool)isShowTransToBankCardEntry;
+ (_Bool)isSystemPushSoundOpen;
+ (unsigned long long)getCorrectUIntValueFromDouble:(double)arg1;
+ (id)getContactDisplayName:(id)arg1;
+ (_Bool)isNetworkConnected;
+ (id)getGeneralActionLocation;
+ (id)getActionLocation;
+ (void)reportLocationAlert:(long long)arg1 type:(long long)arg2;
+ (id)parseRealnameGuideInfo:(id)arg1 alertViewScene:(int)arg2;
+ (id)parseRealnameGuideInfoFromProto:(id)arg1 alertViewScene:(int)arg2;
+ (void)logRealnameAction:(long long)arg1;
+ (void)logBannerUserAction:(long long)arg1 bannerType:(int)arg2;
+ (void)playCoinSound;
+ (void)bizReportBannerUserAction:(long long)arg1 bannType:(int)arg2;
+ (id)GetWCBizMainWindow;
+ (void)SetWCBizMainWindow:(id)arg1;
+ (void)ClearWCBizMainWindow;
+ (unsigned int)convertTenpayCmdIdToNewCGI:(unsigned int)arg1 payScene:(unsigned int)arg2;
+ (id)convertCGIEnumToString:(unsigned int)arg1;
+ (void)logOfflinePayGetToken:(long long)arg1;
+ (void)logUserAction:(long long)arg1;
+ (void)logLoanMoneyAction:(long long)arg1;
+ (void)logTransferAction:(long long)arg1;
+ (id)feeSymbolFromType:(id)arg1;
+ (id)feeTextFromType:(id)arg1 fee:(long long)arg2;
+ (_Bool)isEmptyKey:(id)arg1 inDictionary:(id)arg2;
+ (_Bool)isDomesticUserWithCardUserFlag:(unsigned int)arg1;
+ (_Bool)isOverseasUserWithCardUserFlag:(unsigned int)arg1;
+ (_Bool)isDomesticCardWithCardBankTag:(unsigned int)arg1;
+ (_Bool)isOverseasCardWithCardBankTag:(unsigned int)arg1;
+ (unsigned int)differntCharactorCountCompareString:(id)arg1 WithOriginalString:(id)arg2;
+ (long long)calcValidPhoneNumberCount:(id)arg1;
+ (id)validWCMallPhoneNumber:(id)arg1;
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
+ (id)stringWithFormEncodedComponentsAscending:(id)arg1 ascending:(_Bool)arg2 skipempty:(_Bool)arg3 separator:(id)arg4;
+ (id)getSaveStyleBarItemTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
+ (id)getWCPayQRCodeGetCodeCgiCachePath;
+ (id)getWCPayRewardCodeImageTempDownloadDataPath;
+ (id)getWCPayRewardCodeImageDataPath;
+ (id)getWCPayRewardCodeImageForderPath;
+ (id)getWCPayLQTEnteranceInfoPath;
+ (id)getLqtPurchaseBottomItemCachePathWithEntranceType:(unsigned int)arg1;
+ (id)getWCPayWebImageDefaultCacheFolderPath;
+ (id)getWCPayBankIconCacheFolderPath;
+ (id)getWCPayCgiResponseCachePathWith:(id)arg1;
+ (id)getWCPayDigitalCrtPath;
+ (id)getWCPayRealnameWordingPath;
+ (id)getWCPayMessageResourceFolder;
+ (id)getWCPayBankImageResourceFolder;
+ (id)getWCPayBankResourcePath;
+ (id)getWCPayLedgerDatabasePath;
+ (id)getWCPayPayManagePath;
+ (id)getWCRedEnvelopesLastRadomHBSelctedCountPath;
+ (id)getOpenIMRedEnvelopesUserInfoPath;
+ (id)getWCH5RedEnvelopesUserInfoPath;
+ (id)getWCRedEnvelopesUserInfoPath;
+ (id)getWCLiveStreamRedEnvelopesUserInfoPath;
+ (id)getWCRedEnvelopesOpenIMUserInfoPath;
+ (id)getWCMallFunctionListPath;
+ (id)getWCPayServerDynamicWordingPath;
+ (id)getFiltedTruthName:(id)arg1;
+ (id)getCreditCardHadViewFilePath;
+ (id)getWCAddressStageDataFilePath;
+ (id)getWCMallShowedInActivityCellProductId;
+ (id)getWCMobileChargeRecommendIdPath;
+ (id)getWCMallShowedBannerId;
+ (id)getWCMallShowedProductId;
+ (id)getWCMallShowedRedCodePath;
+ (id)getWCMallShowedNewPath;
+ (id)getWCMallTicketsListPath;
+ (id)getWCMallLatestActivityTipsPath;
+ (id)getWCMallTelephoneDictionaryPath;
+ (id)getWCMallTelephoneListPath;
+ (id)getWCAddressYiXunFilePath;
+ (id)getWCAddressFilePath;
+ (id)getWCPayLoanEntryInfoPath;
+ (id)getWCPayTransferedUserListPath;
+ (id)getWCPayNoticeInfoPath;
+ (id)getGroupPayPfImagePathWithClientMsgId:(id)arg1;
+ (id)getGroupPayPfImageFolderPath;
+ (id)getLQChargeLQTInfoCachePath;
+ (id)getWCPayBankPriorityCachePath;
+ (id)getWCPayLQTInfoPath;
+ (id)getWCPayBalancePath;
+ (id)getBindQueryNewApplyNewCardInfoWithScene:(int)arg1;
+ (id)getBindQueryNewPayMenuArrayInfoPathWithScene:(int)arg1;
+ (id)getWCPaySwitchInfoPath;
+ (id)getWCPayUserInfoPath;
+ (id)getWCPayCreditCardShowedNewInfoPath;
+ (id)getWCPayOfflinePayKindaMMKVID;
+ (id)getWCPayOfflinePayJumpInfoCachePath;
+ (id)getWCPayOfflinePayGuideBarCachePath;
+ (id)getWCPayOfflinePayDisableBlockLayerCachePath;
+ (id)getWCPayOfflinePayCardListDataPath;
+ (id)getWCPayOfflinePayShowedNewInfoPath;
+ (id)getWCPayOfflinePayQueryUsrerInfoPath;
+ (id)getWCPayOfflinePayQueryInfoPath;
+ (id)getWCPayOfflinePayOfflineGetMsgConfigPath;
+ (id)getWCPayOfflinePayOrderIdStatePath;
+ (id)getWCPayOfflinePayUserUinPath;
+ (id)getWCPayOfflinePayFreezeInfoPath;
+ (id)getWCPayOfflinePayDeviceIDPath;
+ (id)getWCPayPayManageLabelPath;
+ (id)getWCPayUserPrivacyInfoPath;
+ (id)getWCPayOfflinePayTsmCertRootPath;
+ (id)getWCPayOfflinePayCrtPath;
+ (id)getWCPayAvalibleCardBinInfoPath;
+ (id)getWCPayAllScenePayCardListPath;
+ (id)getWCPayPayCardListPath;
+ (id)getWCPaySettingPath;
+ (void)scanPassportCopyFileFromMMResouceMgrCacheWithSubResType:(unsigned int)arg1;
+ (id)getWCPayScanPassportModelPath;
+ (id)getWCPayVisionModelDir;
+ (id)getWCBizImgCachedPath:(id)arg1;
+ (_Bool)isBindCardInfoFull:(id)arg1;
+ (double)getFooterTipViewHeight:(id)arg1;
+ (id)getStringFromBindCardInfo:(id)arg1;
+ (id)getCardTypeName:(id)arg1;
+ (_Bool)isShouldShowSetPasswordTipsView:(id)arg1;
+ (_Bool)IsWCGroupPayAppServiceInPlane:(id)arg1;
+ (_Bool)IsWCRedEnvelopesAppServiceInPlane:(id)arg1;
+ (_Bool)IsWCPayTransferAppServiceInPlane:(id)arg1;
+ (unsigned char)GetWCPayVersion;

@end
