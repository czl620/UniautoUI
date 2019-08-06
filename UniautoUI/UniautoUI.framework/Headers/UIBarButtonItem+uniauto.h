//
//  UIBarButtonItem+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2019/3/7.
//  Copyright © 2019 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIBarButtonItem (uniauto)

- (instancetype)initWithImage:(UIImage *)image target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(NSString *)title target:(id)target action:(SEL)action;

@end

NS_ASSUME_NONNULL_END
