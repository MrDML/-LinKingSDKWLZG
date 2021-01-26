//
//  LKPointApi.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/27.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LKPointApi : LKBaseApi

/// 打点事件接口
/// @param eventName <#eventName description#>
/// @param values <#values description#>
/// @param complete <#complete description#>
+ (void)pointEventName:(NSString *)eventName withTp:(NSString *_Nullable)tp withValues:(NSDictionary *_Nullable)values complete:(void(^_Nullable)(NSError *error))complete;

/// 广告打点
/// @param eventName <#eventName description#>
/// @param values <#values description#>
/// @param complete <#complete description#>
+ (void)adPointEventName:(NSString * _Nullable)eventName withValues:(NSDictionary * _Nullable)values complete:(void(^_Nullable)(NSError *error))complete;



/// 接口错误收集
/// @param title 接口异常点
/// @param content 报错信息
/// @param complete 回调
+ (void)logReportServer:(NSString *)title conctent:(NSString *)content complete:(void(^_Nullable)(NSError *_Nullableerror))complete;
@end

NS_ASSUME_NONNULL_END
