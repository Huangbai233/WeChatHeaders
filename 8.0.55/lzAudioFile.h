//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSAudioDataProvider, NSArray, NSData, NSString;

@interface lzAudioFile : NSObject
{
    struct OpaqueAudioFileID *_fileID;
    struct AudioStreamBasicDescription _fileFormat;
    unsigned int _bitRate;
    long long _dataOffset;
    double _duration;
    unsigned int _maxPacketSize;
    unsigned long long _packetCnt;
    unsigned int _databytesPerSecond;
    _Bool _isEof;
    long long _lastReadingPos;
    long long _curPacketOffset;
    struct AudioStreamPacketDescription _packetDes[16];
    NSData *_magicCookie;
    _Bool _bParsingNoData;
    _Bool _bWatingForData;
    unsigned int _audioBufSize;
    unsigned int _outputSizePerPacket;
    unsigned int _audioFileId;
    KSAudioDataProvider *_audioDataProvider;
    struct OpaqueAudioConverter *_audioConverter;
    void *_audioBuf;
    NSArray *_audioFileTypes;
    void *_seekAudioBuf;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) void *seekAudioBuf; // @synthesize seekAudioBuf=_seekAudioBuf;
@property(retain, nonatomic) NSArray *audioFileTypes; // @synthesize audioFileTypes=_audioFileTypes;
@property(nonatomic) unsigned int audioFileId; // @synthesize audioFileId=_audioFileId;
@property(nonatomic) unsigned int outputSizePerPacket; // @synthesize outputSizePerPacket=_outputSizePerPacket;
@property(nonatomic) unsigned int audioBufSize; // @synthesize audioBufSize=_audioBufSize;
@property(nonatomic) void *audioBuf; // @synthesize audioBuf=_audioBuf;
@property(nonatomic) struct OpaqueAudioConverter *audioConverter; // @synthesize audioConverter=_audioConverter;
@property(nonatomic) _Bool bWatingForData; // @synthesize bWatingForData=_bWatingForData;
@property(nonatomic) _Bool bParsingNoData; // @synthesize bParsingNoData=_bParsingNoData;
@property(retain, nonatomic) KSAudioDataProvider *audioDataProvider; // @synthesize audioDataProvider=_audioDataProvider;
@property(retain, nonatomic) NSData *magicCookie; // @synthesize magicCookie=_magicCookie;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long curPacketOffset; // @synthesize curPacketOffset=_curPacketOffset;
@property(nonatomic) long long lastReadingPos; // @synthesize lastReadingPos=_lastReadingPos;
@property(readonly, nonatomic) unsigned int databytesPerSecond; // @synthesize databytesPerSecond=_databytesPerSecond;
@property(nonatomic) _Bool isEof; // @synthesize isEof=_isEof;
@property(readonly, nonatomic) unsigned int maxPacketSize; // @synthesize maxPacketSize=_maxPacketSize;
@property(readonly, nonatomic) struct AudioStreamBasicDescription fileFormat; // @synthesize fileFormat=_fileFormat;
- (id)guessAudioFileType;
- (_Bool)fillMiscProperties:(id *)arg1;
- (_Bool)fillFileFormat:(id *)arg1;
- (_Bool)isCanParse;
- (_Bool)isFileReadyToParsing;
- (void)prepareTailReadData:(struct _NSRange)arg1;
- (int)converter:(unsigned int *)arg1 bufferList:(struct AudioBufferList *)arg2 des:(struct AudioStreamPacketDescription **)arg3;
- (_Bool)createLPCMAudioConvertor:(struct AudioStreamBasicDescription *)arg1 error:(id *)arg2;
- (_Bool)readPCMPacket:(struct AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (int)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(struct AudioStreamPacketDescription *)arg4;
- (_Bool)seekPacketPos:(double)arg1;
- (_Bool)open:(id *)arg1;
- (_Bool)isOpened;
- (void)close;
- (struct AudioStreamBasicDescription *)outputDes;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

