//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderRingBack, MusicRingBack;

@interface RingBack : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endTs; // @dynamic endTs;
@property(retain, nonatomic) FinderRingBack *finderRingBack; // @dynamic finderRingBack;
@property(retain, nonatomic) MusicRingBack *musicRingBack; // @dynamic musicRingBack;
@property(nonatomic) unsigned int startTs; // @dynamic startTs;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

