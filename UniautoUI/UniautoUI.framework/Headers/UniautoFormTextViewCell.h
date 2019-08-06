//
//  UniautoFormTextViewCell.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/10/31.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoFormCell.h"

@interface UniautoFormTextViewCell : UniautoFormCell <UITextViewDelegate>

@property(nonatomic, strong) UITextView *textView;

@end
