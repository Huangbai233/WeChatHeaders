//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class CContact, NSArray, NSData, NSMutableDictionary, NSNumber, NSString, PrivateInfo, PublicInfo, StatusEmoji, StatusLocation, TextStatePublishReportObject;
@protocol TextState3rdPartyHandler;

@interface TextStateModel
{
    _Bool _expireFlag;
    _Bool _isLocal;
    _Bool _initByAffDb;
    _Bool _hasHb;
    _Bool _hasParsed3rdPartyHandler;
    _Bool _deleteFlag;
    unsigned int _mediaType;
    int _mediaWidth;
    int _mediaHeight;
    unsigned int _visibility;
    unsigned int _iconType;
    unsigned int _createTime;
    unsigned int _expireTime;
    unsigned int _serverCreateTime;
    unsigned int _publishScene;
    unsigned int _modifyTime;
    unsigned int _sequence;
    NSString *_textStateDescription;
    StatusEmoji *_emojiInfo;
    NSData *_rawData;
    NSData *_privateInfoData;
    NSData *_publicInfoData;
    NSString *_textStateId;
    NSString *_username;
    NSString *_positionName;
    NSString *_positionId;
    NSString *_city;
    NSString *_locale;
    NSString *_mediaURL;
    NSString *_mediaAESKey;
    NSString *_mediaThumbURL;
    NSString *_mediaThumbAESKey;
    NSString *_backgroundId;
    NSString *_topicId;
    NSArray *_topicList;
    NSString *_sourceId;
    NSString *_sourceActivityId;
    NSString *_sourceName;
    NSString *_sourceIconURL;
    NSArray *_jumpInfos;
    NSArray *_sourceJumpInfos;
    NSString *_iconId;
    NSString *_verifyInfo;
    NSArray *_serverBlackContactUsernames;
    NSArray *_privacyContactBlackList;
    long long _privacy;
    NSArray *_privacyLabelList;
    NSArray *_privacyContactNameList;
    unsigned long long _option;
    NSArray *_privacyDynamicLabelIdList;
    NSArray *_iconActions;
    NSString *_customIconDescription;
    NSString *_referenceUsername;
    NSString *_referenceTextStateId;
    NSString *_followUsername;
    NSString *_followTextStateId;
    NSString *_brandKeyInfo;
    NSArray *_jumpElements;
    NSString *_clientMessageId;
    NSNumber *_interactionNumber;
    NSNumber *_commentNumber;
    NSNumber *_likedNumber;
    StatusLocation *_location;
    NSString *_distance;
    NSString *_publishErrorMessage;
    TextStatePublishReportObject *_publishReportObject;
    CContact *_associateContact;
    NSString *_summary;
    NSArray *_medias;
    unsigned long long _mediaDuration;
    double _contentScore;
    NSArray *_serverJumpElements;
    NSString *_redPacketId;
    PrivateInfo *_privateInfo;
    PublicInfo *_publicInfo;
    id <TextState3rdPartyHandler> _thirdPartyHandler;
    NSString *_superLongText;
    StatusEmoji *_coexistEmojiInfo;
    NSMutableDictionary *_keyToJumpElementDict;
    NSArray *_clusterPresentList;
    NSString *_richTextDescription;
    struct CGPoint _positionCoordinate;
}

+ (id)generateTempTextStateId;
+ (_Bool)isTextStateIdLocalCache:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_contentScore;
+ (void)PBArrayAdd_mediaDuration;
+ (void)PBArrayAdd_medias;
+ (void)PBArrayAdd_locale;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_serverBlackContactUsernames;
+ (void)PBArrayAdd_clusterPresentList;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_privacyDynamicLabelIdList;
+ (void)PBArrayAdd_clientMessageId;
+ (void)PBArrayAdd_coexistEmojiInfo;
+ (void)PBArrayAdd_superLongText;
+ (void)PBArrayAdd_sequence;
+ (void)PBArrayAdd_serverJumpElements;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_brandKeyInfo;
+ (void)PBArrayAdd_followTextStateId;
+ (void)PBArrayAdd_followUsername;
+ (void)PBArrayAdd_serverCreateTime;
+ (void)PBArrayAdd_modifyTime;
+ (void)PBArrayAdd_iconActions;
+ (void)PBArrayAdd_sourceJumpInfos;
+ (void)PBArrayAdd_publishScene;
+ (void)PBArrayAdd_referenceTextStateId;
+ (void)PBArrayAdd_referenceUsername;
+ (void)PBArrayAdd_privacyContactNameList;
+ (void)PBArrayAdd_privacyLabelList;
+ (void)PBArrayAdd_privacy;
+ (void)PBArrayAdd_emojiInfo;
+ (void)PBArrayAdd_customIconDescription;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_jumpInfos;
+ (void)PBArrayAdd_publishReportObject;
+ (void)PBArrayAdd_publishErrorMessage;
+ (void)PBArrayAdd_backgroundId;
+ (void)PBArrayAdd_verifyInfo;
+ (void)PBArrayAdd_option;
+ (void)PBArrayAdd_privacyContactBlackList;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_textStateDescription;
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_sourceIconURL;
+ (void)PBArrayAdd_sourceName;
+ (void)PBArrayAdd_sourceActivityId;
+ (void)PBArrayAdd_sourceId;
+ (void)PBArrayAdd_topicList;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_visibility;
+ (void)PBArrayAdd_mediaThumbAESKey;
+ (void)PBArrayAdd_mediaThumbURL;
+ (void)PBArrayAdd_mediaAESKey;
+ (void)PBArrayAdd_mediaURL;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_positionId;
+ (void)PBArrayAdd_positionName;
+ (void)PBArrayAdd_positionCoordinate;
+ (void)PBArrayAdd_textStateId;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)swift_publicInfoData;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)publicInfoData;
+ (id)swift_privateInfoData;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)privateInfoData;
+ (id)swift_deleteFlag;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)deleteFlag;
+ (id)swift_expireFlag;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)expireFlag;
+ (id)swift_rawData;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)rawData;
+ (id)swift_sequence;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)sequence;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_modifyTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)modifyTime;
+ (id)swift_serverCreateTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)serverCreateTime;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_sourceName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)sourceName;
+ (id)swift_sourceId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)sourceId;
+ (id)swift_iconId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)iconId;
+ (id)swift_textStateId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)textStateId;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (id)myCurrentStatus;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *richTextDescription; // @synthesize richTextDescription=_richTextDescription;
@property(retain, nonatomic) NSArray *clusterPresentList; // @synthesize clusterPresentList=_clusterPresentList;
@property(retain, nonatomic) NSMutableDictionary *keyToJumpElementDict; // @synthesize keyToJumpElementDict=_keyToJumpElementDict;
@property(retain, nonatomic) StatusEmoji *coexistEmojiInfo; // @synthesize coexistEmojiInfo=_coexistEmojiInfo;
@property(retain, nonatomic) NSString *superLongText; // @synthesize superLongText=_superLongText;
@property(nonatomic) _Bool deleteFlag; // @synthesize deleteFlag=_deleteFlag;
@property(nonatomic) _Bool hasParsed3rdPartyHandler; // @synthesize hasParsed3rdPartyHandler=_hasParsed3rdPartyHandler;
@property(retain, nonatomic) id <TextState3rdPartyHandler> thirdPartyHandler; // @synthesize thirdPartyHandler=_thirdPartyHandler;
@property(nonatomic) _Bool hasHb; // @synthesize hasHb=_hasHb;
@property(retain, nonatomic) PublicInfo *publicInfo; // @synthesize publicInfo=_publicInfo;
@property(retain, nonatomic) PrivateInfo *privateInfo; // @synthesize privateInfo=_privateInfo;
@property(retain, nonatomic) NSString *redPacketId; // @synthesize redPacketId=_redPacketId;
@property(retain, nonatomic) NSArray *serverJumpElements; // @synthesize serverJumpElements=_serverJumpElements;
@property(nonatomic) double contentScore; // @synthesize contentScore=_contentScore;
@property(nonatomic) unsigned long long mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(retain, nonatomic) NSArray *medias; // @synthesize medias=_medias;
@property(nonatomic) _Bool initByAffDb; // @synthesize initByAffDb=_initByAffDb;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) CContact *associateContact; // @synthesize associateContact=_associateContact;
@property(retain, nonatomic) TextStatePublishReportObject *publishReportObject; // @synthesize publishReportObject=_publishReportObject;
@property(retain, nonatomic) NSString *publishErrorMessage; // @synthesize publishErrorMessage=_publishErrorMessage;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) StatusLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSNumber *likedNumber; // @synthesize likedNumber=_likedNumber;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain, nonatomic) NSNumber *commentNumber; // @synthesize commentNumber=_commentNumber;
@property(retain, nonatomic) NSNumber *interactionNumber; // @synthesize interactionNumber=_interactionNumber;
@property(retain, nonatomic) NSString *clientMessageId; // @synthesize clientMessageId=_clientMessageId;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned int modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSArray *jumpElements; // @synthesize jumpElements=_jumpElements;
@property(nonatomic) unsigned int publishScene; // @synthesize publishScene=_publishScene;
@property(retain, nonatomic) NSString *brandKeyInfo; // @synthesize brandKeyInfo=_brandKeyInfo;
@property(retain, nonatomic) NSString *followTextStateId; // @synthesize followTextStateId=_followTextStateId;
@property(retain, nonatomic) NSString *followUsername; // @synthesize followUsername=_followUsername;
@property(retain, nonatomic) NSString *referenceTextStateId; // @synthesize referenceTextStateId=_referenceTextStateId;
@property(retain, nonatomic) NSString *referenceUsername; // @synthesize referenceUsername=_referenceUsername;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) NSArray *iconActions; // @synthesize iconActions=_iconActions;
@property(retain, nonatomic) NSArray *privacyDynamicLabelIdList; // @synthesize privacyDynamicLabelIdList=_privacyDynamicLabelIdList;
@property(nonatomic) unsigned long long option; // @synthesize option=_option;
@property(retain, nonatomic) NSArray *privacyContactNameList; // @synthesize privacyContactNameList=_privacyContactNameList;
@property(retain, nonatomic) NSArray *privacyLabelList; // @synthesize privacyLabelList=_privacyLabelList;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
@property(retain, nonatomic) NSArray *privacyContactBlackList; // @synthesize privacyContactBlackList=_privacyContactBlackList;
@property(retain, nonatomic) NSArray *serverBlackContactUsernames; // @synthesize serverBlackContactUsernames=_serverBlackContactUsernames;
@property(retain, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(nonatomic) unsigned int serverCreateTime; // @synthesize serverCreateTime=_serverCreateTime;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(retain, nonatomic) NSArray *sourceJumpInfos; // @synthesize sourceJumpInfos=_sourceJumpInfos;
@property(retain, nonatomic) NSArray *jumpInfos; // @synthesize jumpInfos=_jumpInfos;
@property(retain, nonatomic) NSString *sourceIconURL; // @synthesize sourceIconURL=_sourceIconURL;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *sourceActivityId; // @synthesize sourceActivityId=_sourceActivityId;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSArray *topicList; // @synthesize topicList=_topicList;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) unsigned int visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) NSString *backgroundId; // @synthesize backgroundId=_backgroundId;
@property(nonatomic) int mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(nonatomic) int mediaWidth; // @synthesize mediaWidth=_mediaWidth;
@property(retain, nonatomic) NSString *mediaThumbAESKey; // @synthesize mediaThumbAESKey=_mediaThumbAESKey;
@property(retain, nonatomic) NSString *mediaThumbURL; // @synthesize mediaThumbURL=_mediaThumbURL;
@property(retain, nonatomic) NSString *mediaAESKey; // @synthesize mediaAESKey=_mediaAESKey;
@property(retain, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *positionId; // @synthesize positionId=_positionId;
@property(retain, nonatomic) NSString *positionName; // @synthesize positionName=_positionName;
@property(nonatomic) struct CGPoint positionCoordinate; // @synthesize positionCoordinate=_positionCoordinate;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(nonatomic) _Bool expireFlag; // @synthesize expireFlag=_expireFlag;
@property(retain, nonatomic) NSData *publicInfoData; // @synthesize publicInfoData=_publicInfoData;
@property(retain, nonatomic) NSData *privateInfoData; // @synthesize privateInfoData=_privateInfoData;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTextState:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)distanceDescriptionFromLocation:(id)arg1;
- (id)commentObject;
- (id)jumpElementForKey:(id)arg1;
- (void)initJumpElementsLazily;
- (_Bool)isMultiState;
- (_Bool)isCurrentSelfActiveStatus;
- (void)initStatusClusterByAffDb:(id)arg1;
- (id)defaultClusterPresent;
- (id)clusterPresentForType:(id)arg1;
- (_Bool)isLivePhoto;
- (_Bool)allowComment;
- (_Bool)allowFollow;
- (_Bool)allowReferBackground;
- (_Bool)hasHeadImage;
- (_Bool)hasNonStaticMedia;
- (_Bool)hasMedia;
- (_Bool)isLiked;
- (unsigned int)commentCount;
- (unsigned int)interactionCount;
- (id)titleFor3rdParty;
- (id)headImageViewFor3rdParty;
- (id)descriptionFor3rdParty;
- (id)sourceInfo;
- (id)mediaCoverView;
- (id)mediaView;
- (_Bool)supportCustomCover;
- (_Bool)supportCustomMedia;
- (id)iconWrap;
- (void)setIconWrap:(id)arg1;
- (id)remainingTimeString;
- (void)checkForSuperLongTextAndCoexistTextAndEmoticon;
@property(retain, nonatomic) NSString *textStateDescription; // @synthesize textStateDescription=_textStateDescription;
@property(retain, nonatomic) StatusEmoji *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
- (_Bool)isRead;
- (_Bool)isValid;
- (_Bool)isSelf;
- (void)updateExtInfoMediaDuration:(id)arg1;
- (id)extInfo;
- (void)updatePublicInfoByStopPacket:(id)arg1;
- (void)updatePublishInfoWithBase64String:(id)arg1;
- (void)updateDBPacketInfo:(id)arg1 publicInfoBase64String:(id)arg2;
- (void)updateWithExtInfo:(id)arg1;
- (_Bool)publishFaild;
- (id)initWithExtInfo:(id)arg1;
- (id)initWithBase64String:(id)arg1;
- (id)getPBPropertyTable;
- (long long)compareForExpire:(id)arg1;
- (_Bool)VoipRecentStatus_isVideoType;
- (_Bool)VoipRecentStatus_isPhotoType;
- (_Bool)VoipRecentStatus_isTextType;
- (_Bool)VoipRecentStatus_isLegal;
- (_Bool)setFieldsFromRawData;
- (long long)compareForCreateTime:(id)arg1;
- (long long)compareForTopic:(id)arg1;
@property(nonatomic, readonly) _Bool isDNDMode;
@property(nonatomic, readonly) _Bool isMyCurrentStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

