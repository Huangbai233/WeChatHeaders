//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, OpenIMChatRoomMemberInReq;

@interface ApproveAddOpenIMChatRoomMemberReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *invitedMember; // @dynamic invitedMember;
@property(retain, nonatomic) OpenIMChatRoomMemberInReq *inviter; // @dynamic inviter;
@property(retain, nonatomic) NSString *roomName; // @dynamic roomName;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

