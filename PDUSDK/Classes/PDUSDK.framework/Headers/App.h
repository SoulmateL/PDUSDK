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
+ (NSString *)getUniqueIdentifier;

/// 获取当前设备型号
+ (NSString *)getCurrentDeviceModel;

/// 获取手机系统版本
+ (NSString *)getSystemVersion;

/// 获取设备型号和手机版本号
+ (NSString *)getCurrentDeviceModelAndSystemVersion;

/// 获取系统App名字
+ (NSString *)getAppName;

/// 获取系统App版本号
+ (NSString *)getSystemAppVersion;

/// 获取品牌key
+ (NSString *)getBrandKey;

/// 获取内部版本号
+ (NSString *)getAppVersion;

@end

NS_ASSUME_NONNULL_END
