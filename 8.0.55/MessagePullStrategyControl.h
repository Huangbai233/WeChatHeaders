//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, RecallTriggerStrategyItem;

@interface MessagePullStrategyControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool disableFinderReddot; // @dynamic disableFinderReddot;
@property(retain, nonatomic) RecallTriggerStrategyItem *recallTriggerStrategy; // @dynamic recallTriggerStrategy;
@property(retain, nonatomic) NSMutableArray *recommendStrategys; // @dynamic recommendStrategys;

@end
