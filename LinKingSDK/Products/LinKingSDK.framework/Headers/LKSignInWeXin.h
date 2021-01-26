//
//  LKSignInWeXin.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/21.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface LKSignInWeXin : NSObject
+ (instancetype _Nullable)shared;

@property (nonatomic, copy) void(^WXOauthComplete)(NSString * _Nullable code, NSError * _Nullable error);
@property (nonatomic, copy) void(^payComplete)(NSError * _Nullable error);
- (void)weixinLoginViewController:(UIViewController *)viewController complete:(void(^)(NSString * _Nullable code, NSError*  _Nullable error))complete;
@end

NS_ASSUME_NONNULL_END
