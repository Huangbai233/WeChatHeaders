//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveErrorPage, NSData, NSString;

@interface FinderLivePrepareIncomeEncashResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) FinderLiveErrorPage *errPage; // @dynamic errPage;
@property(retain, nonatomic) NSData *respBuff; // @dynamic respBuff;

@end
