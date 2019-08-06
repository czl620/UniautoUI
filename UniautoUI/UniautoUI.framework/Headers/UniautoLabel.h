//
//  UniautoLabel.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UniautoUI/UILabel+uniauto.h>

typedef NS_ENUM(NSUInteger, UniautoVerticalAlignment) {
    UniautoVerticalAlignmentTop = 0,
    UniautoVerticalAlignmentMiddle,
    UniautoVerticalAlignmentBottom,
};

@interface UniautoLabel : UILabel

// 文字内边距
@property(nonatomic, assign) UIEdgeInsets edgeInsets;

@end
