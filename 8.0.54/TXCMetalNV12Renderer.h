//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSArray, TXCMetalRenderKernel;

@interface TXCMetalNV12Renderer
{
    TXCMetalRenderKernel *_renderKernel;
    const struct SimdColorConversion *_colorConversion;
    NSArray *_textures;
}

- (void).cxx_destruct;
- (unsigned long long)rendererType;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (void)uploadPixelBuffer:(struct __CVBuffer *)arg1;
- (id)renderKernel;

@end

