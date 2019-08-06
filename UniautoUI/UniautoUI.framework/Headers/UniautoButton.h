//
//  UniautoButton.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UniautoUI/UIButton+uniauto.h>

typedef NS_ENUM(NSUInteger, UniautoButtonStyle){
    UniautoButtonStyleImageLeft = 0,   //图片在左
    UniautoButtonStyleImageRight,      //图片在右
    UniautoButtonStyleImageTop,        //图片在上
    UniautoButtonStyleImageBottom,     //图片在下
};

@interface UniautoButton : UIButton

// 图片的位置
@property(nonatomic, assign) UniautoButtonStyle buttonStyle;
// 文字与图片之间的间距，默认是0
@property(nonatomic, assign) CGFloat space;
// 图片距离上下的距离
@property(nonatomic, assign) CGFloat padding;

+ (instancetype)buttonWithStyle:(UniautoButtonStyle)buttonStyle;

@end
