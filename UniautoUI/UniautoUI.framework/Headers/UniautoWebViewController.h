//
//  UniautoWebViewController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <WebKit/WebKit.h>
#import "UniautoViewController.h"

/**
 网页控制器
 */
@interface UniautoWebViewController : UniautoViewController <WKUIDelegate, WKNavigationDelegate>

@property(nonatomic, strong) WKWebView *webView;

- (instancetype)initWithURL:(NSString *)url;
- (instancetype)initWithURL:(NSString *)url
              configuration:(WKWebViewConfiguration *)configuration;
- (instancetype)initWithModuleName:(UniautoModuleName)moduleName
                              URL:(NSString *)url
                    configuration:(WKWebViewConfiguration *)configuration;

/**
 传递到下一级页面的数据url
 */
@property(nonatomic, copy, readonly) NSString *url;


/**
 当前网页正在加载的url
 */
@property(nonatomic, copy, readonly) NSString *currentUrl;

/**
 加载网页

 @param url 网页链接地址
 */
- (void)loadURL:(NSString *)url;

/**
 进度条颜色
 */
@property(nonatomic, strong) UIColor *tintColor;

/**
 显示网页的标题
 */
@property(nonatomic, assign) BOOL supportWebTitle;

@end


@interface UniautoWebView2Controller : UniautoViewController <UIWebViewDelegate>

@property (nonatomic, strong, readonly) UIWebView *webView;

- (instancetype)initWithURL:(NSString *)url;

/**
 传递到下一级页面的数据url
 */
@property(nonatomic, copy, readonly) NSString *url;

/**
 进度条颜色
 */
@property(nonatomic, strong) UIColor *tintColor;

/**
 显示网页的标题
 */
@property(nonatomic, assign) BOOL supportWebTitle;

@end
