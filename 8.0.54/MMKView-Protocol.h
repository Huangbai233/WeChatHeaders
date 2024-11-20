//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import "NSObject-Protocol.h"

@class MMDynamicColor, MMKPoint, MMKRect, MMKViewOnClickCallback, MMKViewOnLongClickCallback, MMKViewOnTouchCallback, MMVoidCallback, MMVoidKRectCallback, NSString;
@protocol MMIUIPagePlatformDelegate, MMKView;

@protocol MMKView <NSObject>
- (void)setOnTouchCallback:(MMKViewOnTouchCallback *)arg1;
- (void)setOnLongClickCallback:(MMKViewOnLongClickCallback *)arg1;
- (void)setOnClickCallback:(MMKViewOnClickCallback *)arg1;
- (_Bool)getDisableHighlightDarkMode;
- (void)setDisableHighlightDarkMode:(_Bool)arg1;
- (NSString *)getReportId;
- (void)setReportId:(NSString *)arg1;
- (_Bool)getIsRefreshing;
- (void)setIsRefreshing:(_Bool)arg1;
- (NSString *)getAccessibilityString;
- (void)setAccessibilityString:(NSString *)arg1;
- (_Bool)getSupportDynamicSize;
- (void)setSupportDynamicSize:(_Bool)arg1;
- (_Bool)getEnableHighLight;
- (void)setEnableHighLight:(_Bool)arg1;
- (float)getFlexShrink;
- (void)setFlexShrink:(float)arg1;
- (float)getFlexGrow;
- (void)setFlexGrow:(float)arg1;
- (float)getAspectRatio;
- (void)setAspectRatio:(float)arg1;
- (long long)getPositionType;
- (void)setPositionType:(long long)arg1;
- (float)getFlexBasis;
- (void)setFlexBasis:(float)arg1;
- (long long)getAlignSelf;
- (void)setAlignSelf:(long long)arg1;
- (float)getPaddingBottomPercent;
- (void)setPaddingBottomPercent:(float)arg1;
- (float)getPaddingRightPercent;
- (void)setPaddingRightPercent:(float)arg1;
- (float)getPaddingTopPercent;
- (void)setPaddingTopPercent:(float)arg1;
- (float)getPaddingLeftPercent;
- (void)setPaddingLeftPercent:(float)arg1;
- (float)getMarginBottomPercent;
- (void)setMarginBottomPercent:(float)arg1;
- (float)getMarginRightPercent;
- (void)setMarginRightPercent:(float)arg1;
- (float)getMarginTopPercent;
- (void)setMarginTopPercent:(float)arg1;
- (float)getMarginLeftPercent;
- (void)setMarginLeftPercent:(float)arg1;
- (float)getHeightPercent;
- (void)setHeightPercent:(float)arg1;
- (float)getWidthPercent;
- (void)setWidthPercent:(float)arg1;
- (float)getBottomPercent;
- (void)setBottomPercent:(float)arg1;
- (float)getRightPercent;
- (void)setRightPercent:(float)arg1;
- (float)getTopPercent;
- (void)setTopPercent:(float)arg1;
- (float)getLeftPercent;
- (void)setLeftPercent:(float)arg1;
- (float)getScaleY;
- (void)setScaleY:(float)arg1;
- (float)getScaleX;
- (void)setScaleX:(float)arg1;
- (float)getRotation;
- (void)setRotation:(float)arg1;
- (float)getTranslateY;
- (void)setTranslateY:(float)arg1;
- (float)getTranslateX;
- (void)setTranslateX:(float)arg1;
- (float)getAlpha;
- (void)setAlpha:(float)arg1;
- (float)getShadowRadius;
- (void)setShadowRadius:(float)arg1;
- (float)getShadowOffset;
- (void)setShadowOffset:(float)arg1;
- (MMDynamicColor *)getShadowColor;
- (void)setShadowColor:(MMDynamicColor *)arg1;
- (float)getBottomRightCornerRadius;
- (void)setBottomRightCornerRadius:(float)arg1;
- (float)getBottomLeftCornerRadius;
- (void)setBottomLeftCornerRadius:(float)arg1;
- (float)getTopRightCornerRadius;
- (void)setTopRightCornerRadius:(float)arg1;
- (float)getTopLeftCornerRadius;
- (void)setTopLeftCornerRadius:(float)arg1;
- (float)getCornerRadius;
- (void)setCornerRadius:(float)arg1;
- (MMDynamicColor *)getBorderPressedColor;
- (void)setBorderPressedColor:(MMDynamicColor *)arg1;
- (MMDynamicColor *)getBorderColor;
- (void)setBorderColor:(MMDynamicColor *)arg1;
- (float)getBorderWidth;
- (void)setBorderWidth:(float)arg1;
- (long long)getVisible;
- (void)setVisible:(long long)arg1;
- (_Bool)getSecure;
- (void)setSecure:(_Bool)arg1;
- (_Bool)getClickable;
- (void)setClickable:(_Bool)arg1;
- (_Bool)getAccessible;
- (void)setAccessible:(_Bool)arg1;
- (MMDynamicColor *)getBackgroundColor;
- (void)setBackgroundColor:(MMDynamicColor *)arg1;
- (float)getPaddingBottom;
- (void)setPaddingBottom:(float)arg1;
- (float)getPaddingRight;
- (void)setPaddingRight:(float)arg1;
- (float)getPaddingTop;
- (void)setPaddingTop:(float)arg1;
- (float)getPaddingLeft;
- (void)setPaddingLeft:(float)arg1;
- (float)getMarginBottom;
- (void)setMarginBottom:(float)arg1;
- (float)getMarginRight;
- (void)setMarginRight:(float)arg1;
- (float)getMarginTop;
- (void)setMarginTop:(float)arg1;
- (float)getMarginLeft;
- (void)setMarginLeft:(float)arg1;
- (float)getMaxHeight;
- (void)setMaxHeight:(float)arg1;
- (float)getMinHeight;
- (void)setMinHeight:(float)arg1;
- (float)getMaxWidth;
- (void)setMaxWidth:(float)arg1;
- (float)getMinWidth;
- (void)setMinWidth:(float)arg1;
- (float)getBottom;
- (void)setBottom:(float)arg1;
- (float)getRight;
- (void)setRight:(float)arg1;
- (float)getTop;
- (void)setTop:(float)arg1;
- (float)getLeft;
- (void)setLeft:(float)arg1;
- (float)getHeight;
- (void)setHeight:(float)arg1;
- (float)getWidth;
- (void)setWidth:(float)arg1;
- (NSString *)getViewId;
- (void)setViewId:(NSString *)arg1;
- (void)autoHeight;
- (void)autoWidth;
- (void)accessibilityStatesType:(long long)arg1;
- (void)accessibilityTraitsType:(long long)arg1;
- (void)accessibilityClickFrom:(id <MMKView>)arg1;
- (void)expandHitSize:(float)arg1 height:(float)arg2;
- (void)requestFrameImpl:(MMVoidKRectCallback *)arg1;
- (void)setFrameImpl:(MMKRect *)arg1 callback:(MMVoidCallback *)arg2;
- (void)requestLayout;
- (float)getAbsoluteOriginYInScreen;
- (float)getAbsoluteOriginXInScreen;
- (float)getFrameOriginY;
- (float)getFrameOriginX;
- (MMKPoint *)convertPointToScreen:(MMKPoint *)arg1;
- (MMKPoint *)convertPointToView:(MMKPoint *)arg1 view:(id <MMKView>)arg2;
- (void)removeBlurEffect;
- (void)addBlurEffect:(int)arg1;
- (void)initWithPlatformDelegate:(id <MMIUIPagePlatformDelegate>)arg1;
@end
