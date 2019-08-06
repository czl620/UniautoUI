//
//  UniautoFormSwitchRow.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/3/2.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoFormRow.h"

@interface UniautoFormSwitchRow : UniautoFormRow

@property(nonatomic, copy) void(^onSwitchHandler)(UniautoFormSwitchRow *row, BOOL on);

- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value switchHandler:(void(^)(UniautoFormSwitchRow *row, BOOL on))switchHandler;

- (instancetype)initWithImage:(UIImage *)image key:(NSString *)key value:(id)value switchHandler:(void(^)(UniautoFormSwitchRow *row, BOOL on))switchHandler;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title key:(NSString *)key value:(id)value switchHandler:(void(^)(UniautoFormSwitchRow *row, BOOL on))switchHandler;

@end
