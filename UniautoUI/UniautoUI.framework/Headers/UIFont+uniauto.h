//
//  UIFont+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (uniauto)

// 注：3.5、4、4.7英寸设备共用一套字体，5.5、5.8英寸设备共用一套字体 pad共用一套字体

/**
 字体的适配

 @param  pxSize ps字体像素
 @return 适配后的字体
 */
+ (UIFont *)uniautoFontOfPxSize:(CGFloat)pxSize;
+ (UIFont *)uniautoFontOfFitPtSize:(CGFloat)ptSize;


/**
 加粗字体的适配

 @param  pxSize ps字体像素
 @return 适配后的加粗字体
 */
+ (UIFont *)uniautoBoldFontOfPxSize:(CGFloat)pxSize;
+ (UIFont *)uniautoBoldFontOfFitPtSize:(CGFloat)ptSize;

/**
 自定义字体的适配

 @param  fontName 自定义字体的名称
 @param  pxSize ps字体像素
 @return 适配后的自定义字体
 */
+ (UIFont *)uniautoFontWithName:(NSString *)fontName pxSize:(CGFloat)pxSize;
+ (UIFont *)uniautoFontWithName:(NSString *)fontName fitPtSize:(CGFloat)ptSize;


@end
