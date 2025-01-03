//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSAudioDataProvider, NSArray, NSData, NSMutableArray, NSMutableData, NSString;

@interface lzAudioFileStream : NSObject
{
    _Bool _bEof;
    _Bool _readyToProducePackets;
    _Bool _disContinuous;
    _Bool _isOpened;
    _Bool _needCalculateByProcessedPackets;
    unsigned int _averageBytesPerSecond;
    unsigned int _maxPacketSize;
    unsigned int _outputSizePerPacket;
    unsigned int _audioDataBitRate;
    KSAudioDataProvider *_audioDataProvider;
    struct OpaqueAudioFileStreamID *_fileStreamID;
    long long _fileReadOffset;
    double _fileDurion;
    long long _curPacketOffset;
    struct OpaqueAudioConverter *_audioConverter;
    NSArray *_audioFileTypes;
    unsigned long long _audioDataOffset;
    unsigned long long _audioDataByteCount;
    unsigned long long _audioDataPacketCount;
    NSMutableArray *_audioPackets;
    NSMutableData *_inputData;
    struct AudioStreamPacketDescription *_inputDesc;
    unsigned long long _processedPacketsCount;
    unsigned long long _processedPacketsSizeTotal;
    double _packetDuraion;
    struct AudioStreamBasicDescription _fileFormat;
}

- (void).cxx_destruct;
@property(nonatomic) double packetDuraion; // @synthesize packetDuraion=_packetDuraion;
@property(nonatomic) _Bool needCalculateByProcessedPackets; // @synthesize needCalculateByProcessedPackets=_needCalculateByProcessedPackets;
@property(nonatomic) unsigned long long processedPacketsSizeTotal; // @synthesize processedPacketsSizeTotal=_processedPacketsSizeTotal;
@property(nonatomic) unsigned long long processedPacketsCount; // @synthesize processedPacketsCount=_processedPacketsCount;
@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(nonatomic) struct AudioStreamPacketDescription *inputDesc; // @synthesize inputDesc=_inputDesc;
@property(retain, nonatomic) NSMutableData *inputData; // @synthesize inputData=_inputData;
@property(nonatomic) _Bool disContinuous; // @synthesize disContinuous=_disContinuous;
@property(nonatomic) _Bool readyToProducePackets; // @synthesize readyToProducePackets=_readyToProducePackets;
@property(retain, nonatomic) NSMutableArray *audioPackets; // @synthesize audioPackets=_audioPackets;
@property(nonatomic) unsigned int audioDataBitRate; // @synthesize audioDataBitRate=_audioDataBitRate;
@property(nonatomic) unsigned long long audioDataPacketCount; // @synthesize audioDataPacketCount=_audioDataPacketCount;
@property(nonatomic) unsigned long long audioDataByteCount; // @synthesize audioDataByteCount=_audioDataByteCount;
@property(nonatomic) unsigned long long audioDataOffset; // @synthesize audioDataOffset=_audioDataOffset;
@property(retain, nonatomic) NSArray *audioFileTypes; // @synthesize audioFileTypes=_audioFileTypes;
@property(nonatomic) unsigned int outputSizePerPacket; // @synthesize outputSizePerPacket=_outputSizePerPacket;
@property(nonatomic) struct OpaqueAudioConverter *audioConverter; // @synthesize audioConverter=_audioConverter;
@property(nonatomic) long long curPacketOffset; // @synthesize curPacketOffset=_curPacketOffset;
@property(nonatomic) _Bool bEof; // @synthesize bEof=_bEof;
@property(nonatomic) unsigned int maxPacketSize; // @synthesize maxPacketSize=_maxPacketSize;
@property(nonatomic) unsigned int averageBytesPerSecond; // @synthesize averageBytesPerSecond=_averageBytesPerSecond;
@property(nonatomic) double fileDurion; // @synthesize fileDurion=_fileDurion;
@property(nonatomic) long long fileReadOffset; // @synthesize fileReadOffset=_fileReadOffset;
@property(nonatomic) struct AudioStreamBasicDescription fileFormat; // @synthesize fileFormat=_fileFormat;
@property(nonatomic) struct OpaqueAudioFileStreamID *fileStreamID; // @synthesize fileStreamID=_fileStreamID;
@property(retain, nonatomic) KSAudioDataProvider *audioDataProvider; // @synthesize audioDataProvider=_audioDataProvider;
- (id)guessAudioFileType;
- (int)checkAudioPacketsToRead;
- (int)converter:(unsigned int *)arg1 bufferList:(struct AudioBufferList *)arg2 des:(struct AudioStreamPacketDescription **)arg3;
- (_Bool)createLPCMAudioConvertor:(struct AudioStreamBasicDescription *)arg1 error:(id *)arg2;
- (void)handleAudioPackets:(const void *)arg1 numberBytes:(unsigned int)arg2 numberPackets:(unsigned int)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (void)dealWithFormatList:(struct OpaqueAudioFileStreamID *)arg1;
- (void)dealWithDataFormat;
- (void)handlePropertyChangeForFileStream:(struct OpaqueAudioFileStreamID *)arg1 fileStreamPropertyID:(unsigned int)arg2 ioFlags:(unsigned int *)arg3;
- (_Bool)readPCMPacket:(struct AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (int)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(struct AudioStreamPacketDescription *)arg4;
- (_Bool)seekPacketPos:(double)arg1;
- (_Bool)canProducePackets:(id *)arg1;
- (_Bool)isFileReadyToParsing;
- (_Bool)open:(id *)arg1;
- (void)close;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned int databytesPerSecond;
@property(readonly, nonatomic) long long lastReadingPos;
@property(readonly, nonatomic) _Bool isEof;
- (struct AudioStreamBasicDescription *)outputDes;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *magicCookie;
@property(readonly) Class superclass;

@end

