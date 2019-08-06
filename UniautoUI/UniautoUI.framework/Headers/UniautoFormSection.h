//
//  UniautoSection.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UniautoUI/UniautoFormRow.h>

#define UNIAUTO_SECTION_HEIGHT_DEFAULT  ([UIDevice currentDevice].isPad ? 44 : 30)

@interface UniautoFormSection : NSObject

// 默认 CGFLOAT_MIN
@property(nonatomic, assign) CGFloat headerHeight;
// 默认 CGFLOAT_MIN
@property(nonatomic, assign) CGFloat footerHeight;

@property(nonatomic, copy) NSString *headerTitle;
@property(nonatomic, copy) NSString *footerTitle;

// 默认 12
@property(nonatomic, strong) UIFont *headerFont;
// 默认 12
@property(nonatomic, strong) UIFont *footerFont;

@property(nonatomic, strong, readonly) NSArray<UniautoFormRow *> *rows;

- (UniautoFormRow *)addRow:(UniautoFormRow *)row;

- (instancetype)initWithHeaderTitle:(NSString *)title height:(CGFloat)height;
- (instancetype)initWithHeaderTitle:(NSString *)title height:(CGFloat)height font:(UIFont *)font;

- (instancetype)initWithFooterTitle:(NSString *)title height:(CGFloat)height;
- (instancetype)initWithFooterTitle:(NSString *)title height:(CGFloat)height font:(UIFont *)font;

- (instancetype)initWithHeaderTitle:(NSString *)headerTitle headerHeight:(CGFloat)headerHeight footerTitle:(NSString *)footerTitle footerHeight:(CGFloat)footerHeight;
- (instancetype)initWithHeaderTitle:(NSString *)headerTitle headerHeight:(CGFloat)headerHeight headerFont:(UIFont *)headerFont footerTitle:(NSString *)footerTitle footerHeight:(CGFloat)footerHeight footerFont:(UIFont *)footerFont;


@end
