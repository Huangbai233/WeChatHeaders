//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, InterceptWin, NSString, UnionTransferRealNameInfo;

@interface CgiUnionTransferOperationResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) InterceptWin *interceptWin; // @dynamic interceptWin;
@property(retain, nonatomic) InterceptWin *interceptWinAfter; // @dynamic interceptWinAfter;
@property(retain, nonatomic) NSString *leftButtonContinue; // @dynamic leftButtonContinue;
@property(retain, nonatomic) UnionTransferRealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end
