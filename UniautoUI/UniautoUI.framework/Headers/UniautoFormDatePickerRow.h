//
//  UniautoFormDatePickerRow.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/2/28.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoFormInputRow.h"

@interface UniautoFormDatePickerRow : UniautoFormInputRow

@property (nonatomic, assign) UIDatePickerMode datePickerMode;
@property (nonatomic, copy) NSString *dateFormat;

@property(nonatomic, copy) void (^onPickedHandler)(UniautoFormDatePickerRow *row, NSString *text);

- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value pickedHandler:(void(^)(UniautoFormDatePickerRow *row, NSString *text))pickedHandler;
- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value datePickerMode:(UIDatePickerMode)datePickerMode dateFormat:(NSString *)dateFormat pickedHandler:(void(^)(UniautoFormDatePickerRow *row, NSString *text))pickedHandler;
- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType  datePickerMode:(UIDatePickerMode)datePickerMode dateFormat:(NSString *)dateFormat pickedHandler:(void(^)(UniautoFormDatePickerRow *row, NSString *text))pickedHandler;

- (instancetype)initWithImage:(UIImage *)image key:(NSString *)key value:(id)value pickedHandler:(void(^)(UniautoFormDatePickerRow *row, NSString *text))pickedHandler;
- (instancetype)initWithImage:(UIImage *)image key:(NSString *)key value:(id)value datePickerMode:(UIDatePickerMode)datePickerMode dateFormat:(NSString *)dateFormat pickedHandler:(void(^)(UniautoFormDatePickerRow *row, NSString *text))pickedHandler;
- (instancetype)initWithImage:(UIImage *)image key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType  datePickerMode:(UIDatePickerMode)datePickerMode dateFormat:(NSString *)dateFormat pickedHandler:(void(^)(UniautoFormDatePickerRow *row, NSString *text))pickedHandler;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType datePickerMode:(UIDatePickerMode)datePickerMode dateFormat:(NSString *)dateFormat pickedHandler:(void(^)(UniautoFormDatePickerRow *row, NSString *text))pickedHandler;
- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title height:(CGFloat)height key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType datePickerMode:(UIDatePickerMode)datePickerMode dateFormat:(NSString *)dateFormat pickedHandler:(void(^)(UniautoFormDatePickerRow *row, NSString *text))pickedHandler;

@end
