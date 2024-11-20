//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, MMListenItem, NSString;

@interface TingShareListenItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)itemFromXML:(struct XmlReaderNode_t *)arg1;
+ (id)xmlTagCustomToXMLProcesslistForConfigTag:(id)arg1;
+ (id)xmlTagCustomFromXMLProcesslistForConfigTag:(id)arg1;
- (id)displayTextForFinderSinger;
- (id)finderSingerNickname;
- (id)finderSingerUsername;
- (_Bool)isFinderSinger;
- (id)finderSingerInfo;
- (_Bool)hasSourceList;
- (id)toTingItem;
- (id)toXML:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(nonatomic) int type; // @dynamic type;

@end

