//
//  UITextView+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (uniauto)

// 占位符
@property(nonatomic, copy) NSString *placeholder;
@property(nonatomic, strong) UIColor *placeHolderColor;

@end
