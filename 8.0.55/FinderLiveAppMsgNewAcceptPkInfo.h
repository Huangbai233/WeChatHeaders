//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveAppMsgNewAcceptPkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *pkroomAnchors; // @dynamic pkroomAnchors;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *vroomId; // @dynamic vroomId;
@property(nonatomic) unsigned long long vroomIdVersion; // @dynamic vroomIdVersion;

@end

