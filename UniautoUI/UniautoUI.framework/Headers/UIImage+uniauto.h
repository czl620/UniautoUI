//
//  UIImage+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (uniauto)

/**
 根据给定的颜色生成 纯色图片

 @param  color 给定的颜色
 @param  size 生成图片大小
 @return 生成图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 把view转成图片

 @param  view 需要生成图片的view
 @return 生成图片
 */
+ (UIImage *)imageForView:(UIView *)view;

/**
 给图片填充颜色

 @param tintColor 填充颜色
 @param blendMode 混合模式
 @return 生成图片
 */
- (UIImage *)u_imageWithTintColor:(UIColor *)tintColor blendMode:(CGBlendMode)blendMode;
- (UIImage *)u_imageWithTintColor:(UIColor *)tintColor;


/**
 高斯模糊

 @param blur 模糊度
 @return 模糊图片
 */
- (UIImage *)blurImage:(CGFloat)blur;

@end
