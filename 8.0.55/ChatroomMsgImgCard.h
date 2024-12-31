//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpInfo, NSString;

@interface ChatroomMsgImgCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) JumpInfo *imgJumpInfo; // @dynamic imgJumpInfo;
@property(retain, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(nonatomic) _Bool showVideoPlay; // @dynamic showVideoPlay;

@end

