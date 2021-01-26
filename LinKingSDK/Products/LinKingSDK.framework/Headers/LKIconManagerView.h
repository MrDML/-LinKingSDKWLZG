//
//  LKIconManagerView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/17.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKIconManagerView : UIView
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_icon;
@property (weak, nonatomic) IBOutlet UIView *view_iconItem;
@property (weak, nonatomic) IBOutlet UIView *view_icon;
@property (weak, nonatomic) IBOutlet UIButton *button_cancel;
@property (weak, nonatomic) IBOutlet UIButton *button_sure;
@property(nonatomic, copy)void(^closeAlterViewCallBack)(UIButton *sender);
@property(nonatomic, copy)void(^cancelCallBack)(UIButton *sender);
@property(nonatomic, copy)void(^sureCallBack)(UIButton *sender);
+ (instancetype)instanceIconManagerView;
@end

NS_ASSUME_NONNULL_END
