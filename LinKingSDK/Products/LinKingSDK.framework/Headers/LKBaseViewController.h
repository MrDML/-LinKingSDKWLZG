//
//  LKBaseViewController.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKBaseViewController : UIViewController
@property (nonatomic, copy) void(^deviceOrientationHander)(UIDeviceOrientation orientation);
@property (nonatomic, assign) BOOL isFullScreen;
- (void)setAlterWidth:(CGFloat)width;
- (void)setAlterHeight:(CGFloat)height;
- (void)setAlterContentView:(UIView *)contentView;
- (void)layoutConstraint;
- (NSError *)responserErrorMsg:(NSString *)msg code:(int)code;
- (void)showMaskView;
- (void)hiddenMaskView;
@end

NS_ASSUME_NONNULL_END
