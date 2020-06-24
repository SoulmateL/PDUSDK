//
//  Cmd.h
//  PDUSDKDemo
//
//  Created by 俊杰  廖 on 2020/6/1.
//  Copyright © 2020 俊杰  廖. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Cmd : NSObject

/// 执行指令
/// @param cmdType 指令
/// @param parameters 参数
/// @param context 上下文
+ (BOOL)executeCmdType:(NSString *)cmdType
            parameters:(nullable NSDictionary *)parameters
               context:(nullable id)context;

@end

NS_ASSUME_NONNULL_END
