//
//  LKNetWork.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKNetWork : NSObject
+(LKNetWork *)sharedHttpSessionManager;
+ (void)getWithURLString:(NSString *)urlString success:(void(^)(id responseObject))success failure:(void(^)(NSError * _Nullable error))failure;

// 参数不做处理
+ (void)postWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters success:(void(^)(id responseObject))success failure:(void(^)(NSError * _Nullable error))failure;

// 处理参数并且处理请求头
+ (void)postWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField success:(void(^)(id responseObject))success failure:(void(^)(NSError * _Nullable error))failure;

/// 上传多张图片携带其他参数
/// @param urlString 上传路径
/// @param images 图片集合
/// @param parameters 其他参数
/// @param headerField 请求头参数
/// @param complete 完成后的回调
+ (void)uploadWithURLString:(NSString *)urlString withImages:(NSArray<UIImage *>*)images parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField complete:(void(^)(NSError * _Nullable error,  NSDictionary * _Nullable responseObj))complete;
@end

NS_ASSUME_NONNULL_END
