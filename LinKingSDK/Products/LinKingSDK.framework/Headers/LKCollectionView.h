//
//  LKCollectionView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/22.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKCollectionView : UICollectionView

- (instancetype)initWithFrame:(CGRect)frame;
@property (nonatomic, strong) NSArray *data;

@property (nonatomic, copy) void(^selectIconCallback)(NSString *icon,NSString *iconId);

@end

NS_ASSUME_NONNULL_END
