//
//  LKPayResultView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/17.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKPayResultView : UIView

@property (weak, nonatomic) IBOutlet UIImageView *imageView_picture;
@property (weak, nonatomic) IBOutlet UILabel *label_desc;
@property(nonatomic, copy) void(^closeAlterViewCallBack)(void);
+ (instancetype)instancePayResultView;
@end

NS_ASSUME_NONNULL_END
