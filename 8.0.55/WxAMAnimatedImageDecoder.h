//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAnimatedImageDecodeConfig, NSData, NSString, UIImage;

@interface WxAMAnimatedImageDecoder
{
    NSData *m_data;
    void *m_decoder;
    struct StWxAMFrame *m_curWxFrame;
    unsigned int m_maxWidth;
    _Bool m_hasDecodeOneLoop;
    _Bool m_isSingleFrame;
    int m_frameCount;
    int m_currentFrameId;
    int m_decodedLoopCnt;
    NSString *m_cpKey;
    UIImage *m_currentFrameImage;
    double m_currentFrameDuration;
    MMAnimatedImageDecodeConfig *_config;
    struct CGSize m_imageSize;
}

+ (id)imageOfFrame:(struct StWxAMFrame *)arg1 scale:(double)arg2 shouldShowWxamMark:(_Bool)arg3;
+ (double)secondsOfFrame:(struct StWxAMFrame *)arg1;
+ (id)imageWithWxAMData:(id)arg1 scale:(double)arg2 config:(id)arg3;
+ (id)imageWithWxAMData:(id)arg1 scale:(double)arg2;
+ (int)frameCountForImageData:(id)arg1;
+ (struct CGSize)imageSizeWithWxAMData:(id)arg1;
+ (_Bool)isWxAMData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMAnimatedImageDecodeConfig *config; // @synthesize config=_config;
- (int)decodedLoopCnt;
- (_Bool)isSingleFrame;
- (_Bool)hasDecodeOneLoop;
- (int)currentFrameId;
- (struct CGSize)imageSize;
- (int)frameCount;
- (double)currentFrameDuration;
- (id)cpKey;
- (_Bool)configDecoderWithWXGifData:(id)arg1;
- (void)uninitDecoder;
- (void)setScale:(double)arg1;
- (id)currentFrameImage;
- (_Bool)seekToNextFrame;
- (_Bool)rewind;
- (id)initWithData:(id)arg1 config:(id)arg2;
- (void)dealloc;

@end

