//
//  UniautoRow.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UniautoUI/UIDevice+uniauto.h>

#define UNIAUTO_ROW_HEIGHT_DEFAULT  ([UIDevice currentDevice].isPad ? 64 : 50)


typedef NS_ENUM(NSInteger, UniautoFormRowAccessoryType) {
    UniautoFormRowAccessoryNone = UITableViewCellAccessoryNone,
    UniautoFormRowAccessoryDisclosureIndicator = UITableViewCellAccessoryDisclosureIndicator,
    UniautoFormRowAccessoryDetailDisclosureButton = UITableViewCellAccessoryDetailDisclosureButton,
    UniautoFormRowAccessoryCheckmark = UITableViewCellAccessoryCheckmark,
    UniautoFormRowAccessoryDetailButton = UITableViewCellAccessoryDetailButton,
    UniautoFormRowAccessorySpace
};

@class UniautoFormCell;
@interface UniautoFormRow : NSObject

@property(nonatomic, strong) UIImage *image;

@property(nonatomic, copy) NSString *title;
@property(nonatomic, assign) CGFloat titleWidth;
@property(nonatomic, strong) UIColor *titleColor;
@property(nonatomic, strong) UIFont *titleFont;

@property(nonatomic, copy) NSString *subTitle;
@property(nonatomic, assign) CGFloat subTitleWidth;
@property(nonatomic, strong) UIColor *subTitleColor;
@property(nonatomic, strong) UIFont *subTitleFont;

@property(nonatomic, strong) UIColor *valueColor;
@property(nonatomic, strong) UIFont *valueFont;
@property(nonatomic, assign) NSTextAlignment valueAlignment;

// 表单行高,默认44
@property(nonatomic, assign) CGFloat rowHeight;

// 表单提交的字段属性名
@property(nonatomic, copy) NSString *rowKey;
// 表单提交的值
@property(nonatomic, strong) id rowValue;

@property(nonatomic, assign) UniautoFormRowAccessoryType accessoryType;
@property(nonatomic, strong) UIImage *accessoryImage;

@property(nonatomic, copy) void (^selectionHandler)(UniautoFormRow *row, UniautoFormCell *cell);
@property(nonatomic, copy) void (^valueChangedHandler)(UniautoFormRow *row, UniautoFormCell *cell);

- (instancetype)initWithImage:(UIImage *)image key:(NSString *)key value:(id)value selectionHandler:(void(^)(UniautoFormRow *row, UniautoFormCell *cell))selectionHandler;

- (instancetype)initWithTitle:(NSString *)title key:(NSString *)key value:(id)value selectionHandler:(void(^)(UniautoFormRow *row, UniautoFormCell *cell))selectionHandler;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title key:(NSString *)key value:(id)value selectionHandler:(void(^)(UniautoFormRow *row, UniautoFormCell *cell))selectionHandler;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType selectionHandler:(void(^)(UniautoFormRow *row, UniautoFormCell *cell))selectionHandler;

- (instancetype)initWithImage:(UIImage *)image title:(NSString *)title height:(CGFloat)height key:(NSString *)key value:(id)value accessoryType:(UniautoFormRowAccessoryType)accessoryType selectionHandler:(void(^)(UniautoFormRow *row, UniautoFormCell *cell))selectionHandler;

@end
