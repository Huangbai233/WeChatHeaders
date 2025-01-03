//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, WCAdDynamicFeedElementAbsoluteContainerInfo, WCAdDynamicFeedElementAutoSizeInfo, WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedElementInfo : NSObject
{
    _Bool _isNormalStyle;
    _Bool _isValid;
    NSString *_elementId;
    NSString *_type;
    WCAdDynamicFeedElementValue *_width;
    WCAdDynamicFeedElementValue *_height;
    WCAdDynamicFeedElementValue *_left;
    WCAdDynamicFeedElementValue *_top;
    WCAdDynamicFeedElementValue *_right;
    WCAdDynamicFeedElementValue *_bottom;
    WCAdDynamicFeedElementValue *_minWidth;
    WCAdDynamicFeedElementValue *_maxWidth;
    WCAdDynamicFeedElementValue *_minHeight;
    WCAdDynamicFeedElementValue *_maxHeight;
    UIColor *_backgroundColorExt;
    WCAdDynamicFeedElementValue *_padding;
    WCAdDynamicFeedElementValue *_paddingLeft;
    WCAdDynamicFeedElementValue *_paddingTop;
    WCAdDynamicFeedElementValue *_paddingRight;
    WCAdDynamicFeedElementValue *_paddingBottom;
    WCAdDynamicFeedElementValue *_margin;
    WCAdDynamicFeedElementValue *_marginLeft;
    WCAdDynamicFeedElementValue *_marginTop;
    WCAdDynamicFeedElementValue *_marginRight;
    WCAdDynamicFeedElementValue *_marginBottom;
    UIColor *_borderColorExt;
    WCAdDynamicFeedElementValue *_borderWidth;
    WCAdDynamicFeedElementValue *_borderRadius;
    NSString *_alpha;
    NSString *_overflow;
    WCAdDynamicFeedElementAutoSizeInfo *_autoSize;
    NSString *_clickType;
    NSString *_clickTransitionType;
    NSString *_text;
    WCAdDynamicFeedElementValue *_fontSize;
    UIColor *_colorExt;
    NSString *_fontWeight;
    WCAdDynamicFeedElementValue *_lineHeight;
    WCAdDynamicFeedElementValue *_lineSpacing;
    NSString *_textAlign;
    NSString *_whiteSpace;
    NSString *_wordBreak;
    NSString *_textOverflow;
    NSString *_lineClamp;
    NSString *_url;
    NSString *_urlDark;
    NSString *_urliOS;
    NSString *_urlDarkiOS;
    NSString *_objectFit;
    NSString *_localImageResource;
    WCAdDynamicFeedElementInfo *_hoverStyle;
    WCAdDynamicFeedElementInfo *_disabledStyle;
    NSString *_display;
    NSString *_position;
    NSString *_flexWrap;
    NSString *_flexDirection;
    NSString *_justifyContent;
    NSString *_alignItems;
    NSString *_flex;
    NSString *_flexGrow;
    NSString *_flexShrink;
    NSArray *_attachAnimations;
    NSString *_separatorDirection;
    WCAdDynamicFeedElementAbsoluteContainerInfo *_absoluteContainer;
    NSArray *_children;
    WCAdDynamicFeedElementValue *_backgroundColor;
    WCAdDynamicFeedElementValue *_backgroundColorDark;
    WCAdDynamicFeedElementValue *_borderColor;
    WCAdDynamicFeedElementValue *_borderColorDark;
    WCAdDynamicFeedElementValue *_color;
    WCAdDynamicFeedElementValue *_colorDark;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *colorDark; // @synthesize colorDark=_colorDark;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *color; // @synthesize color=_color;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *borderColorDark; // @synthesize borderColorDark=_borderColorDark;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *backgroundColorDark; // @synthesize backgroundColorDark=_backgroundColorDark;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(retain, nonatomic) WCAdDynamicFeedElementAbsoluteContainerInfo *absoluteContainer; // @synthesize absoluteContainer=_absoluteContainer;
@property(retain, nonatomic) NSString *separatorDirection; // @synthesize separatorDirection=_separatorDirection;
@property(retain, nonatomic) NSArray *attachAnimations; // @synthesize attachAnimations=_attachAnimations;
@property(retain, nonatomic) NSString *flexShrink; // @synthesize flexShrink=_flexShrink;
@property(retain, nonatomic) NSString *flexGrow; // @synthesize flexGrow=_flexGrow;
@property(retain, nonatomic) NSString *flex; // @synthesize flex=_flex;
@property(retain, nonatomic) NSString *alignItems; // @synthesize alignItems=_alignItems;
@property(retain, nonatomic) NSString *justifyContent; // @synthesize justifyContent=_justifyContent;
@property(retain, nonatomic) NSString *flexDirection; // @synthesize flexDirection=_flexDirection;
@property(retain, nonatomic) NSString *flexWrap; // @synthesize flexWrap=_flexWrap;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *display; // @synthesize display=_display;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *disabledStyle; // @synthesize disabledStyle=_disabledStyle;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *hoverStyle; // @synthesize hoverStyle=_hoverStyle;
@property(retain, nonatomic) NSString *localImageResource; // @synthesize localImageResource=_localImageResource;
@property(retain, nonatomic) NSString *objectFit; // @synthesize objectFit=_objectFit;
@property(retain, nonatomic) NSString *urlDarkiOS; // @synthesize urlDarkiOS=_urlDarkiOS;
@property(retain, nonatomic) NSString *urliOS; // @synthesize urliOS=_urliOS;
@property(retain, nonatomic) NSString *urlDark; // @synthesize urlDark=_urlDark;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool isNormalStyle; // @synthesize isNormalStyle=_isNormalStyle;
@property(retain, nonatomic) NSString *lineClamp; // @synthesize lineClamp=_lineClamp;
@property(retain, nonatomic) NSString *textOverflow; // @synthesize textOverflow=_textOverflow;
@property(retain, nonatomic) NSString *wordBreak; // @synthesize wordBreak=_wordBreak;
@property(retain, nonatomic) NSString *whiteSpace; // @synthesize whiteSpace=_whiteSpace;
@property(retain, nonatomic) NSString *textAlign; // @synthesize textAlign=_textAlign;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(retain, nonatomic) UIColor *colorExt; // @synthesize colorExt=_colorExt;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *clickTransitionType; // @synthesize clickTransitionType=_clickTransitionType;
@property(retain, nonatomic) NSString *clickType; // @synthesize clickType=_clickType;
@property(retain, nonatomic) WCAdDynamicFeedElementAutoSizeInfo *autoSize; // @synthesize autoSize=_autoSize;
@property(retain, nonatomic) NSString *overflow; // @synthesize overflow=_overflow;
@property(retain, nonatomic) NSString *alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *borderRadius; // @synthesize borderRadius=_borderRadius;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColorExt; // @synthesize borderColorExt=_borderColorExt;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *marginBottom; // @synthesize marginBottom=_marginBottom;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *marginRight; // @synthesize marginRight=_marginRight;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *marginTop; // @synthesize marginTop=_marginTop;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *marginLeft; // @synthesize marginLeft=_marginLeft;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *paddingRight; // @synthesize paddingRight=_paddingRight;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIColor *backgroundColorExt; // @synthesize backgroundColorExt=_backgroundColorExt;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *minHeight; // @synthesize minHeight=_minHeight;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *minWidth; // @synthesize minWidth=_minWidth;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *right; // @synthesize right=_right;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *top; // @synthesize top=_top;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *left; // @synthesize left=_left;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *height; // @synthesize height=_height;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *elementId; // @synthesize elementId=_elementId;
- (void)resetPropertyWithPropertyName:(id)arg1;
- (void)resetPropertiesWithInfluentElementInfo:(id)arg1;
- (void)mergeInfoWithInfluentElementInfo:(id)arg1;
- (void)processWithInfluentElementInfos:(id)arg1;
- (void)parseAutoSizeAdapteInfo;
- (_Bool)isClickTypeValid;
- (_Bool)isElementTypeValid;
- (id)fetchPredownloadImageResources;
- (_Bool)isImageValueValidForPredownload:(id)arg1;
- (id)findTheMainElementInfo;
- (_Bool)parseElementValuesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2 verityType:(_Bool)arg3;
- (_Bool)parseElementValuesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

