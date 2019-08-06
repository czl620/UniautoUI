//
//  UniautoTableViewController.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoViewController.h"

/**
 列表控制器
 */

/**
 数据刷新加载模式

 - UniautoTableViewPullTypeAll:          下拉刷新+上拉加载更多
 - UniautoTableViewPullTypeRefreshOnly:  仅下拉刷新
 - UniautoTableViewPullTypeLoadmoreOnly: 仅加载更多
 - UniautoTableViewPullTypeNone:         无
 */
typedef NS_ENUM(NSUInteger, UniautoTableViewPullType) {
    UniautoTableViewPullTypeAll = 0,
    UniautoTableViewPullTypeRefreshOnly,
    UniautoTableViewPullTypeLoadmoreOnly,
    UniautoTableViewPullTypeNone
};

@protocol UniautoTableViewControllerDelegate <NSObject>

/**
 无数据占位图像
 */
- (UIImage *)emptyImage;

@end

@interface UniautoTableViewController : UniautoViewController <UITableViewDataSource, UITableViewDelegate, UniautoTableViewControllerDelegate>

@property(nonatomic, strong) UITableView *tableView;
@property(nonatomic, assign) UniautoTableViewPullType pullType;

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

- (instancetype)initWithStyle:(UITableViewStyle)style;
- (instancetype)initWithStyle:(UITableViewStyle)style dictionary:(NSDictionary *)passValue;
- (instancetype)initWithModuleName:(UniautoModuleName)moduleName style:(UITableViewStyle)style dictionary:(NSDictionary *)passValue;

- (void)refreshData;
- (void)loadMoreData;
- (void)endRefreshing;

- (void)appendData:(NSArray *)dataArray;
- (void)appendData:(NSArray *)dataArray startIndex:(NSInteger)index;

- (void)insertData:(NSArray *)dataArray;

@end
