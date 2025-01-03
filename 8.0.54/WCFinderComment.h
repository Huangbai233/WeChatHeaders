//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class CommentContentInfo, FinderCommentInfo, FinderContactMsgInfo, NSArray, NSData, NSMutableArray, NSNumber, NSString, WCFinderCommentFinderMentionArray, WCFinderCommentMentionArray, WCFinderCommentPastedArray, WCFinderContact, WCFinderIpRegionInfo, WCFinderKeywordComponent;

@interface WCFinderComment : NSObject
{
    _Bool _likeFlag;
    _Bool _isCommentFail;
    _Bool _isPosting;
    _Bool _continueFlag;
    _Bool _isExpand;
    _Bool _isRefCommentExpand;
    _Bool _upContinue;
    _Bool _showSubCommentList;
    _Bool _unRead;
    _Bool _shouldShowRecommendAction;
    _Bool _hotRecommendComment;
    unsigned int _deleteFlag;
    unsigned int _expandCommentCount;
    int _errorCode;
    unsigned int _blacklistFlag;
    unsigned int _replyBlacklistFlag;
    int _commentEntranceScene;
    int _commentScene;
    unsigned int _contentType;
    unsigned int _dislikeFlag;
    unsigned int _dislikeCount;
    NSString *_username;
    NSString *_nickname;
    NSString *_content;
    NSString *_formatedContent;
    unsigned long long _commentID;
    unsigned long long _localCommentID;
    unsigned long long _replyCommentID;
    unsigned long long _createTime;
    unsigned long long _likeCount;
    NSString *_replyNickname;
    NSString *_headURL;
    NSArray *_levelTwoComment;
    unsigned long long _startLevelTwoCommentCount;
    NSString *_clientID;
    NSString *_replyUsername;
    NSString *_replyContent;
    unsigned long long _retryCount;
    double _firstPostTime;
    unsigned long long _scene;
    NSString *_errorMsg;
    NSString *_displayidDiscarded;
    unsigned long long _displayid;
    NSData *_lastBuffer;
    NSString *_displayName;
    NSString *_replyDisplayName;
    unsigned long long _rootCommentID;
    unsigned long long _reportScene;
    long long _extFlag;
    NSString *_requestId;
    unsigned long long _displayFlag;
    NSNumber *_isFriendComment;
    NSNumber *_isFriendRefComment;
    NSString *_objectID;
    NSString *_nonceID;
    WCFinderComment *_rootComment;
    FinderContactMsgInfo *_msgInfo;
    WCFinderContact *_authorContact;
    WCFinderContact *_replyContact;
    WCFinderCommentMentionArray *_mentionArray;
    WCFinderCommentFinderMentionArray *_mentionFinderArray;
    WCFinderCommentPastedArray *_pastedStrArray;
    NSString *_clientUdfKV;
    NSString *_reportJSON;
    WCFinderIpRegionInfo *_ipRegionInfo;
    NSString *_chatroomMemberNickname;
    CommentContentInfo *_contentInfo;
    NSMutableArray *_keywordInfoList;
    WCFinderKeywordComponent *_keywords;
    unsigned long long _mentionCount;
    FinderCommentInfo *_commentInfo;
    NSString *_feedOwnerUsername;
    NSString *_hotRecommendCommentDisplayname;
    unsigned long long _translateType;
    NSString *_translateContent;
    NSString *_translateSource;
    NSString *_replacedContent;
    NSString *_recommendTopCacheName;
    NSString *_topRecommendDisplayName;
}

+ (id)finderCommentWithRecommendCommentInfo:(id)arg1;
+ (id)finderCommentWithCommentInfo:(id)arg1;
+ (void)__wcdb_index_48:(void *)arg1;
+ (void)__wcdb_index_47:(void *)arg1;
+ (void)__wcdb_index_46:(void *)arg1;
+ (void)__wcdb_table_constraint_45:(void *)arg1;
+ (void)__wcdb_table_constraint_44:(void *)arg1;
+ (id)swift_requestId;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (const void *)requestId;
+ (id)swift_commentInfo;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (const void *)commentInfo;
+ (id)swift_chatroomMemberNickname;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (const void *)chatroomMemberNickname;
+ (id)swift_replacedContent;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (const void *)replacedContent;
+ (id)swift_keywordInfoList;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (const void *)keywordInfoList;
+ (id)swift_contentInfo;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (const void *)contentInfo;
+ (id)swift_contentType;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (const void *)contentType;
+ (id)swift_ipRegionInfo;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (const void *)ipRegionInfo;
+ (id)swift_clientUdfKV;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)clientUdfKV;
+ (id)swift_startLevelTwoCommentCount;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)startLevelTwoCommentCount;
+ (id)swift_pastedStrArray;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)pastedStrArray;
+ (id)swift_mentionArray;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)mentionArray;
+ (id)swift_replyContact;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (const void *)replyContact;
+ (id)swift_authorContact;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (const void *)authorContact;
+ (id)swift_commentScene;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)commentScene;
+ (id)swift_commentEntranceScene;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)commentEntranceScene;
+ (id)swift_unRead;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)unRead;
+ (id)swift_extFlag;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)extFlag;
+ (id)swift_reportScene;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)reportScene;
+ (id)swift_rootComment;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)rootComment;
+ (id)swift_rootCommentID;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)rootCommentID;
+ (id)swift_errorMsg;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)errorMsg;
+ (id)swift_nonceID;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)nonceID;
+ (id)swift_errorCode;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)errorCode;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)scene;
+ (id)swift_objectID;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)objectID;
+ (id)swift_displayFlag;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)displayFlag;
+ (id)swift_replyContent;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)replyContent;
+ (id)swift_replyUsername;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)replyUsername;
+ (id)swift_isPosting;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)isPosting;
+ (id)swift_isCommentFail;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)isCommentFail;
+ (id)swift_clientID;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)clientID;
+ (id)swift_headURL;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)headURL;
+ (id)swift_replyNickname;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)replyNickname;
+ (id)swift_expandCommentCount;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)expandCommentCount;
+ (id)swift_likeCount;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)likeCount;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_deleteFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)deleteFlag;
+ (id)swift_replyCommentID;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)replyCommentID;
+ (id)swift_localCommentID;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)localCommentID;
+ (id)swift_commentID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)commentID;
+ (id)swift_content;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)content;
+ (id)swift_nickname;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)nickname;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_requestId;
+ (void)PBArrayAdd_mentionFinderArray;
+ (void)PBArrayAdd_commentInfo;
+ (void)PBArrayAdd_chatroomMemberNickname;
+ (void)PBArrayAdd_replacedContent;
+ (void)PBArrayAdd_keywordInfoList;
+ (void)PBArrayAdd_contentInfo;
+ (void)PBArrayAdd_contentType;
+ (void)PBArrayAdd_ipRegionInfo;
+ (void)PBArrayAdd_reportJSON;
+ (void)PBArrayAdd_startLevelTwoCommentCount;
+ (void)PBArrayAdd_mentionArray;
+ (void)PBArrayAdd_replyContact;
+ (void)PBArrayAdd_authorContact;
+ (void)PBArrayAdd_commentEntranceScene;
+ (void)PBArrayAdd_msgInfo;
+ (void)PBArrayAdd_unRead;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_rootCommentID;
+ (void)PBArrayAdd_upContinue;
+ (void)PBArrayAdd_continueFlag;
+ (void)PBArrayAdd_errorMsg;
+ (void)PBArrayAdd_errorCode;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_firstPostTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_objectID;
+ (void)PBArrayAdd_replyContent;
+ (void)PBArrayAdd_blacklistFlag;
+ (void)PBArrayAdd_displayFlag;
+ (void)PBArrayAdd_replyUsername;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_clientID;
+ (void)PBArrayAdd_isPosting;
+ (void)PBArrayAdd_isCommentFail;
+ (void)PBArrayAdd_replyNickname;
+ (void)PBArrayAdd_levelTwoComment;
+ (void)PBArrayAdd_headURL;
+ (void)PBArrayAdd_expandCommentCount;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_deleteFlag;
+ (void)PBArrayAdd_replyCommentID;
+ (void)PBArrayAdd_commentID;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *topRecommendDisplayName; // @synthesize topRecommendDisplayName=_topRecommendDisplayName;
@property(copy, nonatomic) NSString *recommendTopCacheName; // @synthesize recommendTopCacheName=_recommendTopCacheName;
@property(retain, nonatomic) NSString *replacedContent; // @synthesize replacedContent=_replacedContent;
@property(copy, nonatomic) NSString *translateSource; // @synthesize translateSource=_translateSource;
@property(copy, nonatomic) NSString *translateContent; // @synthesize translateContent=_translateContent;
@property(nonatomic) unsigned long long translateType; // @synthesize translateType=_translateType;
@property(copy, nonatomic) NSString *hotRecommendCommentDisplayname; // @synthesize hotRecommendCommentDisplayname=_hotRecommendCommentDisplayname;
@property(nonatomic) _Bool hotRecommendComment; // @synthesize hotRecommendComment=_hotRecommendComment;
@property(nonatomic) _Bool shouldShowRecommendAction; // @synthesize shouldShowRecommendAction=_shouldShowRecommendAction;
@property(copy, nonatomic) NSString *feedOwnerUsername; // @synthesize feedOwnerUsername=_feedOwnerUsername;
@property(retain, nonatomic) FinderCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(nonatomic) unsigned long long mentionCount; // @synthesize mentionCount=_mentionCount;
@property(retain, nonatomic) WCFinderKeywordComponent *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSMutableArray *keywordInfoList; // @synthesize keywordInfoList=_keywordInfoList;
@property(nonatomic) unsigned int dislikeCount; // @synthesize dislikeCount=_dislikeCount;
@property(nonatomic) unsigned int dislikeFlag; // @synthesize dislikeFlag=_dislikeFlag;
@property(retain, nonatomic) CommentContentInfo *contentInfo; // @synthesize contentInfo=_contentInfo;
@property(nonatomic) unsigned int contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *chatroomMemberNickname; // @synthesize chatroomMemberNickname=_chatroomMemberNickname;
@property(retain, nonatomic) WCFinderIpRegionInfo *ipRegionInfo; // @synthesize ipRegionInfo=_ipRegionInfo;
@property(copy, nonatomic) NSString *reportJSON; // @synthesize reportJSON=_reportJSON;
@property(copy, nonatomic) NSString *clientUdfKV; // @synthesize clientUdfKV=_clientUdfKV;
@property(retain, nonatomic) WCFinderCommentPastedArray *pastedStrArray; // @synthesize pastedStrArray=_pastedStrArray;
@property(retain, nonatomic) WCFinderCommentFinderMentionArray *mentionFinderArray; // @synthesize mentionFinderArray=_mentionFinderArray;
@property(retain, nonatomic) WCFinderCommentMentionArray *mentionArray; // @synthesize mentionArray=_mentionArray;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int commentEntranceScene; // @synthesize commentEntranceScene=_commentEntranceScene;
@property(retain, nonatomic) WCFinderContact *replyContact; // @synthesize replyContact=_replyContact;
@property(retain, nonatomic) WCFinderContact *authorContact; // @synthesize authorContact=_authorContact;
@property(retain, nonatomic) FinderContactMsgInfo *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(nonatomic) _Bool unRead; // @synthesize unRead=_unRead;
@property(retain, nonatomic) WCFinderComment *rootComment; // @synthesize rootComment=_rootComment;
@property(nonatomic) _Bool showSubCommentList; // @synthesize showSubCommentList=_showSubCommentList;
@property(nonatomic) _Bool upContinue; // @synthesize upContinue=_upContinue;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) unsigned int replyBlacklistFlag; // @synthesize replyBlacklistFlag=_replyBlacklistFlag;
@property(nonatomic) unsigned int blacklistFlag; // @synthesize blacklistFlag=_blacklistFlag;
@property(retain, nonatomic) NSNumber *isFriendRefComment; // @synthesize isFriendRefComment=_isFriendRefComment;
@property(retain, nonatomic) NSNumber *isFriendComment; // @synthesize isFriendComment=_isFriendComment;
@property(nonatomic) unsigned long long displayFlag; // @synthesize displayFlag=_displayFlag;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) long long extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(copy, nonatomic) NSString *replyDisplayName; // @synthesize replyDisplayName=_replyDisplayName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) _Bool isRefCommentExpand; // @synthesize isRefCommentExpand=_isRefCommentExpand;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long displayid; // @synthesize displayid=_displayid;
@property(copy, nonatomic) NSString *displayidDiscarded; // @synthesize displayidDiscarded=_displayidDiscarded;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) double firstPostTime; // @synthesize firstPostTime=_firstPostTime;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(copy, nonatomic) NSString *replyUsername; // @synthesize replyUsername=_replyUsername;
@property(nonatomic) _Bool isPosting; // @synthesize isPosting=_isPosting;
@property(nonatomic) _Bool isCommentFail; // @synthesize isCommentFail=_isCommentFail;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(nonatomic) unsigned long long startLevelTwoCommentCount; // @synthesize startLevelTwoCommentCount=_startLevelTwoCommentCount;
@property(copy, nonatomic) NSArray *levelTwoComment; // @synthesize levelTwoComment=_levelTwoComment;
@property(copy, nonatomic) NSString *headURL; // @synthesize headURL=_headURL;
@property(copy, nonatomic) NSString *replyNickname; // @synthesize replyNickname=_replyNickname;
@property(nonatomic) unsigned int expandCommentCount; // @synthesize expandCommentCount=_expandCommentCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int deleteFlag; // @synthesize deleteFlag=_deleteFlag;
@property(nonatomic) unsigned long long replyCommentID; // @synthesize replyCommentID=_replyCommentID;
@property(nonatomic) unsigned long long localCommentID; // @synthesize localCommentID=_localCommentID;
@property(nonatomic) unsigned long long commentID; // @synthesize commentID=_commentID;
@property(retain, nonatomic) NSString *formatedContent; // @synthesize formatedContent=_formatedContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) _Bool canShowRecommendAction;
- (id)recommendCommentFriendList;
- (id)interactionLabelsWithPosition:(unsigned long long)arg1;
- (_Bool)isValidRefProductComment;
- (_Bool)isRootComment;
- (_Bool)isSubComment;
- (_Bool)isBarrageHotComment;
- (_Bool)isFriendSpreadComment;
@property(readonly, nonatomic) _Bool isFriendCommentByService;
- (_Bool)isInBlackList;
- (_Bool)shouldStopRepostError;
- (_Bool)canRePost;
- (_Bool)canRetryPost;
- (id)commentIdentify;
@property(readonly, copy) NSString *description;
- (_Bool)isReplyAuthor;
- (_Bool)followAuthorMembership;
- (_Bool)isAuthorLiked;
- (_Bool)isFinderContactPost;
- (_Bool)isBrandPublish;
- (_Bool)isFinderPublish;
- (_Bool)isAuthorPublish;
- (_Bool)isAuthorSetTop;
- (void)reverseSetTop;
- (void)forceSetTop:(_Bool)arg1;
- (_Bool)haveMoreSubComment;
@property(readonly, nonatomic) unsigned int commentType;
- (id)commentAdImageUrl;
- (id)commentJumpInfo;
- (id)promotionInfo;
- (id)advertisementInfo;
- (id)genFinderCommentInfo;
- (_Bool)isLike;
- (id)getPBPropertyTable;
- (id)getEmoticonDownloadWrap;
- (id)getAddEmoticonWrap;
- (id)getEmoticonWrap;
- (id)getEmoticonInfo;
- (_Bool)hasEmoticon;
- (id)videoJumpInfoFeedId;
- (id)templateCommentDesc;
- (id)templateCommentUserName;
- (double)templateCommentPreviewAspectRatio;
- (id)templateCommentPreviewUrl;
- (id)curJumpInfo;
- (id)videoTopicName;
- (id)videoTopicContent;
- (id)videoTopicPostAttachContent;
- (id)refFeedPatMusicId;
- (id)videoTemplateInfo;
- (id)videoJumpInfo;
- (id)imgStyle;
- (_Bool)_isJumpInfoStyleSuit;
- (_Bool)_isRefTypeSuit:(int)arg1;
- (_Bool)_isMusicVideoComent;
- (_Bool)_isTopicVideoComment;
- (_Bool)_isTemplateVideoComment;
- (id)getRefFeedJumpInfoFeedId;
- (unsigned long long)genJumpInfoCommentType;
- (id)_configWithJumpInfo:(id)arg1 defaultSVGName:(id)arg2 defaultTitle:(id)arg3;
- (id)getPostBtnConfig;
- (_Bool)isJumpInfoComment;
- (id)archivedWCTValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

