//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface BrandLiveWeAppData : NSObject
{
    unsigned int _versionType;
    NSString *_appid;
    NSData *_dataBuffer;
    NSString *_path;
}

+ (id)fromPBWeAppData:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_dataBuffer;
+ (void)PBArrayAdd_versionType;
+ (void)PBArrayAdd_appid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSData *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(nonatomic) unsigned int versionType; // @synthesize versionType=_versionType;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
