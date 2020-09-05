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

@protocol UnitDelegate <NSObject>

@optional

/// 打开单元
/// @param cmdOption 参数
/// @param context 上下文
+ (void)openUnitWithCmdOption:(nullable CmdOptionModel *)cmdOption
                      context:(nullable id)context;


/// 关闭单元
/// @param cmdOption 参数
/// @param context 上下文
- (void)closeUnitWithCmdOption:(nullable CmdOptionModel *)cmdOption
                       context:(nullable id)context;

/// 执行单元方法
/// @param cmdOption 参数
/// @param context 上下文
+ (void)doFunctionUnitWithCmdOption:(nullable CmdOptionModel *)cmdOption
                            context:(nullable id)context;



@end

@interface Unit : NSObject<UnitDelegate>

/// 单元key等于单元类名
@property (nonatomic, readonly, copy) NSString *unitKey;

/// 单元所属容器KEY，普通单元不属于任何容器设为null
@property (nonatomic, copy) NSString *containerKey;

/// 该单元是否作为栈底 默认NO
@property (nonatomic, assign) BOOL rootStack;

/// 当前单元主页面所处导航栏堆栈层级
@property (nonatomic, assign) NSInteger stackLevel;

/// 是否开启转场动画 默认YES
@property (nonatomic, assign) BOOL animated;

/// 单元数据
@property (nonatomic, strong , readonly) id unitModel;

/// 初始化参数
- (void)setDefaultProperty;


/// 打开单元界面 需要自定义重写此方法
/// @param cmdOption 参数
/// @param context 上下文
- (void)openWithCmdOption:(nullable CmdOptionModel *)cmdOption
                  context:(id)context;

@end

NS_ASSUME_NONNULL_END
