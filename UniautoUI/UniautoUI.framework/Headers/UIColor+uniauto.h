//
//  UIColor+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 渐变方向

 - UniautoGradientDirectionHorizontal: 水平渐变
 - UniautoGradientDirectionVertical: 竖直渐变
 - UniautoGradientDirectionUpwardDiagonal: 向下对角线渐变
 - UniautoGradientDirectionDownDiagonal: 向上对角线渐变
 */
typedef NS_ENUM(NSInteger, UniautoGradientDirection) {
    UniautoGradientDirectionHorizontal,
    UniautoGradientDirectionVertical,
    UniautoGradientDirectionUpwardDiagonal,
    UniautoGradientDirectionDownDiagonal,
};

@interface UIColor (uniauto)

// 支持@“#000000”、 @“0X000000”、 @“000000”三种格式
+ (UIColor *)colorWithHexString:(NSString *)color;
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

+ (UIColor *)randomColor;

- (BOOL)isEqualToColor:(UIColor *)color;

+ (instancetype)gradientColorWithSize:(CGSize)size
                                     direction:(UniautoGradientDirection)direction
                                    startColor:(UIColor *)startcolor
                                      endColor:(UIColor *)endColor;

- (NSString *)hexString;

@end
