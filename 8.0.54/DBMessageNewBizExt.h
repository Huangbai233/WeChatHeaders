//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface DBMessageNewBizExt : NSObject
{
    unsigned int _msgLocalId;
    unsigned int _msgType;
    unsigned int _msgInnerType;
    unsigned int _status;
    unsigned int _invalidTime;
    unsigned int _msgExtColInt1;
    unsigned int _msgExtColInt2;
    NSString *_chatUsername;
    NSString *_bizId;
    NSString *_msgExtColString1;
    NSString *_msgExtColString2;
}

+ (void)__wcdb_index_109:(void *)arg1;
+ (void)__wcdb_index_108:(void *)arg1;
+ (id)swift_msgExtColString2;
+ (const void *)__wcdb_synthesize_107:(void *)arg1;
+ (const void *)msgExtColString2;
+ (id)swift_msgExtColString1;
+ (const void *)__wcdb_synthesize_106:(void *)arg1;
+ (const void *)msgExtColString1;
+ (id)swift_msgExtColInt2;
+ (const void *)__wcdb_synthesize_105:(void *)arg1;
+ (const void *)msgExtColInt2;
+ (id)swift_msgExtColInt1;
+ (const void *)__wcdb_synthesize_104:(void *)arg1;
+ (const void *)msgExtColInt1;
+ (id)swift_invalidTime;
+ (const void *)__wcdb_synthesize_103:(void *)arg1;
+ (const void *)invalidTime;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_102:(void *)arg1;
+ (const void *)status;
+ (id)swift_bizId;
+ (const void *)__wcdb_synthesize_101:(void *)arg1;
+ (const void *)bizId;
+ (id)swift_msgInnerType;
+ (const void *)__wcdb_synthesize_100:(void *)arg1;
+ (const void *)msgInnerType;
+ (id)swift_msgType;
+ (const void *)__wcdb_synthesize_99:(void *)arg1;
+ (const void *)msgType;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_98:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_chatUsername;
+ (const void *)__wcdb_synthesize_97:(void *)arg1;
+ (const void *)chatUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *msgExtColString2; // @synthesize msgExtColString2=_msgExtColString2;
@property(retain, nonatomic) NSString *msgExtColString1; // @synthesize msgExtColString1=_msgExtColString1;
@property(nonatomic) unsigned int msgExtColInt2; // @synthesize msgExtColInt2=_msgExtColInt2;
@property(nonatomic) unsigned int msgExtColInt1; // @synthesize msgExtColInt1=_msgExtColInt1;
@property(nonatomic) unsigned int invalidTime; // @synthesize invalidTime=_invalidTime;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) unsigned int msgInnerType; // @synthesize msgInnerType=_msgInnerType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatUsername; // @synthesize chatUsername=_chatUsername;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

