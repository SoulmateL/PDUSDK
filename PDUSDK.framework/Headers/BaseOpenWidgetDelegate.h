//
//  BaseOpenWidgetDelegate.h
//  PDUSDKDemo
//
//  Created by Apple on 2020/6/28.
//  Copyright © 2020 俊杰  廖. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BaseOpenWidgetDelegate <NSObject>
/// 打开Widget
/// @param cmdOption 参数
/// @param context 上下文
- (void)openWidgetActionWithCmdOption:(nullable CmdOptionModel *)cmdOption
                              context:(nullable id)context;
@end

NS_ASSUME_NONNULL_END
