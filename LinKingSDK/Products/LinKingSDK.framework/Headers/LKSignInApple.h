//
//  LKSignInApple.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKSignInApple : NSObject
+ (instancetype)instance;
- (void)loginAppleWithComplete:(void(^)(BOOL success))complete;
// 1:appleID 2.password 3. 验证失败
@property (nonatomic, copy) void (^didCompleteWithAuthorization)(NSInteger type,NSString * _Nullable user,NSString * _Nullable token,NSString * _Nullable code,NSString * _Nullable password);
@property (nonatomic, copy) void (^didCompleteWithError)(NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
