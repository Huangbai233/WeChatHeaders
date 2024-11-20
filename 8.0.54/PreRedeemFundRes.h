//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, DialogComplianceHalfPageViewData, LqtDialog, NSString, PopUpWithHalfDialog;

@interface PreRedeemFundRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) LqtDialog *dialog; // @dynamic dialog;
@property(retain, nonatomic) PopUpWithHalfDialog *halfDialog; // @dynamic halfDialog;
@property(retain, nonatomic) DialogComplianceHalfPageViewData *halfPageViewData; // @dynamic halfPageViewData;
@property(retain, nonatomic) NSString *redeemListid; // @dynamic redeemListid;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

