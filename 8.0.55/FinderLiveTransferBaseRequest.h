//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveTransferBaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authorFinderUsername; // @dynamic authorFinderUsername;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end
