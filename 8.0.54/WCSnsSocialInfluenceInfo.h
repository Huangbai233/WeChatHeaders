//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSString;

@interface WCSnsSocialInfluenceInfo
{
    int _maxLikeCount;
    int _maxCommentCount;
    NSString *_layerId;
    NSString *_expId;
}

+ (void)initialize;
+ (void)PBArrayAdd_maxCommentCount;
+ (void)PBArrayAdd_maxLikeCount;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_layerId;
- (void).cxx_destruct;
@property(nonatomic) int maxCommentCount; // @synthesize maxCommentCount=_maxCommentCount;
@property(nonatomic) int maxLikeCount; // @synthesize maxLikeCount=_maxLikeCount;
@property(retain, nonatomic) NSString *expId; // @synthesize expId=_expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId=_layerId;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

