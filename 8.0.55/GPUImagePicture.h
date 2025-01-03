//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface GPUImagePicture
{
    struct CGSize pixelSizeOfImage;
    _Bool hasProcessedImage;
    NSObject<OS_dispatch_semaphore> *imageUpdateSemaphore;
}

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (struct CGSize)outputImageSize;
- (void)processImageUpToFilter:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)processImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processImage;
- (void)removeAllTargets;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 smoothlyScaleOutput:(_Bool)arg2 removePremultiplication:(_Bool)arg3;
- (id)initWithImage:(id)arg1 smoothlyScaleOutput:(_Bool)arg2 removePremultiplication:(_Bool)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 removePremultiplication:(_Bool)arg2;
- (id)initWithImage:(id)arg1 removePremultiplication:(_Bool)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 smoothlyScaleOutput:(_Bool)arg2;
- (id)initWithImage:(id)arg1 smoothlyScaleOutput:(_Bool)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

