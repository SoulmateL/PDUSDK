//
//  PDUSDKApi.h
//  PDUSDKDemo
//
//  Created by 俊杰  廖 on 2020/5/15.
//  Copyright © 2020 俊杰  廖. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN



@interface PDUSDKApi : NSObject

/// 默认启动地址
@property (class,nonatomic,copy) NSString *startupFirstURLString;
/// 备用启动地址
@property (class,nonatomic,copy) NSString *spareURLString;

/// 控制是否开启输出日志
/// @param enable 默认NO
+ (void)setLogEnable:(BOOL)enable;

/// 获取日志输出状态
+ (BOOL)getLogEnable;


@end

NS_ASSUME_NONNULL_END
