//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBindCardRecommendNativeInfo : NSObject
{
    NSString *_wording;
    NSString *_icon;
    NSString *_btn_text;
    NSString *_title;
    NSString *_small_title;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *small_title; // @synthesize small_title=_small_title;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *btn_text; // @synthesize btn_text=_btn_text;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (void)genFromDic:(id)arg1;

@end

