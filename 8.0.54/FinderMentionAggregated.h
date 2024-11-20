//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderMentionAggregated : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *headUrlList; // @dynamic headUrlList;
@property(nonatomic) unsigned long long nicknameCount; // @dynamic nicknameCount;
@property(retain, nonatomic) NSString *nicknameList; // @dynamic nicknameList;

@end
