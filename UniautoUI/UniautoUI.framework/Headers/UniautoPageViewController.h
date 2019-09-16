//
//  UniautoPageViewController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/4/17.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoViewController.h"
#import "UniautoPageViewTheme.h"

typedef NS_ENUM(NSUInteger, UniautoPageViewStyle) {
    UniautoPageViewStyleDefault = 0,    // 在View顶部
    UniautoPageViewStyleNavigationBar,  // 在navigationBar上
    UniautoPageViewStyleSegmentControl  // 在navigationBar上
};

typedef NS_ENUM(NSUInteger, UniautoPageSegmentStyle) {
    UniautoPageSegmentStyleSizetoFit = 0, // 根据标题自动计算宽度
    UniautoPageSegmentStyleAverage // 均分
};

@class UniautoPageViewController;
@protocol UniautoPageViewControllerDelegate <NSObject>
@optional
- (void)pageViewController:(UniautoPageViewController *_Nullable)pageViewController didSelectAtIndex:(NSInteger)index;
- (void)pageViewController:(UniautoPageViewController *_Nullable)pageViewController didScrollToIndex:(NSInteger)index;
@end

@protocol UniautoPageViewControllerDataSource <NSObject>
@optional
- (CGFloat)pageBarHeightForPageViewController:(UniautoPageViewController *_Nullable)pageViewController;
- (UniautoPageViewTheme *_Nullable)themeOfPageViewController:(UniautoPageViewController *_Nullable)pageViewController;
@end

/**
 分段控制器
 */
@interface UniautoPageViewController : UniautoViewController

- (instancetype _Nullable )initWithViewControllers:(NSArray<UIViewController *> *_Nonnull)viewControllers;
- (instancetype _Nullable )initWithViewControllers:(NSArray<UIViewController *> *_Nonnull)viewControllers pageViewStyle:(UniautoPageViewStyle)style;
- (instancetype _Nullable )initWithViewControllers:(NSArray<UIViewController *> *_Nullable)viewControllers pageViewStyle:(UniautoPageViewStyle)style segmentType:(UniautoPageSegmentStyle)segmentType;

/**
 选项卡背景色
 */
@property(nonatomic, strong) UIColor * _Nullable tintColor;


@property(nonatomic, assign, readonly) NSInteger selectedIndex;

@property(nonatomic, weak) id<UniautoPageViewControllerDelegate> _Nullable delegate;
@property(nonatomic, weak) id<UniautoPageViewControllerDataSource> _Nullable dataSource;


@property(nonatomic) NSInteger numberOfLines;

- (void)scrollToIndex:(NSInteger)index animated:(BOOL)animated;

- (void)setViewControllers:(nullable NSArray<UIViewController *> *)viewControllers animated:(BOOL)animated;

@end
