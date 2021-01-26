//
//  LKIssueServiceView.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LKIssueServiceTableView;
NS_ASSUME_NONNULL_BEGIN

@interface LKIssueServiceView : UIView
@property (weak, nonatomic) IBOutlet LKIssueServiceTableView *tableview;
+ (instancetype)instanceIssueServiceView;
@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);

@end

NS_ASSUME_NONNULL_END
