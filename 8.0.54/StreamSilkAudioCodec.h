//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSMutableData, NSString;

@interface StreamSilkAudioCodec : NSObject
{
    struct StreamAudioDecoder *m_decoder;
    NSMutableData *m_originData;
    NSMutableData *m_decodedData;
    _Bool m_decodeError;
    _Bool m_appendEnd;
    AVAudioFormat *_format;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
- (void)initDecoder;
- (void)initDataFormat;
- (void)decodeData;
- (void)appendData:(id)arg1 decodeNow:(_Bool)arg2 lastSlice:(_Bool)arg3;
- (void)getDecodeData:(void *)arg1 playedFrames:(unsigned int)arg2 frames:(unsigned int *)arg3;
- (void)getDecodeData:(void *)arg1 time:(unsigned int)arg2 frames:(unsigned int *)arg3;
- (void)setDataForDecode:(id)arg1 decodeNow:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
