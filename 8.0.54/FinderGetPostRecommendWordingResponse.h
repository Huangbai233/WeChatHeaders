//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderGetPostRecommendTitleResult, NSData;

@interface FinderGetPostRecommendWordingResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSData *seqBuffer; // @dynamic seqBuffer;
@property(retain, nonatomic) FinderGetPostRecommendTitleResult *titleResult; // @dynamic titleResult;

@end

