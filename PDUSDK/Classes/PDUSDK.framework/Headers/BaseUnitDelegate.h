//
//  BaseUnitDelegate.h
//  PDUSDKDemo
//
//  Created by Apple on 2020/6/10.
//  Copyright © 2020 俊杰  廖. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BaseUnitDelegate <NSObject>
/// 打开单元
/// @param parameters 参数
/// @param context 上下文
+ (void)openUnitWithParameters:(nullable NSDictionary *)parameters
                       context:(nullable id)context;


/// 关闭单元
/// @param parameters 参数
/// @param context 上下文
+ (void)closeUnitWithParameters:(nullable NSDictionary *)parameters
                        context:(nullable id)context;

/// 执行单元方法
/// @param parameters 参数
/// @param context 上下文
+ (void)doFunctionUnitWithParameters:(nullable NSDictionary *)parameters
                             context:(nullable id)context;


/// 返回上一个页面
/// @param parameters 参数
/// @param context 上下文
+ (void)backUnitWithParameters:(nullable NSDictionary *)parameters
                       context:(nullable id)context;


/// 打开Widget
/// @param parameters 参数
/// @param context 上下文
+ (void)openWidgetUnitWithParameters:(nullable NSDictionary *)parameters
                             context:(nullable id)context;

@end

NS_ASSUME_NONNULL_END
