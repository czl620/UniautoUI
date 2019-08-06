//
//  UniautoViewController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UniautoCore/UniautoCore.h>
#import <UniautoUI/UIViewController+uniauto.h>

@protocol UniautoViewControllerDelegate <NSObject>

/**
 数据状态初始化，如初始化数组、变量初始值等
 */
- (void)initialState;

/**
 加载数据，会在视图控制器页面第一次显示（viewWillAppear）时自动调用该方法
 */
- (void)loadData;

/**
 自定义导航控制器返回（关闭）图片
 */
- (UIImage *)backItemImage;

@end

/**
 页面跳转回调，采用代理或block两种方式进行回调，当使用了block时，delegate将不会再回调数据
 */
typedef void(^UniautoViewControllerResultHandler)(NSDictionary *data, NSInteger requestCode, NSInteger resultCode);

@protocol UniautoViewControllerResultDelegate <NSObject>

@optional
- (void)onResult:(NSDictionary *)data requestCode:(NSInteger)requestCode resultCode:(NSInteger)resultCode;

@end

/**
 视图控制器基类
 */
@interface UniautoViewController : UIViewController <UniautoViewControllerDelegate,UniautoViewControllerResultDelegate>

/**
 初始化（构造）函数

 @param moduleName 功能模块
 @return UniautoViewController
 */
- (instancetype)initWithModuleName:(UniautoModuleName)moduleName;

/**
 初始化（构造）函数

 @param passValue 传递到下一级页面的数据
 @return UniautoViewController
 */
- (instancetype)initWithDictionary:(NSDictionary *)passValue;

/**
 初始化（构造）函数

 @param moduleName 功能模块标签值
 @param passValue 传递到下一级页面的数据
 @return UniautoViewController
 */
- (instancetype)initWithModuleName:(UniautoModuleName)moduleName dictionary:(NSDictionary *)passValue;

/**
 初始化（构造）函数

 @param _id 传递到下一级页面的数据ID
 @return UniautoViewController
 */
- (instancetype)initWithId:(NSInteger)_id;

/**
 功能模块标签，不设置默认为类名,你可以在子类中重写moduleName的getter方法来自定义
 */
@property(nonatomic, copy, readonly) UniautoModuleName moduleName;

/**
 传递到下一级页面的数据ID
 */
@property(nonatomic, assign, readonly) NSInteger _id;

/**
 上一级级页面的传递过来的数据
 */
@property(nonatomic, copy, readonly) NSDictionary *passValue;

/**
 打开新视图控制器页面
 使用handler回调，UniautoViewControllerResultDelegate将不会回调
 反之会在UniautoViewControllerResultDelegate回调
 requestCode为请求码，用来区别回调的数据来源
 在第二级页面使用 - (void)setResult:(NSDictionary *)intent resultCode:(NSUInteger)resultCode 进行回调数据
 */
- (void)startViewController:(UniautoViewController *)viewController;
- (void)startViewController:(UniautoViewController *)viewController forResult:(NSUInteger)requestCode;
- (void)startViewController:(UniautoViewController *)viewController forResult:(NSUInteger)requestCode handler:(UniautoViewControllerResultHandler)handler;

/**
 向上一级页面回调数据

 @param data 回调的数据值
 @param resultCode 回调码，用来区别回调的数据来源
 */
- (void)setResult:(NSDictionary *)data resultCode:(NSInteger)resultCode;

/**
 控制器生命周期
 onCreate   ->   viewDidload
 onRestart  ->   viewWillAppear    (第一次显示时不调用)
 onStart    ->   viewWillAppear
 onResume   ->   viewDidAppear     后台进入前台时也会调用
 onPause    ->   viewWillDisappear 前台进入后台时也会调用
 onStop     ->   viewDidDisappear
 onDestroy  ->   dealloc
 */
- (void)onCreate;
- (void)onRestart;
- (void)onStart;
- (void)onResume;
- (void)onPause;
- (void)onStop;
- (void)onDestroy;

@end


