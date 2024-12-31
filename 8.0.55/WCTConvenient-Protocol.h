//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSObject, NSString;
@protocol WCTColumnCoding, WCTTableCoding, WCTValueProtocol;

@protocol WCTConvenient
- (NSArray *)getRowsFromStatement:(const void *)arg1;
- (NSArray *)getColumnFromStatement:(const void *)arg1;
- (NSArray *)getRowFromStatement:(const void *)arg1;
- (NSObject<WCTValueProtocol> *)getValueFromStatement:(const void *)arg1;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 limit:(const void *)arg4;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 limit:(const void *)arg3;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3;
- (NSArray *)getRowsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 limit:(const void *)arg4;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 limit:(const void *)arg3;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3;
- (NSArray *)getColumnOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2;
- (NSArray *)getRowOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getRowOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 offset:(const void *)arg4;
- (NSArray *)getRowOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 offset:(const void *)arg4;
- (NSArray *)getRowOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (NSArray *)getRowOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 offset:(const void *)arg3;
- (NSArray *)getRowOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3;
- (NSArray *)getRowOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3;
- (NSArray *)getRowOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2;
- (NSObject<WCTValueProtocol> *)getValueOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 offset:(const void *)arg5;
- (NSObject<WCTValueProtocol> *)getValueOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 offset:(const void *)arg4;
- (NSObject<WCTValueProtocol> *)getValueOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 offset:(const void *)arg4;
- (NSObject<WCTValueProtocol> *)getValueOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (NSObject<WCTValueProtocol> *)getValueOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 offset:(const void *)arg3;
- (NSObject<WCTValueProtocol> *)getValueOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3;
- (NSObject<WCTValueProtocol> *)getValueOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3;
- (NSObject<WCTValueProtocol> *)getValueOnResultColumn:(const void *)arg1 fromTable:(NSString *)arg2;
- (_Bool)deleteFromTable:(NSString *)arg1 where:(const void *)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (_Bool)deleteFromTable:(NSString *)arg1 orders:(const void *)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (_Bool)deleteFromTable:(NSString *)arg1 where:(const void *)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (_Bool)deleteFromTable:(NSString *)arg1 where:(const void *)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (_Bool)deleteFromTable:(NSString *)arg1 limit:(const void *)arg2 offset:(const void *)arg3;
- (_Bool)deleteFromTable:(NSString *)arg1 orders:(const void *)arg2 limit:(const void *)arg3;
- (_Bool)deleteFromTable:(NSString *)arg1 where:(const void *)arg2 limit:(const void *)arg3;
- (_Bool)deleteFromTable:(NSString *)arg1 limit:(const void *)arg2;
- (_Bool)deleteFromTable:(NSString *)arg1 where:(const void *)arg2;
- (_Bool)deleteFromTable:(NSString *)arg1;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6 offset:(const void *)arg7;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 where:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 where:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 limit:(const void *)arg4;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3 where:(const void *)arg4;
- (_Bool)updateTable:(NSString *)arg1 setProperty:(const void *)arg2 toValue:(NSObject<WCTColumnCoding> *)arg3;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6 offset:(const void *)arg7;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 where:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 where:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 limit:(const void *)arg4;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3 where:(const void *)arg4;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toRow:(NSArray *)arg3;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6 offset:(const void *)arg7;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 where:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 where:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 limit:(const void *)arg4;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3 where:(const void *)arg4;
- (_Bool)updateTable:(NSString *)arg1 setProperties:(const void *)arg2 toObject:(NSObject<WCTTableCoding> *)arg3;
- (_Bool)insertOrIgnoreObjects:(NSArray *)arg1 onProperties:(const void *)arg2 intoTable:(NSString *)arg3;
- (_Bool)insertOrIgnoreObject:(NSObject<WCTTableCoding> *)arg1 onProperties:(const void *)arg2 intoTable:(NSString *)arg3;
- (_Bool)insertOrReplaceObjects:(NSArray *)arg1 onProperties:(const void *)arg2 intoTable:(NSString *)arg3;
- (_Bool)insertOrReplaceObject:(NSObject<WCTTableCoding> *)arg1 onProperties:(const void *)arg2 intoTable:(NSString *)arg3;
- (_Bool)insertObjects:(NSArray *)arg1 onProperties:(const void *)arg2 intoTable:(NSString *)arg3;
- (_Bool)insertObject:(NSObject<WCTTableCoding> *)arg1 onProperties:(const void *)arg2 intoTable:(NSString *)arg3;
- (_Bool)insertOrIgnoreObjects:(NSArray *)arg1 intoTable:(NSString *)arg2;
- (_Bool)insertOrIgnoreObject:(NSObject<WCTTableCoding> *)arg1 intoTable:(NSString *)arg2;
- (_Bool)insertOrReplaceObjects:(NSArray *)arg1 intoTable:(NSString *)arg2;
- (_Bool)insertOrReplaceObject:(NSObject<WCTTableCoding> *)arg1 intoTable:(NSString *)arg2;
- (_Bool)insertObjects:(NSArray *)arg1 intoTable:(NSString *)arg2;
- (_Bool)insertObject:(NSObject<WCTTableCoding> *)arg1 intoTable:(NSString *)arg2;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 limit:(const void *)arg4;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 limit:(const void *)arg3;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3;
- (NSArray *)getObjectsOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 offset:(const void *)arg5;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 offset:(const void *)arg3;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(NSString *)arg2;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 limit:(const void *)arg4;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 limit:(const void *)arg3;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3;
- (NSArray *)getObjectsOfClass:(Class)arg1 fromTable:(NSString *)arg2;
- (id)getObjectOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4 offset:(const void *)arg5;
- (id)getObjectOfClass:(Class)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(NSString *)arg2 offset:(const void *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(NSString *)arg2 orders:(const void *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(NSString *)arg2 where:(const void *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(NSString *)arg2;
@end
