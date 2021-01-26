//
//  LKOrderApi.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LKOrderApi : LKBaseApi
+ (void)orderRecordQuery:(NSString *)fullDate month:(NSString *)month complete:(void(^_Nullable)(NSError *error,NSArray *records))complete;
+ (void)createOrderType:(NSString *)type withParameters:(NSDictionary *)parames complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)appleFinishOrderNum:(NSString *)orderNum receipt:(NSString *)receipt subscribe:(BOOL)subscribe complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)fetchtAppleProductDatasComplete:(void(^_Nullable)(NSError *error, NSArray*results))complete;
+ (void)querySubscribeProduct:(NSString *)productId Complete:(void(^_Nullable)(NSError *_Nullable error, NSDictionary*results))complete;
@end

NS_ASSUME_NONNULL_END
