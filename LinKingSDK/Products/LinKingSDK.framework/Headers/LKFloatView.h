//
//  LKFloatView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/29.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, StayMode) {
 
    STAYMODE_LEFTANDRIGHT = 0,
    
    STAYMODE_LEFT = 1,

    STAYMODE_RIGHT = 2
};
NS_ASSUME_NONNULL_BEGIN

@interface LKFloatView : UIImageView
@property (nonatomic, assign) StayMode stayMode;


@property (nonatomic, assign) CGFloat stayEdgeDistance;


@property (nonatomic, assign) CGFloat stayAnimateTime;


- (void)setTapActionWithBlock:(void (^)(void))block;


- (void)setImageWithName:(NSString *)imageName;


- (void)moveTohalfInScreenWhenScrolling;

- (void)setCurrentAlpha:(CGFloat)stayAlpha;
@end

NS_ASSUME_NONNULL_END
