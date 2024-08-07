//
//  App.h
//  PDUSDKDemo
//
//  Created by 俊杰  廖 on 2020/5/15.
//  Copyright © 2020 俊杰  廖. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface App : NSObject

/// 获取唯一标识
+ (nullable NSString *)getUniqueIdentifier;

/// 获取设备信息
+ (nullable NSString *)getCurrentDeviceInfo;

/// 获取系统App名字
+ (nullable NSString *)getAppName;

/// 获取系统App版本号
+ (nullable NSString *)getSystemAppVersion;

/// 获取品牌key
+ (nullable NSString *)getBrandKey;

/// 获取内部版本号
+ (nullable NSString *)getAppVersion;

/// 获取接口验证密钥
+ (nullable NSString *)getSecretKey;
@end

NS_ASSUME_NONNULL_END
