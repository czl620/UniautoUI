//
//  UIButton+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (uniauto)

/**
 倒计时

 @param interval 秒数
 */
- (void)countDown:(NSInteger)interval;

@end
