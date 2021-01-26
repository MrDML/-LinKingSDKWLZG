//
//  LKRealNameController.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseViewController.h"
@class LKUser;
NS_ASSUME_NONNULL_BEGIN

@interface LKRealNameController : LKBaseViewController
@property (nonatomic,copy)void(^loginCompleteCallBack)(LKUser * _Nullable user,NSError * _Nullable error);
@property (nonatomic, assign) BOOL isShowClose;
@end

NS_ASSUME_NONNULL_END
