//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusJumpElement : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *elementKey; // @dynamic elementKey;
@property(nonatomic) unsigned int elementType; // @dynamic elementType;
@property(retain, nonatomic) NSMutableArray *jumpInfos; // @dynamic jumpInfos;

@end
