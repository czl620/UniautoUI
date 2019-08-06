//
//  UniautoFormTextViewRow.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/10/31.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UniautoUI/UniautoUI.h>

@interface UniautoFormTextViewRow : UniautoFormRow

@property(nonatomic, copy) NSString *placeholder;;
@property(nonatomic, assign) NSInteger maxLength;

@property(nonatomic, assign) UIKeyboardType keyboardType;
@property(nonatomic, assign) BOOL editable;
@property(nonatomic, copy) void (^onTextDidChangedHandler)(UniautoFormTextViewRow *row, NSString *text);

@end
