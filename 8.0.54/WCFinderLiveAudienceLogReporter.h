//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface WCFinderLiveAudienceLogReporter
{
    _Bool m_isQuit;
    unsigned int m_commentsCount;
    unsigned int m_replyCount;
    unsigned int m_clickCount;
    unsigned int m_pressCount;
    unsigned int m_emojiCount;
    NSMutableArray *m_goodsClickData;
    unsigned int m_complainAnchorCount;
    unsigned int m_complainAudienceCount;
    unsigned int m_profileCount;
    unsigned int m_clearCount;
    unsigned int m_commentDisableCount;
    _Bool m_isEnterFollow;
    _Bool m_isExitFollow;
    _Bool m_isShopExp;
    _Bool m_isClickLandscape;
    long long m_curOrientation;
    unsigned int m_clickToLandscapeCount;
    unsigned int m_rotateToLandscapeCount;
    unsigned int m_clickToPortraitCount;
    unsigned int m_rotateToPortraitCount;
    unsigned int m_lotteryCount;
    unsigned int m_giftCount;
    _Bool m_isEnterButCoin;
    unsigned int m_tryToConnectCount;
    unsigned int m_connectSuccessCount;
    NSMutableString *m_connectDuration;
    unsigned long long m_connectStartTime;
    _Bool m_isConnecting;
    unsigned long long m_shareTextStateCount;
    unsigned long long redPacketSource;
    NSString *m_shareId;
    NSMutableDictionary *_switchExtraDic;
}

+ (unsigned long long)fromTypeForReport:(unsigned long long)arg1;
+ (void)reportOuterAudienceAction:(unsigned long long)arg1 dataItem:(id)arg2 commentScene:(id)arg3 enterSessionId:(unsigned long long)arg4 enterIconType:(long long)arg5 sessionBuffer:(id)arg6 adData:(id)arg7 channelExtra:(id)arg8;
+ (void)InsertBaseData:(id)arg1 logId:(int)arg2;
+ (void)Reoport:(id)arg1 logId:(int)arg2;
+ (id)reporterByTaskID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *switchExtraDic; // @synthesize switchExtraDic=_switchExtraDic;
- (void)reportStartChangeClarityWithQualityLevel:(unsigned long long)arg1 fromScene:(unsigned long long)arg2;
- (void)reportAudienceGiftWallActionWithParams:(id)arg1;
- (void)reportAudienceGiftWallAction:(unsigned long long)arg1;
- (void)reportAudienceIdentityPrivacyEntranceClick:(unsigned int)arg1;
- (void)reportAudienceIdentityPrivacyEntranceExpose:(unsigned int)arg1;
- (void)reportAudienceConnectMicLocationResultAction:(_Bool)arg1 isDefault:(_Bool)arg2;
- (void)reportAudienceConnectMicLocationAuthAction:(_Bool)arg1 isSystemAuth:(_Bool)arg2;
- (void)reportAudienceConnectMicLocationGuideAction:(unsigned long long)arg1 isPageSheet:(_Bool)arg2 showLocation:(_Bool)arg3;
- (void)reportAudienceQuitLiveNavAction:(long long)arg1;
- (void)reportAudienceLocalAudioModeAction:(unsigned long long)arg1 subType:(unsigned long long)arg2;
- (id)getScreenTypeForReport;
- (void)reportAudienceBusinessActionType:(unsigned long long)arg1 params:(id)arg2;
- (void)onEligibilityEntranceActionType:(int)arg1 reportInfo:(id)arg2;
- (void)onReportLiveGloryAction:(unsigned long long)arg1 listOrder:(int)arg2 username:(id)arg3 userIdentity:(int)arg4 clickSoure:(id)arg5;
- (void)onReportLivePromoteTipsPubbleAction:(int)arg1 pubblePosition:(int)arg2;
- (void)onReportLiveAudienceFollowSheetAction:(unsigned long long)arg1 params:(id)arg2;
- (void)onReportLiveAudienceLiveStarterScrollActionSheetOperation:(id)arg1;
- (void)onNotifyBanner:(id)arg1 didAction:(unsigned long long)arg2 displayAsReward:(_Bool)arg3;
- (void)onInteractiveHomePageAction:(unsigned long long)arg1 pressedLiveID:(unsigned long long)arg2;
- (void)onLiveGiftPackageOperationReport:(unsigned long long)arg1;
- (void)onLiveRewardQuotaOperationReport:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)onLiveRewardQuotaOperationReport:(unsigned long long)arg1;
- (void)reportVoteActionType:(unsigned long long)arg1 voteId:(id)arg2 extraInfo:(id)arg3;
- (void)reportVoteActionType:(unsigned long long)arg1 voteId:(id)arg2;
- (void)reportAdVideo:(unsigned long long)arg1 advertiseType:(unsigned long long)arg2 advertiseId:(id)arg3 watchDuration:(double)arg4;
- (void)reportScreenshotPosterAction:(unsigned long long)arg1 actionResultDictionary:(id)arg2;
- (void)reportReplayStopgapAction:(unsigned long long)arg1 elapsedTime:(unsigned long long)arg2;
- (void)reportAudienceRedDotWithDict:(id)arg1;
- (void)reportAudienceMilestoneLotteryAction:(unsigned long long)arg1 lotteryId:(id)arg2 noticeId:(id)arg3 customDict:(id)arg4;
- (void)reportAudienceMilestoneLotteryAction:(unsigned long long)arg1 lotteryId:(id)arg2 noticeId:(id)arg3;
- (void)reportClickEndPageToAnchorPage:(id)arg1 eid:(id)arg2;
- (void)reportClickEndPageToAnchorPage:(id)arg1 eid:(id)arg2 commentscene:(id)arg3;
- (void)reportClickEndReplayToAnchorPage:(id)arg1 eid:(id)arg2 commentscene:(id)arg3 eldDictionary:(id)arg4;
- (void)reportClickEndPageFeedCard:(id)arg1;
- (void)reportClickEndPageNewLiveButton:(unsigned long long)arg1;
- (void)reportClickEndPageLiveItem:(unsigned long long)arg1;
- (void)reportClickEndPageLiveCard:(unsigned long long)arg1;
- (void)reportExposeEndPageNewLiveContainer:(unsigned long long)arg1;
- (void)reportExposeEndPageToAnchorPage:(id)arg1 eid:(id)arg2;
- (void)reportExposeEndPageToAnchorPage:(id)arg1 eid:(id)arg2 commentscene:(id)arg3;
- (void)reportExposeEndPageFeedCard:(id)arg1;
- (void)reportExposeEndPageLiveItem:(unsigned long long)arg1;
- (void)reportExposeEndPageLiveCard:(unsigned long long)arg1;
- (void)reportExposeEndPageLiveReplay:(id)arg1 refObjectid:(unsigned long long)arg2;
- (void)reportBoxPageSheetShareButtonClicked;
- (void)reportBoxShareButtonExpose;
- (void)reportLivePurchaseEvent:(unsigned long long)arg1 atTimeInMillisecond:(unsigned long long)arg2;
- (void)reportLiveScrollActionSheetActionForiPadWatchLiveWithoutLog:(unsigned long long)arg1;
- (void)onClickedOlympicSetTextStateButtonDataItem:(id)arg1 joinSence:(unsigned long long)arg2 isGetCertificate:(_Bool)arg3 relaySenceTpe:(unsigned long long)arg4 finderUsername:(id)arg5;
- (void)onClickedOlympicShareButtonDataItem:(id)arg1 joinSence:(unsigned long long)arg2 isGetCertificate:(_Bool)arg3 relaySenceTpe:(unsigned long long)arg4 finderUsername:(id)arg5;
- (void)onClickedRelayButtonDataItem:(id)arg1 joinSence:(unsigned long long)arg2 isGetCertificate:(_Bool)arg3 relaySenceTpe:(unsigned long long)arg4 finderUsername:(id)arg5;
- (void)onLiveWishBannerClickedWithWishListId:(id)arg1 isGiftWall:(_Bool)arg2;
- (void)onLiveClickLotteryDetail:(id)arg1 eduDict:(id)arg2;
- (void)onLiveShowLotteryDetail:(id)arg1 eduDict:(id)arg2;
- (void)onLiveWishBannerShowWithWishListId:(id)arg1 isGiftWall:(_Bool)arg2;
- (void)onMemberShipGuideConfirmButtonClick;
- (void)onPreviewRelatedDataItemsClickedWithViewModel:(id)arg1 dataItem:(id)arg2 indexInSpecialList:(unsigned long long)arg3;
- (void)onMinifyRoomBannerClickedWithViewModel:(id)arg1;
- (void)onExposeInvitedCardButtonDataItem:(id)arg1 joinSence:(unsigned long long)arg2 isGetCertificate:(unsigned long long)arg3 relaySence:(unsigned long long)arg4;
- (void)onPreviewRelatedLivesShowWithViewModel:(id)arg1 dataItem:(id)arg2 cardExpType:(unsigned long long)arg3 indexInSpecialList:(unsigned long long)arg4;
- (void)onLiveMinifyBannerShowWithViewModel:(id)arg1;
- (id)dictionaryOf:(id)arg1;
- (void)reportPreviewRelatedAudienceLiveResultWithViewModel:(id)arg1;
- (void)onPreviewRelatedStatusChangedWithType:(unsigned long long)arg1 operation:(unsigned long long)arg2 specialViewModel:(id)arg3;
- (void)reportPreviewRelatedEnterLive:(id)arg1 WithCommentScene:(id)arg2 specialViewModel:(id)arg3;
- (void)reportAudienceShowGameWelfareAction:(unsigned long long)arg1 extInfo:(id)arg2 uiType:(int)arg3;
- (void)reportAudienceShowScrollEducationAction:(unsigned long long)arg1 eventRes:(unsigned long long)arg2;
- (void)reportForLiveSettingButtonClick:(id)arg1 extra:(id)arg2;
- (void)reportForLiveSettingButtonExpose:(id)arg1;
- (void)reportAudienceCommonMinimizeWindowAction:(id)arg1;
- (void)reportAudienceMinimizeWindowAction:(id)arg1;
- (void)reportAudienceCommonPictureInPictureAction:(id)arg1;
- (void)reportAudiencePictureInPictureAction:(id)arg1;
- (void)reportAudiencePromoteAction:(long long)arg1 actionType:(long long)arg2 extra:(id)arg3;
- (void)reportAudienceFansGroupAction:(unsigned long long)arg1 joinState:(unsigned long long)arg2 actionFromSrc:(unsigned long long)arg3;
- (void)reportDropGiftAction:(unsigned long long)arg1 giftId:(id)arg2;
- (void)reportWeAvataRenderedAcation:(unsigned long long)arg1;
- (unsigned long long)transferToAudienceActionTypeFromAtAction:(unsigned long long)arg1;
- (void)addBannerExtReportDataTo:(id)arg1 with:(id)arg2;
- (void)reportBannerAction:(unsigned long long)arg1 bannerId:(id)arg2 bannerInfo:(id)arg3;
- (void)reportBannerAction:(unsigned long long)arg1 bannerId:(id)arg2;
- (void)reportAssistantMoreAction:(unsigned long long)arg1 topicText:(id)arg2;
- (void)reportAssistantShopAction:(unsigned long long)arg1 actionClickType:(unsigned long long)arg2 clickIndex:(unsigned long long)arg3;
- (void)reportAssistantLotteryAction:(unsigned long long)arg1;
- (void)reportCommentSendLocationAction:(unsigned long long)arg1 actionResult:(id)arg2;
- (void)reportAudienceCommentAction:(unsigned long long)arg1 jsonDict:(id)arg2;
- (void)reportAudienceCommentAction:(unsigned long long)arg1;
- (void)reportCommentAtAction:(unsigned long long)arg1 actionResult:(id)arg2;
- (void)reportGameRankAction:(id)arg1;
- (void)reportJumpGameAction:(id)arg1;
- (void)reportHandoffAction:(unsigned long long)arg1;
- (void)reportBrandAction:(unsigned long long)arg1 bizUserName:(id)arg2;
- (void)reportPauseAction:(unsigned long long)arg1 accumulatedTime:(long long)arg2;
- (void)reportJoinTeamAction:(unsigned long long)arg1 extData:(id)arg2;
- (void)reportBGMusicAction:(long long)arg1;
- (void)reportAudienceLiveResult:(unsigned long long)arg1 withLiveTask:(id)arg2;
- (void)reportRedPacketAction:(unsigned long long)arg1 withSenderMicId:(id)arg2 extraInfoDict:(id)arg3;
- (void)reportMoreLiveExpose:(id)arg1;
- (void)reportMoreLiveClick:(id)arg1;
- (void)reportAudienceConnectMicSessionWithType:(unsigned long long)arg1 liveMode:(unsigned int)arg2 liveSubMode:(unsigned int)arg3 subSessionId:(id)arg4;
- (void)reportAudienceFreeMicAction:(unsigned long long)arg1 duration:(unsigned long long)arg2;
- (void)reportMicAction:(unsigned long long)arg1;
- (void)reportGiftAction:(unsigned long long)arg1 withGiftId:(id)arg2 withGiftCount:(unsigned int)arg3 extraActionResultDict:(id)arg4;
- (void)reportGiftAction:(unsigned long long)arg1 withGiftId:(id)arg2 withGiftCount:(unsigned int)arg3;
- (void)reportLotteryAction:(unsigned long long)arg1 withResult:(id)arg2 extraInfo:(id)arg3;
- (void)reportCommerceAction:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)reportCommerceAction:(unsigned long long)arg1 withSessionID:(id)arg2 withRequestID:(id)arg3 withProductIDStr:(id)arg4 withAdItem:(id)arg5 withPbAdItem:(id)arg6 withCouponID:(id)arg7 withCouponItem:(id)arg8 extraInfo:(id)arg9 reasonType:(unsigned long long)arg10;
- (void)reportCommerceAction:(unsigned long long)arg1 withSessionID:(id)arg2 withRequestID:(id)arg3 withProductID:(unsigned long long)arg4 withAdItem:(id)arg5 withPbAdItem:(id)arg6 withCouponID:(id)arg7 withCouponItem:(id)arg8 extraInfo:(id)arg9 reasonType:(unsigned long long)arg10;
- (void)reportCommerceAction:(unsigned long long)arg1 withSessionID:(id)arg2 withRequestID:(id)arg3 withProductID:(unsigned long long)arg4 withAdItem:(id)arg5 withPbAdItem:(id)arg6 withCouponID:(id)arg7 extraInfo:(id)arg8;
- (void)reportCommerceAction:(unsigned long long)arg1 withSessionID:(id)arg2 withRequestID:(id)arg3 withProductID:(unsigned long long)arg4 withAdItem:(id)arg5 withPbAdItem:(id)arg6 extraInfo:(id)arg7;
- (void)reportSwitchLandscape:(long long)arg1;
- (void)reportExposeLandscape;
- (void)reportAudienceFaceVerify:(unsigned long long)arg1;
- (void)reportSlideRoom:(id)arg1;
- (void)reportFinderLiveHideOpearation:(long long)arg1;
- (void)switchClarityWithLevel:(long long)arg1 newLevel:(long long)arg2;
- (void)reportQuitRoom:(unsigned long long)arg1 withLiveTask:(id)arg2;
- (void)reportQuitRoom:(unsigned long long)arg1;
- (void)reportCopyComment;
- (void)reportAirPlayAction:(unsigned long long)arg1;
- (void)reportBizLiveEnterProfile:(id)arg1;
- (void)reportEnterProfile;
- (id)getLastChatRoomContact:(id)arg1;
- (void)reportAudienceShare:(unsigned long long)arg1 withUsername:(id)arg2 isCertificateType:(_Bool)arg3;
- (id)genShareStructWith:(unsigned long long)arg1 withUsername:(id)arg2 isCertificateType:(_Bool)arg3;
- (void)reportAudienceShare:(unsigned long long)arg1 withUsername:(id)arg2;
- (void)reportAudienceMinizaion:(unsigned long long)arg1;
- (void)reportComplaintEntry;
- (void)reportCommentExpose:(id)arg1;
- (void)reportFinderLiveLike:(unsigned long long)arg1 isClipMode:(_Bool)arg2;
- (void)reportFinderLiveReply:(id)arg1;
- (void)reportFinderLiveCommentBoxAction:(id)arg1;
- (void)reportAudienceShareLiveGuideAction:(unsigned long long)arg1 position:(unsigned long long)arg2;
- (void)reportKTVAudioEffectOperatingPanelDismiss:(id)arg1;
- (void)reportKTVAudioEffectOperatingPanelExpose:(id)arg1;
- (void)reportKTVLeaveGuideAction:(unsigned long long)arg1 element:(unsigned long long)arg2 status:(unsigned long long)arg3 scene:(unsigned long long)arg4;
- (void)reportKTVRequestedSongPanelAction:(unsigned long long)arg1 element:(unsigned long long)arg2 tab:(unsigned long long)arg3 songItem:(id)arg4;
- (void)reportKTVRequestedSongEntryAction:(unsigned long long)arg1;
- (void)reportKTVRequestSongPanelAction:(unsigned long long)arg1 element:(unsigned long long)arg2 boardItem:(id)arg3 subBoardItem:(id)arg4 songItem:(id)arg5;
- (void)reportKTVRequestSongPanelEntryAction:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (void)reportFinderLiveProductQuestionMsgAction:(id)arg1;
- (void)reportFinderLiveMessage:(id)arg1;
- (void)reportAction:(unsigned long long)arg1 actionResults:(id)arg2;
- (void)reportEnterLive:(id)arg1;
- (void)insertBaseDataForLiveAudienceAction:(id)arg1;
- (void)insertBaseData:(id)arg1 logId:(int)arg2;
- (void)report:(id)arg1 logId:(int)arg2;
- (void)onGiftWallActionAction:(unsigned long long)arg1 giftId:(id)arg2;
- (void)onPromotingBanberAction:(unsigned long long)arg1;
- (void)onAudienceFriendLikeAction:(unsigned long long)arg1 sendReason:(unsigned long long)arg2;
- (void)onReportLiveAudienceGiftGoalAction:(unsigned long long)arg1 goalId:(id)arg2 giftId:(id)arg3;
- (void)onScreenshotPosterAction:(unsigned long long)arg1 actionResultDictionary:(id)arg2;
- (void)onAudienceOpenUserProfileAction:(unsigned long long)arg1 withProfileScene:(unsigned long long)arg2 userIdentity:(unsigned long long)arg3 isCurrentMicUser:(_Bool)arg4 userIsAnchor:(_Bool)arg5 andUserName:(id)arg6;
- (void)reportAudienceVideoZoomAction:(unsigned long long)arg1 isClearScreen:(_Bool)arg2;
- (void)onAudienceVideoZoomAction:(unsigned long long)arg1 isClearScreen:(_Bool)arg2;
- (void)reportLandscapeClarityHeaderBtnClick;
- (void)reportLandscapeClarityHeaderBtnExpose;
- (void)reportCommentBoxChangeForLandscapeBarrageStart;
- (void)reportLandscapeBarrageSettingDisplayAlphaChange:(id)arg1;
- (void)reportLandscapeBarrageSettingDisplayRangeChange:(id)arg1;
- (void)reportLandscapeBarrageSettingEnableDisplayChange:(id)arg1;
- (void)reportLandscapeBarrageSettingEntranceClick;
- (void)reportLandscapeBarrageSettingEntranceExpose;
- (void)reportFloatBarrageUnLike:(unsigned int)arg1;
- (void)reportFloatBarrageComplain:(unsigned int)arg1;
- (void)reportFloatBarrageCopy:(unsigned int)arg1;
- (void)reportFloatBarrageReply:(unsigned int)arg1;
- (void)reportFloatBarrageLike:(unsigned int)arg1;
- (void)reportFloatBarragePostSuccess:(unsigned int)arg1 giftId:(id)arg2;
- (void)reportFloatBarrageEntranceExpose;
- (void)reportCommentHotWordsExpose:(id)arg1;
- (void)reportLiveRoomCommentAssistantOperation:(unsigned long long)arg1 alias:(unsigned long long)arg2;
- (id)buildCommonAudienceActionStruct;
- (void)reportAudienceSongAction:(unsigned long long)arg1 songName:(id)arg2 giftID:(id)arg3 giftCount:(id)arg4;
- (void)reportAudienceSongAction:(unsigned long long)arg1 songName:(id)arg2;
- (void)onLiveCommentBoxActionReport:(id)arg1;
- (void)onClickedOlympicBarragePubble:(id)arg1;
- (void)onChargeSuccessed;
- (void)onShowChargePanel;
- (void)onClickAgreementCancelButton;
- (void)onClickAgreementConfirmButton;
- (void)onClickConfirmChargeButton;
- (void)onLivePurchaseSucceededAtTimeInMillisecond:(unsigned long long)arg1;
- (void)onLivePurchaseInitiating;
- (void)onLivePurchaseButtonShow;
- (void)onLiveMinimizeButtonClick;
- (void)onLivePictureInPictureSwitchChange:(_Bool)arg1;
- (void)onLivePicSettingButtonClick;
- (void)onLiveMinimizeButtonExpose;
- (void)onLivePictureInPictureSwitchExpose;
- (void)onLivePicSettingButtonExpose;
- (void)onCommonMinimizeWindowActionReport:(id)arg1;
- (void)onMinimizeWindowActionReport:(id)arg1;
- (void)onCommonPictureInPictureActionReport:(id)arg1;
- (void)onPictureInPictureActionReport:(id)arg1;
- (void)onPromotePubbleClickGoTo:(long long)arg1 extra:(id)arg2;
- (void)onLiveAnchorNotificationInfoReport:(id)arg1;
- (void)onLiveTicketBusinessExpose:(id)arg1;
- (void)onLiveBusinessExpose:(id)arg1;
- (void)onPromotePubbleUnReserve:(long long)arg1 extra:(id)arg2;
- (void)onPromotePubbleReserve:(long long)arg1 extra:(id)arg2;
- (void)onPromotePubbleClose:(long long)arg1 extra:(id)arg2;
- (void)onPromotePubbleExpose:(long long)arg1 extra:(id)arg2;
- (void)onExposeLiveiPadWithouLogin;
- (void)onClickLiveiPadWithouLogin;
- (void)onClickGameWelfareCanReceived:(id)arg1 uiType:(int)arg2;
- (void)onClickGameWelfare:(id)arg1 uiType:(int)arg2;
- (void)onExposeGameWelfareCanReceived:(id)arg1 uiType:(int)arg2;
- (void)onExposeGameWelfare:(id)arg1 uiType:(int)arg2;
- (void)onScrollDownEducationAfterExposed;
- (void)onScrollUpEducationAfterExposed;
- (void)onExposeScrollDownEducation;
- (void)onExposeScrollUpEducation;
- (void)onReportAudienceFansGroupAction:(unsigned long long)arg1 joinState:(unsigned long long)arg2 actionFromSrc:(unsigned long long)arg3;
- (void)onFansGroupDetailPanelFansNoticeImageClicked;
- (void)onFansGroupDetailPanelFansNoticeExposed;
- (void)onFansGroupDetailPanelRightsTabExposed;
- (void)onOpenFansGroupMemberListPanel;
- (void)onOpenFansGroupDetailPanel:(unsigned long long)arg1;
- (void)onOpenFansGroupDetailPage:(unsigned long long)arg1;
- (void)onJoinGroupPayButtonClick:(unsigned long long)arg1;
- (void)onJoinGroupPayPanelExpose:(unsigned long long)arg1;
- (void)onJoinFansGroupButtonClick:(_Bool)arg1 fromType:(unsigned long long)arg2;
- (void)onJoinFansGroupPanelExpose:(_Bool)arg1 fromType:(unsigned long long)arg2;
- (void)onFollowAndJoinFansGroupButtonClick:(_Bool)arg1 fromType:(unsigned long long)arg2;
- (void)onFollowAndJoinFansGroupPanelExpose:(_Bool)arg1 fromType:(unsigned long long)arg2;
- (void)onOpenJoinFansGroupPanelButtonClick:(unsigned long long)arg1;
- (void)onOpenJoinFansGroupPanelButtonExpose:(unsigned long long)arg1;
- (void)onAssistantMoreAction:(unsigned long long)arg1 topicText:(id)arg2;
- (void)onAssistantShopAction:(unsigned long long)arg1 actionClickType:(unsigned long long)arg2 clickIndex:(unsigned long long)arg3;
- (void)onAssistantLotteryAction:(unsigned long long)arg1;
- (void)onAudienceWeAvatarAction:(unsigned long long)arg1;
- (void)onAudienceDropGiftAction:(unsigned long long)arg1 giftId:(id)arg2;
- (void)onAudienceBannerAction:(unsigned long long)arg1 bannerId:(id)arg2 bannerInfo:(id)arg3;
- (void)onAudienceBannerAction:(unsigned long long)arg1 bannerId:(id)arg2;
- (void)onAudienceCommentAction:(long long)arg1 jsonDict:(id)arg2;
- (void)onAudienceCommentAction:(unsigned long long)arg1;
- (void)onGameRankAction:(id)arg1;
- (void)onJumpGameAction:(id)arg1;
- (void)onHandoffAction:(unsigned long long)arg1;
- (void)onBrandAction:(unsigned long long)arg1 bizUserName:(id)arg2;
- (void)onJoinTeamAction:(unsigned long long)arg1 extData:(id)arg2;
- (void)onJoinTeamAction:(unsigned long long)arg1;
- (void)onPlayTogetherJoinTeamAction:(unsigned long long)arg1;
- (void)onAirPlayAction:(unsigned long long)arg1;
- (void)onLiveForwardActionClick:(id)arg1 shareType:(unsigned long long)arg2 position:(unsigned long long)arg3;
- (void)onLiveForwardActionClick:(id)arg1 shareType:(unsigned long long)arg2;
- (void)onLiveForwardActionClick:(id)arg1;
- (void)onLiveForwardActionExpose:(id)arg1;
- (void)onLiveActionSheetExpose;
- (void)onFollowConfirmAction:(id)arg1;
- (void)onFollowButtonShow;
- (void)onFollowConfirmShowFollowGuideLeaveFollow;
- (void)onFollowConfirmShowFolloGuideLeaveIcon;
- (void)onFollowConfirmShow;
- (id)makeExposeActionCommon;
- (void)onAudienceMultiAngleOperation:(id)arg1;
- (void)onAudienceVrLiveOperation:(unsigned long long)arg1;
- (void)onLiveAnchorNoticeOperation:(id)arg1;
- (void)onLiveTopicAction:(unsigned long long)arg1 topic:(id)arg2;
- (void)onFollowAction:(unsigned long long)arg1 isBizLive:(_Bool)arg2 extParams:(id)arg3;
- (void)onFollowAction:(unsigned long long)arg1 isBizLive:(_Bool)arg2;
- (void)onRedPacketAction:(unsigned long long)arg1 withSenderMicId:(id)arg2 extraInfo:(id)arg3;
- (void)onRedPacketAction:(unsigned long long)arg1 withSenderMicId:(id)arg2;
- (void)reportMoreLiveElementAction:(unsigned long long)arg1 tabId:(unsigned long long)arg2;
- (void)onMoreLiveExpose:(unsigned int)arg1;
- (void)onMoreLiveClick:(unsigned int)arg1;
- (void)onAudienceFreeMicAction:(unsigned long long)arg1 duration:(unsigned long long)arg2;
- (void)onMicAction:(unsigned long long)arg1;
- (void)onGiftAction:(unsigned long long)arg1 withGiftId:(id)arg2 withGiftCount:(unsigned int)arg3 extraActionResultDict:(id)arg4;
- (void)onGiftAction:(unsigned long long)arg1 withGiftId:(id)arg2 withGiftCount:(unsigned int)arg3;
- (void)onLotteryAction:(unsigned long long)arg1 withResult:(id)arg2 withLotteryInfo:(id)arg3 extraInfo:(id)arg4;
- (void)onLotteryAction:(unsigned long long)arg1 withResult:(id)arg2 withLotteryInfo:(id)arg3;
- (void)onSwitchLandscape:(long long)arg1;
- (void)onClickLandscape;
- (void)onExposeLandscape;
- (void)onCommentDisable;
- (void)onShoppingButtonShow;
- (void)onCommerceAction:(unsigned long long)arg1 withSessionID:(id)arg2 withRequestID:(id)arg3 withCouponID:(id)arg4 withCouponItem:(id)arg5;
- (void)onCommerceAction:(unsigned long long)arg1 withSessionID:(id)arg2 withRequestID:(id)arg3 withProductID:(unsigned long long)arg4 withAdItem:(id)arg5 withPbAdItem:(id)arg6 withCouponID:(id)arg7 extraInfo:(id)arg8 reasonType:(unsigned long long)arg9;
- (void)onCommerceAction:(unsigned long long)arg1 withSessionID:(id)arg2 withRequestID:(id)arg3 withProductID:(unsigned long long)arg4 withAdItem:(id)arg5 withPbAdItem:(id)arg6 extraInfo:(id)arg7;
- (void)onClickAudienceLiveLotteryDetail:(id)arg1 eduDict:(id)arg2;
- (void)onShowAudienceLiveLotteryDetail:(id)arg1 eduDict:(id)arg2;
- (void)onCommerceAction:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)onCommerceAction:(unsigned long long)arg1 withCouponID:(id)arg2 productIdString:(id)arg3;
- (void)onVerifyAction:(unsigned long long)arg1;
- (void)onQuitRoom:(unsigned long long)arg1;
- (void)onPreviewRelatedSlideRoom:(id)arg1 exitLiveId:(unsigned long long)arg2;
- (void)onSlideRoom:(id)arg1 exitLiveId:(unsigned long long)arg2 exitLiveTask:(id)arg3;
- (void)onHideOpearation:(long long)arg1;
- (void)onClickLike:(unsigned long long)arg1 isClipMode:(_Bool)arg2;
- (void)onShareRabbitMoment;
- (void)onProductQuestionMsgAction:(id)arg1;
- (void)onReplyMessage:(id)arg1;
- (void)onSendMessage:(id)arg1;
- (void)onFloatOperation:(unsigned long long)arg1;
- (void)onShareOlympicWinterTextState;
- (void)onShareOlympicWinterSession:(id)arg1;
- (void)onShareOlympicWinterTimeline;
- (void)onShareTextState;
- (void)onShareSession:(id)arg1;
- (void)onShareTimeline;
- (void)enterLive:(id)arg1;
- (void)dealloc;
- (void)setupData;
- (id)initWithRoleType:(long long)arg1;
- (id)init;

@end

