//
//  UIViewController+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/2/9.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 页面跳转模式,只是用于NavigationController的push跳转，对模态跳转无效

 - UniautoModalPushStyleNormal:  默认
 - UniautoModalPushStyleRelease: 销毁本身
 */
typedef NS_ENUM(NSInteger, UniautoModalPushStyle) {
    UniautoModalPushStyleNormal = 0,
    UniautoModalPushStyleRelease
};

@interface UIViewController (uniauto)

- (void)pushViewController:(UIViewController *)viewController;

- (void)pushViewController:(UIViewController *)viewController
                  animated:(BOOL)animated;

- (void)pushViewController:(UIViewController *)viewController
                  animated:(BOOL)animated
                completion:(void (^)(void))completion;

- (void)pushViewController:(UIViewController *)viewController
                 pushStyle:(UniautoModalPushStyle)pushStyle
                  animated:(BOOL)animated
                completion:(void (^)(void))completion;


- (void)dismissToRootViewControllerAnimated:(BOOL)animated
                                 completion:(void (^)(void))completion;

/**
 返回首页

 @param homeIndex 首页在tabbar上的下标，默认为0
 */
- (void)popHome:(NSInteger)homeIndex;
- (void)popHome;

/**
 返回上级页面
 */
- (void)popBack;

/**
 销毁控制器自身,只适用于push跳转
 */
- (void)finish;

@end
