//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface FinderGetLiveSongListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *singingSongName; // @dynamic singingSongName;
@property(retain, nonatomic) NSMutableArray *songInfos; // @dynamic songInfos;

@end

