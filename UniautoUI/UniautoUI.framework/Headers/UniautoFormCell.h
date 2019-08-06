//
//  UniautoFormCell.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UniautoUI/UniautoFormRow.h>

@interface UniautoFormCell : UITableViewCell

// 表单目录标题
@property(nonatomic, strong) UILabel *titleLabel;
@property(nonatomic, strong) UIImageView *iconView;


@property(nonatomic, strong) UniautoFormRow *row;

- (void)renderUI;

@end
