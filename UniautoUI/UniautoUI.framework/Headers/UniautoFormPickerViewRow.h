//
//  UniautoFormPickerViewRow.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/3/2.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoFormInputRow.h"

@interface UniautoFormPickerViewRow : UniautoFormInputRow

@property(nonatomic, strong) NSArray *itemArray;
@property(nonatomic, assign) NSInteger selectedRow;
@property(nonatomic, copy) void(^onPickedHandler)(UniautoFormPickerViewRow *row, NSInteger index);

- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value items:(NSArray *)itemArray pickedHandler:(void(^)(UniautoFormPickerViewRow *row, NSInteger index))pickedHandler;
- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType items:(NSArray *)itemArray pickedHandler:(void(^)(UniautoFormPickerViewRow *row, NSInteger index))pickedHandler;

- (instancetype)initWithImage:(UIImage *)image key:(NSString *)key value:(id)value items:(NSArray *)itemArray pickedHandler:(void(^)(UniautoFormPickerViewRow *row, NSInteger index))pickedHandler;
- (instancetype)initWithImage:(UIImage *)image key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType items:(NSArray *)itemArray pickedHandler:(void(^)(UniautoFormPickerViewRow *row, NSInteger index))pickedHandler;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType items:(NSArray *)itemArray pickedHandler:(void(^)(UniautoFormPickerViewRow *row, NSInteger index))pickedHandler;
- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title height:(CGFloat)height key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType items:(NSArray *)itemArray pickedHandler:(void(^)(UniautoFormPickerViewRow *row, NSInteger index))pickedHandler;

@end


@interface UniautoFormPickerItem : NSObject
@property(nonatomic, copy) NSString *title;
@property(nonatomic, strong) id data;
@end
