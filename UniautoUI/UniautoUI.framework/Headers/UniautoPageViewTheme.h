//
//  UniautoPageViewStyle.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2019/8/20.
//  Copyright © 2019 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UniautoPageViewTheme : NSObject

@property(nonatomic, strong) UIColor *color;
@property(nonatomic, strong) UIColor *selectedColor;

@property(nonatomic, strong) UIFont *font;
@property(nonatomic, strong) UIFont *selectedFont;

@property(nonatomic) NSInteger numberOfLines;

@property(nonatomic) CGFloat indicatorWidth;
@property(nonatomic) CGFloat indicatorHeight;
@property(nonatomic, strong) UIColor *indicatorColor;

@property(nonatomic, strong) UIColor *itemColor;
@property(nonatomic, strong) UIColor *itemSelectedColor;

@end

NS_ASSUME_NONNULL_END
