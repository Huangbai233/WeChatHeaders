//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class AQAudioRecorder, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, MMovieCompressor, NSString;
@protocol OS_dispatch_queue, SightMovieWriterDelegate;

@interface SightMovieWriter : NSObject
{
    NSObject<OS_dispatch_queue> *m_movieWritingQueue;
    _Bool _forceMPEG4;
    _Bool _m_isRecording;
    _Bool _videoEncodingIsFinished;
    _Bool _m_disableWritingToFile;
    _Bool _m_compressAudio;
    _Bool _needAudio;
    float _maxMovieDuration;
    id <SightMovieWriterDelegate> _delegate;
    long long _videoOrientation;
    NSString *_m_videoPath;
    NSString *_m_audioPath;
    NSString *_m_moviePath;
    AVAssetWriter *_m_writer;
    AVAssetWriterInput *_m_videoInput;
    unsigned long long _m_videoTimeStamp;
    unsigned long long _m_videoFrame;
    AVAssetWriterInputPixelBufferAdaptor *_m_PixelBufferInput;
    MMovieCompressor *_m_audioCompressor;
    double _m_audioBitrate;
    long long _m_videoOrientation;
    unsigned long long _m_audioTimeStamp;
    AQAudioRecorder *_recorder;
    struct CGSize _m_videoSize;
    CDStruct_1b6d18a9 _correctVideoDuration;
    CDStruct_1b6d18a9 _m_startTime;
    CDStruct_1b6d18a9 _m_initializeTime;
    CDStruct_1b6d18a9 _m_previousVideoTime;
    struct CGAffineTransform _m_preferredTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AQAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) _Bool needAudio; // @synthesize needAudio=_needAudio;
@property(nonatomic) _Bool m_compressAudio; // @synthesize m_compressAudio=_m_compressAudio;
@property(nonatomic) _Bool m_disableWritingToFile; // @synthesize m_disableWritingToFile=_m_disableWritingToFile;
@property(nonatomic) unsigned long long m_audioTimeStamp; // @synthesize m_audioTimeStamp=_m_audioTimeStamp;
@property(nonatomic) struct CGAffineTransform m_preferredTransform; // @synthesize m_preferredTransform=_m_preferredTransform;
@property(nonatomic) long long m_videoOrientation; // @synthesize m_videoOrientation=_m_videoOrientation;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize=_m_videoSize;
@property(nonatomic) double m_audioBitrate; // @synthesize m_audioBitrate=_m_audioBitrate;
@property(retain, nonatomic) MMovieCompressor *m_audioCompressor; // @synthesize m_audioCompressor=_m_audioCompressor;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *m_PixelBufferInput; // @synthesize m_PixelBufferInput=_m_PixelBufferInput;
@property(nonatomic) unsigned long long m_videoFrame; // @synthesize m_videoFrame=_m_videoFrame;
@property(nonatomic) unsigned long long m_videoTimeStamp; // @synthesize m_videoTimeStamp=_m_videoTimeStamp;
@property(nonatomic) CDStruct_1b6d18a9 m_previousVideoTime; // @synthesize m_previousVideoTime=_m_previousVideoTime;
@property(retain, nonatomic) AVAssetWriterInput *m_videoInput; // @synthesize m_videoInput=_m_videoInput;
@property(nonatomic) _Bool videoEncodingIsFinished; // @synthesize videoEncodingIsFinished=_videoEncodingIsFinished;
@property(nonatomic) CDStruct_1b6d18a9 m_initializeTime; // @synthesize m_initializeTime=_m_initializeTime;
@property(nonatomic) CDStruct_1b6d18a9 m_startTime; // @synthesize m_startTime=_m_startTime;
@property(nonatomic) _Bool m_isRecording; // @synthesize m_isRecording=_m_isRecording;
@property(retain, nonatomic) AVAssetWriter *m_writer; // @synthesize m_writer=_m_writer;
@property(retain, nonatomic) NSString *m_moviePath; // @synthesize m_moviePath=_m_moviePath;
@property(retain, nonatomic) NSString *m_audioPath; // @synthesize m_audioPath=_m_audioPath;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(nonatomic) _Bool forceMPEG4; // @synthesize forceMPEG4=_forceMPEG4;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) CDStruct_1b6d18a9 correctVideoDuration; // @synthesize correctVideoDuration=_correctVideoDuration;
@property(nonatomic) float maxMovieDuration; // @synthesize maxMovieDuration=_maxMovieDuration;
@property(nonatomic) __weak id <SightMovieWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writtingQueue; // @synthesize writtingQueue=m_movieWritingQueue;
- (void)notifyOutput:(id)arg1;
- (void)compressMovieWithExport:(id)arg1 startTime:(struct timeval)arg2;
- (unsigned long long)writerCompressionImplementation;
- (void)exportSessionError:(id)arg1;
- (void)compressionImplementationExportOnce:(id)arg1;
- (void)compressionImplementationDefault:(id)arg1;
- (void)tryMergeOutputVideo;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)compressAudio;
- (id)makeNewPath:(id)arg1 withSubfix:(id)arg2;
- (void)cancelAmr;
- (void)stopAmr;
- (void)startAmr;
- (void)appendVideoPixelBuffer:(id)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)cancelWriting;
- (void)finishWriting;
- (void)startWriting;
- (void)realWriting;
- (void)prepareWriting;
- (_Bool)isWriting;
@property(readonly, nonatomic) int outputType;
- (id)getOutput;
- (void)setOutput:(id)arg1;
- (void)initWriterOutputWithCodecSettings:(id)arg1;
- (id)initWithFilePath:(id)arg1 videoOrientation:(long long)arg2 videoSize:(struct CGSize)arg3 compressAudio:(_Bool)arg4 audioBitrate:(double)arg5 codecSettings:(id)arg6 needAudio:(_Bool)arg7;
- (id)initWithFilePath:(id)arg1 videoOrientation:(long long)arg2 videoSize:(struct CGSize)arg3 compressAudio:(_Bool)arg4 audioBitrate:(double)arg5 codecSettings:(id)arg6;
- (id)initWithFilePath:(id)arg1 videoOrientation:(long long)arg2 videoSize:(struct CGSize)arg3 compressAudio:(_Bool)arg4 audioBitrate:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

