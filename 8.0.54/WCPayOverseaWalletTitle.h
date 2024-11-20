//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCPayOverseaWalletTitle : NSObject
{
    NSData *_main;
    NSData *_sub;
}

+ (void)initialize;
+ (void)PBArrayAdd_sub;
+ (void)PBArrayAdd_main;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sub; // @synthesize sub=_sub;
@property(retain, nonatomic) NSData *main; // @synthesize main=_main;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

