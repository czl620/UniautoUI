//
//  UIApplication+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (uniauto)

// app名称
- (NSString *)appName;

// app版本
- (NSString *)appVersion;

// build版本
- (NSString *)appBuild;

// bundleId
- (NSString *)appBundleId;

@end


@interface UIApplication (uniauto_dir)

// 沙盒根路径
-(NSString *)dirHome;

// Documents目录
-(NSString *)dirDoc;

// Library目录
-(NSString *)dirLib;

// Cache目录
-(NSString *)dirCache;

// Tmp目录
-(NSString *)dirTmp;

@end

@interface UIApplication (uniauto_vc)

- (UIViewController *)topViewController;

- (void)resetRootViewConttoller:(UIViewController *)rootViewController;
- (void)resetRootViewConttoller:(UIViewController *)rootViewController
                       animated:(BOOL)animated
                     completion:(void (^)(void))completion;

@end
