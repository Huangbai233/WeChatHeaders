//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class KindaUIView, MMDynamicColor, MMKViewOnClickCallback, MMKViewOnLongClickCallback, NSString, UIView;
@protocol KindaViewDelegate;

@interface KindaView : NSObject
{
    float width;
    float height;
    long long alignSelf;
    float flexBasis;
    long long positionType;
    float left;
    float top;
    float right;
    float bottom;
    float minWidth;
    float maxWidth;
    float minHeight;
    float maxHeight;
    float aspectRatio;
    float flexGrow;
    float flexShrink;
    float marginLeft;
    float marginTop;
    float marginRight;
    float marginBottom;
    float paddingLeft;
    float paddingTop;
    float paddingRight;
    float paddingBottom;
    float leftPercent;
    float topPercent;
    float rightPercent;
    float bottomPercent;
    float widthPercent;
    float heightPercent;
    float marginLeftPercent;
    float marginTopPercent;
    float marginRightPercent;
    float marginBottomPercent;
    _Bool supportDynamicSize;
    NSString *viewid;
    KindaUIView *m_view;
    MMKViewOnClickCallback *m_onClickCallback;
    MMKViewOnLongClickCallback *m_onLongClickCallback;
    long long m_visible;
    NSString *m_viewId;
    struct CGRect firstFrame;
    _Bool _useStyleLightInterface;
    _Bool _m_isRefreshing;
    UIView *parent;
    KindaView *_wClickAsView;
    id <KindaViewDelegate> _delegate;
    MMDynamicColor *_backgroundColor;
    MMDynamicColor *_borderColor;
    MMDynamicColor *_shadowColor;
    unsigned long long _maskedCorners;
}

- (void).cxx_destruct;
@property unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(nonatomic) _Bool m_isRefreshing; // @synthesize m_isRefreshing=_m_isRefreshing;
@property(nonatomic) _Bool useStyleLightInterface; // @synthesize useStyleLightInterface=_useStyleLightInterface;
@property(retain, nonatomic) MMDynamicColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) MMDynamicColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) MMDynamicColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) __weak id <KindaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak KindaView *wClickAsView; // @synthesize wClickAsView=_wClickAsView;
@property(nonatomic) __weak UIView *parent; // @synthesize parent;
- (void)setDisableHighlightDarkMode:(_Bool)arg1;
- (_Bool)getDisableHighlightDarkMode;
- (id)getReportId;
- (void)setReportId:(id)arg1;
- (void)onClickToKinda;
- (void)mm_onColorAppearanceDidChange;
- (void)sizeDidChange:(id)arg1;
- (void)didTap:(id)arg1;
- (void)requestFrameImpl:(id)arg1;
- (void)setFrameImpl:(id)arg1 callback:(id)arg2;
- (void)setTranslateY:(float)arg1;
- (void)setTranslateX:(float)arg1;
- (void)setPaddingTopPercent:(float)arg1;
- (void)setPaddingRightPercent:(float)arg1;
- (void)setPaddingLeftPercent:(float)arg1;
- (void)setPaddingBottomPercent:(float)arg1;
- (void)setBorderPressedColor:(id)arg1;
- (void)setSecure:(_Bool)arg1;
- (_Bool)getSecure;
- (float)getTranslateY;
- (float)getTranslateX;
- (float)getPaddingTopPercent;
- (float)getPaddingRightPercent;
- (float)getPaddingLeftPercent;
- (float)getPaddingBottomPercent;
- (id)getBorderPressedColor;
- (id)convertPointToScreen:(id)arg1;
- (id)convertPointToView:(id)arg1 view:(id)arg2;
- (void)removeBlurEffect;
- (void)addBlurEffect:(int)arg1;
- (void)notifyLayout;
- (void)onLongGesture:(id)arg1;
- (void)onTapGesture:(id)arg1;
- (void)notifyTap;
- (void)autoHeight;
- (void)autoWidth;
- (void)accessibilityStatesType:(long long)arg1;
- (void)accessibilityTraitsType:(long long)arg1;
- (void)expandHitSize:(float)arg1 height:(float)arg2;
- (void)requestLayout;
- (void)setIsRefreshing:(_Bool)arg1;
- (_Bool)getIsRefreshing;
- (float)getAbsoluteOriginYInScreen;
- (float)getAbsoluteOriginXInScreen;
- (float)getFrameOriginY;
- (float)getFrameOriginX;
- (id)getAccessibilityString;
- (void)setAccessibilityString:(id)arg1;
- (float)getAlpha;
- (void)setAlpha:(float)arg1;
- (float)getScaleY;
- (void)setScaleY:(float)arg1;
- (float)getScaleX;
- (void)setScaleX:(float)arg1;
- (float)getRotation;
- (void)setRotation:(float)arg1;
- (_Bool)getSupportDynamicSize;
- (void)setSupportDynamicSize:(_Bool)arg1;
- (_Bool)getEnableHighLight;
- (void)setEnableHighLight:(_Bool)arg1;
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
- (void)setTopRightCornerRadius:(float)arg1;
- (void)setTopLeftCornerRadius:(float)arg1;
- (void)setBottomRightCornerRadius:(float)arg1;
- (void)setBottomLeftCornerRadius:(float)arg1;
- (void)initWithPlatformDelegate:(id)arg1;
- (float)getTopRightCornerRadius;
- (float)getTopLeftCornerRadius;
- (float)getBottomRightCornerRadius;
- (float)getBottomLeftCornerRadius;
- (void)setOnLongClickCallback:(id)arg1;
- (id)getOnClickCallback;
- (void)setOnClickCallback:(id)arg1;
- (void)setOnTouchCallback:(id)arg1;
- (void)accessibilityClickFrom:(id)arg1;
- (id)getId;
- (void)setId:(id)arg1;
- (float)getShadowRadius;
- (void)setShadowRadius:(float)arg1;
- (float)getShadowOffset;
- (void)setShadowOffset:(float)arg1;
- (id)getShadowColor;
- (float)getCornerRadius;
- (void)setCornerRadius:(float)arg1;
- (id)getBorderColor;
- (float)getBorderWidth;
- (void)setBorderWidth:(float)arg1;
- (long long)getVisible;
- (void)setVisible:(long long)arg1;
- (_Bool)getClickable;
- (void)setClickable:(_Bool)arg1;
- (_Bool)getAccessible;
- (void)setAccessible:(_Bool)arg1;
- (id)getBackgroundColor;
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
- (float)getFlexShrink;
- (void)setFlexShrink:(float)arg1;
- (float)getFlexGrow;
- (void)setFlexGrow:(float)arg1;
- (float)getAspectRatio;
- (void)setAspectRatio:(float)arg1;
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
- (long long)getPositionType;
- (void)setPositionType:(long long)arg1;
- (float)getFlexBasis;
- (void)setFlexBasis:(float)arg1;
- (long long)getAlignSelf;
- (void)setAlignSelf:(long long)arg1;
- (float)getHeight;
- (void)setHeight:(float)arg1;
- (float)getWidth;
- (void)setWidth:(float)arg1;
- (id)getViewId;
- (void)setViewId:(id)arg1;
- (id)getView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

