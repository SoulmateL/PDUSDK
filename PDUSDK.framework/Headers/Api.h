//
//  Api.h
//  PDUSDKDemo
//
//  Created by 俊杰  廖 on 2020/5/15.
//  Copyright © 2020 俊杰  廖. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

extern NSString * _Nonnull const kHeaderAppBrandkey;
extern NSString * _Nonnull const kHeaderAppDeviceKey;
extern NSString * _Nonnull const kHeaderAppVersionKey;
extern NSString * _Nonnull const kHeaderAuthorizationKey;
extern NSString * _Nonnull const kHeaderProvinceKey;

@class ApiResponseModel;

@interface ApiResponseModel : NSObject
@property (nonatomic, strong, nullable) NSDictionary *data;
@property (nonatomic, strong, nullable) id rawData;
@property (nonatomic, assign) NSInteger code;
@property (nonatomic, strong, nullable) NSString *message;
@end

/// 网络状态
typedef NS_ENUM(NSInteger, PDUNetworkReachabilityStatus) {
    PDUNetworkReachabilityStatusUnknown          = -1,
    PDUNetworkReachabilityStatusNotReachable     = 0,
    PDUNetworkReachabilityStatusReachableViaWWAN = 1,
    PDUNetworkReachabilityStatusReachableViaWiFi = 2,
};


/// 请求成功回调
typedef void(^PDUSuccessBlcok)(ApiResponseModel *successModel);

/// 请求失败回调
typedef void(^PDUFailureBlcok)(ApiResponseModel *failureModel);

@interface Api : NSObject

#pragma marl --- init

///不可用的初始值设定项
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;


/// Api初始化方法 接口名:interfaceName  请求参数:parameters  请求头:header
/// @param interfaceName 接口名
/// @param parameters 请求参数
/// @param header 请求头
- (instancetype)initWithInterfaceName:(nonnull NSString *)interfaceName
                           parameters:(nullable NSDictionary *)parameters
                               header:(nullable NSDictionary *)header NS_DESIGNATED_INITIALIZER;


/// Api初始化方法 接口名:interfaceName  请求参数:parameters
/// @param interfaceName 接口名
/// @param parameters 请求参数
- (instancetype)initWithInterfaceName:(nonnull NSString *)interfaceName
                           parameters:(nullable NSDictionary *)parameters;

/// Api初始化方法 接口名:interfaceName 
/// @param interfaceName 接口名
- (instancetype)initWithInterfaceName:(nonnull NSString *)interfaceName;


/// 发起请求
/// @param success 成功回调
/// @param failure 失败回调
- (NSURLSessionDataTask *)startRequestSuccess:(PDUSuccessBlcok)success
                                      failure:(PDUFailureBlcok)failure;



/// 类方法 接口名:interfaceName  请求参数:parameters  请求头:header  成功回调:success  失败回调:failure
/// @param interfaceName 接口名
/// @param parameters 请求参数
/// @param header 请求头
/// @param success 成功回调
/// @param failure 失败回调
+ (NSURLSessionDataTask *)startRequetWithInterfaceName:(nonnull NSString *)interfaceName
                                            parameters:(nullable NSDictionary *)parameters
                                                header:(nullable NSDictionary *)header
                                               success:(nullable PDUSuccessBlcok)success
                                               failure:(nullable PDUFailureBlcok)failure;

/// 类方法 接口名:interfaceName  请求参数:parameters  成功回调:success  失败回调:failure
/// @param interfaceName 接口名
/// @param parameters 请求参数
/// @param success 成功回调
/// @param failure 失败回调
+ (NSURLSessionDataTask *)startRequetWithInterfaceName:(nonnull NSString *)interfaceName
                                            parameters:(nullable NSDictionary *)parameters
                                               success:(nullable PDUSuccessBlcok)success
                                               failure:(nullable PDUFailureBlcok)failure;


/// 类方法 接口名:interfaceName  成功回调:success  失败回调:failure
/// @param interfaceName 接口名
/// @param success 成功回调
/// @param failure 失败回调
+ (NSURLSessionDataTask *)startRequetWithInterfaceName:(nonnull NSString *)interfaceName
                                               success:(nullable PDUSuccessBlcok)success
                                               failure:(nullable PDUFailureBlcok)failure;




/// 通用POST请求接口
/// @param urlString 请求地址
/// @param parameters 请求参数
/// @param headers 请求头
/// @param success 成功回调
/// @param failure 失败回调
+ (nullable NSURLSessionDataTask *)POST:(NSString *)urlString
                             parameters:(nullable id)parameters
                                headers:(nullable NSDictionary <NSString *, NSString *> *)headers
                                success:(nullable void (^)(NSURLSessionDataTask *task, id _Nullable responseObject))success
                                failure:(nullable void (^)(NSURLSessionDataTask * _Nullable task, NSError *error))failure;

/// 通用GET请求接口
/// @param urlString 请求地址
/// @param parameters 请求参数
/// @param headers 请求头
/// @param success 成功回调
/// @param failure 失败回调
+ (nullable NSURLSessionDataTask *)GET:(NSString *)urlString
                            parameters:(nullable id)parameters
                               headers:(nullable NSDictionary <NSString *, NSString *> *)headers
                               success:(nullable void (^)(NSURLSessionDataTask *task, id _Nullable responseObject))success
                               failure:(nullable void (^)(NSURLSessionDataTask * _Nullable task, NSError *error))failure;



#pragma mark ----- 网络监听

/// 是否开启网络状态监听
/// @param enble 默认开启
+ (void)setNetworkReachabilityEnable:(BOOL)enble;


/// 网络状态发生变化回调
/// @param block 回调
+ (void)setReachabilityStatusChangeBlock:(nullable void (^)(PDUNetworkReachabilityStatus status))block;


/// 网络当前是否可访问
+ (BOOL)reachable;

/// 网络当前是否可以通过WWAN访问
+ (BOOL)reachableViaWWAN;

/// 网络当前是否可以通过WiFi访问
+ (BOOL)reachableViaWiFi;

/// 当前网络状态
+ (PDUNetworkReachabilityStatus)networkReachabilityStatus;

@end

NS_ASSUME_NONNULL_END
