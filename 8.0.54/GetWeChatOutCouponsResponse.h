//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, WCOSharedList;

@interface GetWeChatOutCouponsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *balance; // @dynamic balance;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *couponPrice; // @dynamic couponPrice;
@property(retain, nonatomic) NSString *coupons; // @dynamic coupons;
@property(retain, nonatomic) NSString *currencySymbol; // @dynamic currencySymbol;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *imgPath; // @dynamic imgPath;
@property(retain, nonatomic) NSString *outUrlPath; // @dynamic outUrlPath;
@property(nonatomic) unsigned int packageCount; // @dynamic packageCount;
@property(retain, nonatomic) NSMutableArray *packageList; // @dynamic packageList;
@property(retain, nonatomic) NSString *packageMsg; // @dynamic packageMsg;
@property(retain, nonatomic) NSString *pvwording; // @dynamic pvwording;
@property(retain, nonatomic) WCOSharedList *sharedList; // @dynamic sharedList;
@property(retain, nonatomic) NSString *smsDesc; // @dynamic smsDesc;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *urlPath; // @dynamic urlPath;
@property(retain, nonatomic) NSString *webPayListUrl; // @dynamic webPayListUrl;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

