//
//  UniautoFormViewController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoTableViewController.h"
#import <UniautoUI/UniautoForm.h>

/**
 表单控制器
 */
@interface UniautoFormViewController : UniautoTableViewController

@property(nonatomic, strong) UniautoForm *form;

@end
