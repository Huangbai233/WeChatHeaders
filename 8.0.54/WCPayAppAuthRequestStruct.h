//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayAppAuthRequestStruct : NSObject
{
    NSString *appId;
    NSString *partnerId;
    NSString *prepayId;
    NSString *nonceStr;
    NSString *timeStamp;
    NSString *package;
    NSString *sign;
    NSString *signType;
    NSString *scene;
    NSString *bundleId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId;
@property(retain, nonatomic) NSString *scene; // @synthesize scene;
@property(retain, nonatomic) NSString *signType; // @synthesize signType;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp;
@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(retain, nonatomic) NSString *prepayId; // @synthesize prepayId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;

@end

