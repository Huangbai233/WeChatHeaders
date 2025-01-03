//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBindCardActivityChangeInfo : NSObject
{
    NSString *_url;
    NSString *_wording;
    NSString *_icon;
    NSString *_btn_text;
    NSString *_title;
    NSString *_tinyapp_name;
    NSString *_tinyapp_logo;
    NSString *_tinyapp_desc;
    NSString *_tinyapp_username;
    NSString *_tinyapp_path;
    NSString *_activity_tinyapp_btn_text;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *activity_tinyapp_btn_text; // @synthesize activity_tinyapp_btn_text=_activity_tinyapp_btn_text;
@property(retain, nonatomic) NSString *tinyapp_path; // @synthesize tinyapp_path=_tinyapp_path;
@property(retain, nonatomic) NSString *tinyapp_username; // @synthesize tinyapp_username=_tinyapp_username;
@property(retain, nonatomic) NSString *tinyapp_desc; // @synthesize tinyapp_desc=_tinyapp_desc;
@property(retain, nonatomic) NSString *tinyapp_logo; // @synthesize tinyapp_logo=_tinyapp_logo;
@property(retain, nonatomic) NSString *tinyapp_name; // @synthesize tinyapp_name=_tinyapp_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *btn_text; // @synthesize btn_text=_btn_text;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void)genFromDic:(id)arg1;

@end

