//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t, VoicePieceCtx;

@interface NewRegVoicePrintRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *mobileVerifyTicket; // @dynamic mobileVerifyTicket;
@property(retain, nonatomic) VoicePieceCtx *pieceData; // @dynamic pieceData;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(nonatomic) unsigned int step; // @dynamic step;
@property(retain, nonatomic) NSString *voiceKey; // @dynamic voiceKey;
@property(nonatomic) unsigned int voiceTicket; // @dynamic voiceTicket;

@end

