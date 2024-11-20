//
// ClassDump By HuangBai Private 
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSIntelligentMsgUserNameIdItem : NSObject
{
    _Bool isAutoIncrement;
    unsigned int userNameId;
    unsigned int validFlag;
    unsigned int preCursorMesId;
    unsigned int nextCursorMesId;
    NSString *userName;
    long long lastInsertedRowID;
}

+ (void)__wcdb_column_constraint_120:(void *)arg1;
+ (void)__wcdb_column_constraint_119:(void *)arg1;
+ (void)__wcdb_column_constraint_118:(void *)arg1;
+ (void)__wcdb_column_constraint_117:(void *)arg1;
+ (id)swift_nextCursorMesId;
+ (const void *)__wcdb_synthesize_116:(void *)arg1;
+ (const void *)nextCursorMesId;
+ (id)swift_preCursorMesId;
+ (const void *)__wcdb_synthesize_115:(void *)arg1;
+ (const void *)preCursorMesId;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_114:(void *)arg1;
+ (const void *)userName;
+ (id)swift_validFlag;
+ (const void *)__wcdb_synthesize_113:(void *)arg1;
+ (const void *)validFlag;
+ (id)swift_userNameId;
+ (const void *)__wcdb_synthesize_112:(void *)arg1;
+ (const void *)userNameId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(nonatomic) unsigned int nextCursorMesId; // @synthesize nextCursorMesId;
@property(nonatomic) unsigned int preCursorMesId; // @synthesize preCursorMesId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int validFlag; // @synthesize validFlag;
@property(nonatomic) unsigned int userNameId; // @synthesize userNameId;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
