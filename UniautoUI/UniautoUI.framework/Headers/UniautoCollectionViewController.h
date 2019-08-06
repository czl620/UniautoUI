//
//  UniautoCollectionViewController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/9/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoViewController.h"

typedef NS_ENUM(NSUInteger, UniautoCollectionViewPullType) {
    UniautoCollectionViewPullTypeAll = 0,
    UniautoCollectionViewPullTypeRefreshOnly,
    UniautoCollectionViewPullTypeLoadmoreOnly,
    UniautoCollectionViewPullTypeNone
};

@protocol UniautoCollectionViewControllerDelegate <NSObject>

/**
 无数据占位图像
 */
- (UIImage *)emptyImage;

@end

@interface UniautoCollectionViewController : UniautoViewController <UICollectionViewDataSource, UICollectionViewDelegate, UniautoCollectionViewControllerDelegate>

@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, assign) UniautoCollectionViewPullType pullType;

/**
 数据源
 */
@property(nonatomic, strong) NSMutableArray *dataArray;

/**
 页码，默认0
 */
@property(nonatomic, assign) NSInteger pageIndex;

/**
 每页条数，默认10
 */
@property(nonatomic, assign) NSInteger pageSize;

- (instancetype)initWithDirection:(UICollectionViewScrollDirection)direction;
- (instancetype)initWithDirection:(UICollectionViewScrollDirection)direction dictionary:(NSDictionary *)passValue;
- (instancetype)initWithModuleName:(UniautoModuleName)moduleName direction:(UICollectionViewScrollDirection)direction dictionary:(NSDictionary *)passValue;
- (instancetype)initWithModuleName:(UniautoModuleName)moduleName layout:(UICollectionViewLayout *)layout dictionary:(NSDictionary *)passValue;

- (void)refreshData;
- (void)loadMoreData;
- (void)endRefreshing;

- (void)appendData:(NSArray *)dataArray;
- (void)appendData:(NSArray *)dataArray startIndex:(NSInteger)index;

- (void)insertData:(NSArray *)dataArray;

@end
