//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface AddOpenIMContactReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *antispamTicket; // @dynamic antispamTicket;
@property(nonatomic) unsigned long long friendFlag; // @dynamic friendFlag;
@property(retain, nonatomic) NSData *spamContext; // @dynamic spamContext;
@property(retain, nonatomic) NSString *tpUsername; // @dynamic tpUsername;

@end
