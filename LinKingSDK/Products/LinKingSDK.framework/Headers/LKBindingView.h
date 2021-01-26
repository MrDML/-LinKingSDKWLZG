//
//  LKBindingView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,BinDingStyle) {
    BinDingStyle_Iphone = 10,
    BinDingStyle_Apple = 20,
    BinDingStyle_WeiXin = 30,
};

NS_ASSUME_NONNULL_BEGIN

@interface LKBindingView : UIView
@property (weak, nonatomic) IBOutlet UITextField *textfield_iphone;
@property (weak, nonatomic) IBOutlet UITextField *textfield_code;
@property (weak, nonatomic) IBOutlet UIButton *button_binding;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UIButton *button_getCode;

@property (nonatomic, copy) void(^closeAlterViewCallback)(UIButton *sender);
@property (nonatomic, copy) void(^getCheckCodeCallBack)(UIButton *sender,NSString *phone);
@property (nonatomic, copy) void(^bindingCallBack)(UIButton *sender,NSString *phone, NSString *code);
@property (nonatomic, copy) void(^selectItemCallBack)(UIButton *sender);
@property (nonatomic, assign) BinDingStyle bindingStyle;
+ (instancetype)instanceBindingView;
- (void)setLKSuperView:(UIView *)superView;

@end

NS_ASSUME_NONNULL_END
