//
//  LKSDKConfigApi.h
//  LinKingSDK
//
//  Created by MrDML on 2020/7/26.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LKSDKConfigApi : LKBaseApi
+ (void)fetchSDKConfigComplete:(void(^_Nullable)(NSError *_Nullable error))complete;
@end

NS_ASSUME_NONNULL_END
