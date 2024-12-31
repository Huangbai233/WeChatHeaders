//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo;

@interface CommentRefFeedJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *feedJumpInfo; // @dynamic feedJumpInfo;
@property(retain, nonatomic) FinderJumpInfo *musicJumpInfo; // @dynamic musicJumpInfo;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(retain, nonatomic) FinderJumpInfo *templateJumpInfo; // @dynamic templateJumpInfo;
@property(retain, nonatomic) FinderJumpInfo *topicWordJumpInfo; // @dynamic topicWordJumpInfo;

@end
