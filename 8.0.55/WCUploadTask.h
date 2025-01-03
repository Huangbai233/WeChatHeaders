//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicShareItem, NSDate, NSMutableArray, NSMutableDictionary, NSString, SnsObject, SnsWeAppInfo, TingShareCategoryItem, TingShareListenItem, TingShareLyricsItem, UserOpInfo, WCActionInfo, WCAppInfo, WCAppMsgShareInfo, WCBrandMpVideoItem, WCDataItem, WCFinderContentColumnSharedItem, WCFinderLiveShareItem, WCFinderShareItemContainer, WCFinderShareToMomentsItem, WCFinderThemeLiveStreamShareItem, WCFinderTopicShareItem, WCGameShareCardInfo, WCLiteAppInfo, WCLocationInfo, WCMegaVideoShareItem, WCMomentsDragonInfo, WCMomentsPostReportSession, WCMomentsRabbitInfo, WCMomentsTemplateInfo, WCMomentsTigerInfo, WCMusicInfo, WCNoteInfo, WCSightVideoCompositeTask, WCStreamVideoInfo, WCTimelineExtBean, WCVideoFlowInfo, WCWeAppInfo;

@interface WCUploadTask : NSObject
{
    NSString *serverID;
    NSString *clientID;
    int type;
    _Bool isPrivate;
    NSMutableArray *sharedGroupIDs;
    _Bool isSyncToWeibo;
    _Bool isSyncToFacebook;
    _Bool isSyncToTwitter;
    _Bool isSyncToQZone;
    NSString *statisticsData;
    WCLocationInfo *locationInfo;
    SnsWeAppInfo *snsWeAppInfo;
    NSString *linkUrl;
    NSString *title;
    NSString *desc;
    NSString *contentDesc;
    int contentDescShowType;
    int contentDescScene;
    unsigned int contentAttributeBitSetFlag;
    WCAppInfo *appInfo;
    WCActionInfo *actionInfo;
    WCMusicInfo *musicInfo;
    WCStreamVideoInfo *streaVideoInfo;
    WCWeAppInfo *weappInfo;
    NSString *sourceUserName;
    NSString *sourceNickName;
    NSMutableArray *groupUserList;
    NSMutableArray *blackUserList;
    NSMutableArray *withUserList;
    NSMutableArray *mediaList;
    SnsObject *snsObj;
    WCDataItem *dataItem;
    NSDate *createTime;
    long long uploadResult;
    long long BGImgSetType;
    _Bool isUploadFailed;
    int postSource;
    NSString *twitterOAuthToken;
    NSString *twitterOAuthTokenSecret;
    _Bool isDeleted;
    UserOpInfo *opInfo;
    int sightFolded;
    int showFlag;
    WCNoteInfo *noteInfo;
    WCVideoFlowInfo *videoFlowInfo;
    WCAppMsgShareInfo *appMsgShareInfo;
    WCGameShareCardInfo *gameShareCardInfo;
    _Bool _isPending;
    int _pendingBusinessType;
    unsigned int _pendingTime;
    int _sessionActionType;
    NSMutableArray *togetherUserList;
    long long uploadFailedCount;
    WCStreamVideoInfo *streamVideoInfo;
    NSString *shareOriginUrl;
    NSString *shareOpenUrl;
    NSString *jsAppId;
    NSMutableDictionary *statParasDic;
    NSString *statExtStr;
    NSString *canvasInfoXml;
    WCDataItem *_postedDataItem;
    WCMomentsTemplateInfo *_templateInfo;
    NSMutableArray *_groupContactTags;
    NSMutableArray *_blackContactTags;
    unsigned long long _tempUserCount;
    unsigned long long _contactTagCount;
    WCFinderShareToMomentsItem *_finderShareToMomentsItem;
    WCFinderTopicShareItem *_finderTopicShareItem;
    WCFinderContentColumnSharedItem *_finderContentColumnSharedItem;
    WCBrandMpVideoItem *_brandMpVideoItem;
    WCMegaVideoShareItem *_finderLongVideoShareItem;
    WCFinderLiveShareItem *_finderLiveShareItem;
    WCFinderShareItemContainer *_finderShareItem;
    MMMusicShareItem *_musicShareItem;
    WCLiteAppInfo *_liteappInfo;
    WCFinderThemeLiveStreamShareItem *_finderThemeLiveShareItem;
    WCMomentsTigerInfo *_tigerInfo;
    WCMomentsRabbitInfo *_rabbitInfo;
    WCMomentsDragonInfo *_dragonInfo;
    TingShareListenItem *_tingListenItem;
    TingShareCategoryItem *_tingCategoryItem;
    TingShareLyricsItem *_tingLyricsItem;
    NSString *_pendingTaskId;
    NSString *_sessionID;
    WCTimelineExtBean *_extBean;
    NSString *_postCycleId;
    WCMomentsPostReportSession *_postReportSession;
    NSString *_RISKY_savedSightCompositeTaskId;
    WCSightVideoCompositeTask *_cachedSightCompositeTask;
}

+ (_Bool)isPendingBusinessValid:(int)arg1;
+ (id)getBusinessTypeStr:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSightVideoCompositeTask *cachedSightCompositeTask; // @synthesize cachedSightCompositeTask=_cachedSightCompositeTask;
@property(retain, nonatomic) NSString *RISKY_savedSightCompositeTaskId; // @synthesize RISKY_savedSightCompositeTaskId=_RISKY_savedSightCompositeTaskId;
@property(retain, nonatomic) WCMomentsPostReportSession *postReportSession; // @synthesize postReportSession=_postReportSession;
@property(retain, nonatomic) NSString *postCycleId; // @synthesize postCycleId=_postCycleId;
@property(retain, nonatomic) WCTimelineExtBean *extBean; // @synthesize extBean=_extBean;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int sessionActionType; // @synthesize sessionActionType=_sessionActionType;
@property(nonatomic) unsigned int pendingTime; // @synthesize pendingTime=_pendingTime;
@property(retain, nonatomic) NSString *pendingTaskId; // @synthesize pendingTaskId=_pendingTaskId;
@property(nonatomic) int pendingBusinessType; // @synthesize pendingBusinessType=_pendingBusinessType;
@property(nonatomic) _Bool isPending; // @synthesize isPending=_isPending;
@property(retain, nonatomic) TingShareLyricsItem *tingLyricsItem; // @synthesize tingLyricsItem=_tingLyricsItem;
@property(retain, nonatomic) TingShareCategoryItem *tingCategoryItem; // @synthesize tingCategoryItem=_tingCategoryItem;
@property(retain, nonatomic) TingShareListenItem *tingListenItem; // @synthesize tingListenItem=_tingListenItem;
@property(retain, nonatomic) WCMomentsDragonInfo *dragonInfo; // @synthesize dragonInfo=_dragonInfo;
@property(retain, nonatomic) WCMomentsRabbitInfo *rabbitInfo; // @synthesize rabbitInfo=_rabbitInfo;
@property(retain, nonatomic) WCMomentsTigerInfo *tigerInfo; // @synthesize tigerInfo=_tigerInfo;
@property(retain, nonatomic) WCFinderThemeLiveStreamShareItem *finderThemeLiveShareItem; // @synthesize finderThemeLiveShareItem=_finderThemeLiveShareItem;
@property(retain, nonatomic) WCLiteAppInfo *liteappInfo; // @synthesize liteappInfo=_liteappInfo;
@property(retain, nonatomic) MMMusicShareItem *musicShareItem; // @synthesize musicShareItem=_musicShareItem;
@property(retain, nonatomic) WCFinderShareItemContainer *finderShareItem; // @synthesize finderShareItem=_finderShareItem;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem; // @synthesize finderLiveShareItem=_finderLiveShareItem;
@property(retain, nonatomic) WCMegaVideoShareItem *finderLongVideoShareItem; // @synthesize finderLongVideoShareItem=_finderLongVideoShareItem;
@property(retain, nonatomic) WCBrandMpVideoItem *brandMpVideoItem; // @synthesize brandMpVideoItem=_brandMpVideoItem;
@property(retain, nonatomic) WCFinderContentColumnSharedItem *finderContentColumnSharedItem; // @synthesize finderContentColumnSharedItem=_finderContentColumnSharedItem;
@property(retain, nonatomic) WCFinderTopicShareItem *finderTopicShareItem; // @synthesize finderTopicShareItem=_finderTopicShareItem;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareToMomentsItem; // @synthesize finderShareToMomentsItem=_finderShareToMomentsItem;
@property(nonatomic) unsigned long long contactTagCount; // @synthesize contactTagCount=_contactTagCount;
@property(nonatomic) unsigned long long tempUserCount; // @synthesize tempUserCount=_tempUserCount;
@property(retain, nonatomic) NSMutableArray *blackContactTags; // @synthesize blackContactTags=_blackContactTags;
@property(retain, nonatomic) NSMutableArray *groupContactTags; // @synthesize groupContactTags=_groupContactTags;
@property(retain, nonatomic) WCMomentsTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) WCDataItem *postedDataItem; // @synthesize postedDataItem=_postedDataItem;
@property(retain, nonatomic) WCGameShareCardInfo *gameShareCardInfo; // @synthesize gameShareCardInfo;
@property(retain, nonatomic) SnsWeAppInfo *snsWeAppInfo; // @synthesize snsWeAppInfo;
@property(retain, nonatomic) WCAppMsgShareInfo *appMsgShareInfo; // @synthesize appMsgShareInfo;
@property(retain, nonatomic) WCVideoFlowInfo *videoFlowInfo; // @synthesize videoFlowInfo;
@property(retain, nonatomic) WCNoteInfo *noteInfo; // @synthesize noteInfo;
@property(nonatomic) int showFlag; // @synthesize showFlag;
@property(nonatomic) int sightFolded; // @synthesize sightFolded;
@property(retain, nonatomic) NSString *canvasInfoXml; // @synthesize canvasInfoXml;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr;
@property(retain, nonatomic) UserOpInfo *opInfo; // @synthesize opInfo;
@property(retain, nonatomic) NSMutableDictionary *statParasDic; // @synthesize statParasDic;
@property(retain, nonatomic) NSString *jsAppId; // @synthesize jsAppId;
@property(retain, nonatomic) NSString *shareOpenUrl; // @synthesize shareOpenUrl;
@property(retain, nonatomic) NSString *shareOriginUrl; // @synthesize shareOriginUrl;
@property(retain, nonatomic) NSMutableArray *groupUserList; // @synthesize groupUserList;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted;
@property(retain, nonatomic) NSMutableArray *blackUserList; // @synthesize blackUserList;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo;
@property(retain, nonatomic) WCStreamVideoInfo *streamVideoInfo; // @synthesize streamVideoInfo;
@property(retain, nonatomic) WCWeAppInfo *weappInfo; // @synthesize weappInfo;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo;
@property(retain, nonatomic) WCActionInfo *actionInfo; // @synthesize actionInfo;
@property(retain, nonatomic) NSString *statisticsData; // @synthesize statisticsData;
@property(retain, nonatomic) NSString *twitterOAuthTokenSecret; // @synthesize twitterOAuthTokenSecret;
@property(retain, nonatomic) NSString *twitterOAuthToken; // @synthesize twitterOAuthToken;
@property(nonatomic) int postSource; // @synthesize postSource;
@property(retain, nonatomic) NSMutableArray *sharedGroupIDs; // @synthesize sharedGroupIDs;
@property(nonatomic) long long uploadFailedCount; // @synthesize uploadFailedCount;
@property(nonatomic) _Bool isUploadFailed; // @synthesize isUploadFailed;
@property(nonatomic) long long BGImgSetType; // @synthesize BGImgSetType;
@property(nonatomic) unsigned int contentAttributeBitSetFlag; // @synthesize contentAttributeBitSetFlag;
@property(nonatomic) int contentDescScene; // @synthesize contentDescScene;
@property(nonatomic) int contentDescShowType; // @synthesize contentDescShowType;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc;
@property(retain, nonatomic) NSString *sourceNickName; // @synthesize sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName;
@property(retain, nonatomic) WCAppInfo *appInfo; // @synthesize appInfo;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem;
@property(nonatomic) long long uploadResult; // @synthesize uploadResult;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime;
@property(retain, nonatomic) SnsObject *snsObj; // @synthesize snsObj;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList;
@property(retain, nonatomic) NSMutableArray *togetherUserList; // @synthesize togetherUserList;
@property(retain, nonatomic) NSMutableArray *withUserList; // @synthesize withUserList;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) _Bool isSyncToQZone; // @synthesize isSyncToQZone;
@property(nonatomic) _Bool isSyncToTwitter; // @synthesize isSyncToTwitter;
@property(nonatomic) _Bool isSyncToFacebook; // @synthesize isSyncToFacebook;
@property(nonatomic) _Bool isSyncToWeibo; // @synthesize isSyncToWeibo;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID;
- (void)clearPendingTempResourceFile;
- (void)createPendingTempResourceFile;
- (void)resetUnPending;
- (void)setOriginal:(_Bool)arg1;
- (void)setDeleted;
- (id)description;
- (void)setUploadFailedStatus:(_Bool)arg1;
- (void)updateUploadState:(long long)arg1;
- (void)removeCachedSightCompositeTaskAtIndex:(long long)arg1;
- (id)getCachedSightCompositeTaskAtIndex:(long long)arg1;
- (void)setCachedSightCompositeTask:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isLocationValide;
- (void)addThumbForPrevMedia:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

