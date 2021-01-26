//
//  NSBundle+LKResources.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/31.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (LKResources)
+ (NSBundle *)lk_loadBundleClass:(Class)aClass bundleName:(NSString *)bundleName;
@end

NS_ASSUME_NONNULL_END
