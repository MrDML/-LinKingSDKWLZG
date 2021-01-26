//
//  LKWecomeViewController.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseViewController.h"
@class LKUser;
NS_ASSUME_NONNULL_BEGIN

@interface LKWecomeViewController : LKBaseViewController
@property (nonatomic,copy)void(^loginCompleteCallBack)(LKUser * _Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
