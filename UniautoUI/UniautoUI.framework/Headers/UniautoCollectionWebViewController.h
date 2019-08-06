//
//  UniautoCollectionWebViewController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2019/6/13.
//  Copyright © 2019 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoCollectionViewController.h"
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UniautoCollectionWebViewController : UniautoViewController <UICollectionViewDataSource, UICollectionViewDelegate, UniautoCollectionViewControllerDelegate, UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate>

- (instancetype)initWithURL:(NSString *)url;
- (instancetype)initWithURL:(NSString *)url
              configuration:(WKWebViewConfiguration *)configuration;
- (instancetype)initWithModuleName:(UniautoModuleName)moduleName
                               URL:(NSString *)url
                     configuration:(WKWebViewConfiguration *)configuration;

@property (nonatomic, strong, readonly) WKWebView *webView;
@property (nonatomic, strong, readonly) UICollectionView *collectionView;

@property (nonatomic, strong, readonly) UIScrollView *scrollView;
@property (nonatomic, strong, readonly) UIView *contentView;

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

NS_ASSUME_NONNULL_END
