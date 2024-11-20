//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenItem, MMListenTTSPlayCtx, NSString;

@interface MMListenAudioTTSPlayRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) MMListenItem *listenCtx; // @dynamic listenCtx;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) unsigned int startSentenceIndex; // @dynamic startSentenceIndex;
@property(retain, nonatomic) MMListenTTSPlayCtx *ttsPlayCtx; // @dynamic ttsPlayCtx;

@end

