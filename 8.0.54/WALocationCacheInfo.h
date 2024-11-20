//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

@class NSMutableArray, NSString;

@interface WALocationCacheInfo
{
    NSMutableArray *_locationArr;
}

+ (void)initialize;
+ (void)PBArrayAdd_locationArr;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *locationArr; // @synthesize locationArr=_locationArr;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

