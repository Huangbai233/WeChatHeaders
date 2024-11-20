//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenAudioBaseRequest, MMListenItem, NSString;

@interface MMListenAudioModifyFeedListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest; // @dynamic audioBaseRequest;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *feedidlistUniqueId; // @dynamic feedidlistUniqueId;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(nonatomic) unsigned long long op; // @dynamic op;
@property(nonatomic) unsigned long long scene; // @dynamic scene;

@end

