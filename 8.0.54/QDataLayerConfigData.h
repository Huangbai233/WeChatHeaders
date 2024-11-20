//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface QDataLayerConfigData : NSObject
{
    _Bool _enable;
    NSString *_url;
    NSDictionary *_layers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *layers; // @synthesize layers=_layers;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool enable; // @synthesize enable=_enable;
- (id)getConfigByID:(id)arg1;
- (id)getAllConfigNames;
- (id)initWithJSON:(id)arg1;

@end

