//
//  UniautoNavigationController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 导航控制器
 */
@interface UniautoNavigationController : UINavigationController

@property(nonatomic, strong) UIColor *titleColor;
@property(nonatomic, strong) UIFont *titleFont;

/**
 主题样式初始化
 */
- (void)initialTheme;

@end
