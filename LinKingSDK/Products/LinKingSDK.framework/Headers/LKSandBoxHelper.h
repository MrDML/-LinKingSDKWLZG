//
//  LKSandBoxHelper.h
//  LinKingSDK
//
//  Created by leoan on 2020/9/7.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKSandBoxHelper : NSObject
+ (NSString *)homePath;             // 程序主目录，可见子目录(3个):Documents、Library、tmp

+ (NSString *)appPath;              // 程序目录，不能存任何东西

+ (NSString *)docPath;              // 文档目录，需要ITUNES同步备份的数据存这里，可存放用户数据

+ (NSString *)libPrefPath;          // 配置目录，配置文件存这里

+ (NSString *)libCachePath;         // 缓存目录，系统永远不会删除这里的文件，ITUNES会删除

+ (NSString *)tmpPath;              // 临时缓存目录，APP退出后，系统可能会删除这里的内容

+ (NSString *)iapReceiptPath;       //用于存储iap内购返回的购买凭证
@end

NS_ASSUME_NONNULL_END
