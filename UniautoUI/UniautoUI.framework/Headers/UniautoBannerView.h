//
//  UniautoBannerView.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/2/1.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

@class UniautoBannerView;
@protocol UniautoBannerViewDataSource <NSObject>

@required
- (NSArray *)bannerItemsInBannerView:(UniautoBannerView *)bannerView;
- (UIViewContentMode)contentModeForBannerAtIndex:(NSInteger)index;

@optional
- (UIImage *)placeHolderImageOfZeroBannerView;
- (UIImage *)placeHolderImageOfBannerView:(UniautoBannerView *)bannerView atIndex:(NSInteger)index;

@end

@protocol UniautoBannerViewDelegate <NSObject>

@optional
- (void)bannerView:(UniautoBannerView *)bannerView didScrollToIndex:(NSInteger)index;
- (void)bannerView:(UniautoBannerView *)bannerView didSelectedAtIndex:(NSInteger)index;

@end

@interface UniautoBannerView : UIView

@property(weak, nonatomic) id<UniautoBannerViewDataSource> datasource;
@property(weak, nonatomic) id<UniautoBannerViewDelegate> delegate;

@property(assign, nonatomic, getter = isContinuous) BOOL continuous;
@property(assign, nonatomic) NSInteger autoPlayTimeInterval;

- (void)setCurrentPage:(NSInteger)currentPage animated:(BOOL)animated;

- (void)reloadData;

@end
