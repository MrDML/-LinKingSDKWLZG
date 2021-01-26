//
//  LKPayManager.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/23.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, PAYTYPE) {
    PAYTYPE_WECHAT =0,
    PAYTYPE_IOS,
    PAYTYPE_ALIPAY,
};
typedef enum {
    INAPPPurchSuccess = 0,       // 购买成功
    INAPPPurchFailed = 1,        // 购买失败
    INAPPPurchCancle = 2,        // 取消购买
    INAPPPurchVerFailed = 3,     // 订单校验失败
    INAPPPurchVerSuccess = 4,    // 订单校验成功
    INAPPPurchNotArrow = 5,      // 不允许内购
    INAPPPurchNoGoods = 6,       // 没有商品
    INAPPRestoredGoods = 7, // 已经购买过该商品
    INAPPServiceFail = 8, // 网络故障
}INAPPPurchType;
NS_ASSUME_NONNULL_BEGIN
typedef void (^_Nonnull INAPPPurchCompletionHandle)(INAPPPurchType type,NSError * _Nullable  data);
@interface LKPayManager : NSObject
@property (nonatomic, assign)PAYTYPE payType;


/// 实例
+ (instancetype)instance;

/// 选择支付类型
/// @param viewController 根控制器
/// @param parames 支付参数
/// @param complete 支付完成回调(ps:error error=nill 支付成功 error code:6001取消支付，error code:4000支付失败)
//- (void)showPayTypeAlterViewRootViewController:(UIViewController *)viewController parameters:(NSDictionary *)parames complete:(void(^)(NSError *error, BOOL success))complete;
- (void)showPayTypeAlterViewRootViewController:(UIViewController *)viewController parameters:(NSDictionary *)parames complete:(void(^)(NSDictionary * _Nullable result,NSError * _Nullable error ))complete;


/// 拉取所有商品信息(适用于苹果内购)
/// @param complete products 品集合
- (void)requestProductDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products))complete;

/// 开始内购(适用于苹果内购)
/// @param purchID 商品Id
/// @param parames 内购参数
/// @param handle 内购完成回调
- (void)startPurchWithID:(NSString *)purchID parames:(NSDictionary *)parames completeHandle:(INAPPPurchCompletionHandle)handle;
// 查询订阅
- (void)querysubscribeProduct:(NSString *)productId complete:(void(^)(NSError *error, NSDictionary*results))complete;


@end

NS_ASSUME_NONNULL_END
