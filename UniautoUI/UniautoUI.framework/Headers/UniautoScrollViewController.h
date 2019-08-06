//
//  UniautoScrollViewController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoViewController.h"

/**
 滚动控制器
 */
@interface UniautoScrollViewController : UniautoViewController <UIScrollViewDelegate>

@property(nonatomic, strong) UIScrollView *scrollView;
@property(nonatomic, strong) UIView *contentView;

@end


/*

 [self.contentView mas_makeConstraints:^(MASConstraintMaker *make) {
    make.bottom.equalTo(lastView.mas_bottom).offset(20);// 这里放最后一个view的底部
 }];

 */

