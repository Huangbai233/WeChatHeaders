//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMVInfo_FinderMVSongInfo, NSMutableArray;

@interface MusicLiveGetBeatArrangementReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *mediaInfoList; // @dynamic mediaInfoList;
@property(retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songinfo; // @dynamic songinfo;

@end

