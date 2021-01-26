//
//  TalkingDataAppCpa.h
//  TalkingDataAppCpa
//
//  Created by liweiqiang on 13-12-25.
//  Copyright (c) 2012年 __TendCloud__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface TDSearch : NSObject

// 搜索分类
@property (nonatomic, strong) NSString *category;
// 搜索内容
@property (nonatomic, strong) NSString *content;



@end






@interface TalkingDataAppCpa : NSObject

/**
 *  获取设备ID
 *  @return deviceId            设备的ID
 */
+ (NSString *)getDeviceId;

/**
 *  设置不显示日志。如发布时不需显示日志，应当最先调用该方法
 */
+ (void)setVerboseLogDisable;
+ (void)setVerboseLogDisabled;

/**
 *  开启后台使用时长统计，需在SDK初始化之前调用。
 */
+ (void)backgroundSessionEnabled;

/**
 *  用于精准的追踪以Safari作为资源载体的广告来源  如果需要使用应当在init方法之前调用
 */
+ (void)enableSFSafariViewControllerTracking NS_DEPRECATED_IOS(10_0, NA, "此方法会影响到用户交互，使用前请确保和产品、业务沟通清楚!");

/**
 *  AdTracking SDK初始化方法。请在application:didFinishLaunchingWithOptions:方法里调用
 *  @param  appId               应用的唯一标识，统计后台注册得到
 *  @param  channelId           渠道名（可选）。如“AppStore”
 *  @param  custom              自定义参数（可选）。
 */
+ (void)init:(NSString *)appId withChannelId:(NSString *)channelId;
+ (void)init:(NSString *)appId withChannelId:(NSString *)channelId custom:(NSString *)custom;

/**
 *  注册账户事件
 *  @param  profile             账户名称
 *  @param  invitationCode      邀请码
 */
+ (void)onRegister:(NSString *)profile;
+ (void)onRegister:(NSString *)profile invitationCode:(NSString *)invitationCode;

/**
 *  通过账户登录事件
 *  @param  profile             账户名称
 */
+ (void)onLogin:(NSString *)profile;

/**
 *  添加支付相关信息事件
 *  @param  profile             账户名称
 *  @param  method              支付方式
 *  @param  content             支付信息
 */
+ (void)onCreateCard:(NSString *)profile method:(NSString *)method content:(NSString *)content;

/**
 *  唤醒事件
 *  @param  link                唤醒链接
 */
+ (void)onReceiveDeepLink:(NSURL *)link;

/**
 *  收藏事件
 *  @param  category            收藏分类
 *  @param  content             收藏内容
 */
+ (void)onFavorite:(NSString *)category content:(NSString *)content;

/**
 *  分享事件
 *  @param  profile             账户名称
 *  @param  content             分享内容
 */
+ (void)onShare:(NSString *)profile content:(NSString *)content;

/**
 *  签到打卡事件
 *  @param  profile             账户名称
 *  @param  punchId             签到打卡ID
 */
+ (void)onPunch:(NSString *)profile punchId:(NSString *)punchId;

/**
 *  搜索事件
 *  @param  search              搜索信息，参见 TDSearch 定义
 */
+ (void)onSearch:(TDSearch*)search;


/**
 *  支付
 *  @param  profile             账户名称
 *  @param  orderId             订单ID
 *  @param  amount              金额
 *  @param  currencyType        币种
 *  @param  payType             支付类型
 */
+ (void)onPay:(NSString *)profile withOrderId:(NSString *)orderId withAmount:(int)amount withCurrencyType:(NSString *)currencyType withPayType:(NSString *)payType;

/**
 *  支付
 *  @param  profile             账户名称
 *  @param  orderId             订单ID
 *  @param  amount              金额
 *  @param  currencyType        币种
 *  @param  payType             支付类型
 *  @param  itemId              商品ID
 *  @param  itemCount           商品个数
 */
+ (void)onPay:(NSString *)profile withOrderId:(NSString *)orderId withAmount:(int)amount withCurrencyType:(NSString *)currencyType withPayType:(NSString *)payType withItemId:(NSString *)itemId withItemCount:(int)itemCount;






/**
 *  创建角色
 *  @param  name                角色名称
 */
+ (void)onCreateRole:(NSString *)name;

/**
 *  通过关卡
 *  @param  profile             账户名称
 *  @param  levelId             关卡ID
 */
+ (void)onLevelPass:(NSString *)profile levelId:(NSString *)levelId;

/**
 *  完成新手教程
 *  @param  profile             账户名称
 *  @param  content             教程信息
 */
+ (void)onGuideFinished:(NSString *)profile content:(NSString *)content;





/**
 *  解锁成就
 *  @param  profile             账户名称
 *  @param  achievementId       成就ID
 */
+ (void)onAchievementUnlock:(NSString *)profile achievementId:(NSString *)achievementId;



/**
 *  自定义事件1
 */
+ (void)onCustEvent1;

/**
 *  自定义事件2
 */
+ (void)onCustEvent2;

/**
 *  自定义事件3
 */
+ (void)onCustEvent3;

/**
 *  自定义事件4
 */
+ (void)onCustEvent4;

/**
 *  自定义事件5
 */
+ (void)onCustEvent5;

/**
 *  自定义事件6
 */
+ (void)onCustEvent6;

/**
 *  自定义事件7
 */
+ (void)onCustEvent7;

/**
 *  自定义事件8
 */
+ (void)onCustEvent8;

/**
 *  自定义事件9
 */
+ (void)onCustEvent9;

/**
 *  自定义事件10
 */
+ (void)onCustEvent10;

@end
