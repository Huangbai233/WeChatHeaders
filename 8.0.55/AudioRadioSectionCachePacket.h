//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AudioRadioListenedMark, NSMutableArray;

@interface AudioRadioSectionCachePacket : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AudioRadioListenedMark *listenedMark; // @dynamic listenedMark;
@property(retain, nonatomic) NSMutableArray *sectionDataList; // @dynamic sectionDataList;

@end

