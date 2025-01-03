//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WCFinderLiteAppInfo;

@interface WCFinderDynamicConfigModel : NSObject
{
    _Bool _enableShowSuggestTagView;
    _Bool _enableShowFinderCommentBlacklist;
    _Bool _useLowCompressMethod;
    _Bool _markReadOpenController;
    _Bool _statsReportOpenController;
    _Bool _preFetchStreamSwitch;
    _Bool _dynamicFinderSwitch;
    _Bool _commentToProfile;
    _Bool _refuseAllPrivateMsgSwitch;
    _Bool _useLiveNearPeople;
    _Bool _showWindowProduct;
    _Bool _dynamicFinderLiveNewEntranceSwitch;
    _Bool _dynamicFinderWXProfileAuthInfoSwitch;
    _Bool _openShareListFeedsIgnoreLimited;
    _Bool _dynamicFinderLiveEntryOnTopSearch;
    _Bool _checkVideoEditFromMiaoJian;
    _Bool _openCheckAntiAddictSwitch;
    _Bool _enableShowShareRelatedWhenYoungContentLimit;
    _Bool _joinLiveInvisiableSwitch;
    _Bool _finderLiveFeedbackNotInterestedSwitch;
    _Bool _musicEventUseHighlights;
    _Bool _forbidPostMediaGPSInfo;
    _Bool _enableProfileRedPacketEvent;
    _Bool _enablePostSelectRedPacket;
    _Bool _isShowFinderMiniAppReferenceEntry;
    _Bool _clubEntranceDarkLaunch;
    _Bool _clubFeedCanPostInLongPress;
    _Bool _enablePostWithMpUrlSwitch;
    _Bool _enableShakeUnreadCountToTab;
    _Bool _enableStoriesUnreadCountToTab;
    _Bool _enableFinderUnreadCountToTab;
    _Bool _enableFinderCameraPreload;
    _Bool _enableShowWXMentionSwitchEntry;
    _Bool _profileUseHeaderCGI;
    unsigned long long _maxTopicCount;
    unsigned long long _maxMentionSbCount;
    double _feedImageCompressRate;
    double _headImageCompressRate;
    double _profileImageCompressRate;
    double _coverImageCompressRate;
    double _thumbImageCompressRate;
    double _musicImageCompressRate;
    double _photoMaxSize;
    double _thumbMaxSize;
    double _coverMaxSize;
    double _headMaxSize;
    double _profileMaxSize;
    NSString *_feedCompressResolution;
    NSString *_headCompressResolution;
    NSString *_profileCompressResolution;
    unsigned long long _coverFrameRate;
    unsigned long long _uploadLargeFileSize;
    NSString *_finderDisableBrandIdentityTips;
    unsigned long long _POIJumpType;
    unsigned long long _maxPreloadTaskCount;
    NSMutableDictionary *_functionSpamDic;
    NSString *_extMiniappPrefix;
    NSString *_originalCertificateUrl;
    NSString *_topicInputStopTokenList;
    NSString *_mentionInputStopTokenList;
    unsigned long long _postTextMaxLimit;
    NSString *_vEditorAppId;
    unsigned long long _nearByVCCacheTimestamp;
    NSString *_thumbCompressResolution;
    unsigned long long _cropFullFeedHeightMaxResolution;
    long long _prefetchFilterMinFeedCount;
    long long _profilePreLoadUserPageWaitSec;
    NSString *_miaoJianAppId;
    NSString *_miaoJianAppstoreSchemePublishEntry;
    NSString *_miaoJianUniversalLink;
    NSString *_miaoJianAppstoreSchemeSameStyle;
    NSString *_miaojianMetaKey;
    NSString *_finderLimitedModeConfig;
    NSString *_shopMiniAppId;
    NSString *_shopMiniAppPath;
    unsigned long long _antiAddictInterval;
    unsigned long long _antiAddictDarkStartTime;
    unsigned long long _antiAddictDarkEndTime;
    unsigned long long _antiAddictSyncLocalInterval;
    unsigned long long _localSearchContactUpdateIntervalInSec;
    unsigned long long _ringToneVideoDurationLimit;
    unsigned long long _finderStayReportCountLimit;
    NSString *_tencentVideoChooseLink;
    WCFinderLiteAppInfo *_postLinkVideoLiteAppParams;
    unsigned long long _editImageMusicMaxSize;
    unsigned long long _finderCreateLimitCount;
    unsigned long long _finderPersonalMsgMaxGreetCount;
    NSString *_coverCompressResolution;
    NSString *_originRuleUrl;
    unsigned long long _postLowBitRate;
    NSString *_extensionLinkDomains;
    unsigned long long _postRecommendMinDuration;
    NSDictionary *_snsEntrySwitch;
    unsigned long long _shortMaxLimit;
    unsigned long long _postCGIRetryMaxCount;
    unsigned long long _longCompressRetryMaxCount;
    unsigned long long _showShortTextViewLimitCount;
    NSMutableArray *_postShortValidArray;
    unsigned long long _batchFetchFeedsMaxCount;
    NSArray *_postPenaltyUnicodeArray;
    unsigned long long _remindCommentTextMaxLimit;
    unsigned long long _commentTextMaxLimit;
    unsigned long long _commentInputMaxLineWrap;
    NSArray *_finderSyncRedDotPathList;
    NSArray *_liveSyncRedDotPathList;
    long long _myTabEntranceType;
    NSString *_originalStatementAppId;
    NSString *_originalStatementPage;
    NSString *_feedReportAppId;
    NSString *_feedReportAppPage;
    NSString *_originStateUrl;
    unsigned long long _snsShareShortVideoMinDuration;
    long long _postConfirmCGIMinDuration;
    unsigned long long _streamPreloadProfileTimeInterval;
    NSString *_adCommentApplyURL;
    long long _audioTrackLoadDuration;
    NSString *_originalDeclareHelpUrl;
    NSString *_originalEduRewardLiteAppId;
    NSString *_originalEduRewardLitePath;
    NSString *_originalStateLieAppId;
    NSString *_originalStateLieAppPath;
    NSString *_profileOriginalUserAppId;
    NSString *_profileOriginalUserPath;
    unsigned long long _originalRecommendLabelShowCount;
    unsigned long long _headSizeLimit;
    NSString *_postInterestsAppId;
    NSString *_postInterestsAppPath;
    NSString *_commentPostAddShopAppPath;
    NSString *_groupBuyRuleUrl;
    NSString *_promotionShopAppId;
    NSString *_promotionShopAppPath;
    NSString *_createRedPacketMiniAppId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *createRedPacketMiniAppId; // @synthesize createRedPacketMiniAppId=_createRedPacketMiniAppId;
@property(copy, nonatomic) NSString *promotionShopAppPath; // @synthesize promotionShopAppPath=_promotionShopAppPath;
@property(copy, nonatomic) NSString *promotionShopAppId; // @synthesize promotionShopAppId=_promotionShopAppId;
@property(copy, nonatomic) NSString *groupBuyRuleUrl; // @synthesize groupBuyRuleUrl=_groupBuyRuleUrl;
@property(copy, nonatomic) NSString *commentPostAddShopAppPath; // @synthesize commentPostAddShopAppPath=_commentPostAddShopAppPath;
@property(copy, nonatomic) NSString *postInterestsAppPath; // @synthesize postInterestsAppPath=_postInterestsAppPath;
@property(copy, nonatomic) NSString *postInterestsAppId; // @synthesize postInterestsAppId=_postInterestsAppId;
@property(nonatomic) unsigned long long headSizeLimit; // @synthesize headSizeLimit=_headSizeLimit;
@property(nonatomic) unsigned long long originalRecommendLabelShowCount; // @synthesize originalRecommendLabelShowCount=_originalRecommendLabelShowCount;
@property(copy, nonatomic) NSString *profileOriginalUserPath; // @synthesize profileOriginalUserPath=_profileOriginalUserPath;
@property(copy, nonatomic) NSString *profileOriginalUserAppId; // @synthesize profileOriginalUserAppId=_profileOriginalUserAppId;
@property(copy, nonatomic) NSString *originalStateLieAppPath; // @synthesize originalStateLieAppPath=_originalStateLieAppPath;
@property(copy, nonatomic) NSString *originalStateLieAppId; // @synthesize originalStateLieAppId=_originalStateLieAppId;
@property(copy, nonatomic) NSString *originalEduRewardLitePath; // @synthesize originalEduRewardLitePath=_originalEduRewardLitePath;
@property(copy, nonatomic) NSString *originalEduRewardLiteAppId; // @synthesize originalEduRewardLiteAppId=_originalEduRewardLiteAppId;
@property(copy, nonatomic) NSString *originalDeclareHelpUrl; // @synthesize originalDeclareHelpUrl=_originalDeclareHelpUrl;
@property(nonatomic) long long audioTrackLoadDuration; // @synthesize audioTrackLoadDuration=_audioTrackLoadDuration;
@property(copy, nonatomic) NSString *adCommentApplyURL; // @synthesize adCommentApplyURL=_adCommentApplyURL;
@property(nonatomic) unsigned long long streamPreloadProfileTimeInterval; // @synthesize streamPreloadProfileTimeInterval=_streamPreloadProfileTimeInterval;
@property(nonatomic) _Bool profileUseHeaderCGI; // @synthesize profileUseHeaderCGI=_profileUseHeaderCGI;
@property(nonatomic) long long postConfirmCGIMinDuration; // @synthesize postConfirmCGIMinDuration=_postConfirmCGIMinDuration;
@property(nonatomic) _Bool enableShowWXMentionSwitchEntry; // @synthesize enableShowWXMentionSwitchEntry=_enableShowWXMentionSwitchEntry;
@property(nonatomic) unsigned long long snsShareShortVideoMinDuration; // @synthesize snsShareShortVideoMinDuration=_snsShareShortVideoMinDuration;
@property(copy, nonatomic) NSString *originStateUrl; // @synthesize originStateUrl=_originStateUrl;
@property(nonatomic) _Bool enableFinderCameraPreload; // @synthesize enableFinderCameraPreload=_enableFinderCameraPreload;
@property(copy, nonatomic) NSString *feedReportAppPage; // @synthesize feedReportAppPage=_feedReportAppPage;
@property(copy, nonatomic) NSString *feedReportAppId; // @synthesize feedReportAppId=_feedReportAppId;
@property(copy, nonatomic) NSString *originalStatementPage; // @synthesize originalStatementPage=_originalStatementPage;
@property(copy, nonatomic) NSString *originalStatementAppId; // @synthesize originalStatementAppId=_originalStatementAppId;
@property(nonatomic) _Bool enableFinderUnreadCountToTab; // @synthesize enableFinderUnreadCountToTab=_enableFinderUnreadCountToTab;
@property(nonatomic) _Bool enableStoriesUnreadCountToTab; // @synthesize enableStoriesUnreadCountToTab=_enableStoriesUnreadCountToTab;
@property(nonatomic) _Bool enableShakeUnreadCountToTab; // @synthesize enableShakeUnreadCountToTab=_enableShakeUnreadCountToTab;
@property(nonatomic) _Bool enablePostWithMpUrlSwitch; // @synthesize enablePostWithMpUrlSwitch=_enablePostWithMpUrlSwitch;
@property(nonatomic) long long myTabEntranceType; // @synthesize myTabEntranceType=_myTabEntranceType;
@property(copy, nonatomic) NSArray *liveSyncRedDotPathList; // @synthesize liveSyncRedDotPathList=_liveSyncRedDotPathList;
@property(copy, nonatomic) NSArray *finderSyncRedDotPathList; // @synthesize finderSyncRedDotPathList=_finderSyncRedDotPathList;
@property(nonatomic) unsigned long long commentInputMaxLineWrap; // @synthesize commentInputMaxLineWrap=_commentInputMaxLineWrap;
@property(nonatomic) unsigned long long commentTextMaxLimit; // @synthesize commentTextMaxLimit=_commentTextMaxLimit;
@property(nonatomic) unsigned long long remindCommentTextMaxLimit; // @synthesize remindCommentTextMaxLimit=_remindCommentTextMaxLimit;
@property(copy, nonatomic) NSArray *postPenaltyUnicodeArray; // @synthesize postPenaltyUnicodeArray=_postPenaltyUnicodeArray;
@property(nonatomic) unsigned long long batchFetchFeedsMaxCount; // @synthesize batchFetchFeedsMaxCount=_batchFetchFeedsMaxCount;
@property(retain, nonatomic) NSMutableArray *postShortValidArray; // @synthesize postShortValidArray=_postShortValidArray;
@property(nonatomic) unsigned long long showShortTextViewLimitCount; // @synthesize showShortTextViewLimitCount=_showShortTextViewLimitCount;
@property(nonatomic) unsigned long long longCompressRetryMaxCount; // @synthesize longCompressRetryMaxCount=_longCompressRetryMaxCount;
@property(nonatomic) unsigned long long postCGIRetryMaxCount; // @synthesize postCGIRetryMaxCount=_postCGIRetryMaxCount;
@property(nonatomic) unsigned long long shortMaxLimit; // @synthesize shortMaxLimit=_shortMaxLimit;
@property(retain, nonatomic) NSDictionary *snsEntrySwitch; // @synthesize snsEntrySwitch=_snsEntrySwitch;
@property(nonatomic) unsigned long long postRecommendMinDuration; // @synthesize postRecommendMinDuration=_postRecommendMinDuration;
@property(copy, nonatomic) NSString *extensionLinkDomains; // @synthesize extensionLinkDomains=_extensionLinkDomains;
@property(nonatomic) unsigned long long postLowBitRate; // @synthesize postLowBitRate=_postLowBitRate;
@property(copy, nonatomic) NSString *originRuleUrl; // @synthesize originRuleUrl=_originRuleUrl;
@property(nonatomic) _Bool clubFeedCanPostInLongPress; // @synthesize clubFeedCanPostInLongPress=_clubFeedCanPostInLongPress;
@property(nonatomic) _Bool clubEntranceDarkLaunch; // @synthesize clubEntranceDarkLaunch=_clubEntranceDarkLaunch;
@property(nonatomic) _Bool isShowFinderMiniAppReferenceEntry; // @synthesize isShowFinderMiniAppReferenceEntry=_isShowFinderMiniAppReferenceEntry;
@property(nonatomic) _Bool enablePostSelectRedPacket; // @synthesize enablePostSelectRedPacket=_enablePostSelectRedPacket;
@property(nonatomic) _Bool enableProfileRedPacketEvent; // @synthesize enableProfileRedPacketEvent=_enableProfileRedPacketEvent;
@property(copy, nonatomic) NSString *coverCompressResolution; // @synthesize coverCompressResolution=_coverCompressResolution;
@property(nonatomic) unsigned long long finderPersonalMsgMaxGreetCount; // @synthesize finderPersonalMsgMaxGreetCount=_finderPersonalMsgMaxGreetCount;
@property(nonatomic) unsigned long long finderCreateLimitCount; // @synthesize finderCreateLimitCount=_finderCreateLimitCount;
@property(nonatomic) _Bool forbidPostMediaGPSInfo; // @synthesize forbidPostMediaGPSInfo=_forbidPostMediaGPSInfo;
@property(nonatomic) _Bool musicEventUseHighlights; // @synthesize musicEventUseHighlights=_musicEventUseHighlights;
@property(nonatomic) _Bool finderLiveFeedbackNotInterestedSwitch; // @synthesize finderLiveFeedbackNotInterestedSwitch=_finderLiveFeedbackNotInterestedSwitch;
@property(nonatomic) _Bool joinLiveInvisiableSwitch; // @synthesize joinLiveInvisiableSwitch=_joinLiveInvisiableSwitch;
@property(nonatomic) unsigned long long editImageMusicMaxSize; // @synthesize editImageMusicMaxSize=_editImageMusicMaxSize;
@property(retain, nonatomic) WCFinderLiteAppInfo *postLinkVideoLiteAppParams; // @synthesize postLinkVideoLiteAppParams=_postLinkVideoLiteAppParams;
@property(copy, nonatomic) NSString *tencentVideoChooseLink; // @synthesize tencentVideoChooseLink=_tencentVideoChooseLink;
@property(nonatomic) unsigned long long finderStayReportCountLimit; // @synthesize finderStayReportCountLimit=_finderStayReportCountLimit;
@property(nonatomic) _Bool enableShowShareRelatedWhenYoungContentLimit; // @synthesize enableShowShareRelatedWhenYoungContentLimit=_enableShowShareRelatedWhenYoungContentLimit;
@property(nonatomic) unsigned long long ringToneVideoDurationLimit; // @synthesize ringToneVideoDurationLimit=_ringToneVideoDurationLimit;
@property(nonatomic) unsigned long long localSearchContactUpdateIntervalInSec; // @synthesize localSearchContactUpdateIntervalInSec=_localSearchContactUpdateIntervalInSec;
@property(nonatomic) unsigned long long antiAddictSyncLocalInterval; // @synthesize antiAddictSyncLocalInterval=_antiAddictSyncLocalInterval;
@property(nonatomic) unsigned long long antiAddictDarkEndTime; // @synthesize antiAddictDarkEndTime=_antiAddictDarkEndTime;
@property(nonatomic) unsigned long long antiAddictDarkStartTime; // @synthesize antiAddictDarkStartTime=_antiAddictDarkStartTime;
@property(nonatomic) _Bool openCheckAntiAddictSwitch; // @synthesize openCheckAntiAddictSwitch=_openCheckAntiAddictSwitch;
@property(nonatomic) unsigned long long antiAddictInterval; // @synthesize antiAddictInterval=_antiAddictInterval;
@property(copy, nonatomic) NSString *shopMiniAppPath; // @synthesize shopMiniAppPath=_shopMiniAppPath;
@property(copy, nonatomic) NSString *shopMiniAppId; // @synthesize shopMiniAppId=_shopMiniAppId;
@property(copy, nonatomic) NSString *finderLimitedModeConfig; // @synthesize finderLimitedModeConfig=_finderLimitedModeConfig;
@property(nonatomic) _Bool checkVideoEditFromMiaoJian; // @synthesize checkVideoEditFromMiaoJian=_checkVideoEditFromMiaoJian;
@property(copy, nonatomic) NSString *miaojianMetaKey; // @synthesize miaojianMetaKey=_miaojianMetaKey;
@property(nonatomic) _Bool dynamicFinderLiveEntryOnTopSearch; // @synthesize dynamicFinderLiveEntryOnTopSearch=_dynamicFinderLiveEntryOnTopSearch;
@property(nonatomic) _Bool openShareListFeedsIgnoreLimited; // @synthesize openShareListFeedsIgnoreLimited=_openShareListFeedsIgnoreLimited;
@property(nonatomic) _Bool dynamicFinderWXProfileAuthInfoSwitch; // @synthesize dynamicFinderWXProfileAuthInfoSwitch=_dynamicFinderWXProfileAuthInfoSwitch;
@property(nonatomic) _Bool dynamicFinderLiveNewEntranceSwitch; // @synthesize dynamicFinderLiveNewEntranceSwitch=_dynamicFinderLiveNewEntranceSwitch;
@property(nonatomic) _Bool showWindowProduct; // @synthesize showWindowProduct=_showWindowProduct;
@property(copy, nonatomic) NSString *miaoJianAppstoreSchemeSameStyle; // @synthesize miaoJianAppstoreSchemeSameStyle=_miaoJianAppstoreSchemeSameStyle;
@property(copy, nonatomic) NSString *miaoJianUniversalLink; // @synthesize miaoJianUniversalLink=_miaoJianUniversalLink;
@property(copy, nonatomic) NSString *miaoJianAppstoreSchemePublishEntry; // @synthesize miaoJianAppstoreSchemePublishEntry=_miaoJianAppstoreSchemePublishEntry;
@property(copy, nonatomic) NSString *miaoJianAppId; // @synthesize miaoJianAppId=_miaoJianAppId;
@property(nonatomic) long long profilePreLoadUserPageWaitSec; // @synthesize profilePreLoadUserPageWaitSec=_profilePreLoadUserPageWaitSec;
@property(nonatomic) long long prefetchFilterMinFeedCount; // @synthesize prefetchFilterMinFeedCount=_prefetchFilterMinFeedCount;
@property(nonatomic) unsigned long long cropFullFeedHeightMaxResolution; // @synthesize cropFullFeedHeightMaxResolution=_cropFullFeedHeightMaxResolution;
@property(nonatomic) _Bool useLiveNearPeople; // @synthesize useLiveNearPeople=_useLiveNearPeople;
@property(copy, nonatomic) NSString *thumbCompressResolution; // @synthesize thumbCompressResolution=_thumbCompressResolution;
@property(nonatomic) unsigned long long nearByVCCacheTimestamp; // @synthesize nearByVCCacheTimestamp=_nearByVCCacheTimestamp;
@property(copy, nonatomic) NSString *vEditorAppId; // @synthesize vEditorAppId=_vEditorAppId;
@property(nonatomic) unsigned long long postTextMaxLimit; // @synthesize postTextMaxLimit=_postTextMaxLimit;
@property(copy, nonatomic) NSString *mentionInputStopTokenList; // @synthesize mentionInputStopTokenList=_mentionInputStopTokenList;
@property(copy, nonatomic) NSString *topicInputStopTokenList; // @synthesize topicInputStopTokenList=_topicInputStopTokenList;
@property(copy, nonatomic) NSString *originalCertificateUrl; // @synthesize originalCertificateUrl=_originalCertificateUrl;
@property(nonatomic) _Bool refuseAllPrivateMsgSwitch; // @synthesize refuseAllPrivateMsgSwitch=_refuseAllPrivateMsgSwitch;
@property(copy, nonatomic) NSString *extMiniappPrefix; // @synthesize extMiniappPrefix=_extMiniappPrefix;
@property(retain, nonatomic) NSMutableDictionary *functionSpamDic; // @synthesize functionSpamDic=_functionSpamDic;
@property(nonatomic) unsigned long long maxPreloadTaskCount; // @synthesize maxPreloadTaskCount=_maxPreloadTaskCount;
@property(nonatomic) _Bool commentToProfile; // @synthesize commentToProfile=_commentToProfile;
@property(nonatomic) unsigned long long POIJumpType; // @synthesize POIJumpType=_POIJumpType;
@property(nonatomic) _Bool dynamicFinderSwitch; // @synthesize dynamicFinderSwitch=_dynamicFinderSwitch;
@property(copy, nonatomic) NSString *finderDisableBrandIdentityTips; // @synthesize finderDisableBrandIdentityTips=_finderDisableBrandIdentityTips;
@property(nonatomic) _Bool preFetchStreamSwitch; // @synthesize preFetchStreamSwitch=_preFetchStreamSwitch;
@property(nonatomic) unsigned long long uploadLargeFileSize; // @synthesize uploadLargeFileSize=_uploadLargeFileSize;
@property(nonatomic) _Bool statsReportOpenController; // @synthesize statsReportOpenController=_statsReportOpenController;
@property(nonatomic) _Bool markReadOpenController; // @synthesize markReadOpenController=_markReadOpenController;
@property(nonatomic) _Bool useLowCompressMethod; // @synthesize useLowCompressMethod=_useLowCompressMethod;
@property(nonatomic) unsigned long long coverFrameRate; // @synthesize coverFrameRate=_coverFrameRate;
@property(copy, nonatomic) NSString *profileCompressResolution; // @synthesize profileCompressResolution=_profileCompressResolution;
@property(copy, nonatomic) NSString *headCompressResolution; // @synthesize headCompressResolution=_headCompressResolution;
@property(copy, nonatomic) NSString *feedCompressResolution; // @synthesize feedCompressResolution=_feedCompressResolution;
@property(nonatomic) double profileMaxSize; // @synthesize profileMaxSize=_profileMaxSize;
@property(nonatomic) double headMaxSize; // @synthesize headMaxSize=_headMaxSize;
@property(nonatomic) double coverMaxSize; // @synthesize coverMaxSize=_coverMaxSize;
@property(nonatomic) double thumbMaxSize; // @synthesize thumbMaxSize=_thumbMaxSize;
@property(nonatomic) double photoMaxSize; // @synthesize photoMaxSize=_photoMaxSize;
@property(nonatomic) double musicImageCompressRate; // @synthesize musicImageCompressRate=_musicImageCompressRate;
@property(nonatomic) double thumbImageCompressRate; // @synthesize thumbImageCompressRate=_thumbImageCompressRate;
@property(nonatomic) double coverImageCompressRate; // @synthesize coverImageCompressRate=_coverImageCompressRate;
@property(nonatomic) double profileImageCompressRate; // @synthesize profileImageCompressRate=_profileImageCompressRate;
@property(nonatomic) double headImageCompressRate; // @synthesize headImageCompressRate=_headImageCompressRate;
@property(nonatomic) double feedImageCompressRate; // @synthesize feedImageCompressRate=_feedImageCompressRate;
@property(nonatomic) _Bool enableShowFinderCommentBlacklist; // @synthesize enableShowFinderCommentBlacklist=_enableShowFinderCommentBlacklist;
@property(nonatomic) _Bool enableShowSuggestTagView; // @synthesize enableShowSuggestTagView=_enableShowSuggestTagView;
@property(nonatomic) unsigned long long maxMentionSbCount; // @synthesize maxMentionSbCount=_maxMentionSbCount;
@property(nonatomic) unsigned long long maxTopicCount; // @synthesize maxTopicCount=_maxTopicCount;
- (void)reportFinderSwitchType;
- (_Bool)firstPrefetchIgnoreIntevalConf;
- (void)parseFunctionSpamConfig;
- (void)updateMentionStopToken;
- (void)updatePostShortValidToken;
- (void)updateTopicStopToken;
- (void)updatePostPenaltyUnicodeArray;
- (id)getConfigStringForKey:(id)arg1 defaultString:(id)arg2;
- (void)updateSnsEntrySwitch;
- (void)updateRedDotSyncPathInfo;
- (void)_updateDynamicConfig;
- (void)updateDynamicConfig;
- (id)init;

@end

