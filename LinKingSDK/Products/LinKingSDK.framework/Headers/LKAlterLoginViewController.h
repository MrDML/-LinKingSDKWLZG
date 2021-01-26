//
//  LKAlterLoginViewController.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LKBaseViewController.h"
@class LKUser;
NS_ASSUME_NONNULL_BEGIN

@interface LKAlterLoginViewController : LKBaseViewController
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^appleLoginCallBack)(NSError *error);
@property (nonatomic,copy)void(^weiXinLoginCallBack)(NSError *error);
@property (nonatomic,copy)void(^changeAccountCallBack)(void);
@property(nonatomic, copy)void(^thirdLoginAction)(UIButton *sender);
@property (nonatomic,copy)void(^loginCompleteCallBack)(LKUser *_Nullable user,NSError * _Nullable error);
- (void)setCloseView:(BOOL)isclose;
@end

NS_ASSUME_NONNULL_END
