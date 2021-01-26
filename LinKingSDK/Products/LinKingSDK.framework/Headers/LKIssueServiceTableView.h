//
//  LKIssueServiceTableView.h
//  LinKingSDK
//
//  Created by MrDML on 2020/7/25.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKIssueServiceTableView : UITableView
- (void)reloadData:(NSArray *)data;
@property (nonatomic, copy)void(^selectItemCallBack)(NSDictionary * _Nullable dict,NSInteger index);
@end

NS_ASSUME_NONNULL_END
