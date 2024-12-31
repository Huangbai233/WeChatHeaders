//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface OpPatternLockRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cmd; // @dynamic cmd;
@property(retain, nonatomic) SKBuiltinBuffer_t *newpatternhash; // @dynamic newpatternhash;
@property(retain, nonatomic) SKBuiltinBuffer_t *nowpatternhash; // @dynamic nowpatternhash;

@end

