//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface VoiceTransRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(retain, nonatomic) NSString *result; // @dynamic result;
@property(nonatomic) unsigned int sequence; // @dynamic sequence;
@property(retain, nonatomic) SKBuiltinBuffer_t *timeSlice; // @dynamic timeSlice;

@end

