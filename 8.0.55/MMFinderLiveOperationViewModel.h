//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, FinderLiveAdInfo, FinderLiveCheerInfo, FinderLiveFunctionReminderNotificationInfo, FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo, FinderLiveGiftWallInfo, FinderLiveRewardWishListInfo, FinderShopCouponInfo, FinderWindowProductInfo, LiveOnlineInfo, MMAudienceLiveLikePlayUtil, MMFinderJoinLiveContext, MMFinderLiveAdsItem, MMFinderLiveBottomButtonStyleManager, MMFinderLiveGoodsItem, MMFinderLiveLotteryDisplayLogic, MMFinderLiveLotteryPacketDisplayLogic, MMFinderLiveOperationBottomButtonAnimator, MMFinderLiveOperationView, MMFinderLivePackageGiftRecommendInfo, MMFinderLiveRecommendUserSendGiftInfo, MMFinderLiveRewardFreeGiftManager, MMFinderLiveRewardGiftItem, MMFinderLiveRewardRecievingLogic, MMFinderLiveRewardSendingLogic, MMFinderLiveSyncPromotionInfo, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveHotAnimationViewModel, MMLiveLikeAnimationUtil, MMLiveLikeClapVoicePlayQueue, MMLiveLikeDataMgr, MMLiveLikePlayUtil, MMLiveVoteViewModel, NSArray, NSData, NSMutableDictionary, NSMutableSet, NSString, UIColor, WCFinderDataItem, WCFinderLiveStarterReporter;
@protocol WCFinderRedDotInterfaceProtocol;

@interface MMFinderLiveOperationViewModel : NSObject
{
    _Bool _didJoinLiveRoom;
    _Bool _didEnterLiveRoom;
    _Bool _isClearScreen;
    _Bool _canShowOperationUI;
    _Bool _isInputViewShowing;
    _Bool _shouldShowGameLiveAngelBtn;
    _Bool _isRestrictVideoRectMode;
    _Bool _isShouldShowNewHeatValueStyle;
    _Bool _shouldShowHeatValue;
    _Bool _liveRewardEnabled;
    _Bool _isEditTopic;
    _Bool _isAssumingAudienceCommentEnabled;
    _Bool _canShowShoppingTips;
    _Bool _canShowShoppingButton;
    _Bool _canShowBottomButtons;
    _Bool _isMusicSettingButtonEnabled;
    _Bool _isCameraOperationButtonEnabled;
    _Bool _isAnchorClapButtonEnabled;
    _Bool _isLiveShoppingButtonEnabled;
    _Bool _isLiveGiftButtonEnabled;
    _Bool _isLiveGameButtonEnabled;
    _Bool _isLikeButtonEnabled;
    _Bool _isLiveLotteryButtonEnabled;
    _Bool _isLiveRedPacketButtonEnabled;
    _Bool _isLiveScreenSharingButtonEnabled;
    _Bool _isLiveScreenSharingButtonEnableInited;
    _Bool _isLiveConnectMicButtonEnabled;
    _Bool _isLiveMicTalkingButtonEnabled;
    _Bool _isLiveMicTalkingEnabled;
    _Bool _isTestLiveMode;
    _Bool _isLiveQuickSendGiftButtonEnabled;
    _Bool _isShakeForLike;
    _Bool _isLiveGameButtonButtonHighLighted;
    _Bool _canGameButtonHighlightedByTeamup;
    _Bool _canGameButtonHighlightedByPromote;
    _Bool _liveInThreeDimensionalDirecting;
    _Bool _selfIsThreeDimensionalDirector;
    _Bool _isNeverJoinFanclub;
    _Bool _isLiveTrialTimeout;
    _Bool _isLiveTrialTimeoutWhenJoinLive;
    _Bool _isTrialTimeExpand;
    _Bool _canShowMultiPlayerPageControl;
    _Bool _isLiveKTVSongButtonEnabled;
    _Bool _isLiveRoomInteractiveHomePageTransitionEnable;
    _Bool _isProductSizeAssistantPanelExtended;
    _Bool _hasPreloadRewardGiftList;
    unsigned int _liveExtFlag;
    unsigned int _liveInfoExtFlag;
    MMFinderLiveOperationView *_operationView;
    MMFinderLiveTaskId *_taskId;
    WCFinderDataItem *_finderDataItem;
    MMFinderJoinLiveContext *_joinLiveContext;
    long long _currentOrientation;
    unsigned long long _onlineUserCount;
    unsigned long long _ktvPlayerCount;
    unsigned long long _onlineViewCount;
    unsigned long long _rewardWecoinCnt;
    unsigned long long _rewardTotalAmountInHeat;
    unsigned long long _heatValue;
    NSString *_liveHeatValueStr;
    unsigned long long _paidUserCount;
    LiveOnlineInfo *_onlineBarInfo;
    NSString *_liveOnlineCountStr;
    MMLiveVoteViewModel *_voteVM;
    MMFinderLiveGoodsItem *_currentDisplayGoodsItem;
    MMFinderLiveAdsItem *_currentDisplayAdsItem;
    FinderShopCouponInfo *_currentDisplayCouponInfo;
    long long _liveToolsButtonState;
    long long _anchorPromoteButtonState;
    FinderLiveCheerInfo *_cheerInfo;
    FinderLiveAdInfo *_liveAdInfo;
    MMLiveHotAnimationViewModel *_hotAnimationVM;
    MMFinderLiveRewardSendingLogic *_rewardSendingLogic;
    MMFinderLiveRewardRecievingLogic *_rewardRecievingLogic;
    MMFinderLiveRewardFreeGiftManager *_freeGiftManager;
    MMFinderLiveLotteryPacketDisplayLogic *_lotteryPacketDisplayLogic;
    MMFinderLiveLotteryDisplayLogic *_lotteryDisplayLogic;
    MMLiveLikeAnimationUtil *_audienceSelflikeAnimationUtil;
    MMLiveLikeAnimationUtil *_audienceOtherLikeAnimationUtil;
    MMLiveLikeAnimationUtil *_anchorlikeAnimationUtil;
    MMLiveLikePlayUtil *_anchorLikePlayUtil;
    MMAudienceLiveLikePlayUtil *_audienceLikePlayUtil;
    MMLiveLikeClapVoicePlayQueue *_likeClapVoicePlayQueue;
    unsigned long long _maxLikeCountOnce;
    long long _likeMode;
    FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo *_threeDimensionalTipsInfo;
    NSString *_playTogetherBubbleWording;
    NSString *_gameFrameSetRootId;
    NSString *_gamePkgAppId;
    NSString *_gamePkgAppPath;
    unsigned long long _livePaymentType;
    FinderLiveRewardWishListInfo *_rewardWishListInfo;
    FinderLiveGiftWallInfo *_giftWallInfo;
    NSString *_finderLiveLogoUrl;
    NSArray *_brandLogoUrls;
    MMFinderLiveRecommendUserSendGiftInfo *_recommendUserSendGiftInfo;
    MMFinderLivePackageGiftRecommendInfo *_packageNewGiftRecommendInfo;
    MMFinderLivePackageGiftRecommendInfo *_packageExpireGiftRecommendInfo;
    MMFinderLivePackageGiftRecommendInfo *_packageNewFreeGiftRecommendInfo;
    MMFinderLiveRewardGiftItem *_exposedGiftItem;
    MMFinderLiveSyncPromotionInfo *_promotionInfo;
    FinderLiveFunctionReminderNotificationInfo *_reminderNotificationInfo;
    CDUnknownBlockType _getBottomButtonQueryBlock;
    CDUnknownBlockType _getAllBottomButtonsQueryBlock;
    FinderJumpInfo *_liteAppCardInfo;
    FinderJumpInfo *_anchorRealtimeDataPanelInfo;
    FinderJumpInfo *_productSizeAssistantPanelInfo;
    FinderWindowProductInfo *_productSizeAssistantProductInfo;
    CDUnknownBlockType _productSizeAssistantExposeBlock;
    CDUnknownBlockType _productSizeAssistantClickBlock;
    CDUnknownBlockType _productSizeAssistantContentClickBlock;
    double _productSizeAssistantPanelFoldedHeight;
    NSData *_lastRecommendProductNotifyLastBuffer;
    id <WCFinderRedDotInterfaceProtocol> _redDotMgr;
    WCFinderLiveStarterReporter *_starterReporter;
    NSMutableSet *_reportedExposePathSet;
    NSMutableDictionary *_cachedTipsIdDict;
    MMFinderLiveBottomButtonStyleManager *_bottomButtonStyleManager;
    MMFinderLiveOperationBottomButtonAnimator *_bottomButtonAnimator;
    NSMutableDictionary *_bottomButtonOriginalIconMap;
    NSMutableSet *_bannedButtonTypes;
    NSMutableSet *_customStyleButtonTypes;
    NSMutableDictionary *_bottomButtonStyleConfigReportDict;
}

+ (_Bool)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3 showType:(unsigned long long)arg4 exposeCountLimit:(unsigned int)arg5;
+ (_Bool)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3 showType:(unsigned long long)arg4;
+ (_Bool)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3;
+ (void)transferLegacyRedDotIfNeeded;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasPreloadRewardGiftList; // @synthesize hasPreloadRewardGiftList=_hasPreloadRewardGiftList;
@property(retain, nonatomic) NSMutableDictionary *bottomButtonStyleConfigReportDict; // @synthesize bottomButtonStyleConfigReportDict=_bottomButtonStyleConfigReportDict;
@property(retain, nonatomic) NSMutableSet *customStyleButtonTypes; // @synthesize customStyleButtonTypes=_customStyleButtonTypes;
@property(retain, nonatomic) NSMutableSet *bannedButtonTypes; // @synthesize bannedButtonTypes=_bannedButtonTypes;
@property(retain, nonatomic) NSMutableDictionary *bottomButtonOriginalIconMap; // @synthesize bottomButtonOriginalIconMap=_bottomButtonOriginalIconMap;
@property(retain, nonatomic) MMFinderLiveOperationBottomButtonAnimator *bottomButtonAnimator; // @synthesize bottomButtonAnimator=_bottomButtonAnimator;
@property(retain, nonatomic) MMFinderLiveBottomButtonStyleManager *bottomButtonStyleManager; // @synthesize bottomButtonStyleManager=_bottomButtonStyleManager;
@property(retain, nonatomic) NSMutableDictionary *cachedTipsIdDict; // @synthesize cachedTipsIdDict=_cachedTipsIdDict;
@property(retain, nonatomic) NSMutableSet *reportedExposePathSet; // @synthesize reportedExposePathSet=_reportedExposePathSet;
@property(retain, nonatomic) WCFinderLiveStarterReporter *starterReporter; // @synthesize starterReporter=_starterReporter;
@property(retain, nonatomic) id <WCFinderRedDotInterfaceProtocol> redDotMgr; // @synthesize redDotMgr=_redDotMgr;
@property(retain, nonatomic) NSData *lastRecommendProductNotifyLastBuffer; // @synthesize lastRecommendProductNotifyLastBuffer=_lastRecommendProductNotifyLastBuffer;
@property(nonatomic) double productSizeAssistantPanelFoldedHeight; // @synthesize productSizeAssistantPanelFoldedHeight=_productSizeAssistantPanelFoldedHeight;
@property(copy, nonatomic) CDUnknownBlockType productSizeAssistantContentClickBlock; // @synthesize productSizeAssistantContentClickBlock=_productSizeAssistantContentClickBlock;
@property(copy, nonatomic) CDUnknownBlockType productSizeAssistantClickBlock; // @synthesize productSizeAssistantClickBlock=_productSizeAssistantClickBlock;
@property(copy, nonatomic) CDUnknownBlockType productSizeAssistantExposeBlock; // @synthesize productSizeAssistantExposeBlock=_productSizeAssistantExposeBlock;
@property(nonatomic) _Bool isProductSizeAssistantPanelExtended; // @synthesize isProductSizeAssistantPanelExtended=_isProductSizeAssistantPanelExtended;
@property(retain, nonatomic) FinderWindowProductInfo *productSizeAssistantProductInfo; // @synthesize productSizeAssistantProductInfo=_productSizeAssistantProductInfo;
@property(retain, nonatomic) FinderJumpInfo *productSizeAssistantPanelInfo; // @synthesize productSizeAssistantPanelInfo=_productSizeAssistantPanelInfo;
@property(retain, nonatomic) FinderJumpInfo *anchorRealtimeDataPanelInfo; // @synthesize anchorRealtimeDataPanelInfo=_anchorRealtimeDataPanelInfo;
@property(retain, nonatomic) FinderJumpInfo *liteAppCardInfo; // @synthesize liteAppCardInfo=_liteAppCardInfo;
@property(copy, nonatomic) CDUnknownBlockType getAllBottomButtonsQueryBlock; // @synthesize getAllBottomButtonsQueryBlock=_getAllBottomButtonsQueryBlock;
@property(copy, nonatomic) CDUnknownBlockType getBottomButtonQueryBlock; // @synthesize getBottomButtonQueryBlock=_getBottomButtonQueryBlock;
@property(retain, nonatomic) FinderLiveFunctionReminderNotificationInfo *reminderNotificationInfo; // @synthesize reminderNotificationInfo=_reminderNotificationInfo;
@property(nonatomic) _Bool isLiveRoomInteractiveHomePageTransitionEnable; // @synthesize isLiveRoomInteractiveHomePageTransitionEnable=_isLiveRoomInteractiveHomePageTransitionEnable;
@property(retain, nonatomic) MMFinderLiveSyncPromotionInfo *promotionInfo; // @synthesize promotionInfo=_promotionInfo;
@property(nonatomic) _Bool isLiveKTVSongButtonEnabled; // @synthesize isLiveKTVSongButtonEnabled=_isLiveKTVSongButtonEnabled;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *exposedGiftItem; // @synthesize exposedGiftItem=_exposedGiftItem;
@property(retain, nonatomic) MMFinderLivePackageGiftRecommendInfo *packageNewFreeGiftRecommendInfo; // @synthesize packageNewFreeGiftRecommendInfo=_packageNewFreeGiftRecommendInfo;
@property(retain, nonatomic) MMFinderLivePackageGiftRecommendInfo *packageExpireGiftRecommendInfo; // @synthesize packageExpireGiftRecommendInfo=_packageExpireGiftRecommendInfo;
@property(retain, nonatomic) MMFinderLivePackageGiftRecommendInfo *packageNewGiftRecommendInfo; // @synthesize packageNewGiftRecommendInfo=_packageNewGiftRecommendInfo;
@property(retain, nonatomic) MMFinderLiveRecommendUserSendGiftInfo *recommendUserSendGiftInfo; // @synthesize recommendUserSendGiftInfo=_recommendUserSendGiftInfo;
@property(retain, nonatomic) NSArray *brandLogoUrls; // @synthesize brandLogoUrls=_brandLogoUrls;
@property(retain, nonatomic) NSString *finderLiveLogoUrl; // @synthesize finderLiveLogoUrl=_finderLiveLogoUrl;
@property(nonatomic) _Bool canShowMultiPlayerPageControl; // @synthesize canShowMultiPlayerPageControl=_canShowMultiPlayerPageControl;
@property(retain, nonatomic) FinderLiveGiftWallInfo *giftWallInfo; // @synthesize giftWallInfo=_giftWallInfo;
@property(retain, nonatomic) FinderLiveRewardWishListInfo *rewardWishListInfo; // @synthesize rewardWishListInfo=_rewardWishListInfo;
@property(nonatomic) _Bool isTrialTimeExpand; // @synthesize isTrialTimeExpand=_isTrialTimeExpand;
@property(nonatomic) _Bool isLiveTrialTimeoutWhenJoinLive; // @synthesize isLiveTrialTimeoutWhenJoinLive=_isLiveTrialTimeoutWhenJoinLive;
@property(nonatomic) _Bool isLiveTrialTimeout; // @synthesize isLiveTrialTimeout=_isLiveTrialTimeout;
@property(nonatomic) unsigned long long livePaymentType; // @synthesize livePaymentType=_livePaymentType;
@property(nonatomic) _Bool isNeverJoinFanclub; // @synthesize isNeverJoinFanclub=_isNeverJoinFanclub;
@property(copy, nonatomic) NSString *gamePkgAppPath; // @synthesize gamePkgAppPath=_gamePkgAppPath;
@property(copy, nonatomic) NSString *gamePkgAppId; // @synthesize gamePkgAppId=_gamePkgAppId;
@property(copy, nonatomic) NSString *gameFrameSetRootId; // @synthesize gameFrameSetRootId=_gameFrameSetRootId;
@property(copy, nonatomic) NSString *playTogetherBubbleWording; // @synthesize playTogetherBubbleWording=_playTogetherBubbleWording;
@property(nonatomic) _Bool selfIsThreeDimensionalDirector; // @synthesize selfIsThreeDimensionalDirector=_selfIsThreeDimensionalDirector;
@property(nonatomic) _Bool liveInThreeDimensionalDirecting; // @synthesize liveInThreeDimensionalDirecting=_liveInThreeDimensionalDirecting;
@property(retain, nonatomic) FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo *threeDimensionalTipsInfo; // @synthesize threeDimensionalTipsInfo=_threeDimensionalTipsInfo;
@property(nonatomic) _Bool canGameButtonHighlightedByPromote; // @synthesize canGameButtonHighlightedByPromote=_canGameButtonHighlightedByPromote;
@property(nonatomic) _Bool canGameButtonHighlightedByTeamup; // @synthesize canGameButtonHighlightedByTeamup=_canGameButtonHighlightedByTeamup;
@property(nonatomic) _Bool isLiveGameButtonButtonHighLighted; // @synthesize isLiveGameButtonButtonHighLighted=_isLiveGameButtonButtonHighLighted;
@property(nonatomic) long long likeMode; // @synthesize likeMode=_likeMode;
@property(nonatomic) unsigned long long maxLikeCountOnce; // @synthesize maxLikeCountOnce=_maxLikeCountOnce;
@property(nonatomic) _Bool isShakeForLike; // @synthesize isShakeForLike=_isShakeForLike;
@property(retain, nonatomic) MMLiveLikeClapVoicePlayQueue *likeClapVoicePlayQueue; // @synthesize likeClapVoicePlayQueue=_likeClapVoicePlayQueue;
@property(retain, nonatomic) MMAudienceLiveLikePlayUtil *audienceLikePlayUtil; // @synthesize audienceLikePlayUtil=_audienceLikePlayUtil;
@property(retain, nonatomic) MMLiveLikePlayUtil *anchorLikePlayUtil; // @synthesize anchorLikePlayUtil=_anchorLikePlayUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *anchorlikeAnimationUtil; // @synthesize anchorlikeAnimationUtil=_anchorlikeAnimationUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *audienceOtherLikeAnimationUtil; // @synthesize audienceOtherLikeAnimationUtil=_audienceOtherLikeAnimationUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *audienceSelflikeAnimationUtil; // @synthesize audienceSelflikeAnimationUtil=_audienceSelflikeAnimationUtil;
@property(retain, nonatomic) MMFinderLiveLotteryDisplayLogic *lotteryDisplayLogic; // @synthesize lotteryDisplayLogic=_lotteryDisplayLogic;
@property(retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic; // @synthesize lotteryPacketDisplayLogic=_lotteryPacketDisplayLogic;
@property(retain, nonatomic) MMFinderLiveRewardFreeGiftManager *freeGiftManager; // @synthesize freeGiftManager=_freeGiftManager;
@property(retain, nonatomic) MMFinderLiveRewardRecievingLogic *rewardRecievingLogic; // @synthesize rewardRecievingLogic=_rewardRecievingLogic;
@property(retain, nonatomic) MMFinderLiveRewardSendingLogic *rewardSendingLogic; // @synthesize rewardSendingLogic=_rewardSendingLogic;
@property(retain, nonatomic) MMLiveHotAnimationViewModel *hotAnimationVM; // @synthesize hotAnimationVM=_hotAnimationVM;
@property(retain, nonatomic) FinderLiveAdInfo *liveAdInfo; // @synthesize liveAdInfo=_liveAdInfo;
@property(retain, nonatomic) FinderLiveCheerInfo *cheerInfo; // @synthesize cheerInfo=_cheerInfo;
@property(nonatomic) long long anchorPromoteButtonState; // @synthesize anchorPromoteButtonState=_anchorPromoteButtonState;
@property(nonatomic) long long liveToolsButtonState; // @synthesize liveToolsButtonState=_liveToolsButtonState;
@property(nonatomic) _Bool isLiveQuickSendGiftButtonEnabled; // @synthesize isLiveQuickSendGiftButtonEnabled=_isLiveQuickSendGiftButtonEnabled;
@property(nonatomic) _Bool isTestLiveMode; // @synthesize isTestLiveMode=_isTestLiveMode;
@property(nonatomic) _Bool isLiveMicTalkingEnabled; // @synthesize isLiveMicTalkingEnabled=_isLiveMicTalkingEnabled;
@property(nonatomic) _Bool isLiveMicTalkingButtonEnabled; // @synthesize isLiveMicTalkingButtonEnabled=_isLiveMicTalkingButtonEnabled;
@property(nonatomic) _Bool isLiveConnectMicButtonEnabled; // @synthesize isLiveConnectMicButtonEnabled=_isLiveConnectMicButtonEnabled;
@property(nonatomic) _Bool isLiveScreenSharingButtonEnableInited; // @synthesize isLiveScreenSharingButtonEnableInited=_isLiveScreenSharingButtonEnableInited;
@property(nonatomic) _Bool isLiveScreenSharingButtonEnabled; // @synthesize isLiveScreenSharingButtonEnabled=_isLiveScreenSharingButtonEnabled;
@property(nonatomic) _Bool isLiveRedPacketButtonEnabled; // @synthesize isLiveRedPacketButtonEnabled=_isLiveRedPacketButtonEnabled;
@property(nonatomic) _Bool isLiveLotteryButtonEnabled; // @synthesize isLiveLotteryButtonEnabled=_isLiveLotteryButtonEnabled;
@property(nonatomic) _Bool isLikeButtonEnabled; // @synthesize isLikeButtonEnabled=_isLikeButtonEnabled;
@property(nonatomic) _Bool isLiveGameButtonEnabled; // @synthesize isLiveGameButtonEnabled=_isLiveGameButtonEnabled;
@property(nonatomic) _Bool isLiveGiftButtonEnabled; // @synthesize isLiveGiftButtonEnabled=_isLiveGiftButtonEnabled;
@property(nonatomic) _Bool isLiveShoppingButtonEnabled; // @synthesize isLiveShoppingButtonEnabled=_isLiveShoppingButtonEnabled;
@property(nonatomic) _Bool isAnchorClapButtonEnabled; // @synthesize isAnchorClapButtonEnabled=_isAnchorClapButtonEnabled;
@property(nonatomic) _Bool isCameraOperationButtonEnabled; // @synthesize isCameraOperationButtonEnabled=_isCameraOperationButtonEnabled;
@property(nonatomic) _Bool isMusicSettingButtonEnabled; // @synthesize isMusicSettingButtonEnabled=_isMusicSettingButtonEnabled;
@property(nonatomic) _Bool canShowBottomButtons; // @synthesize canShowBottomButtons=_canShowBottomButtons;
@property(nonatomic) _Bool canShowShoppingButton; // @synthesize canShowShoppingButton=_canShowShoppingButton;
@property(nonatomic) _Bool canShowShoppingTips; // @synthesize canShowShoppingTips=_canShowShoppingTips;
@property(retain, nonatomic) FinderShopCouponInfo *currentDisplayCouponInfo; // @synthesize currentDisplayCouponInfo=_currentDisplayCouponInfo;
@property(retain, nonatomic) MMFinderLiveAdsItem *currentDisplayAdsItem; // @synthesize currentDisplayAdsItem=_currentDisplayAdsItem;
@property(retain, nonatomic) MMFinderLiveGoodsItem *currentDisplayGoodsItem; // @synthesize currentDisplayGoodsItem=_currentDisplayGoodsItem;
@property(retain, nonatomic) MMLiveVoteViewModel *voteVM; // @synthesize voteVM=_voteVM;
@property(nonatomic) _Bool isAssumingAudienceCommentEnabled; // @synthesize isAssumingAudienceCommentEnabled=_isAssumingAudienceCommentEnabled;
@property(nonatomic) _Bool isEditTopic; // @synthesize isEditTopic=_isEditTopic;
@property(nonatomic) _Bool liveRewardEnabled; // @synthesize liveRewardEnabled=_liveRewardEnabled;
@property(retain, nonatomic) NSString *liveOnlineCountStr; // @synthesize liveOnlineCountStr=_liveOnlineCountStr;
@property(retain, nonatomic) LiveOnlineInfo *onlineBarInfo; // @synthesize onlineBarInfo=_onlineBarInfo;
@property(nonatomic) _Bool shouldShowHeatValue; // @synthesize shouldShowHeatValue=_shouldShowHeatValue;
@property(nonatomic) _Bool isShouldShowNewHeatValueStyle; // @synthesize isShouldShowNewHeatValueStyle=_isShouldShowNewHeatValueStyle;
@property(nonatomic) unsigned long long paidUserCount; // @synthesize paidUserCount=_paidUserCount;
@property(retain, nonatomic) NSString *liveHeatValueStr; // @synthesize liveHeatValueStr=_liveHeatValueStr;
@property(nonatomic) unsigned long long heatValue; // @synthesize heatValue=_heatValue;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @synthesize rewardTotalAmountInHeat=_rewardTotalAmountInHeat;
@property(nonatomic) unsigned long long rewardWecoinCnt; // @synthesize rewardWecoinCnt=_rewardWecoinCnt;
@property(nonatomic) unsigned long long onlineViewCount; // @synthesize onlineViewCount=_onlineViewCount;
@property(nonatomic) unsigned long long ktvPlayerCount; // @synthesize ktvPlayerCount=_ktvPlayerCount;
@property(nonatomic) unsigned long long onlineUserCount; // @synthesize onlineUserCount=_onlineUserCount;
@property(nonatomic) _Bool isRestrictVideoRectMode; // @synthesize isRestrictVideoRectMode=_isRestrictVideoRectMode;
@property(nonatomic) _Bool shouldShowGameLiveAngelBtn; // @synthesize shouldShowGameLiveAngelBtn=_shouldShowGameLiveAngelBtn;
@property(nonatomic) _Bool isInputViewShowing; // @synthesize isInputViewShowing=_isInputViewShowing;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) _Bool canShowOperationUI; // @synthesize canShowOperationUI=_canShowOperationUI;
@property(nonatomic) _Bool isClearScreen; // @synthesize isClearScreen=_isClearScreen;
@property(nonatomic) _Bool didEnterLiveRoom; // @synthesize didEnterLiveRoom=_didEnterLiveRoom;
@property(nonatomic) _Bool didJoinLiveRoom; // @synthesize didJoinLiveRoom=_didJoinLiveRoom;
@property(nonatomic) unsigned int liveInfoExtFlag; // @synthesize liveInfoExtFlag=_liveInfoExtFlag;
@property(nonatomic) unsigned int liveExtFlag; // @synthesize liveExtFlag=_liveExtFlag;
@property(retain, nonatomic) MMFinderJoinLiveContext *joinLiveContext; // @synthesize joinLiveContext=_joinLiveContext;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak MMFinderLiveOperationView *operationView; // @synthesize operationView=_operationView;
- (void)setupLiteAppCardWith:(id)arg1;
- (void)enableStyleAnimationOnButtonWithType:(unsigned int)arg1;
- (id)getButtonStyleReportDictWithType:(unsigned int)arg1;
- (void)disableStyleAnimationOnButtonWithType:(unsigned int)arg1;
- (_Bool)canPlayAnimationOnButton:(unsigned int)arg1;
- (void)playLiveShoppingButtonBubblePAGIfCan;
- (id)getButtonWithType:(unsigned int)arg1;
- (void)bottomButtonShouldStartPlayAnimation:(unsigned int)arg1 animationType:(unsigned int)arg2 filePath:(id)arg3 animationWebUrl:(id)arg4 animationCompletion:(CDUnknownBlockType)arg5;
- (void)bottomButtonStyleDidChange:(unsigned int)arg1 iconResource:(id)arg2 bgResource:(id)arg3;
- (void)bottomButtonDefaultColorDidChange:(id)arg1;
- (void)reloadBottomButtonStyleForButtonType:(unsigned int)arg1;
- (void)reloadBottomButtonStyle;
- (void)reloadBottomButtonColor;
@property(readonly, nonatomic) UIColor *bottomButtonsBGColor;
- (id)getImageWithPath:(id)arg1 ext:(id)arg2 targetSize:(struct CGSize)arg3;
- (id)liveShoppingButtonBubblePAGPath;
- (void)updateLiveGameButtonHighLightStatus;
- (void)checkIfNeedForbidOrReleaseScroll;
- (void)initVoteVM;
- (void)handleCommentAssistantInfoChanged:(id)arg1;
- (void)onGetFinderLiveGameSysNotifyInfoWithTaskId:(id)arg1 gameSysNotifyInfo:(id)arg2;
- (void)onGetButtonStyleInfoWithTaskId:(id)arg1 buttonInfo:(id)arg2;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (void)onFinderLiveUpdateFinderCheerIconWithTaskId:(id)arg1 cheerInfo:(id)arg2;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 onlineMemberResult:(id)arg3;
- (id)reportDictAtPath:(id)arg1 mgr:(id)arg2 type:(unsigned long long)arg3;
- (void)_doReportRedDotWithPath:(id)arg1 dict:(id)arg2;
- (void)reportRedDotClickAtPath:(id)arg1 mgr:(id)arg2;
- (void)reportRedDotExposeAtPath:(id)arg1 mgr:(id)arg2;
- (void)clearReportRelatedCacheWithRedDotPathPrefix:(id)arg1;
- (id)allRedDotCtrlInfoAtPath:(id)arg1;
- (id)redDotCtrlInfoAtPath:(id)arg1;
- (id)redDotShowInfoAtPath:(id)arg1;
- (void)onRedDotExposedAtPaths:(id)arg1;
- (_Bool)_innerOnRedDotExposedAtPath:(id)arg1 fromMgr:(id)arg2 autoSave:(_Bool)arg3;
- (void)onRedDotExposedAtPath:(id)arg1;
- (void)onRedDotClickedAtPath:(id)arg1;
- (void)removeRedDotShowInfoAtPath:(id)arg1 fromMgr:(id)arg2 clearType:(int)arg3;
- (id)redDotMgrForPath:(id)arg1;
- (void)preloadRewardGiftList;
- (void)preloadRewardGiftListRandomInterval;
- (void)preloadRewardGiftListIfNeed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isLiveVotingEnabled;
- (void)unobserveAll;
- (void)observeKeyPath:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)checkAndUpdateLiveScreenSharingButtonEnabled;
- (void)updateLotteryAndRedPacketButtonEnabled;
- (void)onLiveFreeTalkStatusChanged;
- (void)onLiveConnectMicStatusChanged;
- (void)onLiveAnchorStatusUpdated:(id)arg1 preivousAnchorStatusItem:(id)arg2;
- (void)onLiveMessageReceived:(id)arg1 isFullLiveInfo:(_Bool)arg2 onlineCount:(unsigned int)arg3 onlineViewCount:(unsigned int)arg4 ktvPlayerCount:(unsigned int)arg5 isNeverJoinFanclub:(_Bool)arg6;
- (void)onExitLive;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onJoinLiveRoom:(id)arg1 finderDataItem:(id)arg2;
- (void)updateCheerInfo:(id)arg1 fromGetLiveMsg:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isLiveUnpaid;
- (long long)getLiveToolsButtonState;
@property(readonly, nonatomic) MMLiveLikeDataMgr *likeMgr;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

