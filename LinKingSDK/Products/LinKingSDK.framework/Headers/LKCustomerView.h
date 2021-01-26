//
//  LKCustomerView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKCustomerView : UIView
@property (nonatomic,copy) void(^commitIssueCallBack)(void);
@property (nonatomic,copy) void(^readIssueCallBack)(void);
@property (nonatomic,copy) void(^copyWeiXinIdCallBack)(void);
@property (nonatomic,copy) void(^closeAlterViewCallBack)(void);
+ (instancetype)instanceCustomerView;
@end

NS_ASSUME_NONNULL_END
