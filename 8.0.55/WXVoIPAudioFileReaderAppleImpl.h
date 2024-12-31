//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, NSString, WXVoIPAudioFileExtensionRepairer;
@protocol AudioFileReaderAppleImplDelegate;

@interface WXVoIPAudioFileReaderAppleImpl : NSObject
{
    struct unique_ptr<wxvoipsdk::audio::SilkResampler, std::default_delete<wxvoipsdk::audio::SilkResampler>> _resampler;
    struct unique_ptr<wxvoipsdk::AudioFrame, std::default_delete<wxvoipsdk::AudioFrame>> _inputFrame;
    struct unique_ptr<wxvoipsdk::AudioFrame, std::default_delete<wxvoipsdk::AudioFrame>> _outFrame;
    _Bool _isResampleInited;
    _Bool _isReadingCompleted;
    _Bool _isLocalAsset;
    int _sampleRate;
    int _channels;
    id <AudioFileReaderAppleImplDelegate> _delegate;
    NSString *_url;
    AVAsset *_asset;
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_readerOutput;
    long long _totalBytesRead;
    long long _totalDurationMs;
    long long _startTimeMs;
    long long _retryCount;
    WXVoIPAudioFileExtensionRepairer *_fileRepairer;
}

+ (_Bool)isFileUrl:(id)arg1;
+ (_Bool)isNetStream:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) WXVoIPAudioFileExtensionRepairer *fileRepairer; // @synthesize fileRepairer=_fileRepairer;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(nonatomic) long long totalDurationMs; // @synthesize totalDurationMs=_totalDurationMs;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(nonatomic) _Bool isLocalAsset; // @synthesize isLocalAsset=_isLocalAsset;
@property(nonatomic) _Bool isReadingCompleted; // @synthesize isReadingCompleted=_isReadingCompleted;
@property(nonatomic) _Bool isResampleInited; // @synthesize isResampleInited=_isResampleInited;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) AVAssetReaderTrackOutput *readerOutput; // @synthesize readerOutput=_readerOutput;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <AudioFileReaderAppleImplDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)retry;
- (_Bool)isEndAtBeginning;
- (long long)readLengthMs;
- (void)parseAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 description:(const struct AudioStreamBasicDescription *)arg2;
- (_Bool)setupAudioReaderWithAsset:(id)arg1 fromStartTime:(long long)arg2;
- (CDStruct_1b6d18a9)durationOfAsset:(id)arg1;
- (void)resampleAudioFrame:(struct AudioFrame *)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 description:(const struct AudioStreamBasicDescription *)arg3;
- (id)buildAssetFromUrl:(id)arg1;
- (const struct AudioStreamBasicDescription *)getSampleBufferDescription:(struct opaqueCMSampleBuffer *)arg1;
- (long long)getDuration;
- (void)seekToTimestamp:(unsigned long long)arg1;
- (void)setSampleRate:(int)arg1 channels:(int)arg2;
- (void)decode;
- (void)close;
- (_Bool)startReading:(id)arg1 at:(long long)arg2;
- (_Bool)openFile:(id)arg1;
@property(readonly, nonatomic) struct AudioFrame *outFrame;
@property(readonly, nonatomic) struct AudioFrame *inputFrame;
@property(readonly, nonatomic) void *resampler;
- (void)dealloc;
- (id)init;

@end

