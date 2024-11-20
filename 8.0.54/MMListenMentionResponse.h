//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenMentionNotice, NSMutableArray;

@interface MMListenMentionResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) unsigned long long maxId; // @dynamic maxId;
@property(retain, nonatomic) NSMutableArray *mentionList; // @dynamic mentionList;
@property(nonatomic) unsigned long long minId; // @dynamic minId;
@property(retain, nonatomic) MMListenMentionNotice *notice; // @dynamic notice;

@end

