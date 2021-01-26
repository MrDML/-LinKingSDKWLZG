//
//  LKCrazyTipView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/18.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKCrazyTipView : UIView
+ (instancetype)instanceCrazyTipView;
@property (nonatomic, copy) void(^closeAlterViewCallBack)(void);
@property (weak, nonatomic) IBOutlet UILabel *label_tip;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_close;
@property (weak, nonatomic) IBOutlet UILabel *title;

@end

NS_ASSUME_NONNULL_END
