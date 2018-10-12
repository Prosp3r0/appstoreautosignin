/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSSQLiteDatabase.h"
@interface SSKeyValueStoreDatabase : NSObject {
    SSSQLiteDatabase * _database;
}

- (void)_dispatchBlockAsync:(id /* block */)arg1;
- (id)_initReadOnly:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initReadOnly;
- (void)modifyAsyncUsingTransactionBlock:(id /* block */)arg1;
- (void)modifyUsingTransactionBlock:(id /* block */)arg1;
- (void)readAsyncUsingSessionBlock:(id /* block */)arg1;
- (void)readUsingSessionBlock:(id /* block */)arg1;

@end
