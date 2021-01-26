//
//  LKIssueServiceCell.h
//  LinKingSDK
//
//  Created by MrDML on 2020/7/25.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKIssueServiceCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *label_time;
@property (weak, nonatomic) IBOutlet UILabel *label_issue;
@property (weak, nonatomic) IBOutlet UILabel *label_replay;

@end

NS_ASSUME_NONNULL_END
