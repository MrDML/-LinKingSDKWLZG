//
//  LKRegisterView.h
//  LinKingSDK
//
//  Created by leoan on 2020/8/11.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKRegisterView : UIView
+ (instancetype)instanceRegisterView;
@property (nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy)void(^skipCallBack)(void);
@property (nonatomic, copy)void(^registerCallBack)(void);

@end

NS_ASSUME_NONNULL_END
