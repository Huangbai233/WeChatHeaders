//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoParamsInfo : NSObject
{
    unsigned int _fileSize;
    unsigned int _duration;
    unsigned int _videoBitrate;
    unsigned int _audioBitrate;
    unsigned int _audioChannel;
    unsigned int _fps;
    unsigned int _width;
    unsigned int _height;
}

@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int fps; // @synthesize fps=_fps;
@property(nonatomic) unsigned int audioChannel; // @synthesize audioChannel=_audioChannel;
@property(nonatomic) unsigned int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;

@end

