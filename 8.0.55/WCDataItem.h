//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString, SnsWeAppInfo, WCActionInfo, WCAdvertiseInfo, WCAppInfo, WCContentItem, WCGameShareCardInfo, WCLiteAppInfo, WCLocationInfo, WCMicroMerchantFeedsGroup, WCMomentsFinderRecommendationInfo, WCMomentsFinderRecommendationPlaceholderContext, WCMomentsTemplateInfo, WCMusicInfo, WCObjectOperation, WCRecommendInfo, WCRedEnvelopesInfo, WCRedEnvelopesRewardInfo, WCStreamVideoInfo, WCTimelineExtBean, WCVideoFlowInfo, WCWeAppInfo;

@interface WCDataItem : NSObject
{
    NSString *m_cpKeyForContent;
    NSString *m_cpKeyForLikeUsers;
    _Bool m_isContentUnsafe;
    _Bool m_isLikeUsersUnsafe;
    unsigned int hash;
    WCTimelineExtBean *_extBean;
    _Bool noChange;
    _Bool _isBidirectionalFan;
    _Bool _likeFlag;
    _Bool _isRichText;
    _Bool _isSecurityVerified;
    _Bool _shouldErrorIgnoreForSpam;
    _Bool _isHiddenAdvertiseActionFloatTipView;
    _Bool _isNewDataSeparator;
    _Bool _isEarlierContentTipsItem;
    _Bool _canEditAfterDeleted;
    _Bool _reEditPlaceOnFirst;
    _Bool _isWeiShang;
    _Bool _isFromFav;
    _Bool _isStarred;
    _Bool _isPrivate;
    unsigned int contentAttributeBitSetFlag;
    int _cid;
    int _type;
    int _flag;
    unsigned int _createtime;
    int _contentDescShowType;
    int _contentDescScene;
    int _likeCount;
    int _commentCount;
    int _withCount;
    int _togetherCount;
    int _uploadErrType;
    unsigned int _extFlag;
    int _realLikeCount;
    int _realCommentCount;
    int _selfLikeCount;
    int _selfCommentCount;
    int _sightFolded;
    int _showFlag;
    int _sessionActionType;
    unsigned int _favLocalId;
    unsigned int _starGuidingFlags;
    unsigned int _finderSharingFlags;
    unsigned int _newlifeSharingFlags;
    NSArray *blackUsers;
    NSString *contentDescPattern;
    SnsWeAppInfo *snsWeAppInfo;
    NSArray *visibleUsers;
    NSString *_tid;
    NSString *_username;
    NSString *_nickname;
    NSString *_sourceUrl;
    NSString *_sourceUrl2;
    NSMutableDictionary *_extData;
    WCContentItem *_contentObj;
    WCAppInfo *_appInfo;
    NSString *_publicUserName;
    NSString *_sourceUserName;
    NSString *_sourceNickName;
    NSString *_contentDesc;
    WCActionInfo *_actionInfo;
    WCMusicInfo *_musicInfo;
    WCStreamVideoInfo *_streamVideoInfo;
    WCRedEnvelopesInfo *_redEnvelopesInfo;
    WCRedEnvelopesRewardInfo *_redEnvelopesRewardInfo;
    WCWeAppInfo *_weappInfo;
    WCLiteAppInfo *_liteappInfo;
    WCGameShareCardInfo *_gameShareCardInfo;
    NSMutableArray *_likeUsers;
    NSMutableArray *_commentUsers;
    NSMutableArray *_withUsers;
    NSMutableArray *_togetherUsers;
    long long _uploadErrSnsTipsCode;
    NSString *_uploadErrMsg;
    NSString *_uploadErrBtnUrl;
    NSString *_uploadErrBtnTitle;
    NSArray *_uploadErrTogetherUsernames;
    NSString *_statisticsData;
    WCLocationInfo *_locationInfo;
    NSMutableArray *_groupContactTags;
    NSMutableArray *_blackContactTags;
    WCObjectOperation *_objOperation;
    NSString *_shareOriginUrl;
    NSString *_shareOpenUrl;
    NSString *_jsAppId;
    NSMutableDictionary *_statParasDic;
    WCMomentsTemplateInfo *_templateInfo;
    WCAdvertiseInfo *_advertiseInfo;
    WCAdvertiseInfo *_atFriendAdvertiseInfo;
    NSData *_advertiseInfoNSCodingData;
    NSData *_atFriendAdvertiseInfoNSCodingData;
    WCRecommendInfo *_recommendInfo;
    NSString *_statExtStr;
    NSString *_canvasInfoXml;
    WCVideoFlowInfo *_videoFlowInfo;
    NSString *_draftID;
    NSString *_sessionID;
    WCMicroMerchantFeedsGroup *_wsGroup;
    long long _wsSellerType;
    long long _wsFeedType;
    long long _wsVideoSourceType;
    long long _placeholderType;
    NSMutableArray *_sharedGroupIDs;
    NSString *_discoveryContentDesc;
}

+ (id)dataItemWithPlaceholderType:(long long)arg1 tid:(id)arg2;
+ (void)processAfterAdDynamicParse:(id)arg1;
+ (id)fromServerObject:(id)arg1 advertiseInfo:(id)arg2 dynamicSnsObjXml:(id)arg3 dynamicAdXml:(id)arg4 dynamicAdInfoXml:(id)arg5;
+ (id)fromServerRecAdMsg:(id)arg1;
+ (void)addStatExtStr:(id)arg1 source:(unsigned int)arg2;
+ (id)fromServerRecObject:(id)arg1;
+ (id)fromServerADObject:(id)arg1;
+ (id)fromBGUserInfo:(id)arg1;
+ (void)encodeSightThumbToWxAMIfNeeded:(id)arg1 uploadMedia:(id)arg2 thumbData:(id)arg3;
+ (_Bool)saveSightVideoThumb:(id)arg1 uploadMedia:(id)arg2;
+ (id)fromUploadTask:(id)arg1;
+ (id)fromServerObject:(id)arg1 adDynamicXml:(id)arg2;
+ (id)fromServerObject:(id)arg1;
+ (id)fromPBCodingBuffer:(id)arg1;
+ (id)fromNSCodingBuffer:(id)arg1;
+ (id)trimPOIName:(id)arg1 city:(id)arg2 country:(id)arg3;
+ (void)initialize;
+ (void)PBArrayAdd_uploadErrSnsTipsCode;
+ (void)PBArrayAdd_isSecurityVerified;
+ (void)PBArrayAdd_newlifeSharingFlags;
+ (void)PBArrayAdd_gameShareCardInfo;
+ (void)PBArrayAdd_starGuidingFlags;
+ (void)PBArrayAdd_isStarred;
+ (void)PBArrayAdd_finderSharingFlags;
+ (void)PBArrayAdd_wsVideoSourceType;
+ (void)PBArrayAdd_wsFeedType;
+ (void)PBArrayAdd_wsSellerType;
+ (void)PBArrayAdd_uploadErrBtnTitle;
+ (void)PBArrayAdd_uploadErrBtnUrl;
+ (void)PBArrayAdd_templateInfo;
+ (void)PBArrayAdd_uploadErrTogetherUsernames;
+ (void)PBArrayAdd_togetherUsers;
+ (void)PBArrayAdd_togetherCount;
+ (void)PBArrayAdd_liteappInfo;
+ (void)PBArrayAdd_isWeiShang;
+ (void)PBArrayAdd_isRichText;
+ (void)PBArrayAdd_videoFlowInfo;
+ (void)PBArrayAdd_showFlag;
+ (void)PBArrayAdd_sightFolded;
+ (void)PBArrayAdd_canvasInfoXml;
+ (void)PBArrayAdd_statExtStr;
+ (void)PBArrayAdd_recommendInfo;
+ (void)PBArrayAdd_selfCommentCount;
+ (void)PBArrayAdd_selfLikeCount;
+ (void)PBArrayAdd_realCommentCount;
+ (void)PBArrayAdd_realLikeCount;
+ (void)PBArrayAdd_statParasDic;
+ (void)PBArrayAdd_jsAppId;
+ (void)PBArrayAdd_shareOpenUrl;
+ (void)PBArrayAdd_shareOriginUrl;
+ (void)PBArrayAdd_objOperation;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_atFriendAdvertiseInfoNSCodingData;
+ (void)PBArrayAdd_advertiseInfoNSCodingData;
+ (void)PBArrayAdd_locationInfo;
+ (void)PBArrayAdd_statisticsData;
+ (void)PBArrayAdd_shouldErrorIgnoreForSpam;
+ (void)PBArrayAdd_uploadErrMsg;
+ (void)PBArrayAdd_uploadErrType;
+ (void)PBArrayAdd_extData;
+ (void)PBArrayAdd_sharedGroupIDs;
+ (void)PBArrayAdd_isBidirectionalFan;
+ (void)PBArrayAdd_weappInfo;
+ (void)PBArrayAdd_redEnvelopesRewardInfo;
+ (void)PBArrayAdd_redEnvelopesInfo;
+ (void)PBArrayAdd_streamVideoInfo;
+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_actionInfo;
+ (void)PBArrayAdd_contentDescScene;
+ (void)PBArrayAdd_contentDescShowType;
+ (void)PBArrayAdd_contentDesc;
+ (void)PBArrayAdd_sourceNickName;
+ (void)PBArrayAdd_sourceUserName;
+ (void)PBArrayAdd_publicUserName;
+ (void)PBArrayAdd_appInfo;
+ (void)PBArrayAdd_contentObj;
+ (void)PBArrayAdd_withUsers;
+ (void)PBArrayAdd_withCount;
+ (void)PBArrayAdd_commentUsers;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_likeUsers;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_isPrivate;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_sourceUrl2;
+ (void)PBArrayAdd_sourceUrl;
+ (void)PBArrayAdd_createtime;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_flag;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_cid;
- (void).cxx_destruct;
@property(nonatomic) unsigned int newlifeSharingFlags; // @synthesize newlifeSharingFlags=_newlifeSharingFlags;
@property(nonatomic) unsigned int finderSharingFlags; // @synthesize finderSharingFlags=_finderSharingFlags;
@property(retain, nonatomic) NSString *discoveryContentDesc; // @synthesize discoveryContentDesc=_discoveryContentDesc;
@property(retain, nonatomic) NSMutableArray *sharedGroupIDs; // @synthesize sharedGroupIDs=_sharedGroupIDs;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property(nonatomic) unsigned int starGuidingFlags; // @synthesize starGuidingFlags=_starGuidingFlags;
@property(nonatomic) _Bool isStarred; // @synthesize isStarred=_isStarred;
@property(nonatomic) unsigned int favLocalId; // @synthesize favLocalId=_favLocalId;
@property(nonatomic) _Bool isFromFav; // @synthesize isFromFav=_isFromFav;
@property(nonatomic) long long wsVideoSourceType; // @synthesize wsVideoSourceType=_wsVideoSourceType;
@property(nonatomic) long long wsFeedType; // @synthesize wsFeedType=_wsFeedType;
@property(nonatomic) long long wsSellerType; // @synthesize wsSellerType=_wsSellerType;
@property(retain, nonatomic) WCMicroMerchantFeedsGroup *wsGroup; // @synthesize wsGroup=_wsGroup;
@property(nonatomic) _Bool isWeiShang; // @synthesize isWeiShang=_isWeiShang;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int sessionActionType; // @synthesize sessionActionType=_sessionActionType;
@property(copy, nonatomic) NSString *draftID; // @synthesize draftID=_draftID;
@property(nonatomic) _Bool reEditPlaceOnFirst; // @synthesize reEditPlaceOnFirst=_reEditPlaceOnFirst;
@property(nonatomic) _Bool canEditAfterDeleted; // @synthesize canEditAfterDeleted=_canEditAfterDeleted;
@property(nonatomic) _Bool isEarlierContentTipsItem; // @synthesize isEarlierContentTipsItem=_isEarlierContentTipsItem;
@property(nonatomic) _Bool isNewDataSeparator; // @synthesize isNewDataSeparator=_isNewDataSeparator;
@property(nonatomic) _Bool isHiddenAdvertiseActionFloatTipView; // @synthesize isHiddenAdvertiseActionFloatTipView=_isHiddenAdvertiseActionFloatTipView;
@property(retain, nonatomic) WCVideoFlowInfo *videoFlowInfo; // @synthesize videoFlowInfo=_videoFlowInfo;
@property(nonatomic) int showFlag; // @synthesize showFlag=_showFlag;
@property(nonatomic) int sightFolded; // @synthesize sightFolded=_sightFolded;
@property(retain, nonatomic) NSString *canvasInfoXml; // @synthesize canvasInfoXml=_canvasInfoXml;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr=_statExtStr;
@property(retain, nonatomic) WCRecommendInfo *recommendInfo; // @synthesize recommendInfo=_recommendInfo;
@property(nonatomic) int selfCommentCount; // @synthesize selfCommentCount=_selfCommentCount;
@property(nonatomic) int selfLikeCount; // @synthesize selfLikeCount=_selfLikeCount;
@property(nonatomic) int realCommentCount; // @synthesize realCommentCount=_realCommentCount;
@property(nonatomic) int realLikeCount; // @synthesize realLikeCount=_realLikeCount;
@property(retain, nonatomic) NSData *atFriendAdvertiseInfoNSCodingData; // @synthesize atFriendAdvertiseInfoNSCodingData=_atFriendAdvertiseInfoNSCodingData;
@property(retain, nonatomic) NSData *advertiseInfoNSCodingData; // @synthesize advertiseInfoNSCodingData=_advertiseInfoNSCodingData;
@property(retain, nonatomic) WCAdvertiseInfo *atFriendAdvertiseInfo; // @synthesize atFriendAdvertiseInfo=_atFriendAdvertiseInfo;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(retain, nonatomic) WCMomentsTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) NSMutableDictionary *statParasDic; // @synthesize statParasDic=_statParasDic;
@property(retain, nonatomic) NSString *jsAppId; // @synthesize jsAppId=_jsAppId;
@property(retain, nonatomic) NSString *shareOpenUrl; // @synthesize shareOpenUrl=_shareOpenUrl;
@property(retain, nonatomic) NSString *shareOriginUrl; // @synthesize shareOriginUrl=_shareOriginUrl;
@property(retain, nonatomic) WCObjectOperation *objOperation; // @synthesize objOperation=_objOperation;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag=_extFlag;
@property(retain, nonatomic) NSMutableArray *blackContactTags; // @synthesize blackContactTags=_blackContactTags;
@property(retain, nonatomic) NSMutableArray *groupContactTags; // @synthesize groupContactTags=_groupContactTags;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) NSString *statisticsData; // @synthesize statisticsData=_statisticsData;
@property(nonatomic) _Bool shouldErrorIgnoreForSpam; // @synthesize shouldErrorIgnoreForSpam=_shouldErrorIgnoreForSpam;
@property(copy, nonatomic) NSArray *uploadErrTogetherUsernames; // @synthesize uploadErrTogetherUsernames=_uploadErrTogetherUsernames;
@property(retain, nonatomic) NSString *uploadErrBtnTitle; // @synthesize uploadErrBtnTitle=_uploadErrBtnTitle;
@property(retain, nonatomic) NSString *uploadErrBtnUrl; // @synthesize uploadErrBtnUrl=_uploadErrBtnUrl;
@property(retain, nonatomic) NSString *uploadErrMsg; // @synthesize uploadErrMsg=_uploadErrMsg;
@property(nonatomic) long long uploadErrSnsTipsCode; // @synthesize uploadErrSnsTipsCode=_uploadErrSnsTipsCode;
@property(nonatomic) _Bool isSecurityVerified; // @synthesize isSecurityVerified=_isSecurityVerified;
@property(nonatomic) int uploadErrType; // @synthesize uploadErrType=_uploadErrType;
@property(nonatomic) _Bool isRichText; // @synthesize isRichText=_isRichText;
@property(retain, nonatomic) NSMutableArray *togetherUsers; // @synthesize togetherUsers=_togetherUsers;
@property(nonatomic) int togetherCount; // @synthesize togetherCount=_togetherCount;
@property(retain, nonatomic) NSMutableArray *withUsers; // @synthesize withUsers=_withUsers;
@property(nonatomic) int withCount; // @synthesize withCount=_withCount;
@property(retain, nonatomic) NSMutableArray *commentUsers; // @synthesize commentUsers=_commentUsers;
@property(nonatomic) int commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSMutableArray *likeUsers; // @synthesize likeUsers=_likeUsers;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool likeFlag; // @synthesize likeFlag=_likeFlag;
@property(retain, nonatomic) WCGameShareCardInfo *gameShareCardInfo; // @synthesize gameShareCardInfo=_gameShareCardInfo;
@property(retain, nonatomic) WCLiteAppInfo *liteappInfo; // @synthesize liteappInfo=_liteappInfo;
@property(retain, nonatomic) WCWeAppInfo *weappInfo; // @synthesize weappInfo=_weappInfo;
@property(retain, nonatomic) WCRedEnvelopesRewardInfo *redEnvelopesRewardInfo; // @synthesize redEnvelopesRewardInfo=_redEnvelopesRewardInfo;
@property(retain, nonatomic) WCRedEnvelopesInfo *redEnvelopesInfo; // @synthesize redEnvelopesInfo=_redEnvelopesInfo;
@property(retain, nonatomic) WCStreamVideoInfo *streamVideoInfo; // @synthesize streamVideoInfo=_streamVideoInfo;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) WCActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(nonatomic) int contentDescScene; // @synthesize contentDescScene=_contentDescScene;
@property(nonatomic) int contentDescShowType; // @synthesize contentDescShowType=_contentDescShowType;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc=_contentDesc;
@property(retain, nonatomic) NSString *sourceNickName; // @synthesize sourceNickName=_sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName=_sourceUserName;
@property(retain, nonatomic) NSString *publicUserName; // @synthesize publicUserName=_publicUserName;
@property(retain, nonatomic) WCAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) WCContentItem *contentObj; // @synthesize contentObj=_contentObj;
@property(nonatomic) _Bool isBidirectionalFan; // @synthesize isBidirectionalFan=_isBidirectionalFan;
@property(nonatomic) unsigned int createtime; // @synthesize createtime=_createtime;
@property(retain, nonatomic) NSMutableDictionary *extData; // @synthesize extData=_extData;
@property(retain, nonatomic) NSString *sourceUrl2; // @synthesize sourceUrl2=_sourceUrl2;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) int cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSArray *visibleUsers; // @synthesize visibleUsers;
@property(retain, nonatomic) SnsWeAppInfo *snsWeAppInfo; // @synthesize snsWeAppInfo;
@property(nonatomic) _Bool isLikeUsersUnsafe; // @synthesize isLikeUsersUnsafe=m_isLikeUsersUnsafe;
@property(nonatomic) _Bool isContentUnsafe; // @synthesize isContentUnsafe=m_isContentUnsafe;
@property(retain, nonatomic) NSString *cpKeyForLikeUsers; // @synthesize cpKeyForLikeUsers=m_cpKeyForLikeUsers;
@property(retain, nonatomic) NSString *cpKeyForContent; // @synthesize cpKeyForContent=m_cpKeyForContent;
@property(nonatomic) _Bool noChange; // @synthesize noChange;
@property(retain, nonatomic) NSString *contentDescPattern; // @synthesize contentDescPattern;
@property(nonatomic) unsigned int contentAttributeBitSetFlag; // @synthesize contentAttributeBitSetFlag;
@property(retain, nonatomic) NSArray *blackUsers; // @synthesize blackUsers;
- (_Bool)hasValidStreamVideo;
- (_Bool)saveSightData:(id)arg1 forMediaItemAtIndex:(long long)arg2;
- (id)sightCompositeTaskOfMediaItemAtIndex:(long long)arg1;
- (void)clearExtBean;
@property(retain, nonatomic) WCTimelineExtBean *extBean; // @synthesize extBean=_extBean;
- (void)prettyLogCommentListWithlogPrefix:(id)arg1;
- (_Bool)commentMayBeDifferentWithOther:(id)arg1;
- (void)clearExpiredDeltedByFeedOwnerComment;
- (void)mergeCommentListWithLocalFeed:(id)arg1;
- (void)mergeWithDeletedComment:(id)arg1 isDeletedByFeedOwner:(_Bool)arg2;
- (_Bool)isFeedOfMine;
- (id)shortDebugString;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)debugTag;
@property(readonly, nonatomic) _Bool isWsFeedType;
- (_Bool)containWSGroupItem;
- (_Bool)isValidWsFeed;
- (_Bool)isFold;
- (_Bool)shouldShowSourceForAppID:(id)arg1;
- (unsigned long long)finderShareItem:(id)arg1 dispalySourceContent:(id *)arg2 outputSourceUrl:(id *)arg3;
- (unsigned long long)getDispalySourceContent:(id *)arg1 outputSourceUrl:(id *)arg2 outputSourceBackupUrl:(id *)arg3;
- (_Bool)enableEmptyTextForward;
- (id)findMediaItemById:(id)arg1;
- (id)getNeedBatchDownloadMedias;
- (_Bool)canUseBatchThumbDownload;
- (id)getUnDownloadThumbMedias;
- (_Bool)isAdvertiserFirstLikeForUserComment:(id)arg1;
- (void)setAtAdvertsierInfoForUserComment:(id)arg1;
- (void)setAtAdvertsierInfo;
- (_Bool)hasPreloadVideoTask;
- (void)dumpLikeAndCommentInfo;
- (void)dumpAllCommentInDebugMode;
- (void)printSimpleInfo;
- (_Bool)isContentOriginal;
- (unsigned int)countOfLikeAndCommentPeopleIncludeMyself:(_Bool)arg1;
- (unsigned int)countOfCommentPeopleIncludeMyself:(_Bool)arg1;
- (unsigned int)countOfLikePeopleIncludeMyself:(_Bool)arg1;
- (int)getStatExtAdType;
- (id)genAdWeAppSceneNote;
- (_Bool)isLinkAdForbidFav;
- (id)getAdUserNickName;
- (unsigned int)getAdType;
- (_Bool)isAdvertiseMediaHigherThanNickLabel;
- (_Bool)shouldShowMediaIcon;
- (_Bool)shouldGetSizeForAdvertiseMedia;
- (_Bool)isLinkAd;
- (_Bool)isDynamicFeedAd;
- (_Bool)isCombinedGridAd;
- (_Bool)isSliderCardAd;
- (_Bool)isFinderTopicAd;
- (_Bool)isFinderFeedAd;
- (unsigned int)fetchRealAdLikeCount;
- (unsigned int)fetchRealAdCommentCount;
- (_Bool)isTwistCardAd;
- (_Bool)isSphereCardAd;
- (_Bool)isFullCardAd;
- (_Bool)isSelectCardAd;
- (_Bool)isCardAd;
- (_Bool)shouldReportVideoInfo;
- (_Bool)isVideoAd;
- (_Bool)isPhotoAd;
- (_Bool)isAd;
- (_Bool)isVideo;
- (_Bool)isTypeThatSupportsLivePhoto;
- (_Bool)hasLivePhoto;
- (_Bool)isPhoto;
- (_Bool)isAdOrOpenIM;
- (int)getSnsABTestType;
- (void)parseContentForNetWithDataItem:(id)arg1;
- (void)parseContentForUI;
- (_Bool)checkExtDataPatternTopicFuncValid;
- (void)identifyPatternTopicFuncIfNeed;
- (void)parsePattern;
- (void)loadPattern;
- (long long)compareTime:(id)arg1;
- (_Bool)validateContent:(_Bool)arg1;
- (_Bool)isValid;
- (void)mergeMessage:(id)arg1 needParseContent:(_Bool)arg2;
- (void)mergeMessage:(id)arg1 currentAction:(id)arg2;
- (void)mergeRewardItem:(id)arg1;
- (void)updateBySnsAdNotInterestsMsg:(id)arg1;
- (void)addNewMessage:(id)arg1 inTargetMessages:(id)arg2;
- (void)mergeLikeUsers:(id)arg1;
- (id)getMediaWraps;
- (_Bool)isAdvertiserFirstLikeStyle;
- (long long)indexOfFirstBossComment;
- (_Bool)isAdvertiserFirstCommentStyle;
- (_Bool)isAtAdvertiserStyle;
- (_Bool)isAtAbleAdvertise;
- (void)loadPropertiesFromUploadTask:(id)arg1;
- (_Bool)isShareDataCompleted;
- (_Bool)isRead;
- (void)setIsUploadFailed:(_Bool)arg1;
- (_Bool)isUploadFailed;
- (_Bool)isCommentForMe;
- (_Bool)isLikeForMe;
@property(readonly, nonatomic) _Bool isLocal;
- (_Bool)isUploading;
- (void)afterPBCoderProcess;
- (void)beforePBCoderProcess;
- (id)toBufferWithABTest:(_Bool)arg1;
- (id)toPBCodingBuffer;
- (id)toNSCodingBuffer;
- (void)setHash:(unsigned long long)arg1;
@property(readonly) unsigned long long hash;
- (void)setSequence:(id)arg1;
- (void)setCreateTime:(unsigned int)arg1;
- (id)getDisplayCity;
- (id)sequence;
- (int)itemType;
- (id)itemID;
@property(readonly, copy) NSString *description;
- (id)descriptionForKeyPaths;
- (id)keyPaths;
- (long long)compareDesc:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)upgradeFromCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool isCopyingEnabled;
@property(readonly, nonatomic) _Bool isBlocked;
@property(readonly, nonatomic) _Bool exceedsVisibleTimeRange;
- (id)privacyDescription;
- (void)updateShareScopeWithVisibilityChangeOp:(id)arg1;
- (long long)getPrivacy;
- (_Bool)shouldLoadContactData;
- (_Bool)hasBlackTagList;
- (_Bool)hasBlackContactList;
- (_Bool)hasGroupTagList;
- (_Bool)hasGroupContactList;
- (_Bool)hasSharedGroup;
- (_Bool)isMine;
- (id)getPBPropertyTable;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(retain, nonatomic) WCMomentsFinderRecommendationPlaceholderContext *finderRecommendationPlaceholderContext;
@property(retain, nonatomic) WCMomentsFinderRecommendationInfo *finderRecommendationInfo;
@property(readonly, copy, nonatomic) NSString *extInfoFromMiaoJianApp;
@property(readonly, nonatomic) _Bool isFromMiaoJianApp;
- (_Bool)VoipRecentStatus_isVideoType;
- (_Bool)VoipRecentStatus_isPhotoType;
- (_Bool)VoipRecentStatus_isTextType;
- (_Bool)VoipRecentStatus_isLegal;

// Remaining properties
@property(readonly) Class superclass;

@end

