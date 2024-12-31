//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MilestoneLotteryCouponRecordInfo_AnchorInfo, MilestoneLotteryCouponRecordInfo_AttendInfo, MilestoneLotteryCouponRecordInfo_UserInfo, MilestoneLotteryRedpacketInfo_RedpacketPrizeInfo;

@interface MilestoneLotteryRedpacketInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MilestoneLotteryCouponRecordInfo_AnchorInfo *anchorInfo; // @dynamic anchorInfo;
@property(retain, nonatomic) MilestoneLotteryCouponRecordInfo_AttendInfo *attendInfo; // @dynamic attendInfo;
@property(retain, nonatomic) MilestoneLotteryRedpacketInfo_RedpacketPrizeInfo *prizeInfo; // @dynamic prizeInfo;
@property(retain, nonatomic) MilestoneLotteryCouponRecordInfo_UserInfo *userInfo; // @dynamic userInfo;

@end

