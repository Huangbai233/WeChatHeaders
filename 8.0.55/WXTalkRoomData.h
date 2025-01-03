//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface WXTalkRoomData : NSObject
{
    _Bool isSlience;
    _Bool isNobodyTalking;
    int roomId;
    int roomMemberId;
    unsigned int lastTryGetMicTime;
    unsigned int countDown;
    unsigned int lastHeartBeatTime;
    unsigned int lastSendInviteTime;
    unsigned int inviteCountWithinOneMin;
    unsigned int curGetMicEventID;
    long long roomKey;
    NSString *username;
    NSMutableArray *memberList;
    NSData *localCapInfo;
    long long micId;
    long long curHoldMicMemberId;
    NSArray *unSpMemberList;
    NSMutableArray *_addrList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *addrList; // @synthesize addrList=_addrList;
@property(nonatomic) unsigned int curGetMicEventID; // @synthesize curGetMicEventID;
@property(nonatomic) unsigned int inviteCountWithinOneMin; // @synthesize inviteCountWithinOneMin;
@property(nonatomic) unsigned int lastSendInviteTime; // @synthesize lastSendInviteTime;
@property(nonatomic) _Bool isNobodyTalking; // @synthesize isNobodyTalking;
@property(retain, nonatomic) NSArray *unSpMemberList; // @synthesize unSpMemberList;
@property(nonatomic) _Bool isSlience; // @synthesize isSlience;
@property(nonatomic) unsigned int lastHeartBeatTime; // @synthesize lastHeartBeatTime;
@property(nonatomic) unsigned int countDown; // @synthesize countDown;
@property(nonatomic) unsigned int lastTryGetMicTime; // @synthesize lastTryGetMicTime;
@property(nonatomic) long long curHoldMicMemberId; // @synthesize curHoldMicMemberId;
@property(nonatomic) long long micId; // @synthesize micId;
@property(retain, nonatomic) NSData *localCapInfo; // @synthesize localCapInfo;
@property(retain, nonatomic) NSMutableArray *memberList; // @synthesize memberList;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(nonatomic) int roomMemberId; // @synthesize roomMemberId;
@property(nonatomic) long long roomKey; // @synthesize roomKey;
@property(nonatomic) int roomId; // @synthesize roomId;
- (id)GetRoomContactList;
- (_Bool)isValidKey;
- (void)reset;
- (void)SetRoomKey:(long long)arg1;
- (void)SetRoomId:(int)arg1;
- (void)dealloc;
- (id)init;

@end

