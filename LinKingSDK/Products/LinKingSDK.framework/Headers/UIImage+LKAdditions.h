//
//  UIImage+LKAdditions.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/31.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (LKAdditions)
+ (UIImage *)lk_ImageNamed:(NSString *)name;
+ (UIImage *)lk_ImageNamed:(NSString *)name withCls:(Class)cls;
@end

NS_ASSUME_NONNULL_END
