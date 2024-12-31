//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderCommentKeywordInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned long long keywordId; // @dynamic keywordId;
@property(retain, nonatomic) NSString *keywordWording; // @dynamic keywordWording;
@property(retain, nonatomic) NSString *refData; // @dynamic refData;
@property(nonatomic) unsigned int type; // @dynamic type;

@end
