//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class WAEJCanvasContext2D, WAEJCanvasContextSkia2D;

@interface WAEJBindingCanvasContext2D
{
    struct OpaqueJSValue *jsCanvas;
    WAEJCanvasContext2D *renderingContext;
    WAEJCanvasContextSkia2D *skiaContext;
}

+ (void *)_ptr_to_func_wxSetContextAttributes;
+ (void *)_ptr_to_func_resetClip;
+ (void *)_ptr_to_func_clip;
+ (void *)_ptr_to_func_strokeText;
+ (void *)_ptr_to_func_fillText;
+ (void *)_ptr_to_func_measureText;
+ (void *)_ptr_to_func_isPointInStroke;
+ (void *)_ptr_to_func_isPointInPath;
+ (void *)_ptr_to_func_ellipse;
+ (void *)_ptr_to_func_arc;
+ (void *)_ptr_to_func_arcTo;
+ (void *)_ptr_to_func_quadraticCurveTo;
+ (void *)_ptr_to_func_bezierCurveTo;
+ (void *)_ptr_to_func_rect;
+ (void *)_ptr_to_func_lineTo;
+ (void *)_ptr_to_func_moveTo;
+ (void *)_ptr_to_func_stroke;
+ (void *)_ptr_to_func_fill;
+ (void *)_ptr_to_func_closePath;
+ (void *)_ptr_to_func_beginPath;
+ (void *)_ptr_to_func_createPattern;
+ (void *)_ptr_to_func_createRadialGradient;
+ (void *)_ptr_to_func_createLinearGradient;
+ (void *)_ptr_to_func_putImageData;
+ (void *)_ptr_to_func_createImageData;
+ (void *)_ptr_to_func_getImageData;
+ (void *)_ptr_to_func_clearRect;
+ (void *)_ptr_to_func_strokeRect;
+ (void *)_ptr_to_func_fillRect;
+ (void *)_ptr_to_func_drawImageAsync;
+ (void *)_ptr_to_func_drawImage;
+ (void *)_ptr_to_func_drawImageInstance;
+ (void *)_ptr_to_func_getLineDash;
+ (void *)_ptr_to_func_setLineDash;
+ (void *)_ptr_to_func_resetTransform;
+ (void *)_ptr_to_func_getTransform;
+ (void *)_ptr_to_func_setTransform;
+ (void *)_ptr_to_func_transform;
+ (void *)_ptr_to_func_scale;
+ (void *)_ptr_to_func_translate;
+ (void *)_ptr_to_func_rotate;
+ (void *)_ptr_to_func_restore;
+ (void *)_ptr_to_func_save;
+ (void *)_ptr_to_get_shadowColor;
+ (void *)_ptr_to_set_shadowColor;
+ (void *)_ptr_to_get_shadowOffsetY;
+ (void *)_ptr_to_set_shadowOffsetY;
+ (void *)_ptr_to_get_shadowOffsetX;
+ (void *)_ptr_to_set_shadowOffsetX;
+ (void *)_ptr_to_get_shadowBlur;
+ (void *)_ptr_to_set_shadowBlur;
+ (void *)_ptr_to_get_lineDashOffset;
+ (void *)_ptr_to_set_lineDashOffset;
+ (void *)_ptr_to_set_imageSmoothingQuality;
+ (void *)_ptr_to_get_imageSmoothingQuality;
+ (void *)_ptr_to_get_imageSmoothingEnabled;
+ (void *)_ptr_to_set_imageSmoothingEnabled;
+ (void *)_ptr_to_set_font;
+ (void *)_ptr_to_get_font;
+ (void *)_ptr_to_set_miterLimit;
+ (void *)_ptr_to_get_miterLimit;
+ (void *)_ptr_to_set_lineWidth;
+ (void *)_ptr_to_get_lineWidth;
+ (void *)_ptr_to_set_globalAlpha;
+ (void *)_ptr_to_get_globalAlpha;
+ (void *)_ptr_to_set_strokeStyle;
+ (void *)_ptr_to_get_strokeStyle;
+ (void *)_ptr_to_set_fillStyle;
+ (void *)_ptr_to_get_fillStyle;
+ (void *)_ptr_to_set_textBaseline;
+ (void *)_ptr_to_get_textBaseline;
+ (void *)_ptr_to_set_textAlign;
+ (void *)_ptr_to_get_textAlign;
+ (void *)_ptr_to_set_lineJoin;
+ (void *)_ptr_to_get_lineJoin;
+ (void *)_ptr_to_set_lineCap;
+ (void *)_ptr_to_get_lineCap;
+ (void *)_ptr_to_set_globalCompositeOperation;
+ (void *)_ptr_to_get_globalCompositeOperation;
+ (void *)_ptr_to_func___id;
@property(readonly, nonatomic) WAEJCanvasContext2D *renderingContext; // @synthesize renderingContext;
- (struct OpaqueJSValue *)_func_wxSetContextAttributes:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_resetClip:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_clip:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_strokeText:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_fillText:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_measureText:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_isPointInStroke:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_isPointInPath:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_ellipse:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_arc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_arcTo:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_quadraticCurveTo:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_bezierCurveTo:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_rect:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_lineTo:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_moveTo:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_stroke:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_fill:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_closePath:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_beginPath:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_createPattern:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_createRadialGradient:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_createLinearGradient:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_putImageData:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_createImageData:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_getImageData:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_clearRect:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_strokeRect:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_fillRect:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_drawImageAsync:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_drawImage:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_drawImageInstance:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_getLineDash:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_setLineDash:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_resetTransform:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_getTransform:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_setTransform:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_transform:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_scale:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_translate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_rotate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_restore:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_func_save:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)_get_shadowColor:(struct OpaqueJSContext *)arg1;
- (void)_set_shadowColor:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_shadowOffsetY:(struct OpaqueJSContext *)arg1;
- (void)_set_shadowOffsetY:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_shadowOffsetX:(struct OpaqueJSContext *)arg1;
- (void)_set_shadowOffsetX:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_shadowBlur:(struct OpaqueJSContext *)arg1;
- (void)_set_shadowBlur:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_lineDashOffset:(struct OpaqueJSContext *)arg1;
- (void)_set_lineDashOffset:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (void)_set_imageSmoothingQuality:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_imageSmoothingQuality:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_imageSmoothingEnabled:(struct OpaqueJSContext *)arg1;
- (void)_set_imageSmoothingEnabled:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (void)_set_font:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_font:(struct OpaqueJSContext *)arg1;
- (void)_set_miterLimit:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_miterLimit:(struct OpaqueJSContext *)arg1;
- (void)_set_lineWidth:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_lineWidth:(struct OpaqueJSContext *)arg1;
- (void)_set_globalAlpha:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_globalAlpha:(struct OpaqueJSContext *)arg1;
- (void)_set_strokeStyle:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_strokeStyle:(struct OpaqueJSContext *)arg1;
- (void)_set_fillStyle:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_fillStyle:(struct OpaqueJSContext *)arg1;
- (void)_set_textBaseline:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_textBaseline:(struct OpaqueJSContext *)arg1;
- (void)_set_textAlign:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_textAlign:(struct OpaqueJSContext *)arg1;
- (void)_set_lineJoin:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_lineJoin:(struct OpaqueJSContext *)arg1;
- (void)_set_lineCap:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_lineCap:(struct OpaqueJSContext *)arg1;
- (void)_set_globalCompositeOperation:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_globalCompositeOperation:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func___id:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;
- (void)dealloc;
- (_Bool)isPaused;
- (id)initWithRenderingContext:(id)arg1;
- (void)setImageSmoothingEnabled:(_Bool)arg1;
- (struct OpaqueJSValue *)getImageSmoothingEnabled:(struct OpaqueJSContext *)arg1;
- (void)setMiterLimit:(float)arg1;
- (struct OpaqueJSValue *)getMiterLimit:(struct OpaqueJSContext *)arg1;
- (void)setLineWidth:(float)arg1;
- (struct OpaqueJSValue *)getLineWidth:(struct OpaqueJSContext *)arg1;
- (void)setGlobalAlpha:(float)arg1;
- (struct OpaqueJSValue *)getGlobalAlpha:(struct OpaqueJSContext *)arg1;
- (void)setStrokeColor:(struct OpaqueJSContext *)arg1 color:(CDUnion_a0760c36)arg2;
- (void)setStrokeObject:(struct OpaqueJSContext *)arg1 pattern:(unsigned long long)arg2;
- (struct OpaqueJSValue *)getStrokeStyle:(struct OpaqueJSContext *)arg1;
- (void)setLineJoin:(const char *)arg1;
- (struct OpaqueJSValue *)getLineJoin:(struct OpaqueJSContext *)arg1;
- (void)setLineCap:(const char *)arg1;
- (struct OpaqueJSValue *)getLineCap:(struct OpaqueJSContext *)arg1;
- (void)set2DGlobalCompositeOperation:(const char *)arg1;
- (struct OpaqueJSValue *)getGlobalCompositeOperation:(struct OpaqueJSContext *)arg1;
- (void)wxSetContextAttributes:(struct OpaqueJSContext *)arg1 antialias:(int)arg2 antialiasSamples:(int)arg3;
- (void)putImageData:(unsigned long long)arg1 x:(float)arg2 y:(float)arg3;
- (struct OpaqueJSValue *)createImageData:(struct OpaqueJSContext *)arg1 w:(float)arg2 h:(float)arg3;
- (struct OpaqueJSValue *)createRadialGradient:(struct OpaqueJSContext *)arg1 x0:(float)arg2 y0:(float)arg3 r0:(float)arg4 x1:(float)arg5 y1:(float)arg6 r1:(float)arg7;
- (void)resetClip;
- (void)strokeRect:(float)arg1 dy:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)transformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)rotate:(float)arg1;
- (void)fill:(const char *)arg1;
- (void)clip:(const char *)arg1;
- (void)strokeText:(float)arg1 y:(float)arg2 str:(id)arg3;
- (void)translate:(float)arg1 y:(float)arg2;
- (void)restore;
- (void)save;
- (void)stroke;
- (void)arc:(float)arg1 y:(float)arg2 radius:(float)arg3 start:(float)arg4 end:(float)arg5 clockwise:(_Bool)arg6;
- (void)arcTo:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)bezierCurveTo:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 a:(float)arg5 b:(float)arg6;
- (void)quadraticCurveTo:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)rectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)closePath;
- (void)beginPath;
- (void)setTextAlign:(struct OpaqueJSContext *)arg1 str:(id)arg2;
- (struct OpaqueJSValue *)getTextAlign:(struct OpaqueJSContext *)arg1;
- (void)setTextBaseline:(struct OpaqueJSContext *)arg1 str:(id)arg2;
- (struct OpaqueJSValue *)getTextBaseline:(struct OpaqueJSContext *)arg1;
- (void)setFont:(struct OpaqueJSContext *)arg1 str:(id)arg2;
- (struct OpaqueJSValue *)getFont:(struct OpaqueJSContext *)arg1;
- (void)setFillColor:(struct OpaqueJSContext *)arg1 color:(CDUnion_a0760c36)arg2;
- (void)setFillObject:(struct OpaqueJSContext *)arg1 pattern:(unsigned long long)arg2;
- (struct OpaqueJSValue *)getFillStyle:(struct OpaqueJSContext *)arg1;
- (void)drawImage_9:(struct OpaqueJSContext *)arg1 image:(unsigned long long)arg2 sx:(float)arg3 sy:(float)arg4 sw:(float)arg5 sh:(float)arg6 dx:(float)arg7 dy:(float)arg8 dw:(float)arg9 dh:(float)arg10;
- (void)drawImage_5:(struct OpaqueJSContext *)arg1 image:(unsigned long long)arg2 dx:(float)arg3 dy:(float)arg4 dw:(float)arg5 dh:(float)arg6;
- (void)drawImage_3:(struct OpaqueJSContext *)arg1 image:(unsigned long long)arg2 dx:(float)arg3 dy:(float)arg4;
- (void)fillRect:(struct OpaqueJSContext *)arg1 x:(float)arg2 y:(float)arg3 w:(float)arg4 h:(float)arg5;
- (void)fillText:(struct OpaqueJSContext *)arg1 x:(float)arg2 y:(float)arg3 str:(id)arg4;
- (void)scale:(struct OpaqueJSContext *)arg1 x:(float)arg2 y:(float)arg3;
- (void)clearRect:(struct OpaqueJSContext *)arg1 x:(float)arg2 y:(float)arg3 w:(float)arg4 h:(float)arg5;
- (void)setTransform:(struct OpaqueJSContext *)arg1 m11:(float)arg2 m12:(float)arg3 m21:(float)arg4 m22:(float)arg5 dx:(float)arg6 dy:(float)arg7;
- (struct OpaqueJSValue *)meatureText:(struct OpaqueJSContext *)arg1 str:(id)arg2;
- (struct OpaqueJSValue *)getImageData:(struct OpaqueJSContext *)arg1 x:(float)arg2 y:(float)arg3 w:(float)arg4 h:(float)arg5;
- (struct OpaqueJSValue *)createLinearGradient:(struct OpaqueJSContext *)arg1 p1:(CDStruct_6e3f967a)arg2 p2:(CDStruct_6e3f967a)arg3;
- (struct OpaqueJSValue *)createPattern:(struct OpaqueJSContext *)arg1 image:(unsigned long long)arg2 repeat:(const char *)arg3;

@end
