//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase;

@interface WCTHandle : NSObject
{
    WCTDatabase *_database;
    void *_handle;
    struct RecyclableHandle _handleHolder;
    _Bool _writeHint;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)lazyRunTransaction:(CDUnknownBlockType)arg1;
- (id)error;
- (void)detachCancellationSignal;
- (void)attachCancellationSignal:(id)arg1;
- (id)allMultiObjectsOnResultColumns:(const void *)arg1;
- (id)allObjectsOnResultColumns:(const void *)arg1;
- (id)allRows;
- (id)allValuesAtIndex:(int)arg1;
- (id)allValues;
- (void)extractValueAtIndex:(int)arg1 toColumnBindingHolder:(const void *)arg2 ofObject:(id)arg3;
- (void)extractValueAtIndex:(int)arg1 toProperty:(const void *)arg2 ofObject:(id)arg3;
- (id)extractMultiObjectOnResultColumns:(const void *)arg1;
- (id)extractObjectOnResultColumns:(const void *)arg1;
- (id)extractRow;
- (id)extractTableNameAtIndex:(int)arg1;
- (id)extractColumnNameAtIndex:(int)arg1;
- (id)extractOriginColumnNameAtIndex:(int)arg1;
- (int)extractNumberOfColumns;
- (unsigned long long)extractTypeAtIndex:(int)arg1;
- (id)extractValueAtIndex:(int)arg1;
- (id)extractDataAtIndex:(int)arg1;
- (id)extractNumberAtIndex:(int)arg1;
- (id)extractStringAtIndex:(int)arg1;
- (double)extractDoubleAtIndex:(int)arg1;
- (long long)extractIntegerAtIndex:(int)arg1;
- (int)bindParameterIndex:(const void *)arg1;
- (void)bindProperties:(const void *)arg1 ofObject:(id)arg2;
- (void)bindProperty:(const void *)arg1 ofObject:(id)arg2 toIndex:(int)arg3;
- (void)bindValue:(id)arg1 toIndex:(int)arg2;
- (void)bindNumber:(id)arg1 toIndex:(int)arg2;
- (void)bindData:(id)arg1 toIndex:(int)arg2;
- (void)bindString:(id)arg1 toIndex:(int)arg2;
- (void)bindNullToIndex:(int)arg1;
- (void)bindDouble:(const double *)arg1 toIndex:(int)arg2;
- (void)bindInteger:(const long long *)arg1 toIndex:(int)arg2;
- (_Bool)isStatementReadonly;
- (int)getTotalChanges;
- (int)getChanges;
- (long long)getLastInsertedRowID;
- (void)clearBindings;
- (void)reset;
- (_Bool)done;
- (_Bool)step;
- (void)finalizeStatement;
- (_Bool)isPrepared;
- (_Bool)rawPrepare:(id)arg1;
- (_Bool)prepare:(const void *)arg1;
- (_Bool)rawExecute:(id)arg1;
- (_Bool)execute:(const void *)arg1;
@property(readonly, nonatomic) WCTDatabase *database;
- (_Bool)isValidated;
- (void)invalidate;
- (_Bool)validate;
- (void)finalizeAllStatements;
- (id)getOrCreatePreparedStatement:(const void *)arg1;
- (void)setWriteHint:(_Bool)arg1;
- (void *)getOrGenerateHandle;
- (id)initWithUnsafeHandle:(void *)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 andUnsafeHandle:(void *)arg2;
- (id)prepareMultiSelect;
- (id)prepareSelect;
- (id)prepareUpdate;
- (id)prepareDelete;
- (id)prepareInsert;
- (id)getRowsFromStatement:(const void *)arg1;
- (id)getColumnFromStatement:(const void *)arg1;
- (id)getRowFromStatement:(const void *)arg1;
- (id)getValueFromStatement:(const void *)arg1;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 limit:(const void *)arg4;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 limit:(const void *)arg3;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3;
- (id)getRowsOnResultColumns:(const void *)arg1 fromTable:(id)arg2;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 limit:(const void *)arg4;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 limit:(const void *)arg3;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3;
- (id)getColumnOnResultColumn:(const void *)arg1 fromTable:(id)arg2;
- (id)getRowOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 offset:(const void *)arg5;
- (id)getRowOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 offset:(const void *)arg4;
- (id)getRowOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 offset:(const void *)arg4;
- (id)getRowOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getRowOnResultColumns:(const void *)arg1 fromTable:(id)arg2 offset:(const void *)arg3;
- (id)getRowOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3;
- (id)getRowOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3;
- (id)getRowOnResultColumns:(const void *)arg1 fromTable:(id)arg2;
- (id)getValueOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 offset:(const void *)arg5;
- (id)getValueOnResultColumn:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 offset:(const void *)arg4;
- (id)getValueOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 offset:(const void *)arg4;
- (id)getValueOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getValueOnResultColumn:(const void *)arg1 fromTable:(id)arg2 offset:(const void *)arg3;
- (id)getValueOnResultColumn:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3;
- (id)getValueOnResultColumn:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3;
- (id)getValueOnResultColumn:(const void *)arg1 fromTable:(id)arg2;
- (_Bool)deleteFromTable:(id)arg1 where:(const void *)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (_Bool)deleteFromTable:(id)arg1 orders:(const void *)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (_Bool)deleteFromTable:(id)arg1 where:(const void *)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (_Bool)deleteFromTable:(id)arg1 where:(const void *)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (_Bool)deleteFromTable:(id)arg1 limit:(const void *)arg2 offset:(const void *)arg3;
- (_Bool)deleteFromTable:(id)arg1 orders:(const void *)arg2 limit:(const void *)arg3;
- (_Bool)deleteFromTable:(id)arg1 where:(const void *)arg2 limit:(const void *)arg3;
- (_Bool)deleteFromTable:(id)arg1 limit:(const void *)arg2;
- (_Bool)deleteFromTable:(id)arg1 where:(const void *)arg2;
- (_Bool)deleteFromTable:(id)arg1;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6 offset:(const void *)arg7;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 where:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 where:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 limit:(const void *)arg4;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3 where:(const void *)arg4;
- (_Bool)updateTable:(id)arg1 setProperty:(const void *)arg2 toValue:(id)arg3;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6 offset:(const void *)arg7;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 where:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 where:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 limit:(const void *)arg4;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3 where:(const void *)arg4;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toRow:(id)arg3;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6 offset:(const void *)arg7;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 where:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 where:(const void *)arg4 orders:(const void *)arg5 limit:(const void *)arg6;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 where:(const void *)arg4 limit:(const void *)arg5;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 limit:(const void *)arg4;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3 where:(const void *)arg4;
- (_Bool)updateTable:(id)arg1 setProperties:(const void *)arg2 toObject:(id)arg3;
- (_Bool)insertOrIgnoreObjects:(id)arg1 onProperties:(const void *)arg2 intoTable:(id)arg3;
- (_Bool)insertOrIgnoreObject:(id)arg1 onProperties:(const void *)arg2 intoTable:(id)arg3;
- (_Bool)insertOrReplaceObjects:(id)arg1 onProperties:(const void *)arg2 intoTable:(id)arg3;
- (_Bool)insertOrReplaceObject:(id)arg1 onProperties:(const void *)arg2 intoTable:(id)arg3;
- (_Bool)insertObjects:(id)arg1 onProperties:(const void *)arg2 intoTable:(id)arg3;
- (_Bool)insertObject:(id)arg1 onProperties:(const void *)arg2 intoTable:(id)arg3;
- (_Bool)insertOrIgnoreObjects:(id)arg1 intoTable:(id)arg2;
- (_Bool)insertOrIgnoreObject:(id)arg1 intoTable:(id)arg2;
- (_Bool)insertOrReplaceObjects:(id)arg1 intoTable:(id)arg2;
- (_Bool)insertOrReplaceObject:(id)arg1 intoTable:(id)arg2;
- (_Bool)insertObjects:(id)arg1 intoTable:(id)arg2;
- (_Bool)insertObject:(id)arg1 intoTable:(id)arg2;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 limit:(const void *)arg4;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 limit:(const void *)arg3;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3;
- (id)getObjectsOnResultColumns:(const void *)arg1 fromTable:(id)arg2;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 offset:(const void *)arg5;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(id)arg2 offset:(const void *)arg3;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(id)arg2 orders:(const void *)arg3;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(id)arg2 where:(const void *)arg3;
- (id)getObjectOnResultColumns:(const void *)arg1 fromTable:(id)arg2;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5 offset:(const void *)arg6;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const void *)arg3 limit:(const void *)arg4 offset:(const void *)arg5;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 limit:(const void *)arg5;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 limit:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const void *)arg3 limit:(const void *)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3 limit:(const void *)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 limit:(const void *)arg3;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const void *)arg3;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4 offset:(const void *)arg5;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3 offset:(const void *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3 orders:(const void *)arg4;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 offset:(const void *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 orders:(const void *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const void *)arg3;
- (id)getObjectOfClass:(Class)arg1 fromTable:(id)arg2;
- (_Bool)runPausableTransactionWithOneLoop:(CDUnknownBlockType)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)rollbackTransaction;
- (_Bool)commitOrRollbackTransaction;
- (_Bool)beginTransaction;
- (_Bool)isInTransaction;
- (void)markErrorNotAllowedWithinTransaction;
- (_Bool)remapTable:(id)arg1 toClass:(Class)arg2;
- (_Bool)dropIndex:(id)arg1;
- (_Bool)dropTable:(id)arg1;
- (_Bool)createVirtualTable:(id)arg1 withClass:(Class)arg2;
- (id)getTable:(id)arg1 withClass:(Class)arg2;
- (_Bool)createTable:(id)arg1 withClass:(Class)arg2;
- (struct WCTOptionalBool)tableExists:(id)arg1;

@end

