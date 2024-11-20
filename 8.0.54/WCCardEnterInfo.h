//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSString;

@interface WCCardEnterInfo
{
    unsigned int _fromScene;
    unsigned int _statScene;
    NSString *_cardIdOrTpId;
    NSString *_cardExt;
    NSString *_fromUserName;
    NSString *_chatName;
    NSString *_webUrl;
    NSString *_appID;
    NSString *_consumedboxCardId;
    NSString *_templateMsgId;
    NSString *_recommendCardId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recommendCardId; // @synthesize recommendCardId=_recommendCardId;
@property(retain, nonatomic) NSString *templateMsgId; // @synthesize templateMsgId=_templateMsgId;
@property(retain, nonatomic) NSString *consumedboxCardId; // @synthesize consumedboxCardId=_consumedboxCardId;
@property(nonatomic) unsigned int statScene; // @synthesize statScene=_statScene;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardIdOrTpId; // @synthesize cardIdOrTpId=_cardIdOrTpId;

@end
