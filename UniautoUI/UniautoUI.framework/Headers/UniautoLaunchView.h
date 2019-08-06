//
//  UniautoLaunchView.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/4/23.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, UniautoLaunchSkipType) {
    UniautoLaunchSkipTypeTimeAndText = 0,      // 普通的倒计时+跳过
    UniautoLaunchSkipTypeCircleAnimation,      // 圆形动画+跳过
    UniautoLaunchSkipTypeText,                 // 只有普通的跳过
    UniautoLaunchSkipTypeTime,                 // 只有普通的倒计时
    UniautoLaunchSkipTypeNone                  // 无
};

@class UniautoLaunchView;
typedef void(^UniautoLaunchViewClickHandler)(UniautoLaunchView *view);
typedef void(^UniautoLaunchViewWillDisappearHandler)(UniautoLaunchView *view);

/**
 启动页
 */
@interface UniautoLaunchView : UIView

- (instancetype)initWithImage:(UIImage *)image;



/**
 广告图的显示时长（默认5秒）
 */
@property (nonatomic, assign) NSUInteger duration;

/**
 获取数据前，启动图的等待时间（若不设置则不启动等待机制）
 */
@property (nonatomic, assign) NSUInteger delay;

/**
 右上角按钮的样式（默认倒计时+跳过）
 */
@property (nonatomic, assign) UniautoLaunchSkipType skipType;

/**
 广告图点击事件回调
 */
@property (nonatomic, copy) UniautoLaunchViewClickHandler clickHandler;

/**
 广告消失后的回调
 */
@property (nonatomic, copy) UniautoLaunchViewWillDisappearHandler disappearHandler;

/**
 广告链接
 */
@property (nonatomic, copy) NSString *link;

@property (nonatomic, assign) UIViewContentMode imageContentMode;

@property (nonatomic, strong) UIColor *skipColor;

/**
 加载广告图

 @param url  广告图片地址
 */
- (void)reloadLaunchView:(NSString *)url;

- (void)show:(UIWindow *)window;

@end
