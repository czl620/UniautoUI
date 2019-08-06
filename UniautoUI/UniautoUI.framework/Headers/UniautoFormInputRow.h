//
//  UniautoInputRow.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/2/27.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoFormRow.h"

@interface UniautoFormInputRow : UniautoFormRow

@property(nonatomic, copy) NSString *placeholder;;

@property(nonatomic, assign) UIKeyboardType keyboardType;
@property(nonatomic, assign) BOOL secureTextEntry;
@property(nonatomic, assign) BOOL editable;
@property(nonatomic, copy) void (^onTextDidChangedHandler)(UniautoFormInputRow *row, NSString *text);

- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType;

- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType keyboardType:(UIKeyboardType)keyboardType;

- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value keyboardType:(UIKeyboardType)keyboardType textDidChangedHandler:(void(^)(UniautoFormInputRow *row, NSString *text))textDidChangedHandler;

- (instancetype)initWithTitle:(NSString *)title height:(CGFloat)height key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType keyboardType:(UIKeyboardType)keyboardType textDidChangedHandler:(void(^)(UniautoFormInputRow *row, NSString *text))textDidChangedHandler;

- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType keyboardType:(UIKeyboardType)keyboardType textDidChangedHandler:(void(^)(UniautoFormInputRow *row, NSString *text))textDidChangedHandler;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType keyboardType:(UIKeyboardType)keyboardType textDidChangedHandler:(void(^)(UniautoFormInputRow *row, NSString *text))textDidChangedHandler;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title height:(CGFloat)height key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType keyboardType:(UIKeyboardType)keyboardType textDidChangedHandler:(void(^)(UniautoFormInputRow *row, NSString *text))textDidChangedHandler;
@end
