//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveLotteryFillClaimInfoRequest_ClaimInfo, NSData, NSString;

@interface FinderLiveLotteryFillClaimInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveLotteryFillClaimInfoRequest_ClaimInfo *claiminfo; // @dynamic claiminfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(retain, nonatomic) NSString *lotteryId; // @dynamic lotteryId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;

@end

