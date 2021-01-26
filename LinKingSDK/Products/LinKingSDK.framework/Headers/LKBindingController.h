//
//  LKBindingController.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseViewController.h"
@class LKUser;
NS_ASSUME_NONNULL_BEGIN

@interface LKBindingController : LKBaseViewController
@property (nonatomic,copy)void(^appleLoginCallBack)(NSError *error);
@property (nonatomic,copy)void(^weiXinLoginCallBack)(NSError *error);
@property (nonatomic,copy)void(^bindingAccountCompleteCallBack)(LKUser * _Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
