//
//  Unit.h
//  SKB3.0_iOS
//
//  Created by Apple on 2020/7/16.
//  Copyright © 2020 junjie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@class CmdOptionModel;

@interface Unit : NSObject

/// 打开单元
/// @param cmdOption 参数
/// @param context 上下文
+ (BOOL)openUnitWithCmdOption:(nullable CmdOptionModel *)cmdOption
                      context:(nullable id)context;


/// 关闭单元
/// @param cmdOption 参数
/// @param context 上下文
+ (BOOL)closeUnitWithCmdOption:(nullable CmdOptionModel *)cmdOption
                       context:(nullable id)context;

/// 执行单元方法
/// @param cmdOption 参数
/// @param context 上下文
+ (BOOL)doFunctionUnitWithCmdOption:(nullable CmdOptionModel *)cmdOption
                            context:(nullable id)context;


@end

NS_ASSUME_NONNULL_END
