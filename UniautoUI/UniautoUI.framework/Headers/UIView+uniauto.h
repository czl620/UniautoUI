//
//  UIView+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (uniauto)

@property(nonatomic, assign) CGFloat x;
@property(nonatomic, assign) CGFloat y;
@property(nonatomic, assign) CGFloat centerX;
@property(nonatomic, assign) CGFloat centerY;
@property(nonatomic, assign) CGFloat width;
@property(nonatomic, assign) CGFloat height;
@property(nonatomic, assign) CGSize size;

@property (nonatomic, assign) CGFloat left;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat bottom;

@property(nonatomic, assign) IBInspectable CGFloat borderWidth;
@property(nonatomic, strong) IBInspectable UIColor *borderColor;
@property(nonatomic, assign) IBInspectable CGFloat cornerRadius;

@property(nonatomic, assign) IBInspectable UIColor *shadowColor;
@property(nonatomic, assign) IBInspectable CGSize shadowOffset;
@property(nonatomic, assign) IBInspectable CGFloat shadowOpacity;
@property(nonatomic, assign) IBInspectable CGFloat shadowRadius;
@property(nonatomic, assign) IBInspectable BOOL masksToBounds;

@property(nonatomic, copy) IBInspectable NSString *backgroundHexColor;

- (void)distributeSpacingHorizontallyWith:(NSArray*)views;
- (void)distributeSpacingVerticallyWith:(NSArray*)views;

- (void)removeAllSubViews;

@end
