//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveCommonUtil : NSObject
{
}

+ (long long)getAudioRoute;
+ (_Bool)isIdentityPrivacySettingEnabled;
+ (_Bool)disableShowMysteriousAudienceInfo;
+ (long long)currentJoinLiveVisibleInfoSwitchType;
+ (_Bool)isValidAudioRoomSceneValue:(unsigned long long)arg1;
+ (id)getGenderFromContact:(id)arg1;
+ (id)getLocationFromContact:(id)arg1;
+ (_Bool)enableMoreLiveCardShowTitle;
+ (_Bool)enableChatCardShowTitle;
+ (_Bool)enableMomentsCardShowTitle;
+ (unsigned long long)LiveCardShowTitleOptions;
+ (id)secureNormalizedRelativePath:(id)arg1 toAbsolutePath:(id)arg2;
+ (_Bool)checkIsPIPSpecialSystemPlatform;
+ (_Bool)isDeviceArm64;
+ (id)getIdentityPrivacyJumpUrlWithEnablePackEntrance:(_Bool)arg1 rightsUrl:(id)arg2 liveTask:(id)arg3;
+ (id)getLiveMysteriousIdentityDesc;
+ (_Bool)isIPV6Address:(id)arg1;
+ (_Bool)isValidIPAddress:(id)arg1;
+ (_Bool)isIPUrl:(id)arg1;
+ (id)getImageWithPath:(id)arg1 ext:(id)arg2 targetSize:(struct CGSize)arg3;
+ (id)buildDataItemFromLiveExportObect:(id)arg1;
+ (id)createImageFromBuffer:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
+ (_Bool)hasBizInfoForVM:(id)arg1;
+ (void)removeBlackUser:(id)arg1 forAnchor:(id)arg2;
+ (void)setBlackUser:(id)arg1 forAnchor:(id)arg2;
+ (_Bool)isBlackUser:(id)arg1 forAnchor:(id)arg2;
+ (_Bool)isLiveHDRSupported;
+ (_Bool)isString:(id)arg1 equalToOther:(id)arg2;
+ (unsigned int)getLiveRequestSceneWith:(id)arg1;
+ (void)drawBottomCornerForCell:(id)arg1 tableView:(id)arg2;
+ (void)drawTopCornerForCell:(id)arg1 tableView:(id)arg2;
+ (void)requestIsLiveMemberForAnchor:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (_Bool)isPureInteger:(id)arg1;
+ (unsigned long long)getCurrentImpactFeedBackTimes;
+ (id)urlAppending:(id)arg1 appendingStr:(id)arg2;
+ (void)configButtonRightArrowImageStyle:(id)arg1 arrowImage:(id)arg2 padding:(double)arg3;
+ (id)setBigRedDotForView:(id)arg1;
+ (id)configSmallRedDotForView:(id)arg1 bigRedDotStyle:(_Bool)arg2;
+ (id)commonConfigRedDotForView:(id)arg1 showInfo:(id)arg2 bigRedDotStyle:(_Bool)arg3;
+ (id)configSmallRedDotForView:(id)arg1;
+ (id)commonConfigRedDotForView:(id)arg1 showInfo:(id)arg2;
+ (id)gaussianBlurredImageOf:(id)arg1 withBlurRadius:(double)arg2 cropExcess:(_Bool)arg3;
+ (id)gaussianBlurredImageOf:(id)arg1;
+ (_Bool)readPixelRGBValue:(int)arg1 col:(int)arg2 pixelbuffer:(struct __CVBuffer *)arg3 RValue:(int *)arg4 GValue:(int *)arg5 BValue:(int *)arg6;
+ (_Bool)readPixelYUVValue:(int)arg1 col:(int)arg2 pixelbuffer:(struct __CVBuffer *)arg3 YValue:(int *)arg4 UValue:(int *)arg5 VValue:(int *)arg6;
+ (id)getUxInfoFromAdData:(id)arg1;
+ (_Bool)isNewDevice;
+ (id)octreeColor:(id)arg1 processor:(CDUnknownBlockType)arg2;
+ (id)octreeColor:(id)arg1;
+ (_Bool)isSize:(struct CGSize)arg1 similiarEqualSize:(struct CGSize)arg2;
+ (_Bool)isRect:(struct CGRect)arg1 similiarEqualRect:(struct CGRect)arg2;
+ (_Bool)isFloatNum:(double)arg1 similiarEqualFloatNum:(double)arg2;
+ (id)convertTimeToDisplayResult:(unsigned long long)arg1 format:(long long)arg2;
+ (_Bool)forceRotateToOrientation:(long long)arg1;
+ (long long)lastDeviceOrientation;
+ (long long)currentDeviceOrientation;
+ (void)monitorViewAnimationPerf:(id)arg1 atLayer:(id)arg2;
+ (void)monitorViewAnimationPerf:(id)arg1;
+ (struct __CVBuffer *)convertPixelBufferFromY420ToNV12:(struct __CVBuffer *)arg1;
+ (id)createVideoZoomGuideView;
+ (id)rewardGiftCrashProtectKey:(id)arg1 fileMD5:(id)arg2;
+ (unsigned long long)validateFilesIntegrityInDirectory:(id)arg1 withManifest:(id)arg2 forEachFileAction:(CDUnknownBlockType)arg3;
+ (unsigned long long)validateFilesIntegrityInDirectory:(id)arg1 withManifest:(id)arg2;
+ (unsigned long long)feedStreamTypeEnterFromProfileVC:(id)arg1;
+ (id)finderStreamFeedCellInVC:(id)arg1;
+ (double)getContentWidth:(id)arg1 font:(id)arg2;
+ (id)getAdaptedDisplayStr:(id)arg1 font:(id)arg2 inMaxWidth:(double)arg3;
+ (_Bool)isOrientationMaskOnlySupportPortrait:(unsigned long long)arg1;
+ (_Bool)isOrientationMaskOnlySupportLandscape:(unsigned long long)arg1;
+ (long long)transferToOrientationFromOrientationMask:(unsigned long long)arg1;
+ (unsigned long long)transferToOrientationMaskFromOrientation:(long long)arg1;
+ (_Bool)needCustomFixOrientation;
+ (unsigned long long)finderLiveImagePickerSceneFromImagePicker:(id)arg1;
+ (id)makeFinderLiveAdReport;
+ (unsigned long long)liveVideoDisplaySceneWithSize:(struct CGSize)arg1;
+ (id)generateFinderLiveBadgeInfoArrayFrom:(id)arg1;
+ (id)genContactDisplayName:(id)arg1 truncateByLen:(long long)arg2 appendTailText:(id)arg3;
+ (id)GenCircleButtonImage:(id)arg1 imageSize:(struct CGSize)arg2 color:(id)arg3 size:(struct CGSize)arg4 backgroundColor:(id)arg5;
+ (id)GenCircleButtonImage:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3 backgroundColor:(id)arg4;
+ (id)GenCircleButtonImage:(id)arg1 color:(id)arg2 backgroundColor:(id)arg3;
+ (id)getFinderLiveBaseClientStatus;
+ (id)getUrlHashForKey:(id)arg1;
+ (unsigned int)currentCRC32Data:(id)arg1;
+ (id)chatroomDescriptionOfContact:(id)arg1;
+ (void)stopGCDTimer:(id)arg1;
+ (id)startGCDTimerWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (_Bool)loadFontData:(id)arg1;
+ (struct __CVBuffer *)createEmptyPixelBufferWithSize:(struct CGSize)arg1 formatType:(unsigned int)arg2;
+ (void)getImageFromView:(id)arg1 asynchronously:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)getImageFromView:(id)arg1;
+ (unsigned long long)safeRemain:(unsigned long long)arg1 divisor:(unsigned long long)arg2 defaultRes:(unsigned long long)arg3;
+ (double)safePercent:(double)arg1 divisor:(double)arg2 defaultRes:(double)arg3;
+ (_Bool)isSupportPictureInPictureForMinimizeWindow:(id)arg1;
+ (_Bool)isSupportPictureInPictureInLive:(id)arg1;
+ (_Bool)isAudioMicFromAudience:(id)arg1;
+ (_Bool)isAudioMicFromOtherAnchor:(id)arg1;
+ (_Bool)isConnectMicFromOtherAudience:(id)arg1;
+ (_Bool)isAudioMicFromOtherAudience:(id)arg1;
+ (_Bool)isVideoMicFromOtherAudience:(id)arg1;
+ (void)setFinderLiveSettingSwitch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(_Bool)arg3 sync:(_Bool)arg4;
+ (_Bool)isLiveShouldSupportMultiScene;
+ (_Bool)isPortraitLayoutStyleForLayoutSize:(struct CGSize)arg1;
+ (_Bool)isLandscapeLayoutStyleForView:(id)arg1;
+ (_Bool)isPortraitLayoutStyleForView:(id)arg1;
+ (_Bool)checkMonoServiceInterruptForLiveRecoverWithToast:(_Bool)arg1 inScene:(unsigned long long)arg2;
+ (double)getFitContentWidthForHalfScreenIpadStyle:(double)arg1;
+ (id)getDisplayedCdnStreamListWithDict:(id)arg1 andQualityTagList:(id)arg2;
+ (id)getCdnStreamInfoFromDict:(id)arg1 withQualityTag:(unsigned int)arg2 isTryViewLive:(_Bool)arg3;
+ (_Bool)isDisplayedStreamForCdnTransInfo:(id)arg1;
+ (void)updateCdnStreamInfoDict:(id)arg1 displayedQualityTagList:(id)arg2 allQualityTagList:(id)arg3 audioModeStreamInfoList:(id)arg4 withLiveSdkChannelParams:(id)arg5;
+ (id)getCdnStreamInfoAndUpdateDict:(id)arg1 withKey:(id)arg2 andUrl:(id)arg3;
+ (id)getCdnStreamInfoAndUpdateDict:(id)arg1 withKey:(id)arg2 cdnTransInfo:(id)arg3 andQualityTagItem:(id)arg4;
+ (void)clearRecentClarityChooseFromCacheWithLiveId:(unsigned long long)arg1;
+ (id)getRecentClarityChooseFromCacheWithLiveId:(unsigned long long)arg1;
+ (double)dynamicFontScale;
+ (id)getFinderLiveCdnUrlWithLiveSdkParamsData:(id)arg1 clarityCacheInfo:(id)arg2 andStreamUrl:(id)arg3 liveId:(unsigned long long)arg4 withoutLogin:(_Bool)arg5 liveTask:(id)arg6;
+ (id)getFinderLiveCdnUrlWithLiveSdkParamsData:(id)arg1 clarityCacheInfo:(id)arg2 andStreamUrl:(id)arg3 liveId:(unsigned long long)arg4 withoutLogin:(_Bool)arg5;
+ (id)getFinderLiveCdnUrlWithLiveTask:(id)arg1;
+ (long long)getStreamTypeFrom:(id)arg1;
+ (id)generateLebPlayUrl:(id)arg1;
+ (id)appendUrlWithCacheParam:(id)arg1 cache:(unsigned long long)arg2 useSDK:(_Bool)arg3;
+ (_Bool)isFinderLiveSupportPreviewCdnPlay;
+ (_Bool)isSupportHWHevcEnc;
+ (_Bool)isSupportHWHevcDec;
+ (_Bool)isViewController:(id)arg1 inSameSceneWithAnotherViewController:(id)arg2;
+ (_Bool)needInteruptLiveForIPadSplitViewInNewSize:(struct CGSize)arg1 forLive:(id)arg2;
+ (_Bool)needInteruptLiveForIPadMultiAppSplitViewModeNowForLive:(id)arg1;
+ (_Bool)isLiveOpenInValidModeFromNavigationController:(id)arg1;
+ (id)getMainWindowInScene:(unsigned long long)arg1;
+ (_Bool)isViewControllerRuningInWATransparentMode:(id)arg1;
+ (_Bool)isViewControllerRuningInWASheetMode:(id)arg1;
+ (_Bool)isWAWebViewControllerRunningInRealWASheetMode:(id)arg1;
+ (id)getStreamIDFromStreamUrl:(id)arg1;
+ (struct CGRect)windowBounds;
+ (double)windowHeight;
+ (double)windowWidth;
+ (double)portraitWindowWidthInPhone;
+ (_Bool)isLowPowerModeEnabled;
+ (long long)getCurrentThermalState;
+ (id)getCurrentSelfUsrNameForTaskId:(id)arg1 forceWechatRole:(_Bool)arg2;
+ (id)getSubComposedCharacterString:(id)arg1 toIndex:(long long)arg2;
+ (unsigned long long)characterLengthOfComposedCharacter:(id)arg1;
+ (unsigned long long)getComposedCharacterLength:(id)arg1;
+ (void)unembedChildViewController:(id)arg1;
+ (void)embedSubviewFromChildViewController:(id)arg1 toParentViewController:(id)arg2;
+ (void)updateBadgeInfosInFinderLiveContact:(id)arg1 byLiveTask:(id)arg2;
+ (id)getFansGroupNameFromBadgeInfo:(id)arg1 forLiveTask:(id)arg2;
+ (_Bool)hasAnyRewardBadgeInfoFromBadgeInfos:(id)arg1;
+ (unsigned long long)getRoleTypeFromBadgeInfos:(id)arg1;
+ (_Bool)hasValidMysteriousBadgeInfo:(id)arg1;
+ (id)getMysteriousBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getFrequentWatchBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getFollowerBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getSeniorBuyerBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getOrdinaryBuyerBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getBuyCountBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getBuyBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getInvisiableBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getAnonymousBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getRoleBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getSuperFansGroupBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getFansGroupBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getGameEsportBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getGameRankBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getGloryBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getGlobalRewardBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)getRewardBadgeInfoFromBadgeInfos:(id)arg1;
+ (id)createTagInfoFromTagInfoDict:(id)arg1;
+ (_Bool)isSameAudioRoomSEIConnectMicMsg:(id)arg1 oldSeiMicMsg:(id)arg2;
+ (id)parseAudioRoomSEIConnectMicMsgFromJSON:(id)arg1;
+ (_Bool)isSameSEIMsgConnectMicUserInfoList:(id)arg1 otherSeiMicUserInfoList:(id)arg2;
+ (_Bool)isSameSEIHoleRectConnectMicMsg:(id)arg1 oldSeiConnectMicMsg:(id)arg2;
+ (_Bool)isSameSEIConnectMicMsg:(id)arg1 oldSeiConnectMicMsg:(id)arg2;
+ (id)parseSEIFreeMicUsersListFromJSON:(id)arg1;
+ (id)parseSEIConnectMicMsgFromJSON:(id)arg1;
+ (_Bool)isIndentityValid:(unsigned int)arg1;
+ (_Bool)isGoodsTipsOrientationDown;
+ (_Bool)isNarrowScreenWidth;
+ (id)getJoinGameTeamJump3rdAppAlertMessage:(unsigned int)arg1 appName:(id)arg2;
+ (id)getJoinGameTeamJump3rdAppNotTeamUpAlertMessage:(unsigned int)arg1 appName:(id)arg2;
+ (id)getJoinGameTeamModeName:(unsigned int)arg1;
+ (_Bool)isRiskAccountWithUserFlag:(unsigned int)arg1;
+ (id)createCurrentAccountDisplayNameWithLiveTask:(id)arg1 maxLength:(unsigned long long)arg2 forceWechatRole:(_Bool)arg3;
+ (id)createCurrentAccountDisplayNameWithLiveTask:(id)arg1 maxLength:(unsigned long long)arg2;
+ (id)connectMicConditionTitleForType:(unsigned long long)arg1;
+ (unsigned long long)getConnectMicConditionTypeFromMicSettingFlag:(unsigned long long)arg1;
+ (struct CGRect)rectWithNormalizedFrame:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
+ (struct CGRect)normalizedFrameOfRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
+ (struct CGRect)evenRoundNormalizedFrame:(struct CGRect)arg1 withAbsoluteSize:(struct CGSize)arg2;
+ (struct CGRect)convertNormalizedFrame:(struct CGRect)arg1 fromAspectRatio:(double)arg2 toFittingAspectRatio:(double)arg3;
+ (struct CGRect)convertNormalizedFrame:(struct CGRect)arg1 fromAspectRatio:(double)arg2 toFillingAspectRatio:(double)arg3;
+ (struct CGRect)viewFrameForConnectMicUserWithNormalizedFrame:(struct CGRect)arg1 totalSize:(struct CGSize)arg2;
+ (struct CGRect)viewFrameForCrossRoomPkUserAtIndex:(unsigned long long)arg1 totalSize:(struct CGSize)arg2 isInOtherRoom:(_Bool)arg3;
+ (struct CGRect)viewFrameForAudienceTeamupPkUserAtIndex:(unsigned long long)arg1 totalSize:(struct CGSize)arg2;
+ (struct CGRect)viewFrameForConnectMicUnfocusedUserAtSlot:(unsigned long long)arg1 withLayoutInfo:(CDStruct_a6fa95e6)arg2;
+ (struct CGRect)viewFrameForConnectMicUserAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 totalSize:(struct CGSize)arg3 micLayoutMode:(unsigned long long)arg4;
+ (struct CGRect)viewFrameForConnectMicUserAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 totalSize:(struct CGSize)arg3;
+ (_Bool)isLiveLocation:(id)arg1 equal:(id)arg2;
+ (_Bool)isLocationOnlyCityInfo:(id)arg1;
+ (id)getShowAddressCityWithWCLocationInfo:(id)arg1;
+ (id)getShowAddressWithWCLocationInfo:(id)arg1;
+ (id)getShowCityWithWCLocationInfo:(id)arg1;
+ (id)getFinderLocationWithLocationItem:(id)arg1;
+ (id)createWCLocationInfoWithFinderLocation:(id)arg1;
+ (id)createFinderLocationWithWCLocationInfo:(id)arg1;
+ (id)getRegionForFinderContact:(id)arg1;
+ (id)getTopVCInMainScene:(_Bool)arg1;
+ (id)getTopVCInMainWindow;
+ (unsigned long long)getWordCountWithEmojForStr:(id)arg1;
+ (id)calString:(id)arg1 maxCommentCount:(unsigned long long)arg2;
+ (id)genShortHourTime:(unsigned int)arg1;
+ (id)genHourTime:(unsigned int)arg1;
+ (id)genLiveLocalizedShowTimeSimple:(unsigned int)arg1 forceShowYear:(_Bool)arg2;
+ (id)genLiveLocalizedShowTimeSimple:(unsigned int)arg1;
+ (id)genHistoryLiveLocalizedShowTime:(unsigned int)arg1;
+ (id)generateLotteryPrivacyString:(id)arg1;
+ (id)getPlatformShopIconPaddingImage;
+ (id)getPlatformShopIcon:(id)arg1;
+ (id)localizedPriceStringWithIntegerNumber:(unsigned long long)arg1;
+ (id)localizedNumberStringWithIntegerNumber:(unsigned long long)arg1;
+ (id)localizedHeatNumberStringWithIntegerNumber:(unsigned long long)arg1;
+ (id)buildSceneNote:(id)arg1 shopContext:(id)arg2 sessionId:(id)arg3 clickId:(id)arg4;
+ (id)appendExtraQueryWithBaseUrl:(id)arg1 extraQuery:(id)arg2;
+ (id)removeHtmlAnchorSuffix:(id)arg1;
+ (id)getFullHtmlSuffixRelativeURL:(id)arg1;
+ (id)getWatchLiveTimeLength:(unsigned long long)arg1;
+ (id)localizeStringForDuration:(double)arg1;
+ (id)getDisplayLiveLength:(unsigned int)arg1;
+ (void)increaseImpacyFeedBackTimes;
+ (void)lightShock;
+ (void)heavyShock;
+ (struct CGSize)liveSmallVideoViewSizeWithScreenView:(id)arg1;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andLiveTask:(id)arg2;
+ (id)blurBackgroundViewWithFrame:(struct CGRect)arg1 andContentView:(id)arg2 blurColor:(id)arg3;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andFinderDataItem:(id)arg2 blurColor:(id)arg3;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andLiveTask:(id)arg2 blurColor:(id)arg3;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 blurColor:(id)arg3;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andFinderUserName:(id)arg2 blurColor:(id)arg3;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andFinderUserName:(id)arg2;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andUserName:(id)arg2;
+ (void)updateBlurBackgroundView:(id)arg1 adLiveCoverUrl:(id)arg2 imageDelegate:(id)arg3 isAdvertisement:(_Bool)arg4;
+ (_Bool)updateBlurBackgroundView:(id)arg1 taskId:(id)arg2 imageDelegate:(id)arg3;
+ (id)liveBlurBackgroundViewWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 imageDelegate:(id)arg3;
+ (id)getBackgroundImageUrlWithTaskId:(id)arg1;
+ (_Bool)isSmallestSizeDevice;
+ (_Bool)isSpecialSmallSizeDevice;
+ (double)liveCommonPanelNavHeight;
+ (double)liveCommonPanelDetailHeightWithTotalHeight:(double)arg1;
+ (double)liveCommonPanelWidthWithTotalWidth:(double)arg1;
+ (double)liveCommonPanelTopMarginWithTotalHeight:(double)arg1;
+ (double)liveSafeAreaBottomMarginWithView:(id)arg1;
+ (double)liveSafeAreaTopMarginWithView:(id)arg1;
+ (double)liveSafeAreaRightMarginWithView:(id)arg1;
+ (double)liveSafeAreaLeftMarginWithView:(id)arg1;
+ (struct UIEdgeInsets)getLiveRealSafeAreaInsets:(id)arg1;
+ (id)getDefinedValueArray:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1;
+ (id)getMd5WithData:(id)arg1;
+ (unsigned long long)liveTidUInt64Value:(id)arg1;
+ (double)liveAdpatedValue:(id)arg1;
+ (double)getAdaptedValue:(id)arg1 hasDefined:(_Bool *)arg2 device:(_Bool)arg3;
+ (id)getAdaptedValueNameForDevice:(id)arg1 device:(_Bool)arg2;
+ (double)liveValue:(id)arg1;
+ (unsigned long long)currentDeviceOritation;
+ (_Bool)isCurrentOrientationPortrait;
+ (long long)getLiveUIOrientation;
+ (long long)currentInterfaceOrientation;
+ (void)checkSearchDataItemsAdded:(id)arg1;
+ (void)createShadowEffectForView:(id)arg1 withAlpha:(double)arg2;
+ (void)createShadowEffectForView:(id)arg1;
+ (id)getLiveBackgroundImageByUserName:(id)arg1;
+ (id)getContactByUserName:(id)arg1;
+ (id)getDisplayNameForUser:(id)arg1 inChatRoom:(id)arg2;
+ (id)getDisplayNameByUserName:(id)arg1 andRoomUserName:(id)arg2;
+ (_Bool)commonCreateLivePrepareFailHandle:(id)arg1;
+ (void)didDeviceOrientationChanged:(id)arg1;
+ (_Bool)notifyUpdateCurrentOrientationIfNeeded;
+ (void)willStatusBarOrientationChanged:(id)arg1;
+ (void)initialize;

@end

