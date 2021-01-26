//
//  LEViewController.m
//  LinKingSDK
//
//  Created by dml1630@163.com on 07/16/2020.
//  Copyright (c) 2020 dml1630@163.com. All rights reserved.
//

#import "LEViewController.h"
#import <LinKingSDK/LinKingSDK.h>
@interface LEViewController ()

@end

@implementation LEViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [LKSDKManager instance].initializeSDKCallBack = ^(LKSDKManager * _Nonnull manager, NSError * _Nonnull error) {
        [manager.oauthManager loginWithDashboardRootViewController:self complete:^(LKUser * _Nonnull user, NSError * _Nonnull error) {
            NSLog(@"登录回调=====>%@",user.id);
        }];
        [self initADWithManager:manager];
    };

}

- (void)initADWithManager:(LKSDKManager *)manager{
      [manager.adManager registerAd];
      // 初始化横屏广告
      [manager.adManager initializationBannerRootViewController:self superView:self.view platform:LKPLATFORM_NONE];
      // 初始化插屏广告
      [manager.adManager initializationInterstitialAd:self platform:LKPLATFORM_NONE];
      // 初始化激励视频广告
      [manager.adManager initializationRewardVideoAd:self platform:LKPLATFORM_NONE];
      // 初始化全屏广告
      [manager.adManager initializationFullScreenVideoAd:self platform:LKPLATFORM_NONE];
}


- (IBAction)showBannerAction:(id)sender {
     [[LKAdManager shared] showBanner];
}

- (IBAction)showInterstitialAction:(id)sender {
    [[LKAdManager shared] showInterstitialAd];
}

- (IBAction)showRewardVideoAction:(id)sender {
     [[LKAdManager shared] showRewardVideoAd];
}


- (IBAction)showFullScreenAction:(id)sender {
     [[LKAdManager shared] showFullScreenVideoAd];
}


- (IBAction)payAaction:(UIButton *)sender {
        // alipay wechat  ios
    //    NSDictionary *params = @{
    //        @"cp_order_no":@"1587465595000",
    //        @"server_id":@"1",
    //        @"notify_url":@"xxx",
    //        @"extra":@"1",
    //        @"role_id":@"31231",
    //        @"type":@"wechat",
    //        @"product_id":@"1587465595000",
    //        @"product_desc":@"红包",
    //        @"amount":@"0.01"
    //    };
        
        NSDictionary *params = @{
            @"cp_order_no":@"1587465595000",
            @"server_id":@"1",
            @"notify_url":@"xxx",
            @"extra":@"1",
            @"role_id":@"31231",
            @"product_id":@"1587465595000",
            @"product_desc":@"红包",
            @"amount":@"0.01"
        };
        
    [[LKPayManager instance] showPayTypeAlterViewRootViewController:self parameters:params complete:^(NSDictionary * _Nonnull result, NSError * _Nonnull error) {
        NSLog(@"回调:error = %@",error);
        NSLog(@"回调:error = %ld",(long)error.code);
    }];
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
