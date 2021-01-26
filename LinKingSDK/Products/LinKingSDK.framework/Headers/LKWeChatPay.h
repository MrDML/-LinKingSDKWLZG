//
//  LKWeChatPay.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKWeChatPay : NSObject


+ (instancetype)instance;
- (void)weChatPayParameters:(NSDictionary *)parames complete:(void (^)(BOOL success))complete;

@end

NS_ASSUME_NONNULL_END
