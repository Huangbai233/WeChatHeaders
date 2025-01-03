//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRouterHelper : NSObject
{
}

+ (void)pushFinderThemeLiveVCWithThemeId:(id)arg1 appearance:(id)arg2 entryBuffer:(id)arg3 enterScene:(unsigned long long)arg4;
+ (void)openFinderMediaVideoFullScreenViewWithDataItem:(id)arg1 originRect:(struct CGRect)arg2 originView:(id)arg3 fromVC:(id)arg4 commentScene:(int)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)openPurchasedContentWithParams:(id)arg1 nav:(id)arg2;
+ (void)openFinderMediaPhotoFullScreenViewWithDataItem:(id)arg1 index:(unsigned long long)arg2 originViewArr:(id)arg3 fromVC:(id)arg4 commentScene:(int)arg5;
+ (void)openMembershipViewControllerWithUsername:(id)arg1 entranceSource:(unsigned long long)arg2 redirectFeedID:(id)arg3 tabType:(unsigned long long)arg4 navVC:(id)arg5;
+ (void)openMembershipViewControllerWithUsername:(id)arg1 entranceSource:(unsigned long long)arg2 redirectFeedID:(id)arg3 navVC:(id)arg4;
+ (void)openMembershipViewControllerWithUsername:(id)arg1 entranceSource:(unsigned long long)arg2 navVC:(id)arg3;
+ (void)openMembershipDiscussionPostViewControllerWithPageStyle:(unsigned long long)arg1 refQuestionObject:(id)arg2 memberAQProviderUsername:(id)arg3 isAuthor:(_Bool)arg4 fromVC:(id)arg5;
+ (void)openFinderMemberMsgCenterFromScene:(long long)arg1 contact:(id)arg2 fromVC:(id)arg3;
+ (void)openFinderPrivateMsgFromScene:(long long)arg1 contact:(id)arg2 fromVC:(id)arg3;
+ (void)openFinderMsgCenterFromScene:(long long)arg1 contact:(id)arg2 nav:(id)arg3;
+ (void)openWxPrivateCenterFromScene:(long long)arg1 fromVC:(id)arg2;
+ (void)openWxMsgNotifyCenterFromScene:(long long)arg1 fromVC:(id)arg2;
+ (void)pushMembershipFansListViewControllerWithUsername:(id)arg1 fansCount:(unsigned long long)arg2 navVC:(id)arg3;
+ (void)pushMembershipInvalidViewControllerWithTipsInfo:(id)arg1 navVC:(id)arg2;
+ (void)pushMembershipIntroduceViewControllerWithParams:(id)arg1 navVC:(id)arg2;
+ (void)pushMembershipIntroduceViewControllerWithUsername:(id)arg1 redirectFeedID:(id)arg2 entranceSource:(unsigned long long)arg3 navVC:(id)arg4 unableShowLiveMinimizeWindow:(_Bool)arg5 isPreviewMode:(_Bool)arg6;
+ (void)pushMembershipIntroduceViewControllerWithUsername:(id)arg1 entranceSource:(unsigned long long)arg2 isPreviewMode:(_Bool)arg3 navVC:(id)arg4;
+ (void)pushMembershipIntroduceViewControllerWithUsername:(id)arg1 redirectFeedID:(id)arg2 entranceSource:(unsigned long long)arg3 navVC:(id)arg4;
+ (void)pushMembershipIntroduceViewControllerWithUsername:(id)arg1 entranceSource:(unsigned long long)arg2 navVC:(id)arg3;
+ (void)pushMembershipZoneViewControllerWithParams:(id)arg1 navVC:(id)arg2;
+ (void)pushMembershipZoneViewControllerWithUsername:(id)arg1 redirectFeedID:(id)arg2 entranceSource:(unsigned long long)arg3 tabType:(unsigned long long)arg4 navVC:(id)arg5;
+ (void)pushMembershipZoneViewControllerWithUsername:(id)arg1 redirectFeedID:(id)arg2 entranceSource:(unsigned long long)arg3 navVC:(id)arg4;
+ (void)openLiteAppWithFinderLiteAppParam:(id)arg1 navController:(id)arg2 liteAppVCDidQuitBlock:(CDUnknownBlockType)arg3;
+ (void)openLiteAppWithFinderLiteAppParam:(id)arg1 navController:(id)arg2;
+ (void)openHalfPageLiteApp:(id)arg1 height:(double)arg2 animated:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)pushToLiteAppByAppId:(id)arg1 pageRoute:(id)arg2 query:(id)arg3 currentNavController:(id)arg4 animated:(_Bool)arg5;
+ (void)presentToLiteAppByAppId:(id)arg1 pageRoute:(id)arg2 query:(id)arg3 fromVC:(id)arg4 animated:(_Bool)arg5;
+ (void)pushToLiteAppInfo:(id)arg1 extraParams:(id)arg2 currentNavController:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 storeBlock:(CDUnknownBlockType)arg5;
+ (void)pushToClubBindAccountLiteApp:(id)arg1 chatroomId:(id)arg2 fromVC:(id)arg3;
+ (void)pushToLiteAppWithParams:(id)arg1;
+ (void)pushToLiteApp:(id)arg1 defaultUrl:(id)arg2 withFallback:(_Bool)arg3 currentNavController:(id)arg4 animated:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)pushToLiteAppByAppId:(id)arg1 page:(id)arg2 query:(id)arg3 defaultUrl:(id)arg4 withFallback:(_Bool)arg5 currentNavController:(id)arg6 animated:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8;
+ (void)pushToLiteAppByAppId:(id)arg1 page:(id)arg2 query:(id)arg3 defaultUrl:(id)arg4 withFallback:(_Bool)arg5 currentNavController:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
+ (void)_setShareClientInfoWithVC:(id)arg1 reportModel:(id)arg2 tid:(id)arg3;
+ (void)pushToFinderStreamProfileFromSearch:(id)arg1 currentNavController:(id)arg2;
+ (void)pushToFinderTimelineFromSearch:(id)arg1;
+ (void)openTransparentMiniAppConfig:(id)arg1 appId:(id)arg2 path:(id)arg3 appExtDictionary:(id)arg4 noRelaunch:(_Bool)arg5 silentOpen:(_Bool)arg6 version:(long long)arg7 currentNavController:(id)arg8 completionHandler:(id)arg9;
+ (void)openMiniAppWithGoodsItem:(id)arg1 productShareItem:(id)arg2 withEnterLivingWidget:(_Bool)arg3 isCurrentInLivingPromise:(id)arg4 currentGMsgID:(id)arg5 chatType:(unsigned long long)arg6 sceneNote:(id)arg7 productPathCookie:(id)arg8 livingFinderUsername:(id)arg9 shareHandler:(CDUnknownBlockType)arg10 currentNavController:(id)arg11;
+ (void)openCollectionHalfVCWithViewModel:(id)arg1 viewController:(id)arg2 collectionDelegate:(id)arg3;
+ (void)openCollectionHalfVCWithContentVM:(id)arg1 collectionInfo:(id)arg2 viewController:(id)arg3 collectionDelegate:(id)arg4;
+ (void)openCollectionHalfVCWithContentVM:(id)arg1 paidCollection:(id)arg2 viewController:(id)arg3 collectionDelegate:(id)arg4;
+ (void)openMiniAppWithAppId:(id)arg1 path:(id)arg2 completionHandler:(id)arg3 currentNavController:(id)arg4;
+ (void)preLoadMiniAppWithInfoIfNecessary:(id)arg1;
+ (id)defaultJumpInfoModel;
+ (void)jumpFromVC:(id)arg1 withInfo:(id)arg2 params:(id)arg3;
+ (void)jumpFromVC:(id)arg1 withFinderJumpInfo:(id)arg2;
+ (_Bool)jumpFromVC:(id)arg1 mentionViewModel:(id)arg2;
+ (_Bool)_pushMultiMoreLiveWithEnterParams:(id)arg1 navVC:(id)arg2;
+ (_Bool)pushMultiMoreLiveWithFeedExportId:(id)arg1 feedNonceId:(id)arg2 title:(id)arg3 requestScene:(long long)arg4 useDarkStyle:(_Bool)arg5 selectTabId:(unsigned long long)arg6 selectSubTabId:(unsigned long long)arg7 byPassInfo:(id)arg8 entryScene:(unsigned long long)arg9 navVC:(id)arg10;
+ (void)pushHotwordsFeedFlowWithKeyword:(id)arg1 navVC:(id)arg2 streamScene:(int)arg3;
+ (void)_showFinderTLActionWithTimelineVC:(id)arg1 currentNavController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_afterOpenFinderTL:(id)arg1 appendAction:(long long)arg2 currentNavController:(id)arg3 openTLParams:(id)arg4;
+ (id)genJumpInfoFromPush:(id)arg1;
+ (void)openFinderTimelineVC:(id)arg1 currentNavController:(id)arg2 openTLParams:(id)arg3;
+ (_Bool)pushToFinderTrumpetSelectFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (_Bool)pushToMultiMoreLiveFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (void)pushToAlbumPickerViewControllerFromVC:(id)arg1;
+ (void)presentHalfEditImageViewControllerWithAssets:(id)arg1 images:(id)arg2 fromScene:(unsigned long long)arg3 entranceScene:(unsigned long long)arg4 fromVC:(id)arg5 delegate:(id)arg6;
+ (void)presentFullEditImageViewControllerWithAssets:(id)arg1 images:(id)arg2 fromScene:(unsigned long long)arg3 entranceScene:(unsigned long long)arg4 fromVC:(id)arg5 delegate:(id)arg6 naviTitle:(id)arg7 backIconStyle:(unsigned long long)arg8 shouldCropPhotoInVisibleFrame:(_Bool)arg9 animated:(_Bool)arg10 enterScene:(unsigned long long)arg11;
+ (void)presentMJMovieComposingViewControllerWithFilePaths:(id)arg1 mediaType:(long long)arg2 entranceType:(unsigned long long)arg3 fromVC:(id)arg4 delegate:(id)arg5 enterScene:(unsigned long long)arg6 mjPublisher:(id)arg7;
+ (void)presentFullEditVideoViewControllerWithVideoPaths:(id)arg1 thumbImages:(id)arg2 entranceType:(unsigned long long)arg3 fromVC:(id)arg4 delegate:(id)arg5 enterScene:(unsigned long long)arg6;
+ (void)showFinderVC:(id)arg1 inNav:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)presentCreateWxAcctViewController:(id)arg1 success:(CDUnknownBlockType)arg2;
+ (void)pushToFinderPOILink:(id)arg1 poiClassifyId:(id)arg2 userName:(id)arg3 currentNavController:(id)arg4 entryScene:(unsigned long long)arg5 reportID:(id)arg6;
+ (void)jumpToPOIRelatedStreamWithOpenParams:(id)arg1;
+ (void)jumpToPOIRelatedStreamWithParams:(id)arg1;
+ (void)jumpToPOIRelatedStreamFromJSAPIWithPOIInfo:(id)arg1 paramDict:(id)arg2 navVC:(id)arg3;
+ (void)jumpToMiaoJianAppWith:(id)arg1 fromType:(long long)arg2 scene:(int)arg3 postSourceType:(unsigned long long)arg4;
+ (_Bool)getFinderPostProcess;
+ (void)presentToPostViewControllerByParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)presentToPostViewControllerWith:(id)arg1 draft:(id)arg2 fromVC:(id)arg3;
+ (long long)getShowPostPageStateWithNotCheckLongVideoEncode:(_Bool)arg1 finderUsername:(id)arg2;
+ (long long)getShowPostPageState;
+ (void)pushToTeenagerProtectFromCurrentNavController:(id)arg1 fromVC:(id)arg2;
+ (void)pushToUploadingProfileVCWithTid:(id)arg1 currentNavController:(id)arg2 onlyShowOneFeed:(_Bool)arg3;
+ (void)postJumpToTimelineFromVC:(id)arg1 postSession:(id)arg2;
+ (void)pushToFinderTimelineBySnsGuideBubbleFromVC:(id)arg1 bubbleCtrlInfo:(id)arg2;
+ (void)jumpToFinderTimelineWithParams:(id)arg1;
+ (id)getTopViewControllerAtWindow:(id)arg1;
+ (id)getTopViewController;
+ (void)backToFindMainBarPage:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)jumpToFinderTimelineByPushWithParams:(id)arg1;
+ (int)commentSceneWithJumpTabType:(unsigned long long)arg1;
+ (void)pushMentionProfileWithUsername:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 currentViewController:(id)arg4 reportScene:(int)arg5 sucBlock:(CDUnknownBlockType)arg6;
+ (void)checkDataItemLiveInfo:(id)arg1 liveID:(unsigned long long)arg2;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 demotionFlag:(unsigned long long)arg6 byPush:(_Bool)arg7 commByPass:(id)arg8 failureCompletion:(CDUnknownBlockType)arg9;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 entryScene:(unsigned long long)arg6 entryCardType:(unsigned long long)arg7 replayEntryType:(id)arg8;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 entryScene:(unsigned long long)arg6 entryCardType:(unsigned long long)arg7 replayEntryType:(id)arg8 demotionFlag:(unsigned long long)arg9 byPush:(_Bool)arg10 commByPass:(id)arg11 cacheLiveInfoOverride:(id)arg12 rewardInfo:(id)arg13 refSessionBufferKey:(id)arg14 refObjectID:(unsigned long long)arg15 finderForwardSource:(id)arg16 fromNotFinder:(_Bool)arg17 alternativeDataItem:(id)arg18 extParams:(id)arg19 failureCompletion:(CDUnknownBlockType)arg20;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 entryScene:(unsigned long long)arg6 entryCardType:(unsigned long long)arg7 replayEntryType:(id)arg8 demotionFlag:(unsigned long long)arg9 byPush:(_Bool)arg10 commByPass:(id)arg11 cacheLiveInfoOverride:(id)arg12 rewardInfo:(id)arg13 refSessionBufferKey:(id)arg14 refObjectID:(unsigned long long)arg15 finderForwardSource:(id)arg16 fromNotFinder:(_Bool)arg17 alternativeDataItem:(id)arg18 failureCompletion:(CDUnknownBlockType)arg19;
+ (id)showLongVideo:(id)arg1;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3 viewScene:(unsigned long long)arg4 entryScene:(unsigned long long)arg5;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 viewScene:(unsigned long long)arg3;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 scene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3 authorName:(id)arg4 fromUserName:(id)arg5 toUserName:(id)arg6 scene:(unsigned long long)arg7 viewScene:(unsigned long long)arg8 entryScene:(unsigned long long)arg9;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 authorName:(id)arg3 fromUserName:(id)arg4 toUserName:(id)arg5 scene:(unsigned long long)arg6 viewScene:(unsigned long long)arg7;
+ (void)showLiveRoomFromVC:(id)arg1 redPacketMessage:(id)arg2;
+ (void)showProfileOrLiveWithSelectiveGoUri:(id)arg1 fromViewController:(id)arg2 entryScene:(unsigned long long)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)showLiveRoomWithParams:(id)arg1;
+ (_Bool)tryIntercept:(id)arg1;
+ (void)_doShowProfileFromUsername:(id)arg1 navVC:(id)arg2 openParameter:(id)arg3;
+ (_Bool)showFansProfileFromJSAPIWithCustomParam:(id)arg1 navVC:(id)arg2;
+ (_Bool)pushFansListFromJSAPIWithCustomParam:(id)arg1 navVC:(id)arg2;
+ (_Bool)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2 extraParams:(id)arg3;
+ (_Bool)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (_Bool)pushFinderRewardedPageFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (id)showBulletCommentViewControllerFromVC:(id)arg1 shouldShowSwitchButton:(_Bool)arg2 contentVM:(id)arg3;
+ (void)showCacheCommentViewControllerFromVC:(id)arg1 cacheViewController:(id)arg2 shouldEnterKeyBoard:(_Bool)arg3 enterType:(unsigned long long)arg4 refCommentID:(unsigned long long)arg5;
+ (id)showCommentViewControllerFromRouteModel:(id)arg1;
+ (unsigned long long)convertShareSceneToEntryScene:(unsigned long long)arg1;
+ (void)updateContextIdFrom:(unsigned long long)arg1 to:(id)arg2 cardType:(unsigned long long)arg3;
+ (void)updateContextIdFrom:(unsigned long long)arg1 to:(id)arg2;
+ (void)pushFinderShareToTimelineWithTid:(id)arg1 nonceID:(id)arg2 navVC:(id)arg3 shareScene:(unsigned long long)arg4 reportModel:(id)arg5;
+ (void)pushFinderShareToTimelineWithEncrytedTid:(id)arg1 nonceID:(id)arg2 navVC:(id)arg3 shareScene:(unsigned long long)arg4 reportModel:(id)arg5 reportExtraInfo:(id)arg6;
+ (void)pushFinderShareDetailViewControllerWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 requestScene:(unsigned long long)arg6 customParam:(id)arg7 functionalParams:(id)arg8 reportModel:(id)arg9 reportExtraInfo:(id)arg10;
+ (void)pushFinderAdPageViewControllerWithEncrytedObjectidTid:(id)arg1 nonceId:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 reportModel:(id)arg6 cardType:(unsigned long long)arg7 requestScene:(unsigned long long)arg8 functionalParams:(id)arg9;
+ (void)pushFinderFeedDetailViewControllerWithEncryptedTid:(id)arg1 nonceID:(id)arg2 currentNav:(id)arg3 enterScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 requestScene:(unsigned long long)arg6 customParam:(id)arg7 functionalParams:(id)arg8 reportModel:(id)arg9 reportExtraInfo:(id)arg10;
+ (void)_checkAndPushFinderLandScapeViewControllerWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 requestScene:(unsigned long long)arg6 customParam:(id)arg7 functionalParams:(id)arg8 reportModel:(id)arg9 reportExtraInfo:(id)arg10;
+ (void)pushLandScapeViewControllerEncryptFeedID:(id)arg1 nonceID:(id)arg2 entryScene:(unsigned long long)arg3 entryCardType:(unsigned long long)arg4 currentNavController:(id)arg5 optionalParams:(id)arg6;
+ (void)pushLandScapeViewController:(id)arg1 entryScene:(unsigned long long)arg2 entryCardType:(unsigned long long)arg3 currentNavController:(id)arg4;
+ (void)pushLandScapeViewControllerFeedID:(id)arg1 nonceID:(id)arg2 finderDataItem:(id)arg3 entryScene:(unsigned long long)arg4 entryCardType:(unsigned long long)arg5 currentNavController:(id)arg6 optionalParams:(id)arg7;
+ (void)pushLandScapeViewControllerFeedID:(id)arg1 nonceID:(id)arg2 entryScene:(unsigned long long)arg3 entryCardType:(unsigned long long)arg4 currentNavController:(id)arg5 optionalParams:(id)arg6;
+ (void)pushLandScapeViewControllerFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3;
+ (void)pushFinderShareDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 functionalParams:(id)arg6 reportModel:(id)arg7 cardType:(unsigned long long)arg8;
+ (void)pushFinderShareDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 functionalParams:(id)arg6 reportModel:(id)arg7;
+ (_Bool)pushFinderShareSnsAdDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 encryptedTid:(id)arg3 userName:(id)arg4 currentNavController:(id)arg5 enterScene:(unsigned long long)arg6 customParam:(id)arg7 reportModel:(id)arg8 cardType:(unsigned long long)arg9 adParamInofStr:(id)arg10;
+ (_Bool)getFunctionSpamStatusWith:(long long)arg1;
+ (_Bool)shouldPresentCommentLiseViewController:(id)arg1 isActiveInput:(_Bool)arg2 isCheckClose:(_Bool)arg3 isCommentClose:(_Bool)arg4 commentDetailVM:(id)arg5;
+ (void)pushContactInfoAction:(id)arg1 feedID:(id)arg2 reportScene:(int)arg3 isFromFriendLikeList:(_Bool)arg4 currentNavController:(id)arg5;
+ (void)pushWXProfileHelperByUsername:(id)arg1 currentNavController:(id)arg2;
+ (void)pushContactInfoActionFromFriendLikeList:(id)arg1 feedID:(id)arg2 reportScene:(int)arg3 currentNavController:(id)arg4;
+ (void)pushContactInfoAction:(id)arg1 feedID:(id)arg2 reportScene:(int)arg3 currentNavController:(id)arg4;
+ (void)presentMJMoviePreviewVCWithPostSession:(id)arg1 fromVC:(id)arg2 toolbarDisableConfig:(unsigned long long)arg3 isAuthorPerspective:(_Bool)arg4 commentScene:(int)arg5;
+ (void)presentPostFullScreenPreviewVCWithPostSession:(id)arg1 fromVC:(id)arg2 toolbarDisableConfig:(unsigned long long)arg3 isAuthorPerspective:(_Bool)arg4 commentScene:(int)arg5;
+ (void)openRecommendCollectionVC:(id)arg1 fromVC:(id)arg2;
+ (void)showShareToStateWithContentVM:(id)arg1 fromVC:(id)arg2 stateParams:(id)arg3;
+ (void)showShareToStateWithContentVM:(id)arg1 commentScene:(int)arg2 fromVC:(id)arg3;
+ (void)showFeedDislikeToast;
+ (void)triggerShareActionFromContentVM:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (void)pushRingToneSheetViewWithContentVM:(id)arg1 delegate:(id)arg2 entranceType:(long long)arg3;
+ (void)startCastingFail;
+ (void)startCastingSuccessWithURL:(id)arg1 contentVM:(id)arg2 fromVC:(id)arg3;
+ (void)startCasting:(id)arg1 fromVC:(id)arg2;
+ (void)dislikeWithContentVM:(id)arg1 commentScene:(int)arg2 fromVC:(id)arg3;
+ (double)onDismissPresentedVC:(id)arg1 currentNavVC:(id)arg2;
+ (void)onPopToHomeAndDismissPresentedVC:(id)arg1 currentVC:(id)arg2 currentNavVC:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)modSeeLaterStateWithParams:(id)arg1;
+ (void)authorOperateNotice:(id)arg1;
+ (void)openOriginalDeclareContentVM:(id)arg1 agreementSelect:(_Bool)arg2 type:(unsigned long long)arg3 sourcePage:(unsigned long long)arg4 fromVC:(id)arg5;
+ (void)openHalfOriginalLiteAppStateFromDataItem:(id)arg1;
+ (void)promoteWithContentVM:(id)arg1 fromVC:(id)arg2;
+ (void)patMusicWithContentVM:(id)arg1 commentScene:(int)arg2 fromVC:(id)arg3;
+ (void)feedbackWithContentVM:(id)arg1 commentScene:(int)arg2 fromVC:(id)arg3;
+ (void)internalFeedbackWithContentVM:(id)arg1 playBackInfo:(id)arg2 fromVC:(id)arg3;
+ (void)pushFeedContentFeedback:(id)arg1 currentNavController:(id)arg2;
+ (id)profilePageWithUserName:(id)arg1 params:(id)arg2 reportScene:(int)arg3 enterType:(unsigned int)arg4;
+ (void)showFeedFavListVCWithContentVM:(id)arg1 fromVC:(id)arg2;
+ (void)showFeedLikeListVCWithContentVM:(id)arg1 fromVC:(id)arg2 entranceScene:(unsigned long long)arg3;
+ (void)presentRefuseLikeListVC:(id)arg1 currentNavController:(id)arg2 commentScene:(int)arg3;
+ (void)presentFriendLikeListVC:(id)arg1 fromVC:(id)arg2;
+ (void)pushFinderAuthManageViewCurrentNavController:(id)arg1;
+ (void)presentFriendLikeListVC:(id)arg1 fromVC:(id)arg2 highlightUsernames:(id)arg3 friendsLikeListDelegate:(id)arg4;
+ (void)presentFriendLikeListVC:(id)arg1 fromVC:(id)arg2 friendsLikeListDelegate:(id)arg3;
+ (void)pushProfileReport:(id)arg1 feedID:(id)arg2 reportScene:(int)arg3 enterType:(unsigned int)arg4;
+ (void)presentProfileViewControllerWithUsername:(id)arg1 currentViewController:(id)arg2 reportScene:(int)arg3 enterType:(unsigned int)arg4 params:(id)arg5 transition:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)pushProfileWithFeedID:(id)arg1 nonceID:(id)arg2 username:(id)arg3 currentViewController:(id)arg4 reportScene:(int)arg5 enterType:(unsigned int)arg6 params:(id)arg7;
+ (void)pushProfileForWeixinContact:(id)arg1 navVC:(id)arg2 fromOpenIMContact:(_Bool)arg3 refCommentScene:(int)arg4 refWeChatProfileScene:(unsigned long long)arg5 pushParams:(id)arg6;
+ (void)pushProfileForWeixinContact:(id)arg1 navVC:(id)arg2 fromOpenIMContact:(_Bool)arg3 refCommentScene:(int)arg4 refWeChatProfileScene:(unsigned long long)arg5;
+ (void)setupAdReportInfoFromNavStack:(id)arg1 toParams:(id)arg2;
+ (_Bool)_profileAccessLimitedWithUserName:(id)arg1 reportScene:(int)arg2 enterScene:(unsigned long long)arg3 enterType:(unsigned int)arg4 limitedViewController:(id *)arg5;
+ (_Bool)_hasSameFinderContact:(id)arg1 fromNav:(id)arg2 params:(id)arg3;
+ (void)pushProfileUserName:(id)arg1 currentNavController:(id)arg2 reportScene:(int)arg3 enterType:(unsigned int)arg4 params:(id)arg5;
+ (void)pushFinderProfileWithContact:(id)arg1 params:(id)arg2 fromVC:(id)arg3;
+ (void)pushWXOfficialAccountsProfile:(id)arg1 withViewController:(id)arg2 Scence:(unsigned int)arg3;
+ (void)pushBrandIdentityProfile:(id)arg1 tid:(id)arg2 vc:(id)arg3 commentScene:(int)arg4;
+ (void)pushAuthorProfileWithContact:(id)arg1 currentNavController:(id)arg2 prepareResponse:(id)arg3 params:(id)arg4 jumpDraftTab:(_Bool)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)pushAuthorProfileWithContact:(id)arg1 currentNavController:(id)arg2 prepareResponse:(id)arg3 params:(id)arg4 jumpDraftTab:(_Bool)arg5 animated:(_Bool)arg6;
+ (void)pushAuthorProfileWithContact:(id)arg1 currentNavController:(id)arg2 prepareResponse:(id)arg3 params:(id)arg4 jumpDraftTab:(_Bool)arg5;
+ (void)pushAuthorProfileWithContact:(id)arg1 currentNavController:(id)arg2 reportScene:(int)arg3 enterType:(unsigned int)arg4 params:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)pushAuthorProfileWithContact:(id)arg1 currentNavController:(id)arg2 reportScene:(int)arg3 enterType:(unsigned int)arg4 params:(id)arg5;
+ (void)pushAuthorSelfProfileFromeMineTabEntrance:(id)arg1 withContact:(id)arg2 animated:(_Bool)arg3 params:(id)arg4;
+ (id)_authorLogoutURL:(id)arg1 contact:(id)arg2;
+ (void)pushAuthorSelfProfileFromeMineTabEntrance:(id)arg1 params:(id)arg2;
+ (void)pushClubProfileInChatWithUsername:(id)arg1 navVCController:(id)arg2;
+ (void)pushClubProfileWithContact:(id)arg1 navVCController:(id)arg2;
+ (_Bool)checkIfProfileStateIsValid:(id)arg1 withNavVC:(id)arg2;
+ (void)checkErrMsgModelFromErrorInfo:(id)arg1 errResponse:(id)arg2 withViewController:(id)arg3;
+ (void)checkErrMsgModelFromErrorInfo:(id)arg1 errResponse:(id)arg2;
+ (_Bool)checkIfProfileCanPostFeed:(id)arg1;
+ (void)pushPOIInfoAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushPOIURLAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushPOIAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushFinderLiveRules:(id)arg1 currentNavController:(id)arg2;
+ (void)pushAuthorDataCenterPage:(id)arg1 currentNavController:(id)arg2;
+ (void)pushRecommentPage:(id)arg1 currentNavController:(id)arg2;
+ (void)pushExtReadingAction:(id)arg1 feedID:(id)arg2 entranceGMsgID:(id)arg3 currentNavController:(id)arg4 commentScence:(int)arg5;
+ (void)pushExtReadingAction:(id)arg1 feedID:(id)arg2 currentNavController:(id)arg3 commentScence:(int)arg4;
+ (void)pushFinderSupportDebug:(id)arg1 currentNavController:(id)arg2;
+ (void)pushTimelineHotwordFromJumpInfoParams:(id)arg1 navVC:(id)arg2;
+ (void)pushTimelineHotwordFromFeed:(id)arg1 navVC:(id)arg2;
+ (void)pushMJTemplateSetViewControllerWithParams:(id)arg1 navigationController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)pushTopicWithParams:(id)arg1;
+ (id)pushToMMWeb:(id)arg1 currentNavController:(id)arg2 entranceGMsgID:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)pushToMMWeb:(id)arg1 currentNavController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)pushToMMWeb:(id)arg1 currentNavController:(id)arg2;
+ (void)showMMWebWithHtml5Info:(id)arg1 fromVC:(id)arg2;
+ (void)pushOrPresentFromCurrentControllerToMMWeb:(id)arg1;
+ (id)showHalfWebWithURL:(id)arg1 delegate:(id)arg2 fixedHeight:(_Bool)arg3 fromVC:(id)arg4;
+ (void)trySetSnsCoverWithDataItem:(id)arg1 fromVC:(id)arg2;
+ (void)_showLiteAppForWarningTips:(id)arg1 optionalParams:(id)arg2 fromVC:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)showPostVCLiteAppForWarningTips:(id)arg1 optionalParams:(id)arg2 fromVC:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)showLiteAppForWarningTips:(id)arg1 contentVM:(id)arg2 fromVC:(id)arg3;
+ (void)processAlbumTemplateDataAndPostWithCurrentVC:(id)arg1 delegateObj:(id)arg2 sightDraft:(id)arg3 publisherPostInfo:(id)arg4 processPostModel:(CDUnknownBlockType)arg5;
+ (void)processCameraTemplateDataAndPostWithCurrentVC:(id)arg1 delegateObj:(id)arg2 path:(id)arg3 thumbImg:(id)arg4 editVideoAttr:(id)arg5 paramModel:(id)arg6 publisherPostInfo:(id)arg7 processPostModel:(CDUnknownBlockType)arg8;
+ (void)processCameraTemplateDataAndPostWithCurrentVC:(id)arg1 delegateObj:(id)arg2 imageData:(id)arg3 pictureTaken:(id)arg4 editImageAttr:(id)arg5 withFrontCamera:(_Bool)arg6 processPostModel:(CDUnknownBlockType)arg7;
+ (void)startPickTheSameTemplateWithTemplateInfo:(id)arg1 delegate:(id)arg2 optionalParams:(id)arg3 viewController:(id)arg4;
+ (void)startPickTheSameTemplateWithTemplateID:(id)arg1 templateMusicID:(id)arg2 type:(unsigned long long)arg3 delegate:(id)arg4 optionalParams:(id)arg5 viewController:(id)arg6;
+ (void)startPreviewTemplateWithShortURL:(id)arg1 fromVC:(id)arg2;
+ (void)startPickTheSameTemplateTemplateInfo:(id)arg1 optionalParams:(id)arg2 fromVC:(id)arg3;
+ (void)startPickTheSameTemplateWithId:(id)arg1 tempMusicId:(id)arg2 type:(unsigned long long)arg3 optionalParams:(id)arg4 fromVC:(id)arg5;

@end

