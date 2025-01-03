//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBindCardRecommendTinyAppInfo : NSObject
{
    unsigned int _tinyapp_version;
    NSString *_tinyapp_name;
    NSString *_tinyapp_logo;
    NSString *_tinyapp_desc;
    NSString *_tinyapp_username;
    NSString *_tinyapp_path;
    NSString *_activity_tinyapp_btn_text;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int tinyapp_version; // @synthesize tinyapp_version=_tinyapp_version;
@property(retain, nonatomic) NSString *activity_tinyapp_btn_text; // @synthesize activity_tinyapp_btn_text=_activity_tinyapp_btn_text;
@property(retain, nonatomic) NSString *tinyapp_path; // @synthesize tinyapp_path=_tinyapp_path;
@property(retain, nonatomic) NSString *tinyapp_username; // @synthesize tinyapp_username=_tinyapp_username;
@property(retain, nonatomic) NSString *tinyapp_desc; // @synthesize tinyapp_desc=_tinyapp_desc;
@property(retain, nonatomic) NSString *tinyapp_logo; // @synthesize tinyapp_logo=_tinyapp_logo;
@property(retain, nonatomic) NSString *tinyapp_name; // @synthesize tinyapp_name=_tinyapp_name;
- (void)genFromDic:(id)arg1;

@end

