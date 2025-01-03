//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderCreateLiveWarnPage, FinderJumpInfo, FinderLiveAbnormalClosedPageInfo, FinderLiveAliasInfo, FinderLiveAppMsg, FinderLiveAppMsgAlertInfo, FinderLiveAppMsgAnchorQuestUpdateInfo, FinderLiveAppMsgAudienceActionInfo, FinderLiveAppMsgBattleNotifyInfo, FinderLiveAppMsgCloseMicInfo, FinderLiveAppMsgGameCommentAnimationInfo, FinderLiveAppMsgGameInvitationInfo, FinderLiveAppMsgGameLiveTeamUpInfo, FinderLiveAppMsgGameSysNotifyInfo, FinderLiveAppMsgGiftWallTopOneInfo, FinderLiveAppMsgKtvCurrentSongInfo, FinderLiveAppMsgKtvSongListChangeInfo, FinderLiveAppMsgLotteryDrawInfo, FinderLiveAppMsgPromoteStatusInfo, FinderLiveAppMsgReplayTransition, FinderLiveAppMsgReserveOrDownloadGameInfo, FinderLiveAppMsgShopInfo, FinderLiveAppMsgToastInfo, FinderLiveAppMsgTopLiveDesc, FinderLiveAppMsgUpdateCheerAnimation, FinderLiveAppMsgUpdateFinderObjectInfo, FinderLiveAppMsgUpdateMultiPullStreamInfo, FinderLiveBannerData, FinderLiveBattleInfo, FinderLiveBoxId, FinderLiveBulletin, FinderLiveButtonInfo, FinderLiveCheerInfo, FinderLiveContact, FinderLiveCoverInfo, FinderLiveErrorPage, FinderLiveFlashSaleInfo, FinderLiveFunctionReminderNotificationInfo, FinderLiveGameData, FinderLiveGameDataBannerData, FinderLiveGiftInfo, FinderLiveGiftWallInfo, FinderLiveGuideFollowAdInfo, FinderLiveGuideInfo, FinderLiveMicInfo, FinderLiveMilestoneLotteryInfo, FinderLiveMilestoneLotteryMetaInfo, FinderLiveMsgBoxInfo, FinderLiveNoticeInfo, FinderLiveNoticeListInfo, FinderLivePromoteExtInfo, FinderLivePromoteMsgInfo, FinderLivePromotionEntrance, FinderLiveQuestInstance_StageItem_TargetItem, FinderLiveQuickReplyWordingInfo, FinderLiveVotingInfo, FinderWindowProductInfo, GameLiveJumpInfo, LiveRoomImg, LiveSdkInfo, MMFinderJoinLiveContext, MMFinderLiveAnchorStatusItem, MMFinderLiveGameTeamWAGameJumpInfo, MMFinderLiveGetLiveMessageRespContext, MMFinderLiveKTVSongItem, MMFinderLiveLikePostResult, MMFinderLivePlayGiftAnimationCommand, MMFinderLiveRedPacketReceiveInfo, MMFinderLiveRedPacketSendInfo, MMFinderLiveRewardAppMsgInfo, MMFinderLiveTaskId, MMLiveTaskId, NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSString, NewAnchorPkInfo, WAJSEventControlFinderLiveShopShelfParams, WCFinderContact, WCFinderCreateLiveCGI, WCFinderDataItem, WCFinderGetLiveOnlineMemberResult, WCFinderLiveInfo, WCFinderLiveKtvGetPlayMemberResult;

@protocol WCFinderLiveExt <NSObject>

@optional
- (void)onLiveNoticeListInfoForAudienceDisplayUpdatedWithTaskId:(MMFinderLiveTaskId *)arg1 noticeListInfo:(FinderLiveNoticeListInfo *)arg2;
- (void)onNewAnchorTaskGuideWithTaskId:(MMFinderLiveTaskId *)arg1 targetItem:(FinderLiveQuestInstance_StageItem_TargetItem *)arg2;
- (void)onNewAnchorQuestUpdated:(FinderLiveAppMsgAnchorQuestUpdateInfo *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onKtvSongModSuccessNotification:(int)arg1 songItem:(MMFinderLiveKTVSongItem *)arg2 taskId:(MMFinderLiveTaskId *)arg3;
- (void)onKtvCurrPlayingSongChanged:(FinderLiveAppMsgKtvCurrentSongInfo *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onKtvSongListChangeNotification:(FinderLiveAppMsgKtvSongListChangeInfo *)arg1 fromUser:(NSString *)arg2 taskId:(MMFinderLiveTaskId *)arg3;
- (void)onGetFinderLiveGameDataBannerData:(FinderLiveGameDataBannerData *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onGetGiftWallInfoWithTaskId:(MMFinderLiveTaskId *)arg1 info:(FinderLiveGiftWallInfo *)arg2;
- (void)onGetGuideFollowAdInfoWithTaskId:(MMFinderLiveTaskId *)arg1 info:(FinderLiveGuideFollowAdInfo *)arg2;
- (void)onGetButtonStyleInfoWithTaskId:(MMFinderLiveTaskId *)arg1 buttonInfo:(FinderLiveButtonInfo *)arg2;
- (void)onGetMilestoneLotteryInfoWithTaskId:(MMFinderLiveTaskId *)arg1 lotteryInfo:(FinderLiveMilestoneLotteryInfo *)arg2;
- (void)onGetMilestoneLotteryMetaInfoWithTaskId:(MMFinderLiveTaskId *)arg1 lotteryMetaInfo:(FinderLiveMilestoneLotteryMetaInfo *)arg2;
- (void)onFinderLive:(MMLiveTaskId *)arg1 updatePromoteStatusInfo:(FinderLiveAppMsgPromoteStatusInfo *)arg2;
- (void)onGetGuideInfo:(FinderLiveGuideInfo *)arg1;
- (void)onGetFlashSaleInfo:(FinderLiveFlashSaleInfo *)arg1;
- (void)onGetFinderLiveAudienceGiftWallTopOneInfoWithTaskId:(MMFinderLiveTaskId *)arg1 topOneInfo:(FinderLiveAppMsgGiftWallTopOneInfo *)arg2;
- (void)onGetFinderLiveAudienceActionInfoWithTaskId:(MMFinderLiveTaskId *)arg1 audienceActionInfo:(FinderLiveAppMsgAudienceActionInfo *)arg2;
- (void)onFinderLive:(MMFinderLiveTaskId *)arg1 receiveHotAnimation:(FinderLiveAppMsgGameCommentAnimationInfo *)arg2;
- (void)onFinderLive:(MMFinderLiveTaskId *)arg1 receiveNotifyBanner:(FinderJumpInfo *)arg2 displayAsReward:(_Bool)arg3 seq:(unsigned long long)arg4;
- (void)onFinderLive:(MMFinderLiveTaskId *)arg1 receiveBannerData:(FinderLiveBannerData *)arg2;
- (void)onFinderLive:(MMLiveTaskId *)arg1 pauseLiveWithRoleType:(long long)arg2;
- (void)onFinderLiveReplayStopgapChanged:(FinderLiveAppMsgReplayTransition *)arg1 forTaskId:(MMFinderLiveTaskId *)arg2;
- (void)onFinderLive:(MMLiveTaskId *)arg1 liveInteractionGiftPlayStart:(NSArray *)arg2 renderType:(long long)arg3;
- (void)onFinderLive:(MMLiveTaskId *)arg1 liveInteractionGiftPlayEnd:(NSArray *)arg2 renderType:(long long)arg3;
- (void)onFinderLiveAudioOnlyBackgroundChanged:(LiveRoomImg *)arg1;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(FinderLiveCoverInfo *)arg2;
- (void)onGetFinderActivityLiveWinterOlympicsStartStatusUpdated:(_Bool)arg1 withTaskId:(MMFinderLiveTaskId *)arg2;
- (void)onGetFinderActivityLiveWinterOlympicsTocherTotalUpdated:(unsigned long long)arg1 withTaskId:(MMFinderLiveTaskId *)arg2;
- (void)onFinderLiveInfoUpdated:(NSString *)arg1 liveInfo:(WCFinderLiveInfo *)arg2;
- (void)onFinderLiveReplayStickyTopTo:(NSString *)arg1;
- (void)onFinderLiveShareViewReplayStatusUpdated:(NSString *)arg1 liveInfo:(WCFinderLiveInfo *)arg2;
- (void)onFinderLiveReplayStatusUpdated:(MMFinderLiveTaskId *)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveReplaySettingUpdated:(MMFinderLiveTaskId *)arg1 replayEnabled:(_Bool)arg2;
- (void)onGetPollingFetchFinishWithTaskId:(MMFinderLiveTaskId *)arg1 errorCode:(int)arg2 errorDesc:(NSString *)arg3;
- (void)onGetPollingFetchEventWithTaskId:(MMFinderLiveTaskId *)arg1 cmdId:(long long)arg2 respBuffer:(NSData *)arg3 ret:(unsigned int)arg4;
- (void)onGameRecordLiveActiveAudioSession:(MMFinderLiveTaskId *)arg1 src:(unsigned long long)arg2;
- (void)onResumeGameLive;
- (void)onPauseGameLive;
- (void)onJoinRecordGameLiveError:(NSError *)arg1;
- (void)onJoinMiniGameLiveError:(NSError *)arg1;
- (void)onJoinGameTeamMeetRequirementWithTaskId:(MMFinderLiveTaskId *)arg1 joinGameTeamMode:(unsigned int)arg2 joinGameWAGameJumpInfo:(MMFinderLiveGameTeamWAGameJumpInfo *)arg3;
- (void)onJoinGameTeamMeetRequirementWithTaskId:(MMFinderLiveTaskId *)arg1 joinGameTeamMode:(unsigned int)arg2 joinGameLaunchParam:(NSString *)arg3;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(MMFinderLiveTaskId *)arg1 appMsgGameTeamInfo:(FinderLiveAppMsgGameLiveTeamUpInfo *)arg2;
- (void)onGetFinderLiveRedPacketsWithTaskId:(MMFinderLiveTaskId *)arg1 redPacketInfos:(NSArray *)arg2;
- (void)onGetFinderLiveAppMessageWithTaskId:(MMFinderLiveTaskId *)arg1 receiveRedPacketInfo:(MMFinderLiveRedPacketReceiveInfo *)arg2;
- (void)onGetFinderLiveAppMessageWithTaskId:(MMFinderLiveTaskId *)arg1 sendRedPacketInfo:(MMFinderLiveRedPacketSendInfo *)arg2;
- (void)onFinderLiveDidRevokeNoticeInfo:(FinderLiveNoticeInfo *)arg1;
- (void)onFinderLiveDidCreateNoticeInfo:(FinderLiveNoticeInfo *)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(NSString *)arg1 isTop:(_Bool)arg2 noticeId:(NSString *)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(NSString *)arg1 hasPurchase:(_Bool)arg2 noticeId:(NSString *)arg3 aggregateType:(unsigned int)arg4;
- (void)onFinderLiveNoticeForFinderUsername:(NSString *)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(NSArray *)arg3 failureNoticeIds:(NSArray *)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveNoticeWithNoticeId:(NSString *)arg1 reserveStateChanged:(unsigned long long)arg2 opType:(unsigned long long)arg3;
- (void)onFinderLiveNoticeWithNoticeId:(NSString *)arg1 hasPurchaseStateChanged:(_Bool)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(NSString *)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onShowLiveHalfScreenNotification:(FinderLiveMsgBoxInfo *)arg1;
- (void)onShowFunctionNotification:(FinderLiveFunctionReminderNotificationInfo *)arg1;
- (void)onShowCheerAnimation:(FinderLiveAppMsgUpdateCheerAnimation *)arg1;
- (void)onGetFinderLiveDropGiftForAnchor:(MMFinderLiveTaskId *)arg1;
- (void)onGetFinderLiveDropGift:(MMFinderLiveTaskId *)arg1 giftInfo:(FinderLiveGiftInfo *)arg2;
- (void)onGetFinderLiveShowCheerClapModeHint:(unsigned int)arg1;
- (void)onGetFinderLiveCheerEnterClapModeWithLevel:(unsigned int)arg1;
- (void)onLiveNoticeReserveStateChanged:(NSString *)arg1 info:(FinderLiveNoticeInfo *)arg2 error:(NSError *)arg3;
- (void)onGetFinderLiveBulletinBoardInfoWithTaskId:(MMFinderLiveTaskId *)arg1 liveBulletin:(FinderLiveBulletin *)arg2;
- (void)onFinderLiveUpdateFinderCheerIconWithTaskId:(MMFinderLiveTaskId *)arg1 cheerInfo:(FinderLiveCheerInfo *)arg2;
- (void)onFinderLiveUpdateMutilAngleWithTaskId:(MMFinderLiveTaskId *)arg1 multiPullStreamInfo:(FinderLiveAppMsgUpdateMultiPullStreamInfo *)arg2;
- (void)onFinderLiveUpdateFinderObjectInfoWithTaskId:(MMFinderLiveTaskId *)arg1 finderObjectInfo:(FinderLiveAppMsgUpdateFinderObjectInfo *)arg2;
- (void)onFinderLiveGameInvitationWithTaskId:(MMFinderLiveTaskId *)arg1 invitationInfo:(FinderLiveAppMsgGameInvitationInfo *)arg2;
- (void)onFinderLiveIdentitySynced:(FinderLiveAliasInfo *)arg1 liveIdentity:(unsigned int)arg2;
- (void)onFinderLiveAnchorStatusUpdated:(MMFinderLiveAnchorStatusItem *)arg1;
- (void)onGetHighlightCheerUserWithFinderContacts:(NSMutableArray *)arg1;
- (void)onGetFinderLiveAppMsgListWithTaskId:(MMFinderLiveTaskId *)arg1 appMsgList:(NSArray *)arg2 isHistoryMsg:(_Bool)arg3;
- (void)onGetFinderLiveToastInfoWithTaskId:(MMFinderLiveTaskId *)arg1 toastInfo:(FinderLiveAppMsgToastInfo *)arg2;
- (void)onGetFinderLiveAlertInfoWithTaskId:(MMFinderLiveTaskId *)arg1 alertInfo:(FinderLiveAppMsgAlertInfo *)arg2;
- (void)onGetFinderLiveGiftAnimationPlayCommandWithTaskId:(MMFinderLiveTaskId *)arg1 playCommand:(MMFinderLivePlayGiftAnimationCommand *)arg2;
- (void)onGetFinderLiveRewardAppMsgWithTaskId:(MMFinderLiveTaskId *)arg1 rewardAppMsgInfo:(MMFinderLiveRewardAppMsgInfo *)arg2;
- (void)onGetFinderLiveLotteryDrawInfoWithTaskId:(MMFinderLiveTaskId *)arg1 lotteryDrawInfo:(FinderLiveAppMsgLotteryDrawInfo *)arg2;
- (void)onGetLiveVoteInfo:(FinderLiveVotingInfo *)arg1 forTaskId:(MMFinderLiveTaskId *)arg2;
- (void)onGetFinderLiveUpdateLotteryPanelWithTaskId:(MMFinderLiveTaskId *)arg1;
- (void)onGetFinderLiveAudiencePromotionMiniappInfoWithTaskId:(MMFinderLiveTaskId *)arg1 promotionEntrance:(FinderLivePromotionEntrance *)arg2;
- (void)onGetFinderLiveQuickReplyListWithTaskId:(MMFinderLiveTaskId *)arg1 quickReplyWordingInfo:(FinderLiveQuickReplyWordingInfo *)arg2;
- (void)onGetFinderLiveLotteryInfoWithTaskId:(MMFinderLiveTaskId *)arg1 liveLotteryInfos:(NSArray *)arg2 lotteryDrawInfos:(NSArray *)arg3 fromJoinLive:(_Bool)arg4;
- (void)onGetFinderLiveMicHeartBrokenInfoWithTaskId:(MMFinderLiveTaskId *)arg1 users:(NSMutableArray *)arg2;
- (void)onGetFinderLiveMicBreakTrtcMessageWithTaskId:(MMFinderLiveTaskId *)arg1 sdkUserId:(NSString *)arg2;
- (void)onGetFinderLiveCloseMicIntercomMessageWithTaskId:(MMFinderLiveTaskId *)arg1 sessionId:(NSString *)arg2;
- (void)onGetFinderLiveApplyMicIntercomMessageWithTaskId:(MMFinderLiveTaskId *)arg1 finderLiveContact:(FinderLiveContact *)arg2 sdkUserId:(NSString *)arg3 sessionId:(NSString *)arg4;
- (void)onGetFinderLiveNotifyApplyRandomMicInfoWithTaskId:(MMFinderLiveTaskId *)arg1 finderLiveContact:(FinderLiveContact *)arg2 randomMicBuffer:(NSData *)arg3 isMultiAnchorMic:(_Bool)arg4;
- (void)onGetFinderLiveAnchorConnectMicTemplateBattleInfoWithTaskId:(MMFinderLiveTaskId *)arg1 battleInfo:(FinderLiveBattleInfo *)arg2 serverUnixEpochTimeInSeconds:(unsigned long long)arg3;
- (void)onGetFinderLiveAnchorConnectMicBattleNotifyInfoWithTaskId:(MMFinderLiveTaskId *)arg1 notifyInfo:(FinderLiveAppMsgBattleNotifyInfo *)arg2;
- (void)onGetFinderLiveAnchorConnectMicBattleInfoWithTaskId:(MMFinderLiveTaskId *)arg1 battleInfo:(FinderLiveBattleInfo *)arg2;
- (void)onGetFinderLiveAnchorCloseMicBattleMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 battleSessionId:(NSString *)arg3;
- (void)onGetFinderLiveAnchorAcceptMicBattleMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 battleSessionId:(NSString *)arg3 battleDuration:(unsigned int)arg4;
- (void)onGetFinderLiveAnchorApplyMicBattleMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 battleSessionId:(NSString *)arg3 confirmTtl:(unsigned int)arg4 battleSeq:(unsigned long long)arg5;
- (void)onGetFinderLiveAnchorConnectMicStatusInfoWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 connectMicFinderContact:(WCFinderContact *)arg3 coverImageUrlString:(NSString *)arg4 liveRoomImages:(LiveRoomImg *)arg5 status:(long long)arg6 sessionId:(NSString *)arg7 sequence:(unsigned long long)arg8 sdkUserId:(NSString *)arg9 audienceMicList:(NSMutableArray *)arg10 disableBattle:(_Bool)arg11;
- (void)onGetFinderLiveAnchorCloseMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 sessionId:(NSString *)arg3 sdkUserId:(NSString *)arg4;
- (void)onGetFinderLiveAnchorAcceptMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 coverImageUrlString:(NSString *)arg3 liveRoomImages:(LiveRoomImg *)arg4 sdkUserId:(NSString *)arg5 sdkRoomId:(unsigned int)arg6 sdkPkSign:(NSString *)arg7 sdkNewPkSign:(NSString *)arg8 sessionId:(NSString *)arg9 sequence:(unsigned long long)arg10;
- (void)onGetFinderLiveAnchorApplyMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 coverImageUrlString:(NSString *)arg3 sdkUserId:(NSString *)arg4 sdkRoomId:(unsigned int)arg5 liveRoomImages:(LiveRoomImg *)arg6 randomMicBuffer:(NSData *)arg7 sessionId:(NSString *)arg8;
- (void)onGetFinderLiveAnchorNewCloseMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 sdkUserId:(NSString *)arg3 applyId:(NSString *)arg4 sessionId:(NSString *)arg5;
- (void)onGetFinderLiveAnchorNewAcceptMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 pkroomAnchors:(NSMutableArray *)arg3 sessionId:(NSString *)arg4 vroomId:(NSString *)arg5 vroomIdVersion:(unsigned long long)arg6;
- (void)onGetFinderLiveAnchorNewApplyMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 applyAnchor:(NewAnchorPkInfo *)arg3 acceptorAnchor:(NewAnchorPkInfo *)arg4 pkroomAnchors:(NSMutableArray *)arg5 applyId:(NSString *)arg6 randomMicBuffer:(NSData *)arg7 expiredTime:(unsigned long long)arg8;
- (void)onGetFinderLiveInviteAudienceMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 isVideoMic:(_Bool)arg2 seatId:(unsigned int)arg3 expiredTime:(unsigned long long)arg4 inviteMicBuffer:(NSData *)arg5;
- (void)onGetFinderLiveCloseMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(WCFinderContact *)arg2 sessionId:(NSString *)arg3 closeMicInfo:(FinderLiveAppMsgCloseMicInfo *)arg4;
- (void)onGetFinderLiveAcceptMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 connectMicFinderContact:(FinderLiveContact *)arg2 liveSdkInfo:(LiveSdkInfo *)arg3 withVideo:(_Bool)arg4 seatId:(unsigned int)arg5 expiredTime:(unsigned long long)arg6 sdkUserId:(NSString *)arg7 sessionId:(NSString *)arg8 sequence:(unsigned long long)arg9;
- (void)onGetFinderLiveApplyMicMessageWithTaskId:(MMFinderLiveTaskId *)arg1 fromFinderContact:(FinderLiveContact *)arg2 withVideo:(_Bool)arg3 seatId:(unsigned int)arg4 autoConnect:(_Bool)arg5 expiredTime:(unsigned long long)arg6 sdkUserId:(NSString *)arg7 sessionId:(NSString *)arg8 micUserAttrFlag:(unsigned int)arg9;
- (void)finderLiveHoverSnsTimelineSwitchChanged:(_Bool)arg1;
- (void)onTopComment:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onFinderLiveVerifyRealNameForComment;
- (void)onFinderLiveVerified:(NSError *)arg1 isNameVerified:(_Bool)arg2 withVerifyUrl:(NSString *)arg3 withEntryType:(long long)arg4;
- (void)onGetFinderContact:(NSError *)arg1 contact:(FinderLiveContact *)arg2;
- (void)onNewAnchorTopLiveDesc:(FinderLiveAppMsgTopLiveDesc *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onGetReserveOrDownloadGameInfoWithTaskId:(MMFinderLiveTaskId *)arg1 gameInfo:(FinderLiveAppMsgReserveOrDownloadGameInfo *)arg2;
- (void)onGetGameLiveJumpInfoWithTaskId:(MMFinderLiveTaskId *)arg1 gameLiveJumpInfo:(GameLiveJumpInfo *)arg2;
- (void)onFinderLiveUpdateCommentSingleEnable;
- (void)onFinderLiveUpdateCommentEnable;
- (void)onFinderLiveDidResumeWithTaskId:(MMFinderLiveTaskId *)arg1 finderDataItem:(WCFinderDataItem *)arg2 error:(NSError *)arg3;
- (void)onFinderLiveDidPauseWithTaskId:(MMFinderLiveTaskId *)arg1 finderDataItem:(WCFinderDataItem *)arg2 error:(NSError *)arg3;
- (void)onGetFinderLiveSetAnchorStatusResult:(NSError *)arg1 anchorStatus:(MMFinderLiveAnchorStatusItem *)arg2 extraInfo:(id)arg3 liveId:(unsigned long long)arg4;
- (void)onGetFinderLiveNoSenseBanComment:(NSError *)arg1 enableComment:(_Bool)arg2 forUserName:(NSString *)arg3;
- (void)onGetFinderLiveBanComment:(NSError *)arg1 enableComment:(_Bool)arg2 forUserName:(NSString *)arg3;
- (void)onGetFinderLiveFollowAppMsgWithTaskId:(MMFinderLiveTaskId *)arg1 followAppMsg:(FinderLiveAppMsg *)arg2;
- (void)onGetFinderLiveLikeAppMsgWithTaskId:(MMFinderLiveTaskId *)arg1 likeAppMsg:(FinderLiveAppMsg *)arg2;
- (void)onGetFinderLivePromoteExtInfoWithTaskId:(MMFinderLiveTaskId *)arg1 promoteExtInfo:(FinderLivePromoteExtInfo *)arg2;
- (void)onGetFinderLiveGameSysNotifyInfoWithTaskId:(MMFinderLiveTaskId *)arg1 gameSysNotifyInfo:(FinderLiveAppMsgGameSysNotifyInfo *)arg2;
- (void)onGetFinderLivePromoteInfoWithTaskId:(MMFinderLiveTaskId *)arg1 promoteInfo:(FinderLivePromoteMsgInfo *)arg2;
- (void)onReceivedJSControlShopShelfWithParams:(WAJSEventControlFinderLiveShopShelfParams *)arg1;
- (void)onGetFinderLiveAppMsgShopInfoWithTaskId:(MMFinderLiveTaskId *)arg1 shopInfo:(FinderLiveAppMsgShopInfo *)arg2;
- (void)onGetFinderLivePromoteProductInfoWithTaskId:(MMFinderLiveTaskId *)arg1 productInfo:(FinderWindowProductInfo *)arg2;
- (void)onDeleteFinderShopShelfProduct:(NSError *)arg1 productIds:(NSArray *)arg2;
- (void)onSetTopFinderShopShelfProduct:(NSError *)arg1 productId:(unsigned long long)arg2;
- (void)onEndPromoteProductResult:(NSError *)arg1;
- (void)onSendPromoteProductResult:(NSError *)arg1;
- (void)onFinderLiveKtvGetPlayMember:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 playMemberResult:(WCFinderLiveKtvGetPlayMemberResult *)arg3;
- (void)onFinderGetLiveOnlineMember:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 onlineMemberResult:(WCFinderGetLiveOnlineMemberResult *)arg3;
- (void)onFinderLiveCloseWithAbnormalClosedPageInfoWithLiveId:(unsigned long long)arg1 closePageInfo:(FinderLiveAbnormalClosedPageInfo *)arg2;
- (void)onFinderLiveDidGetBalance:(unsigned long long)arg1;
- (void)onFinderLiveShareViewUpdateLiveInfo:(WCFinderLiveInfo *)arg1;
- (void)onFinderLiveCloseWithTid:(NSString *)arg1;
- (void)onPostFinderLiveLike:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 postResult:(MMFinderLiveLikePostResult *)arg3;
- (void)onPostFinderLiveAppMessageFail:(MMFinderLiveTaskId *)arg1 boxId:(FinderLiveBoxId *)arg2 localClientMsgId:(NSString *)arg3 userInfo:(NSDictionary *)arg4 errorType:(int)arg5;
- (void)onPostFinderLiveAppMessageSuccess:(MMFinderLiveTaskId *)arg1 boxId:(FinderLiveBoxId *)arg2 serverMsgId:(unsigned long long)arg3 localClientMsgId:(NSString *)arg4 userInfo:(NSDictionary *)arg5;
- (void)onPostFinderLiveMessageToPublicSuccessForTaskId:(MMFinderLiveTaskId *)arg1 content:(NSString *)arg2;
- (void)onPostFinderLiveMessage:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 attendLottery:(_Bool)arg3 statusFlag:(unsigned int)arg4 userInfo:(NSDictionary *)arg5;
- (void)onGetFinderLiveFeedStreamMessage:(NSError *)arg1 taskId:(MMLiveTaskId *)arg2 onlineContacts:(NSArray *)arg3 msgList:(NSArray *)arg4 finderLiveInfo:(WCFinderLiveInfo *)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 nextRequestInterval:(unsigned int)arg11 currentLikeCount:(unsigned long long)arg12 liveGameData:(FinderLiveGameData *)arg13 liveMicInfo:(FinderLiveMicInfo *)arg14 respContext:(MMFinderLiveGetLiveMessageRespContext *)arg15 finderLiveAppMsgList:(NSArray *)arg16 templateInfoList:(NSArray *)arg17;
- (void)onGetFinderLiveMessage:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 onlineContacts:(NSArray *)arg3 msgList:(NSArray *)arg4 finderLiveInfo:(WCFinderLiveInfo *)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(FinderLiveGameData *)arg14 respContext:(MMFinderLiveGetLiveMessageRespContext *)arg15;
- (void)onCancelFinderLiveError:(NSError *)arg1 finderDataItem:(WCFinderDataItem *)arg2;
- (void)onCloseFinderLiveError:(NSError *)arg1 finderDataItem:(WCFinderDataItem *)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned long long)arg5 liveNewFansNum:(unsigned int)arg6 maxOnlineCount:(unsigned int)arg7 audiencesAvgSeconds:(unsigned int)arg8;
- (void)onJoinFinderLiveError:(NSError *)arg1 finderDataItem:(WCFinderDataItem *)arg2 joinLiveContext:(MMFinderJoinLiveContext *)arg3 errorPage:(FinderLiveErrorPage *)arg4;
- (void)onCreateFinderLiveError:(NSError *)arg1 finderDataItem:(WCFinderDataItem *)arg2 errorPage:(FinderLiveErrorPage *)arg3 warnPage:(FinderCreateLiveWarnPage *)arg4 createLiveCGI:(WCFinderCreateLiveCGI *)arg5 isMiniGameLive:(_Bool)arg6;
@end

