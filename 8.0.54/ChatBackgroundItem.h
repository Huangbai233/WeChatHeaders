//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class MMRuleSetList, NSData, NSString;

@interface ChatBackgroundItem : NSObject
{
    long long cid;
    NSString *basePath;
    MMRuleSetList *m_ruleSetList;
    long long version;
    NSData *thumbData;
    long long status;
}

+ (id)loadChatBackgroundItemFromPath:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long status; // @synthesize status;
@property(nonatomic) long long version; // @synthesize version;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData;
@property(retain, nonatomic) MMRuleSetList *m_ruleSetList; // @synthesize m_ruleSetList;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath;
@property(nonatomic) long long cid; // @synthesize cid;
- (long long)getVersion;
- (id)getThumbPath;
- (id)getBackgroundImagePath;
- (id)fileOfImageNamed:(id)arg1;
- (id)description;
- (id)keyPaths;

@end

