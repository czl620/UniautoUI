//
//  UniautoGuideView.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/4/24.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^UniautoGuideViewDidEnterHandler)(void);

/**
 引导页
 */
@interface UniautoGuideView : UIView

/**
 进入主页(立即体验)的回调
 */
@property (nonatomic, copy) UniautoGuideViewDidEnterHandler enterHandler;

// 支持UIImage、NSString
- (instancetype)initWithImages:(NSArray *)images;
- (instancetype)initWithVideo:(NSURL *)video;

- (void)show:(UIWindow *)window;

@end
