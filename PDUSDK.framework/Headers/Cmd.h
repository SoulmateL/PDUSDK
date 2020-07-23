//
//  Cmd.h
//  PDUSDKDemo
//
//  Created by 俊杰  廖 on 2020/6/1.
//  Copyright © 2020 俊杰  廖. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const kOpenUnitKey;
extern NSString * const kCloseUnitKey;
extern NSString * const kBackActiontKey;
extern NSString * const kDoFunctionKey;
extern NSString * const kOpenWidgetKey;


@class CmdModel,CmdOptionModel;

/// 指令模型
@interface CmdModel : NSObject

/// 指令type
@property (nonatomic,copy) NSString *type;

/// 参数模型
@property (nonatomic,strong) CmdOptionModel *option;

@end

/// 指令模型内的参数模型
@interface CmdOptionModel : NSObject

/// 单元key
@property (nonatomic,copy) NSString *unitKey;

/// widgetKey
@property (nonatomic,copy) NSString *widgetKey;

/// 方法名
@property (nonatomic,copy) NSString *function;

/// 参数
@property (nonatomic,copy) NSDictionary *param;

@end

@interface Cmd : NSObject

/// 执行指令
/// @param cmdModel 指令模型
/// @param context 上下文
+ (BOOL)executeCmdWithCmdModel:(CmdModel *)cmdModel context:(nullable id)context;

@end

NS_ASSUME_NONNULL_END
