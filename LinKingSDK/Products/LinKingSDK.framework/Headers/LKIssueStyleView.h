//
//  LKIssueStyleView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LKIssueStyleTableView;
NS_ASSUME_NONNULL_BEGIN

@interface LKIssueStyleView : UIView

@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (weak, nonatomic) IBOutlet LKIssueStyleTableView *tableView;
+ (instancetype)instanceIssueStyleView;
@end

NS_ASSUME_NONNULL_END
