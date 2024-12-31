//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactEncryptSecret : NSObject
{
    NSString *_textStateEncryptSecret;
    NSString *_commonEncryptSecret;
    NSString *_recordEncryptSecret;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_recordEncryptSecret;
+ (void)PBArrayAdd_commonEncryptSecret;
+ (void)PBArrayAdd_textStateEncryptSecret;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recordEncryptSecret; // @synthesize recordEncryptSecret=_recordEncryptSecret;
@property(retain, nonatomic) NSString *commonEncryptSecret; // @synthesize commonEncryptSecret=_commonEncryptSecret;
@property(retain, nonatomic) NSString *textStateEncryptSecret; // @synthesize textStateEncryptSecret=_textStateEncryptSecret;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

