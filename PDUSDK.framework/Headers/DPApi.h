//
//  DPApi.h
//  PDUSDKDemo
//
//  Created by 俊杰  廖 on 2020/5/28.
//  Copyright © 2020 俊杰  廖. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DPApi : NSObject

#pragma mark 异步获取数据，回调到主线程

/// 异步获取 根据sql查询语句查询数据 返回一个数组
/// @param dbName 数据库名
/// @param sql SQL语句
/// @param completionHandler 回调
+ (void)getArrayWithDbName:(NSString *)dbName
                       sql:(NSString *)sql
         completionHandler:(void(^)(NSArray<NSDictionary *> *dataArray))completionHandler;

/// 异步获取 根据主键查询某条记录
/// @param dbName 数据库名
/// @param tableName 表名
/// @param key 主键
/// @param completionHandler 回调
+ (void)getObjectWithDbName:(NSString *)dbName
                  tableName:(NSString *)tableName
                        key:(NSString *)key
          completionHandler:(void(^)(NSDictionary *data))completionHandler;

/// 异步获取 根据数主键和详细字段查询某条记录下特定字段的值
/// @param dbName 数据库名
/// @param tableName 表名
/// @param key 主键
/// @param field 字段名
/// @param completionHandler 回调
+ (void)getValueWithDbName:(NSString *)dbName
                 tableName:(NSString *)tableName
                       key:(NSString *)key
                     field:(nullable NSString *)field
         completionHandler:(void(^)(id obj))completionHandler;


/// 异步获取 根据条件语句和排序查询数据并按条件排序
/// @param dbName 数据库名
/// @param tableName 表名
/// @param condition 条件语句 @"name = 'Mike'"
/// @param order 排序 排序 升序@"age ASC" 降序@"age DESC",
/// @param completionHandler 回调
+ (void)getArrayWithDbName:(NSString *)dbName
                 tableName:(NSString *)tableName
                 condition:(nullable NSString *)condition
                     order:(nullable NSString *)order
         completionHandler:(void(^)(NSArray<NSDictionary *> *dataArray))completionHandler;

/// 异步获取 根据条件语句查询查询数据
/// @param dbName 数据库名
/// @param tableName 表名
/// @param condition 条件语句 @"name = 'Mike'"
+ (void)getArrayWithDbName:(NSString *)dbName
                 tableName:(NSString *)tableName
                 condition:(nullable NSString *)condition
         completionHandler:(void(^)(NSArray<NSDictionary *> *dataArray))completionHandler;

/// 异步获取 根据数据库和表名查询数据获取整张表数据
/// @param dbName 数据库名
/// @param tableName 表名
/// @param completionHandler 回调
+ (void)getArrayWithDbName:(NSString *)dbName
                 tableName:(NSString *)tableName
         completionHandler:(void(^)(NSArray<NSDictionary *> *dataArray))completionHandler;


#pragma mark 同步获取数据

/// 同步获取 根据sql查询语句查询数据 返回一个数组
/// @param dbName 数据库名
/// @param sql SQL语句
+  (NSArray<NSDictionary *> *)getArrayWithDbName:(NSString *)dbName
                                             sql:(NSString *)sql;

/// 同步获取 根据主键查询某条记录
/// @param dbName 数据库名
/// @param tableName 表名
/// @param key 主键
+ (NSDictionary *)getObjectWithDbName:(NSString *)dbName
                            tableName:(NSString *)tableName
                                  key:(NSString *)key;

/// 同步获取 根据数主键和详细字段查询某条记录下特定字段的值
/// @param dbName 数据库名
/// @param tableName 表名
/// @param key 主键
/// @param field 字段名
+ (NSString *)getValueWithDbName:(NSString *)dbName
                       tableName:(NSString *)tableName
                             key:(NSString *)key
                           field:(nullable NSString *)field;


/// 同步获取 根据数据库和表名查询数据并按条件排序  升序@"age ASC" 降序@"age DESC",
/// @param dbName 数据库名
/// @param tableName 表名
/// @param condition 条件语句  @"name = 'Mike'"
/// @param order 排序 升序@"age ASC" 降序@"age DESC",
+ (NSArray<NSDictionary *> *)getArrayWithDbName:(NSString *)dbName
                                      tableName:(NSString *)tableName
                                      condition:(nullable NSString *)condition
                                         order:(nullable NSString *)order;



/// 同步获取 根据条件查询查询数据
/// @param dbName 数据库名
/// @param tableName 表名
/// @param condition 条件语句 @"name = 'Mike'"
+ (NSArray<NSDictionary *> *)getArrayWithDbName:(NSString *)dbName
                                      tableName:(NSString *)tableName
                                      condition:(nullable NSString *)condition;




/// 同步获取 根据数据库和表名查询数据获取整张表数据
/// @param dbName 数据库名
/// @param tableName 表名
+ (NSArray<NSDictionary *> *)getArrayWithDbName:(NSString *)dbName
                                      tableName:(NSString *)tableName;


#pragma mark 同步操作 回调到主线程

/// 同步操作 操作数据 dbName 数据库名;tableName 表名;keyValue 主键值;values 插入数据的键值对  更新或新增数据，value需要包含主键的键值对
/// @param dbName 数据库名
/// @param tableName 表名
/// @param keyValue 主键值
/// @param values 数据 value为空则删除记录
/// @param completionHandler 回调
+ (void)setValueWithDbName:(NSString *)dbName
                 tableName:(NSString *)tableName
                  keyValue:(NSString *)keyValue
                    values:(nullable NSDictionary *)values
         completionHandler:(nullable void(^)(BOOL isSuccess))completionHandler;

/// 同步操作 操作数据 dbName 数据库名;tableName 表名;primaryKey 主键;key 键值;values 插入数据的键值对  更新或新增数据，value需要包含主键的键值对
/// @param dbName 数据库名
/// @param tableName 表名
/// @param primaryKey 主键
/// @param keyValue 键值
/// @param values 数据 value为空则删除记录
/// @param completionHandler 回调
+ (void)setValueWithDbName:(NSString *)dbName
                 tableName:(NSString *)tableName
                primaryKey:(NSString *)primaryKey
                  keyValue:(NSString *)keyValue
                    values:(nullable NSDictionary *)values
         completionHandler:(nullable void(^)(BOOL isSuccess))completionHandler;

/// 在某个数据库下执行sql语句
/// @param sql SQL语句
/// @param dbName 数据库
+ (BOOL)executeInDbName:(NSString *)dbName
                    sql:(NSString *)sql;

/// 在某个数据库下查询sql语句
/// @param sql SQL语句
/// @param dbName 数据库
+ (NSArray<NSDictionary *> *)queryInDbName:(NSString *)dbName
                                       sql:(NSString *)sql;

/// 关闭数据库
+ (void)close;

@end

NS_ASSUME_NONNULL_END
