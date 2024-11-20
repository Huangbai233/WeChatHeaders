//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMVInfo_FinderMVSongInfo, NSString;

@interface MusicLiveGetSongStatusReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *musicAppid; // @dynamic musicAppid;
@property(retain, nonatomic) NSString *musicWeburl; // @dynamic musicWeburl;
@property(retain, nonatomic) NSString *songid; // @dynamic songid;
@property(retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songinfo; // @dynamic songinfo;

@end
